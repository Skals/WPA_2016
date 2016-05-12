#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  wyjdzToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  edycjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja31ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja32ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja1xToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja2xToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  opcja3xToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripComboBox^  toolStripComboBox2;
	private: System::Windows::Forms::Label^  label2;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyjdzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->edycjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja31ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja32ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->opcja1xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja2xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcja3xToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edycjaToolStripMenuItem, this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1035, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->opcja1ToolStripMenuItem,
					this->opcja2ToolStripMenuItem, this->wyjdzToolStripMenuItem, this->toolStripComboBox1, this->toolStripSeparator1, this->toolStripTextBox1,
					this->toolStripSeparator2
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// opcja1ToolStripMenuItem
			// 
			this->opcja1ToolStripMenuItem->Name = L"opcja1ToolStripMenuItem";
			this->opcja1ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja1ToolStripMenuItem->Text = L"Opcja1";
			this->opcja1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja2ToolStripMenuItem
			// 
			this->opcja2ToolStripMenuItem->Name = L"opcja2ToolStripMenuItem";
			this->opcja2ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->opcja2ToolStripMenuItem->Text = L"Opcja2";
			this->opcja2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja2ToolStripMenuItem_Click);
			// 
			// wyjdzToolStripMenuItem
			// 
			this->wyjdzToolStripMenuItem->Name = L"wyjdzToolStripMenuItem";
			this->wyjdzToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->wyjdzToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->wyjdzToolStripMenuItem->Text = L"WyjdŸ";
			this->wyjdzToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjdzToolStripMenuItem_Click);
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Element 1", L"Element 2", L"Element 3" });
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// edycjaToolStripMenuItem
			// 
			this->edycjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcja3ToolStripMenuItem });
			this->edycjaToolStripMenuItem->Name = L"edycjaToolStripMenuItem";
			this->edycjaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->edycjaToolStripMenuItem->Text = L"Edycja";
			// 
			// opcja3ToolStripMenuItem
			// 
			this->opcja3ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->opcja31ToolStripMenuItem,
					this->opcja32ToolStripMenuItem
			});
			this->opcja3ToolStripMenuItem->Name = L"opcja3ToolStripMenuItem";
			this->opcja3ToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->opcja3ToolStripMenuItem->Text = L"Opcja3";
			this->opcja3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja31ToolStripMenuItem
			// 
			this->opcja31ToolStripMenuItem->Name = L"opcja31ToolStripMenuItem";
			this->opcja31ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->opcja31ToolStripMenuItem->Text = L"Opcja3.1";
			this->opcja31ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja32ToolStripMenuItem
			// 
			this->opcja32ToolStripMenuItem->Name = L"opcja32ToolStripMenuItem";
			this->opcja32ToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->opcja32ToolStripMenuItem->Text = L"Opcja3.2";
			this->opcja32ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oAutorzeToolStripMenuItem });
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(86, 20);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(386, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tu pojawi sie tekst";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->opcja1xToolStripMenuItem,
					this->opcja2xToolStripMenuItem, this->opcja3xToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(120, 70);
			// 
			// opcja1xToolStripMenuItem
			// 
			this->opcja1xToolStripMenuItem->Name = L"opcja1xToolStripMenuItem";
			this->opcja1xToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->opcja1xToolStripMenuItem->Text = L"Opcja 1x";
			this->opcja1xToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::opcja1ToolStripMenuItem_Click);
			// 
			// opcja2xToolStripMenuItem
			// 
			this->opcja2xToolStripMenuItem->Name = L"opcja2xToolStripMenuItem";
			this->opcja2xToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->opcja2xToolStripMenuItem->Text = L"Opcja 2x";
			this->opcja2xToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAutorzeToolStripMenuItem_Click);
			// 
			// opcja3xToolStripMenuItem
			// 
			this->opcja3xToolStripMenuItem->Name = L"opcja3xToolStripMenuItem";
			this->opcja3xToolStripMenuItem->Size = System::Drawing::Size(119, 22);
			this->opcja3xToolStripMenuItem->Text = L"Opcja 3x";
			this->opcja3xToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wyjdzToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripComboBox2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1035, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Indigo;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Etykieta 1", L"Etykieta 2" });
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(121, 25);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(399, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Druga etykieta tekstowa";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 551);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wyjdzToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void opcja1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	label1->Text = static_cast<ToolStripMenuItem ^>(sender)->Text;
}
private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Szymon Groñski", "To jest info", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void opcja2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (toolStripComboBox2->SelectedIndex == 0){
		if (static_cast<ToolStripButton ^>(sender)->Name == "toolStripButton1")
			label1->ForeColor = Color::Green;
		if (static_cast<ToolStripButton ^>(sender)->Name == "toolStripButton2")
			label1->ForeColor = Color::Yellow;
		if (static_cast<ToolStripButton ^>(sender)->Name == "toolStripButton3")
			label1->ForeColor = Color::Red;
	};
}
};
}

