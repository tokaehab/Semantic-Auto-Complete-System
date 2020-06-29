#pragma once
#include "Form3.h";

namespace OurProjectDS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace glob;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form ^objofform1;
		bool readflag;
		String^ passedword;
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form2(Form ^objretfromform1, int currentflag, String^ enteredword)
		{
			objofform1 = objretfromform1;
			readflag = currentflag;
			passedword = enteredword;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Edit;
	private: System::Windows::Forms::Button^  Done;
	private: System::Windows::Forms::TextBox^  WordTextBox;
	private: System::Windows::Forms::TextBox^  DefTextBox;


	private: System::Windows::Forms::Button^  Return;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Edit = (gcnew System::Windows::Forms::Button());
			this->Done = (gcnew System::Windows::Forms::Button());
			this->WordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DefTextBox = (gcnew System::Windows::Forms::TextBox());
			this->Return = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(308, 113);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(127, 175);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"The Word:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(432, 175);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"The Definition:";
			// 
			// Edit
			// 
			this->Edit->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Edit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Edit->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Edit->Location = System::Drawing::Point(855, 203);
			this->Edit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(115, 47);
			this->Edit->TabIndex = 9;
			this->Edit->Text = L"Edit";
			this->Edit->UseVisualStyleBackColor = false;
			this->Edit->Click += gcnew System::EventHandler(this, &Form2::Edit_Click);
			// 
			// Done
			// 
			this->Done->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Done->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Done->Location = System::Drawing::Point(944, 496);
			this->Done->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Done->Name = L"Done";
			this->Done->Size = System::Drawing::Size(152, 57);
			this->Done->TabIndex = 10;
			this->Done->Text = L"Done";
			this->Done->UseVisualStyleBackColor = false;
			this->Done->Click += gcnew System::EventHandler(this, &Form2::Done_Click);
			// 
			// WordTextBox
			// 
			this->WordTextBox->Location = System::Drawing::Point(132, 203);
			this->WordTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->WordTextBox->Name = L"WordTextBox";
			this->WordTextBox->ReadOnly = true;
			this->WordTextBox->Size = System::Drawing::Size(249, 22);
			this->WordTextBox->TabIndex = 11;
			// 
			// DefTextBox
			// 
			this->DefTextBox->Location = System::Drawing::Point(437, 203);
			this->DefTextBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->DefTextBox->Multiline = true;
			this->DefTextBox->Name = L"DefTextBox";
			this->DefTextBox->ReadOnly = true;
			this->DefTextBox->Size = System::Drawing::Size(408, 198);
			this->DefTextBox->TabIndex = 12;
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Return->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Return->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Return->Location = System::Drawing::Point(981, 15);
			this->Return->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(115, 47);
			this->Return->TabIndex = 13;
			this->Return->Text = L"Return";
			this->Return->UseVisualStyleBackColor = false;
			this->Return->Click += gcnew System::EventHandler(this, &Form2::Return_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1112, 567);
			this->ControlBox = false;
			this->Controls->Add(this->Return);
			this->Controls->Add(this->DefTextBox);
			this->Controls->Add(this->WordTextBox);
			this->Controls->Add(this->Done);
			this->Controls->Add(this->Edit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form2";
			this->Text = L"Word and Definition";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e)
	{
		if (readflag)
		{
			this->WordTextBox->ReadOnly = true;
			this->DefTextBox->ReadOnly = true;
			msclr::interop::marshal_context context;
			std::string curwordused = context.marshal_as<std::string>(passedword);
			System::String^ curdefused = context.marshal_as<System::String^>(definition[curwordused]);
			this->WordTextBox->Text = passedword;
			this->DefTextBox->Text = curdefused;
		}
		else
		{
			this->WordTextBox->ReadOnly = false;
			this->DefTextBox->ReadOnly = false;
		}
		if (this->WordTextBox->ReadOnly == false)
		{
			this->Edit->Hide();
		}
	}
	private: System::Void Edit_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->DefTextBox->ReadOnly == true)
			this->DefTextBox->ReadOnly = false;
		else
			MessageBox::Show("If you are done with editing please Press Done");
	}
	private: System::Void Done_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->DefTextBox->ReadOnly == true)
		{
			this->WordTextBox->Text = "";
			this->DefTextBox->Text = "";
			this->Close();
			objofform1->Show();
		}
		else
		{
			msclr::interop::marshal_context context;
			std::string curwordused = context.marshal_as<std::string>(this->WordTextBox->Text);
			std::string curdefused = context.marshal_as<std::string>(this->DefTextBox->Text);
			bool wordIsEmpty = 1, DefIsEmpty = 1;
			int wordsz = curwordused.size(), defsz = curdefused.size();
			transform(curwordused.begin(), curwordused.end(), curwordused.begin(), ::tolower);
			transform(curdefused.begin(), curdefused.end(), curdefused.begin(), ::tolower);
			for (int i = 0; i < wordsz; i++)
			{
				if (curwordused[i] != ' ')
					wordIsEmpty = 0;
				else if (wordIsEmpty || i + 1 == wordsz || curwordused[i+1] == ' ')
				{
					curwordused.erase(curwordused.begin() + i);
					wordsz--, i--;
				}
			}
			for (int i = 0; i < defsz; i++)
			{
				if (curdefused[i] != ' ')
					DefIsEmpty = 0;
				else if (DefIsEmpty || i+1 == defsz || curdefused[i+1] == ' ')
				{
					curdefused.erase(curdefused.begin() + i);
					defsz--, i--;
				}
			}
			if (wordIsEmpty && DefIsEmpty)
			{
				MessageBox::Show("Please enter a word and its definition");
			}
			else if (wordIsEmpty)
			{
				MessageBox::Show("Please enter a word to the definition");
			}
			else if (DefIsEmpty)
			{
				MessageBox::Show("Please enter the definition of the word");
			}
			else
			{
				if (this->WordTextBox->ReadOnly == true)
				{
					definition[curwordused] = curdefused;
					overwriteFile();
					this->WordTextBox->Text = "";
					this->DefTextBox->Text = "";
					this->Close();
					MessageBox::Show("The definition for the word updated successfully");
					objofform1->Show();
				}
				else
				{
					if (word.find(curwordused, 0))
					{
						this->Hide();
						System::String^ S1 = context.marshal_as<System::String^>(curwordused);
						System::String^ S2 = context.marshal_as<System::String^>(curdefused);
						Form3 ^obj = gcnew Form3(objofform1, this, S1, S2);
						obj->Show();
						System::String^ outString = context.marshal_as<System::String^>(definition[curwordused]);
						this->DefTextBox->Text = outString;
						this->WordTextBox->Text = S1;
						this->WordTextBox->ReadOnly = true;
						this->DefTextBox->ReadOnly = true;
						this->Edit->Show();
					}
					else
					{
						word.insert(curwordused, 0);
						definition[curwordused] = curdefused;
						overwriteFile();
						this->WordTextBox->Text = "";
						this->DefTextBox->Text = "";
						this->Close();
						MessageBox::Show("The word is added along with the definition successfully");
						objofform1->Show();
					}
				}
			}
		}
	}
	private: System::Void Return_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->WordTextBox->Text = "";
		this->DefTextBox->Text = "";
		this->Close();
		objofform1->Show();
	}
};
}
