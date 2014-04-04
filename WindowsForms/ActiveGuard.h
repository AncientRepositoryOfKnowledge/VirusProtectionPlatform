#pragma once

#include "stdafx.h"
#using <System.dll>

using namespace System;
using namespace System::IO;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Security::Permissions;

//http://msdn.microsoft.com/en-us/library/system.io.filesystemwatcher.changed(v=vs.110).aspx?cs-save-lang=1&cs-lang=cpp#code-snippet-1

ref class ActiveGuard
{
protected:

private:

public:

};

ref class FileMonitor :public ActiveGuard
{
private:
	//Declaring a new FileSystemWatcher in managed memory.
	FileSystemWatcher^ FileGuard = gcnew FileSystemWatcher;
	String ^ FilePath;
	//Overloading here with the two functions having the same name but different arguments.
	static void Confirm(String ^ FullPath, int ChangeType_Int, String ^ ChangeType)
	{
		if (MessageBox::Show(FullPath + " was " + ChangeType + "\n" + "Would you like to allow this?", "Event", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::DefaultDesktopOnly) == ::DialogResult::No)
		{
			switch (ChangeType_Int)
			{
				//Created.
				case 101:
				{
					try
					{
					File::Delete(FullPath);
					}
					catch (...)
					{
						MessageBox::Show("You need Administration rights to perform this task", "Insufficent Privalgaes", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					break;
				}
				//Deleted.
				case 108:
				{
							MessageBox::Show("The file has been deleted. You will need to look in the Recycle Bin to retrieve the file", "File Deleted", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
							break;
				}
				//Changed.
				case 97:
				{
						   MessageBox::Show("Sorry, the feature to reverse changes to a file is not yet available.", "File Changed", MessageBoxButtons::OK, MessageBoxIcon::Stop);
						   break;
				}
			}
		}
	}
	static void Confirm(String ^ OldName, String ^ NewName)
	{
		//Renamed.
		if (MessageBox::Show(OldName + " was renamed to " + NewName + "\n" + "Would you like to allow this?", "Event", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::DefaultDesktopOnly) == ::DialogResult::No)
		{
			IO::File::Move(NewName, OldName);
		}
	}
	// Define the event handlers. 
	static void ChangeEvent(Object^ /*source*/, FileSystemEventArgs^ Event)
	{
		// Specify what is done when a file is changed, created, or deleted.
		String ^ FullPath = Convert::ToString(Event->FullPath);
		String ^ ChangeType = Convert::ToString(Event->ChangeType);
		//The third letter of the different change names were each different.
		char Change_Char = ChangeType[2];
		int Change_Int = Change_Char;
		Confirm(FullPath, Change_Int, ChangeType);
	}

	static void RenameEvent(Object^ /*source*/, RenamedEventArgs^ Event)
	{
		// Specify what is done when a file is renamed.
		String ^ OldFullPath = Convert::ToString(Event->OldFullPath);
		String ^ FullPath = Convert::ToString(Event->FullPath);
		Confirm(OldFullPath, FullPath);
	}

	void Create()
	{
		//Sets the path to watch.
		FileGuard->Path = FilePath;

		/* Watch for changes in LastAccess and LastWrite times, and
		the renaming of files or directories. */
		FileGuard->NotifyFilter = static_cast<NotifyFilters>(NotifyFilters::LastAccess |
			NotifyFilters::LastWrite | NotifyFilters::FileName | NotifyFilters::DirectoryName);

		// Add event handlers.
		FileGuard->Changed += gcnew FileSystemEventHandler(FileMonitor::ChangeEvent);
		FileGuard->Created += gcnew FileSystemEventHandler(FileMonitor::ChangeEvent);
		FileGuard->Deleted += gcnew FileSystemEventHandler(FileMonitor::ChangeEvent);
		FileGuard->Renamed += gcnew RenamedEventHandler(FileMonitor::RenameEvent);
	}

	[PermissionSet(SecurityAction::Demand, Name = "FullTrust")]
	void Monitor()
	{
		//Begin watching.
		this->FileGuard->EnableRaisingEvents = true;
	}

public:
	//Constructor Code
	FileMonitor(String ^ FilePath_Arg)
	{
		FilePath = FilePath_Arg;
		Create();
		Monitor();
	}
	~FileMonitor()
	{
		delete[] FilePath;
		//Deletes the FileGuard.
		delete[] FileGuard;
		//Disable the monitor.
		this->FileGuard->EnableRaisingEvents = false;
	}
};

ref class WatcherConfig :public FileMonitor
{
protected:

private:

	//Create an array of classes of FileMonitors to monitor the folders the user places into the listbox.
	static array<FileMonitor^> ^ FileMonArray = gcnew array<FileMonitor^>(0);
	
	inline static void ClearArray()
	{
		for (int i = 0; i < FileMonArray->Length; i++)
		{
				//Deletes the instances of the FileMonitor class contained within the array.
				delete FileMonArray[i];
		}
	}
public:
	//http://stackoverflow.com/questions/9657439/inheritance-no-appropriate-default-constructor-available
	WatcherConfig(String ^ null) :FileMonitor(null) {};

	static void WriteArray(int ListCount, ListBox::ObjectCollection ^ Dir)
	{
		ClearArray();
		//Resizes the FileMonArray to the value of ListCount.
		FileMonArray->Resize(FileMonArray, ListCount);
		for (int i = 0; i < ListCount; i++)
		{
			//Initialises an instance of FileMonitor class for every entry in the array.
			FileMonArray[i] = gcnew FileMonitor(Convert::ToString(Dir[i]));
		}
	}
};