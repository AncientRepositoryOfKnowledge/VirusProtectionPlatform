#pragma once

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for InputF
	/// </summary>
	ref class InputF : public System::Windows::Forms::Form
	{
	protected:
		String ^ S_Text;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem_Delete;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItem_DeleteAll;
			 ListBox::ObjectCollection ^ Results;
	public:
		//Overloading the constructor so that either one type of form can be shown.
		InputF(void)
		{

		}

		/*
		I modified the "InitializeComponent" functions so that this form can be used for seperate purposes.
		One of which is to input text into a label (where there is no textbox), and the second is to display
		the results of a scan.
		*/

		//For the input form with the textbox.
		InputF(String ^ TextBoxText)
			{
				InitializeComponent2();
				S_Text = TextBoxText;
			}
		//For the results form with the Listbox.
		InputF(ListBox::ObjectCollection ^ ScanResults)
			{
				InitializeComponent();
				Results = ScanResults;
			}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~InputF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem_Delete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItem_DeleteAll = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &InputF::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(241, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &InputF::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(12, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(322, 134);
			this->listBox1->TabIndex = 3;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem_Delete,
					this->ToolStripMenuItem_DeleteAll
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(100, 48);
			// 
			// toolStripMenuItem_Delete
			// 
			this->toolStripMenuItem_Delete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripMenuItem_Delete->Name = L"toolStripMenuItem_Delete";
			this->toolStripMenuItem_Delete->Size = System::Drawing::Size(99, 22);
			this->toolStripMenuItem_Delete->Text = L"Delete";
			this->toolStripMenuItem_Delete->Click += gcnew System::EventHandler(this, &InputF::toolStripMenuItem_Delete_Click);
			// 
			// ToolStripMenuItem_DeleteAll
			// 
			this->ToolStripMenuItem_DeleteAll->Name = L"ToolStripMenuItem_DeleteAll";
			this->ToolStripMenuItem_DeleteAll->Size = System::Drawing::Size(99, 22);
			this->ToolStripMenuItem_DeleteAll->Text = L"Delete All";
			this->ToolStripMenuItem_DeleteAll->Click += gcnew System::EventHandler(this, &InputF::ToolStripMenuItem_DeleteAll_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Visible = false;
			// 
			// InputF
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(346, 159);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InputF";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Results";
			this->Load += gcnew System::EventHandler(this, &InputF::InputF_Load_ListBox);
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
		void InitializeComponent2(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 103);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InputF::button1_Click);
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(158, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InputF::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 0;
			// 
			// InputF
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(227, 44);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InputF";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Input Text";
			this->Load += gcnew System::EventHandler(this, &InputF::InputF_Load_TextBox);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Sets the variable accordingly.
				 S_Text = textBox1->Text;
				 //Hides but doesn't close because the other class still needs to get the data from this.
				 this->Hide();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Closes with no submission.
				 this->Close();
	}
	public: String ^ GetFormText()
	{
		return S_Text;
	}
	private: System::Void InputF_Load_TextBox(System::Object^  sender, System::EventArgs^  e) {
				 textBox1->Text = S_Text;
	}
	private: System::Void InputF_Load_ListBox(System::Object^  sender, System::EventArgs^  e) {
				 listBox1->Items->AddRange(Results);
	}
private: System::Void toolStripMenuItem_Delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			 {
				 //Deletes the selected item both from the system and from the listbox.
			 File::Delete(Convert::ToString(listBox1->SelectedItem));
			 listBox1->Items->Remove(listBox1->SelectedItem);
			 }
			 catch (...)
			 {
				 MessageBox::Show("Unable to delete file; you may need Administrator rights.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void ToolStripMenuItem_DeleteAll_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
