#pragma once
#include "Protection.h"
#include "Dialog Class.h"
#include "Options.h"
#include "ActiveGuard.h"
#include "stdlib.h"
#include <vector>

namespace WindowsForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			InitOptions();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  buttonCancel;

	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  labelHostsHashDisplay;
	private: System::Windows::Forms::Label^  labelHostsHash;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  BackupFilePathTextBox;
	private: System::Windows::Forms::Button^  BackupPathButton;
	private: System::Windows::Forms::Button^  FilePathButton;
	private: System::Windows::Forms::TextBox^  HostsFilePathTextBox;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox2;

	private: System::Windows::Forms::Button^  button_Hosts_DiscardChanges;
	private: System::Windows::Forms::Button^  button_Hosts_SaveChanges;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::ListBox^  listBox_WatchedDirs;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button_AddWatchedDir;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_RemoveWatchedDir;
	private: System::Windows::Forms::Button^  button_RemoveWatchedDir_All;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label_FileHash;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label_FileHash = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button_RemoveWatchedDir_All = (gcnew System::Windows::Forms::Button());
			this->button_RemoveWatchedDir = (gcnew System::Windows::Forms::Button());
			this->button_AddWatchedDir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox_WatchedDirs = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_Hosts_DiscardChanges = (gcnew System::Windows::Forms::Button());
			this->button_Hosts_SaveChanges = (gcnew System::Windows::Forms::Button());
			this->labelHostsHashDisplay = (gcnew System::Windows::Forms::Label());
			this->labelHostsHash = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->BackupFilePathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BackupPathButton = (gcnew System::Windows::Forms::Button());
			this->FilePathButton = (gcnew System::Windows::Forms::Button());
			this->HostsFilePathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(425, 508);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(417, 482);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Protection";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label_FileHash);
			this->groupBox4->Controls->Add(this->listBox1);
			this->groupBox4->Location = System::Drawing::Point(6, 313);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(405, 163);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Checksumming";
			// 
			// label_FileHash
			// 
			this->label_FileHash->Location = System::Drawing::Point(6, 143);
			this->label_FileHash->Name = L"label_FileHash";
			this->label_FileHash->Size = System::Drawing::Size(393, 17);
			this->label_FileHash->TabIndex = 10;
			this->label_FileHash->Text = L"#Hash Here##";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(6, 19);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(393, 121);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button_RemoveWatchedDir_All);
			this->groupBox3->Controls->Add(this->button_RemoveWatchedDir);
			this->groupBox3->Controls->Add(this->button_AddWatchedDir);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->listBox_WatchedDirs);
			this->groupBox3->Location = System::Drawing::Point(6, 152);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(405, 155);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"File Monitor";
			// 
			// button_RemoveWatchedDir_All
			// 
			this->button_RemoveWatchedDir_All->Location = System::Drawing::Point(6, 112);
			this->button_RemoveWatchedDir_All->Name = L"button_RemoveWatchedDir_All";
			this->button_RemoveWatchedDir_All->Size = System::Drawing::Size(102, 27);
			this->button_RemoveWatchedDir_All->TabIndex = 9;
			this->button_RemoveWatchedDir_All->Text = L"Remove All";
			this->button_RemoveWatchedDir_All->UseVisualStyleBackColor = true;
			this->button_RemoveWatchedDir_All->Click += gcnew System::EventHandler(this, &MyForm::button_RemoveWatchedDir_All_Click);
			// 
			// button_RemoveWatchedDir
			// 
			this->button_RemoveWatchedDir->Location = System::Drawing::Point(6, 79);
			this->button_RemoveWatchedDir->Name = L"button_RemoveWatchedDir";
			this->button_RemoveWatchedDir->Size = System::Drawing::Size(102, 27);
			this->button_RemoveWatchedDir->TabIndex = 8;
			this->button_RemoveWatchedDir->Text = L"Remove Directory";
			this->button_RemoveWatchedDir->UseVisualStyleBackColor = true;
			this->button_RemoveWatchedDir->Click += gcnew System::EventHandler(this, &MyForm::button_RemoveWatchedDir_Click);
			// 
			// button_AddWatchedDir
			// 
			this->button_AddWatchedDir->Location = System::Drawing::Point(6, 46);
			this->button_AddWatchedDir->Name = L"button_AddWatchedDir";
			this->button_AddWatchedDir->Size = System::Drawing::Size(102, 27);
			this->button_AddWatchedDir->TabIndex = 7;
			this->button_AddWatchedDir->Text = L"Add Directory";
			this->button_AddWatchedDir->UseVisualStyleBackColor = true;
			this->button_AddWatchedDir->Click += gcnew System::EventHandler(this, &MyForm::button_AddWatchedDir_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 27);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Directories being monitored:";
			// 
			// listBox_WatchedDirs
			// 
			this->listBox_WatchedDirs->FormattingEnabled = true;
			this->listBox_WatchedDirs->Location = System::Drawing::Point(114, 16);
			this->listBox_WatchedDirs->Name = L"listBox_WatchedDirs";
			this->listBox_WatchedDirs->Size = System::Drawing::Size(285, 134);
			this->listBox_WatchedDirs->TabIndex = 2;
			this->listBox_WatchedDirs->TextChanged += gcnew System::EventHandler(this, &MyForm::listBox_WatchedDirs_TextChanged);
			this->listBox_WatchedDirs->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_WatchedDirs_SelectedIndexChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button_Hosts_DiscardChanges);
			this->groupBox1->Controls->Add(this->button_Hosts_SaveChanges);
			this->groupBox1->Controls->Add(this->labelHostsHashDisplay);
			this->groupBox1->Controls->Add(this->labelHostsHash);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->BackupFilePathTextBox);
			this->groupBox1->Controls->Add(this->BackupPathButton);
			this->groupBox1->Controls->Add(this->FilePathButton);
			this->groupBox1->Controls->Add(this->HostsFilePathTextBox);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(405, 140);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Hosts File";
			// 
			// checkBox3
			// 
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(303, 204);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(102, 32);
			this->checkBox3->TabIndex = 9;
			this->checkBox3->Text = L"Protect the Hosts file\?";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 144);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(291, 133);
			this->textBox1->TabIndex = 8;
			this->textBox1->WordWrap = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button_Hosts_DiscardChanges
			// 
			this->button_Hosts_DiscardChanges->Location = System::Drawing::Point(303, 174);
			this->button_Hosts_DiscardChanges->Name = L"button_Hosts_DiscardChanges";
			this->button_Hosts_DiscardChanges->Size = System::Drawing::Size(96, 24);
			this->button_Hosts_DiscardChanges->TabIndex = 7;
			this->button_Hosts_DiscardChanges->Text = L"Discard Changes";
			this->button_Hosts_DiscardChanges->UseVisualStyleBackColor = true;
			// 
			// button_Hosts_SaveChanges
			// 
			this->button_Hosts_SaveChanges->Location = System::Drawing::Point(303, 144);
			this->button_Hosts_SaveChanges->Name = L"button_Hosts_SaveChanges";
			this->button_Hosts_SaveChanges->Size = System::Drawing::Size(96, 24);
			this->button_Hosts_SaveChanges->TabIndex = 4;
			this->button_Hosts_SaveChanges->Text = L"Save Changes";
			this->button_Hosts_SaveChanges->UseVisualStyleBackColor = true;
			this->button_Hosts_SaveChanges->Click += gcnew System::EventHandler(this, &MyForm::button_Hosts_SaveChanges_Click);
			// 
			// labelHostsHashDisplay
			// 
			this->labelHostsHashDisplay->Location = System::Drawing::Point(6, 114);
			this->labelHostsHashDisplay->Name = L"labelHostsHashDisplay";
			this->labelHostsHashDisplay->Size = System::Drawing::Size(291, 27);
			this->labelHostsHashDisplay->TabIndex = 6;
			this->labelHostsHashDisplay->Text = L"#Hash Here##";
			// 
			// labelHostsHash
			// 
			this->labelHostsHash->Location = System::Drawing::Point(6, 91);
			this->labelHostsHash->Name = L"labelHostsHash";
			this->labelHostsHash->Size = System::Drawing::Size(354, 23);
			this->labelHostsHash->TabIndex = 5;
			this->labelHostsHash->Text = L"Hosts Hash:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(133, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Backup the Hosts file\?";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckStateChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedStateChanged);
			// 
			// BackupFilePathTextBox
			// 
			this->BackupFilePathTextBox->Enabled = false;
			this->BackupFilePathTextBox->Location = System::Drawing::Point(6, 68);
			this->BackupFilePathTextBox->Name = L"BackupFilePathTextBox";
			this->BackupFilePathTextBox->Size = System::Drawing::Size(291, 20);
			this->BackupFilePathTextBox->TabIndex = 3;
			// 
			// BackupPathButton
			// 
			this->BackupPathButton->Enabled = false;
			this->BackupPathButton->Location = System::Drawing::Point(303, 68);
			this->BackupPathButton->Name = L"BackupPathButton";
			this->BackupPathButton->Size = System::Drawing::Size(96, 20);
			this->BackupPathButton->TabIndex = 2;
			this->BackupPathButton->Text = L"Browse";
			this->BackupPathButton->UseVisualStyleBackColor = true;
			this->BackupPathButton->Click += gcnew System::EventHandler(this, &MyForm::BackupPathButton_Click);
			// 
			// FilePathButton
			// 
			this->FilePathButton->Location = System::Drawing::Point(303, 19);
			this->FilePathButton->Name = L"FilePathButton";
			this->FilePathButton->Size = System::Drawing::Size(96, 20);
			this->FilePathButton->TabIndex = 1;
			this->FilePathButton->Text = L"Browse";
			this->FilePathButton->UseVisualStyleBackColor = true;
			this->FilePathButton->Click += gcnew System::EventHandler(this, &MyForm::FilePathButton_Click);
			// 
			// HostsFilePathTextBox
			// 
			this->HostsFilePathTextBox->Location = System::Drawing::Point(6, 19);
			this->HostsFilePathTextBox->Name = L"HostsFilePathTextBox";
			this->HostsFilePathTextBox->Size = System::Drawing::Size(291, 20);
			this->HostsFilePathTextBox->TabIndex = 0;
			this->HostsFilePathTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::HostsFilePathTextBox_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(417, 482);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Program Settings";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Location = System::Drawing::Point(6, 6);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(405, 156);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Startup";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(6, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(123, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"Start with Windows\?";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Location = System::Drawing::Point(353, 526);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(84, 24);
			this->buttonCancel->TabIndex = 2;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &MyForm::buttonCancel_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(263, 526);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(84, 24);
			this->buttonOK->TabIndex = 3;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &MyForm::buttonOK_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(449, 562);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Options";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Settings the properties when the user clicks on OK.
				 Options::HostsPath = HostsFilePathTextBox->Text;
				 Options::StartAtLogon = checkBox2->Checked;
				 Options::MonitoredFolders = listBox_WatchedDirs->Items;
				 WatcherConfig::WriteArray(listBox_WatchedDirs->Items->Count, listBox_WatchedDirs->Items);
				 //Hides but doesn't delete the form window.
				 this->Hide();
	}
private: System::Void BackupPathButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 BackupFilePathTextBox->Text = Dialogs::SelectDialog('S');
}
private: System::Void FilePathButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (MessageBox::Show("The default location for the hosts file is /System32/Drivers/etc. \nWould you like to use this default location?", "Use Default Location?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::DialogResult::Yes)
			 {
				 //Used to get the System Root environment variable.
				//http://www.systemroot.ca/2012/03/how-to-find-the-system-root-in-csharp-cplusplus-and-java/
				 char* SR_LOC = getenv("systemroot");
				 //Used to convert the variable to a string.
				 String ^ SysPath = gcnew String(SR_LOC);
				//http://stackoverflow.com/questions/56561/what-is-the-best-way-to-convert-between-char-and-systemstring-in-c-cli
				 HostsFilePathTextBox->Text = SysPath + "\\System32\\Drivers\\etc\\hosts";
			 }
			 else
			 {
				 HostsFilePathTextBox->Text = Dialogs::SelectDialog('O');
			 }
}
public: System::Void InitOptions(){
			//Getting the properties from the Options class and checking the elements in the form accordingly.
			checkBox2->Checked = Options::StartAtLogon;
			HostsFilePathTextBox->Text = Options::HostsPath;
			listBox_WatchedDirs->Items->Clear();
			listBox_WatchedDirs->Items->AddRange(Options::MonitoredFolders);
			WatcherConfig::WriteArray(listBox_WatchedDirs->Items->Count, listBox_WatchedDirs->Items);
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 //Calls the function when the form loads.
			 InitOptions();
}
private: System::Void HostsFilePathTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::IO::StreamReader ^ OpenFileStream = gcnew System::IO::StreamReader(HostsFilePathTextBox->Text);
			 textBox1->Text = OpenFileStream->ReadToEnd();
			 OpenFileStream->Close();

			 //Hash Hosts
			 Hash ^ HostsFile = gcnew Hash(HostsFilePathTextBox->Text);
			 labelHostsHashDisplay->Text = HostsFile->GetHash();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) { 
}
private: System::Void button_Hosts_SaveChanges_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Disables write protect on the host file for the file to be written to.
			 IO::File::SetAttributes(HostsFilePathTextBox->Text, IO::FileAttributes::Normal);
			 //Creates a streamwriter which will be used to write to the file.
			 IO::StreamWriter ^ SaveFileStream = gcnew IO::StreamWriter(HostsFilePathTextBox->Text);
			 SaveFileStream->Write(textBox1->Text);
			 SaveFileStream->Close();
			 //Restores the read-only.
			 IO::File::SetAttributes(HostsFilePathTextBox->Text, IO::FileAttributes::ReadOnly);
}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Do nothing. Doesn't save the changes because the user clicked cancel.
			 //This method (rather than live saving) helps prevent accidental changes.
}
private: System::Void button_AddWatchedDir_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox_WatchedDirs->Items->Add(Dialogs::SelectDialog('F'));
}
private: System::Void listBox_WatchedDirs_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_RemoveWatchedDir_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox_WatchedDirs->Items->Remove(listBox_WatchedDirs->SelectedItem);
}
private: System::Void button_RemoveWatchedDir_All_Click(System::Object^  sender, System::EventArgs^  e) {
			 listBox_WatchedDirs->Items->Clear();
}
private: System::Void checkBox1_CheckedStateChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Just enabling/disabling elements based on whether the checkbox is checked.
			 if (checkBox1->Checked)
			 {
			 BackupFilePathTextBox->Enabled = true;
			 BackupPathButton->Enabled = true;
			 }
			 else
			 {
				 BackupFilePathTextBox->Enabled = false;
				 BackupPathButton->Enabled = false;
			 }
}
private: System::Void listBox_WatchedDirs_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //http://stackoverflow.com/questions/11515548/how-to-scan-all-files-in-a-folder-including-subfolders-in-vc-2008
			 //Clears items so that they don't keep piling up.
			 listBox1->Items->Clear();
			 //Adds the files contained within the directory into an array.
			 try
			 {
				 array<String^> ^ Files = IO::Directory::GetFiles(listBox_WatchedDirs->SelectedItem->ToString());
				 //Adds the array to the listbox.
				 listBox1->Items->AddRange(Files);
			 }
			 catch (...)
			 {

			 }
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //Creating a new hash instance.
			 Hash ^ FileHash = gcnew Hash(listBox1->SelectedItem->ToString());
			 label_FileHash->Text = FileHash->GetHash();
}
};
}
