#pragma once

#include "Options.h"
#include "OptionsForm.h"
#include "Protection.h"
#include "Dialog Class.h"
#include "stdlib.h"
#include "ScanningForm.h"

namespace WindowsForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WindowsForms;

	/// <summary>
	/// Summary for Splash
	/// </summary>
	public ref class Splash : public System::Windows::Forms::Form
	{
	public:
		Splash(void)
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
		~Splash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::NotifyIcon^  notifyIconMainProg;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip_NotifyIcon;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem_Exit;
	private: Form ^ OptionsForm = gcnew MyForm;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem_Scan;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Splash::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIconMainProg = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip_NotifyIcon = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem_Scan = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->optionsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip_NotifyIcon->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Splash::timer1_Tick);
			// 
			// notifyIconMainProg
			// 
			this->notifyIconMainProg->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->notifyIconMainProg->BalloonTipText = L"Right click here for more program functions.";
			this->notifyIconMainProg->BalloonTipTitle = L"Program Control";
			this->notifyIconMainProg->ContextMenuStrip = this->contextMenuStrip_NotifyIcon;
			this->notifyIconMainProg->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIconMainProg.Icon")));
			this->notifyIconMainProg->Text = L"Virus Protection Platform";
			this->notifyIconMainProg->Visible = true;
			// 
			// contextMenuStrip_NotifyIcon
			// 
			this->contextMenuStrip_NotifyIcon->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripMenuItem_Scan,
					this->toolStripSeparator3, this->optionsToolStripMenuItem1, this->toolStripSeparator1, this->helpToolStripMenuItem, this->aboutToolStripMenuItem,
					this->toolStripSeparator2, this->toolStripMenuItem_Exit
			});
			this->contextMenuStrip_NotifyIcon->Name = L"contextMenuStrip2";
			this->contextMenuStrip_NotifyIcon->Size = System::Drawing::Size(153, 154);
			// 
			// toolStripMenuItem_Scan
			// 
			this->toolStripMenuItem_Scan->Name = L"toolStripMenuItem_Scan";
			this->toolStripMenuItem_Scan->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem_Scan->Text = L"Initiate Scan";
			this->toolStripMenuItem_Scan->Click += gcnew System::EventHandler(this, &Splash::toolStripMenuItem_Scan_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(149, 6);
			// 
			// optionsToolStripMenuItem1
			// 
			this->optionsToolStripMenuItem1->Name = L"optionsToolStripMenuItem1";
			this->optionsToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->optionsToolStripMenuItem1->Text = L"Options";
			this->optionsToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Splash::optionsToolStripMenuItem1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Splash::aboutToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
			// 
			// toolStripMenuItem_Exit
			// 
			this->toolStripMenuItem_Exit->Name = L"toolStripMenuItem_Exit";
			this->toolStripMenuItem_Exit->Size = System::Drawing::Size(152, 22);
			this->toolStripMenuItem_Exit->Text = L"Exit";
			this->toolStripMenuItem_Exit->Click += gcnew System::EventHandler(this, &Splash::toolStripMenuItem_Exit_Click);
			// 
			// Splash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(876, 381);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Splash";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Splash";
			this->Load += gcnew System::EventHandler(this, &Splash::Splash_Load);
			this->contextMenuStrip_NotifyIcon->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //Hides but doesn't delete. Delete would be preferable however the program would exit.
				 Splash::Hide();

				 //Shows the balloon tip for one second.
				 notifyIconMainProg->ShowBalloonTip(1000);

				 //Disables the timer so this process doesn't repeat itself.
				 timer1->Enabled = false;

				 //This part checkes if the user has run the program before by looking for the registry key.
				 if (!Options::HasRunFirst)
				 {
					 MessageBox::Show("Since this is the first time you have run this application, you need to configure some important settings.", "Your first time", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					 OptionsForm->Show();
					 Options::HasRunFirst = true;
				 }
	}
	private: System::Void optionsToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Show the options form.
				 this->OptionsForm->Show();
	}
private: System::Void toolStripMenuItem_Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Exits the entire program.
			 Application::Exit();
}
private: System::Void Splash_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void toolStripMenuItem_Scan_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Creating the new form.
			 Form ^ NewScan = gcnew ScanningForm();
			 NewScan->Show();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(
				 "This program was created by Matthew Jones in 2014 and is licensed under the GNU General Public License. There is obviously no warrenty and if it (somehow) breaks your computer, it's not my fault! You can modify the code, but please keep the Splash Screen and the Scanning Form the same theme! I like the theme, and I made this program, so respect that if you want to branch my code!", "The Virus Protection Platform", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
