#pragma once
#include "Protection.h"
#include "Dialog Class.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace Microsoft::Win32;


	/*
	ref class Options_Old :public Windows::Forms::Form
	{
	public:
	Options(void)
	{
	init();
	}
	protected:

	private:
	System::Windows::Forms::TextBox^  SettingsStore;
	System::Windows::Forms::TextBox^  SettingsStoreBuffer;

	void init(void)
	{
	this->SettingsStore = (gcnew Windows::Forms::TextBox());
	this->SettingsStoreBuffer = (gcnew Windows::Forms::TextBox());
	this->SettingsStore->Multiline = true;
	this->SettingsStoreBuffer->Multiline = true;
	this->SettingsStore->TextChanged += gcnew System::EventHandler(this, &Options::SettingsStore_Changed);
	}

	private:
	System::Void SettingsStore_Changed(System::Object^  sender, System::EventArgs^  e){

	SettingsStoreBuffer->AppendText(SettingsStore->Text);
	SettingsStoreBuffer->AppendText(" = ");
	SettingsStoreBuffer->AppendText("\r");
	}
	public:
	void Write()
	{
	System::IO::StreamWriter ^ Settings = gcnew System::IO::StreamWriter("Options.ini");
	//After the dialog box closes, the file name has been specified. So the StreamWriter writes the content of textBox1 into the file.
	Settings->WriteLine(SettingsStore);
	}
	void CST(String ^ what)
	{
	SettingsStore->Text = what;
	SettingsStore->Text = "what";
	MessageBox::Show(SettingsStoreBuffer->Text);
	}
	};
	*/


	ref class OptionsStore
	{
	protected:
		static void Set_StartAtLogon(bool state)
		{
			try
			{
				Registry::SetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "StartAtLogon", state);
				String ^ StartPath = Application::StartupPath + "\\WindowsFormsShortcut.exe";

				//No error is given here, but for some reason the key does not appear.
				Registry::SetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", "StartAtLogon", StartPath);

				/*
				This line here is slashed out because the program cannot write to the directory due to the lack of 'system' privelages.
				Therefore the program will have to be placed in the user's startup just by modifying the directory.
				This is a risk however because the security program will start only for that user, so another user could log on thinking
				that it's safe when it's actually not.
				*/
				//File::Copy(StartPath, "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Startup");
				delete[] StartPath;
			}
			catch (...)
			{
				//Catches all exceptions (however will probably only be if the user doesn't have admin privalages).
				MessageBox::Show("You need Administration rights to perform this task", "Insufficent Privalages", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	private:

	public:

	};

	ref class Options :public OptionsStore
	{
	protected:

	private:

	public:
		static property bool StartAtLogon
		{
			void set(bool state)
			{
				Set_StartAtLogon(state);
			}
			bool get()
			{
				Object ^ SaL = Registry::GetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "StartAtLogon", false);
				bool Boo_SaL = Convert::ToBoolean(SaL);
				return Boo_SaL;
			}
		}

		static property String ^ HostsPath
		{
			inline void set(String ^ Path)
			{
				try
				{
					Registry::SetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "HostsFilePath", Path);
				}
				catch (...)
				{
					MessageBox::Show("You need Administration rights to perform this task", "Insufficent Privalgaes", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			String ^ get()
			{
				Object ^ HFP = Registry::GetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "HostsFilePath", false);
				String ^ HostsFilePath = Convert::ToString(HFP);
				return HostsFilePath;
			}
		}
		static property ListBox::ObjectCollection ^ MonitoredFolders
		{
			void set(ListBox::ObjectCollection ^ StartupDirMon)
			{
				//Creates a new StreamWriter to write to the file.
				StreamWriter^ DirMon_WinStart = gcnew StreamWriter("C:\\VPP\\MonitoredFolders.txt");
				//'i' is less than the amount of items stored in the "StartupDirMon" listbox collection.
				for (int i = 0; i < StartupDirMon->Count; i++)
				{
					DirMon_WinStart->Write("");
					DirMon_WinStart->WriteLine(StartupDirMon[i]);
				}
				//Closes the StreamWriter so that the file can be accessed again.
				DirMon_WinStart->Close();
			}
			ListBox::ObjectCollection^ get()
			{
				StreamReader^ DirMon_WinStart = gcnew StreamReader("C:\\VPP\\MonitoredFolders.txt");
				//Start reading at line zero.
				int LineQuantity = 0;
				String ^ Line;
				ListBox ^ FinalDir = gcnew ListBox;
				//http://msdn.microsoft.com/en-us/library/aa287535(v=vs.71).aspx
				//While lines can still be read from the file:
				while (Line = DirMon_WinStart->ReadLine())
				{
					//Add the strings of those lines to the listbox.
					FinalDir->Items->Add(Line);
					//And then increment to read the next line.
					LineQuantity++;
				}
				DirMon_WinStart->Close();
				return FinalDir->Items;
			}
		}

		static property bool HasRunFirst
		{
			void set(bool state)
			{
				try
				{
					Registry::SetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "HasRunFirst", state);
				}
				catch (...)
				{
					MessageBox::Show("You need Administration rights to perform this task", "Insufficent Privalgaes", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			bool get()
			{
				Object ^ HRF = Registry::GetValue("HKEY_LOCAL_MACHINE\\SOFTWARE\\VPP", "HasRunFirst", false);
				bool Boo_HRF = Convert::ToBoolean(HRF);
				return Boo_HRF;
			}
		}
	};