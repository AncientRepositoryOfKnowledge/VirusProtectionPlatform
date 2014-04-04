#pragma once

#include "InputF.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Windows::Forms;

ref class Dialogs :public InputF
/*
	Instead of drag and dropping the openfiledialog control is the designer, I will create one here
	in order to save memory. Because the dialog will then be created and destroyed within the scope of this event.
	*/
	//http://msdn.microsoft.com/en-us/library/system.windows.forms.openfiledialog(v=vs.110).aspx
{
protected:
	static String ^ OpenFilePath;
	static String ^ SaveFilePath;
	static String ^ FolderPath;
	static String ^ FormText;
private:
	static void OFD()
	{
				//Creating and setting properties for the dialog boxes.
				OpenFileDialog^ OFD = gcnew OpenFileDialog;
				OFD->Title = "Hosts file location";
				if (OFD->ShowDialog() == ::DialogResult::OK)
				{
					//If the user presses cancel, the selected path doesn't change (or go blank).
					OpenFilePath = OFD->FileName;
				}
				//Deletes the dialog to free up some memory.
				delete[] OFD;
	}

	static void SFD()
	{
				SaveFileDialog^ SFD = gcnew SaveFileDialog;
				SFD->Title = "Backup Hosts file save location";
				if (SFD->ShowDialog() == ::DialogResult::OK)
				{
					SaveFilePath = SFD->FileName;
				}
				SaveFilePath = SFD->FileName;
				delete[] SFD;
	}

	static void FBD()
	{
				FolderBrowserDialog^ FBD = gcnew FolderBrowserDialog;
				FBD->Description = "Select Folder to monitor";
				if (FBD->ShowDialog() == ::DialogResult::OK)
				{
					FolderPath = FBD->SelectedPath;
				}
				delete[] FBD;
	}

public:
	static String ^ SelectDialog (char WhichDiag)
	{
		switch (WhichDiag)
		{
			case 'O':
			{
				OFD();
				return OpenFilePath;
				break;
			}
			case 'S':
			{
				SFD();
				return SaveFilePath;
				break;
			}
			case 'F':
			{
				FBD();
				return FolderPath;
				break;
			}
			default:
				break;
		}
	}
	//Overloading here for different dialogs.
	static String ^ SelectDialog(String ^ TextBoxText)
	{
		//Creates a new class (not Form) of the InputF class.
		//The constructor code tells the class to create a textbox form.
		InputF ^ InputDiag = gcnew InputF(TextBoxText);
		InputDiag->ShowDialog();
		//Returns a string from the function from the class.
		FormText = InputDiag->GetFormText();
		return FormText;
	}
	static void SelectDialog(ListBox::ObjectCollection ^ ScanResults)
	{
		//The constructor code here tells the form to create a listbox form.
		InputF ^ InputDiag = gcnew InputF(ScanResults);
		InputDiag->ShowDialog();
	}

};

ref class DiagProperties :public Dialogs
{
public:
};