#pragma once

#include "Dialog Class.h"
#include "Protection.h"
#include "FormInput.h"

namespace WindowsForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScanningForm
	/// </summary>
	public ref class ScanningForm : public System::Windows::Forms::Form
	{
	public:
		ScanningForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ScanningForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Scan;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label_ByOrderOf;
	private: System::Windows::Forms::Button^  button_Close;

	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Label^  label_Path;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label_Keywords;

	private: System::Windows::Forms::ToolTip^  toolTip_ScanDirectory;


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ScanningForm::typeid));
			this->button_Scan = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label_ByOrderOf = (gcnew System::Windows::Forms::Label());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->label_Path = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_Keywords = (gcnew System::Windows::Forms::Label());
			this->toolTip_ScanDirectory = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button_Scan
			// 
			this->button_Scan->BackColor = System::Drawing::Color::Transparent;
			this->button_Scan->FlatAppearance->BorderSize = 2;
			this->button_Scan->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightYellow;
			this->button_Scan->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Honeydew;
			this->button_Scan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Scan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_Scan->Location = System::Drawing::Point(151, 483);
			this->button_Scan->Name = L"button_Scan";
			this->button_Scan->Size = System::Drawing::Size(117, 35);
			this->button_Scan->TabIndex = 0;
			this->button_Scan->Text = L"Scan";
			this->button_Scan->UseVisualStyleBackColor = false;
			this->button_Scan->Click += gcnew System::EventHandler(this, &ScanningForm::button_Scan_Click);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &ScanningForm::backgroundWorker1_DoWork);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(382, 144);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(54, 391);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(242, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label_ByOrderOf
			// 
			this->label_ByOrderOf->BackColor = System::Drawing::Color::Transparent;
			this->label_ByOrderOf->Font = (gcnew System::Drawing::Font(L"Edwardian Script ITC", 21.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_ByOrderOf->Location = System::Drawing::Point(118, 426);
			this->label_ByOrderOf->Name = L"label_ByOrderOf";
			this->label_ByOrderOf->Size = System::Drawing::Size(229, 37);
			this->label_ByOrderOf->TabIndex = 3;
			this->label_ByOrderOf->Text = L"<username>";
			// 
			// button_Close
			// 
			this->button_Close->BackColor = System::Drawing::Color::Transparent;
			this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Close->Location = System::Drawing::Point(326, 12);
			this->button_Close->Name = L"button_Close";
			this->button_Close->Size = System::Drawing::Size(68, 26);
			this->button_Close->TabIndex = 4;
			this->button_Close->Text = L"Close";
			this->button_Close->UseVisualStyleBackColor = false;
			this->button_Close->Click += gcnew System::EventHandler(this, &ScanningForm::button1_Click);
			// 
			// button_Minimize
			// 
			this->button_Minimize->BackColor = System::Drawing::Color::Transparent;
			this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Minimize->Location = System::Drawing::Point(12, 12);
			this->button_Minimize->Name = L"button_Minimize";
			this->button_Minimize->Size = System::Drawing::Size(68, 26);
			this->button_Minimize->TabIndex = 5;
			this->button_Minimize->Text = L"Minimize";
			this->button_Minimize->UseVisualStyleBackColor = false;
			this->button_Minimize->Click += gcnew System::EventHandler(this, &ScanningForm::button2_Click);
			// 
			// label_Path
			// 
			this->label_Path->BackColor = System::Drawing::Color::Transparent;
			this->label_Path->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_Path->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Path->Location = System::Drawing::Point(49, 266);
			this->label_Path->Name = L"label_Path";
			this->label_Path->Size = System::Drawing::Size(324, 39);
			this->label_Path->TabIndex = 6;
			this->label_Path->Text = L"C:\\Program Files";
			this->label_Path->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip_ScanDirectory->SetToolTip(this->label_Path, L"Directory Here");
			this->label_Path->Click += gcnew System::EventHandler(this, &ScanningForm::label1_Click);
			this->label_Path->MouseEnter += gcnew System::EventHandler(this, &ScanningForm::label1_MouseEnter);
			this->label_Path->MouseLeave += gcnew System::EventHandler(this, &ScanningForm::label1_MouseLeave);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Pristina", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 39);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Will scan:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Pristina", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 39);
			this->label3->TabIndex = 8;
			this->label3->Text = L"For:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_Keywords
			// 
			this->label_Keywords->BackColor = System::Drawing::Color::Transparent;
			this->label_Keywords->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label_Keywords->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Keywords->Location = System::Drawing::Point(49, 344);
			this->label_Keywords->Name = L"label_Keywords";
			this->label_Keywords->Size = System::Drawing::Size(324, 39);
			this->label_Keywords->TabIndex = 9;
			this->label_Keywords->Text = L"PCBackup";
			this->label_Keywords->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_Keywords->Click += gcnew System::EventHandler(this, &ScanningForm::label_Keywords_Click);
			// 
			// toolTip_ScanDirectory
			// 
			this->toolTip_ScanDirectory->ToolTipTitle = L"Directory";
			// 
			// ScanningForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(406, 596);
			this->Controls->Add(this->label_Keywords);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_Path);
			this->Controls->Add(this->button_Minimize);
			this->Controls->Add(this->button_Close);
			this->Controls->Add(this->label_ByOrderOf);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button_Scan);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ScanningForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ScanningForm";
			this->Load += gcnew System::EventHandler(this, &ScanningForm::ScanningForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	}
	private: System::Void ScanningForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Puts the user's name into the label.
				 label_ByOrderOf->Text = Environment::UserName;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Programatically minimizes the window (custom minimize button).
				 this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Closes (doesn't just 'hide') the form.
				 this->Close();
	}
	private: System::Void button_Scan_Click(System::Object^  sender, System::EventArgs^  e) {
				 Scan ^ NewScan = gcnew Scan(label_Path->Text, label_Keywords->Text + "*.*");
				 ListBox ^ listBox1 = gcnew ListBox;
				 try
				 {
				 listBox1->Items->AddRange(NewScan->GetFiles());
					 Dialogs::SelectDialog(listBox1->Items);
				 }
				 catch (...)
				 {
				 }
	}
	private: System::Void label1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Accesses the dialogs class to bring up a File Browser Dialog to state where to scan.
				 label_Path->Text = Dialogs::SelectDialog('F');
				 toolTip_ScanDirectory->SetToolTip(label_Path, label_Path->Text);
	}
	private: System::Void label_Keywords_Click(System::Object^  sender, System::EventArgs^  e) {
				 label_Keywords->Text = Dialogs::SelectDialog(label_Keywords->Text);
	}
	private: System::Void button_Results_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}