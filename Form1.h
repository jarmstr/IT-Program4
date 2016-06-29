#pragma once

namespace Program3Sample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	

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
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
//	private: System::Windows::Forms::Button^  ExitButton;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
/*	private: System::Windows::Forms::TextBox^  HeadingTextbox;
	private: System::Windows::Forms::TextBox^  HeadingTextbox;
	private: System::Windows::Forms::TextBox^  HeadingTextbox;
	private: System::Windows::Forms::TextBox^  HeadingTextbox; */


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
//	private: System::Windows::Forms::TextBox^  HeadingTextbox;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Button^  ExitButton;

	private: System::Windows::Forms::Button^  ReportButton;

	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::TextBox^  HeadingTextbox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->ReportButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->HeadingTextbox = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->groupBox4);
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Location = System::Drawing::Point(23, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(588, 237);
			this->panel2->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->ExitButton);
			this->groupBox4->Controls->Add(this->ReportButton);
			this->groupBox4->Location = System::Drawing::Point(367, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(214, 219);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(104, 135);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 20);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Exit Program";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(104, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 20);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Create List";
			// 
			// ExitButton
			// 
			this->ExitButton->Location = System::Drawing::Point(6, 122);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(79, 48);
			this->ExitButton->TabIndex = 1;
			this->ExitButton->Text = L"E&xit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Form1::ExitButton_Click);
			// 
			// ReportButton
			// 
			this->ReportButton->Location = System::Drawing::Point(6, 19);
			this->ReportButton->Name = L"ReportButton";
			this->ReportButton->Size = System::Drawing::Size(79, 48);
			this->ReportButton->TabIndex = 0;
			this->ReportButton->Text = L"&Report";
			this->ReportButton->UseVisualStyleBackColor = true;
			this->ReportButton->Click += gcnew System::EventHandler(this, &Form1::ReportButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->pictureBox5);
			this->groupBox3->Controls->Add(this->HeadingTextbox);
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(361, 222);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(173, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 54);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Please Enter The Heading\r\nOf The Report And\r\nPress The \"Report\" Button\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 182);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Report Heading:";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(6, 19);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(159, 136);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			// 
			// HeadingTextbox
			// 
			this->HeadingTextbox->Location = System::Drawing::Point(140, 179);
			this->HeadingTextbox->Name = L"HeadingTextbox";
			this->HeadingTextbox->Size = System::Drawing::Size(205, 20);
			this->HeadingTextbox->TabIndex = 0;
			this->HeadingTextbox->Click += gcnew System::EventHandler(this, &Form1::HeadingTextbox_Click);
			this->HeadingTextbox->TextChanged += gcnew System::EventHandler(this, &Form1::HeadingTextbox_TextChanged);
			// 
			// Form1
			// 
			this->ClientSize = System::Drawing::Size(642, 264);
			this->Controls->Add(this->panel2);
			this->Name = L"Form1";
			this->Text = L"Inventory Report Generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel2->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }

private: System::Void HeadingTextbox_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 HeadingTextbox->Clear();
		 }
private: System::Void ExitButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 //This will exit the Program
			Form1::Close();
		 }
		 
private: System::Void ReportButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 InventoryItem * CurrentRecordPointer;
			 ifstream fin;
			 
			 int InitInventoryNumber = 0;
			 int InitManufacturerID = 0;
			 double InitPrice = 0.0;
			 double InitMarkup = 0.0;
			 char InitItemType[31] = "\0";
			 int  InitQuantity = 0;
			 char* ReportName;

			// fin.open((char*)(void*)Marshal::StringToHGlobalAnsi(String::Concat(Directory::GetCurrentDirectory(),"\\ItemFileForInput.txt")));
			 
			fin.open((char*) (void*)Marshal::StringToHGlobalAnsi(String::Concat(Directory::GetCurrentDirectory(),"\\ItemFileForInput.txt")));
			if(!fin)
			 {
				 Application::Exit();
				 return;
			 } 

			 fin >> InitInventoryNumber;
			 fin.ignore();
			 fin >> InitManufacturerID;
			 fin.ignore();
			 fin >> InitPrice;
			 fin.ignore();
			 fin >> InitMarkup;
			 fin.ignore();
			 fin.get( InitItemType,31 );
			 fin.ignore();
			 fin >> InitQuantity;
			 while(fin)
			 {
				 CurrentRecordPointer = new InventoryItem;

				 CurrentRecordPointer->InsertItem( InitInventoryNumber,InitManufacturerID, InitPrice,  InitMarkup,   InitItemType, InitQuantity,  CurrentRecordPointer );
				 fin >> InitInventoryNumber;
				 fin.ignore();
				 fin >> InitManufacturerID;
				 fin.ignore();
				 fin >> InitPrice;
				 fin.ignore();
				 fin >> InitMarkup;
				 fin.ignore();
				 fin.get( InitItemType, 31 );
				 fin.ignore();
				 fin >> InitQuantity;
			 }

			 ReportName = (char*)(void*)Marshal::StringToHGlobalAnsi(HeadingTextbox->Text);

			 FirstRecordPointer->ListRecords(ReportName);

			 HeadingTextbox->Clear();
			  MessageBox::Show( "List Printed To Output File \n"
			 + FirstRecordPointer->CountItems( ) + "Items Were Printed",
			 "Report Created", MessageBoxButtons::OK,
			 MessageBoxIcon::Information );

			delete CurrentRecordPointer;
			FirstRecordPointer = NULL;
			fin.close();
		 }

private: System::Void HeadingTextbox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

