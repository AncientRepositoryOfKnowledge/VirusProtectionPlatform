#pragma once
#include "Dialog Class.h"
#include "Protection.h"
#include "OptionsForm.h"
#include "stdlib.h"
#include "Options.h"
#include "resource.h"
//#include <windows.h>
//#include <windowsx.h>

namespace WindowsForms {
	using namespace WindowsForms;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::HelpProvider^  helpProvider1;




	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemToolbarTheme;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemSystem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemProfessional;






	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;





	private: System::Windows::Forms::Timer^  timer1;



	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItemToolbarTheme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemSystem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItemProfessional = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItemToolbarTheme });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(131, 26);
			// 
			// toolStripMenuItemToolbarTheme
			// 
			this->toolStripMenuItemToolbarTheme->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItemSystem,
					this->toolStripMenuItemProfessional
			});
			this->toolStripMenuItemToolbarTheme->Name = L"toolStripMenuItemToolbarTheme";
			this->toolStripMenuItemToolbarTheme->Size = System::Drawing::Size(130, 22);
			this->toolStripMenuItemToolbarTheme->Text = L"Toolbar Theme";
			// 
			// toolStripMenuItemSystem
			// 
			this->toolStripMenuItemSystem->Checked = true;
			this->toolStripMenuItemSystem->CheckOnClick = true;
			this->toolStripMenuItemSystem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItemSystem->Name = L"toolStripMenuItemSystem";
			this->toolStripMenuItemSystem->Size = System::Drawing::Size(138, 22);
			this->toolStripMenuItemSystem->Text = L"System";
			this->toolStripMenuItemSystem->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItemProfessional
			// 
			this->toolStripMenuItemProfessional->CheckOnClick = true;
			this->toolStripMenuItemProfessional->Name = L"toolStripMenuItemProfessional";
			this->toolStripMenuItemProfessional->Size = System::Drawing::Size(138, 22);
			this->toolStripMenuItemProfessional->Text = L"Professional";
			this->toolStripMenuItemProfessional->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem3_Click);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"Virus Protection Platform";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::notifyIcon1_MouseDoubleClick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(913, 453);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Virus Protection Platform";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FilePathButton_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void BackupPathButton_Click(System::Object^  sender, System::EventArgs^  e) {	 
}
private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {	 
}
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void optionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void optionsToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
}
};
}

