#pragma once
#include "Form2.h"

namespace OurProjectDS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace glob;

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
	private: System::Windows::Forms::ComboBox^  SearchComboBox;
	protected:


	protected:


	protected:

	protected:




	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  AddNewWord;
	private: System::Windows::Forms::Button^  Search;
	private: System::Windows::Forms::Button^  Exit;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->SearchComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AddNewWord = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// SearchComboBox
			// 
			this->SearchComboBox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->SearchComboBox->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->SearchComboBox->FormattingEnabled = true;
			this->SearchComboBox->Location = System::Drawing::Point(123, 293);
			this->SearchComboBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->SearchComboBox->Name = L"SearchComboBox";
			this->SearchComboBox->Size = System::Drawing::Size(664, 24);
			this->SearchComboBox->TabIndex = 2;
			this->SearchComboBox->TextChanged += gcnew System::EventHandler(this, &Form1::SearchComboBox_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(123, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(781, 260);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// AddNewWord
			// 
			this->AddNewWord->BackColor = System::Drawing::SystemColors::HighlightText;
			this->AddNewWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddNewWord->ForeColor = System::Drawing::SystemColors::Highlight;
			this->AddNewWord->Location = System::Drawing::Point(928, 492);
			this->AddNewWord->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->AddNewWord->Name = L"AddNewWord";
			this->AddNewWord->Size = System::Drawing::Size(168, 60);
			this->AddNewWord->TabIndex = 5;
			this->AddNewWord->Text = L"Add A New Word";
			this->AddNewWord->UseVisualStyleBackColor = false;
			this->AddNewWord->Click += gcnew System::EventHandler(this, &Form1::AddNewWord_Click);
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Search->Location = System::Drawing::Point(811, 293);
			this->Search->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(93, 30);
			this->Search->TabIndex = 7;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &Form1::Search_Click);
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Exit->Location = System::Drawing::Point(981, 15);
			this->Exit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(115, 47);
			this->Exit->TabIndex = 14;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &Form1::Exit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1112, 567);
			this->ControlBox = false;
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->AddNewWord);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SearchComboBox);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
	{
		GetDataFromFile();
	}
	private: System::Void AddNewWord_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->SearchComboBox->Text = "";
		String^ wordtobesend = "";
		this->Hide();
		Form2 ^obj = gcnew Form2(this, 0, wordtobesend);
		obj->ShowDialog();
	}
	private: System::Void Search_Click(System::Object^  sender, System::EventArgs^  e)
	{

		String^ wordtobesend = this->SearchComboBox->Text;
		if (wordslist.size() == 0)
		{
			if (wordtobesend->Length == 0)
				MessageBox::Show("Please enter a word to search for");
			else
				MessageBox::Show("Sorry the word you have entered doesn't exist");
		}
		else
		{
			msclr::interop::marshal_context context;
			std::string ourcurstring = context.marshal_as<std::string>(wordtobesend);
			transform(ourcurstring.begin(), ourcurstring.end(), ourcurstring.begin(), ::tolower);
			wordtobesend = context.marshal_as<System::String^>(ourcurstring);
			if (word.find(ourcurstring, 0))
			{
				this->SearchComboBox->Text = "";
				this->Hide();
				Form2 ^obj = gcnew Form2(this, 1, wordtobesend);
				obj->ShowDialog();
			}
			else
				MessageBox::Show("Please choose a word to search for");
		}
	}
	private: System::Void SearchComboBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		msclr::interop::marshal_context context;
		std::string ourcurstring = context.marshal_as<std::string>(this->SearchComboBox->Text);
		transform(ourcurstring.begin(), ourcurstring.end(), ourcurstring.begin(), ::tolower);
		wordslist.clear();
		word.search(ourcurstring, 0);
		//this->SearchComboBox->AutoCompleteCustomSource = gcnew AutoCompleteStringCollection(); //m2
		AutoCompleteStringCollection ^curlist = gcnew AutoCompleteStringCollection(); //m1
		for (int i = 0; i < min(10, (int)wordslist.size()); i++)
		{
			System::String^ outString = context.marshal_as<System::String^>(wordslist[i]);
			//this->SearchComboBox->AutoCompleteCustomSource->Add(outString); //m2
			curlist->Add(outString); //m1
		}
		this->SearchComboBox->AutoCompleteCustomSource = curlist; //m1
	}
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (MessageBox::Show("Are you sure you want to exit ?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
};
}
