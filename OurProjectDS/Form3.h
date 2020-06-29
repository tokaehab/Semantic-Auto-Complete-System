#pragma once
#include "Global.h"

namespace OurProjectDS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace glob;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Overwrite;
	private: System::Windows::Forms::Button^  View;
	private: System::Windows::Forms::Label^  label2;
	public:
		Form ^objofform1, ^objofform2;
		String ^passedword, ^passeddef;
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form3(Form ^objretfromform1, Form ^objretfromform2, String^ enteredword, String^ entereddef)
		{
			objofform1 = objretfromform1;
			objofform2 = objretfromform2;
			passedword = enteredword;
			passeddef = entereddef;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Overwrite = (gcnew System::Windows::Forms::Button());
			this->View = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(16, 101);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"There is a word with the same name exist";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(157, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// Overwrite
			// 
			this->Overwrite->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Overwrite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Overwrite->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Overwrite->Location = System::Drawing::Point(16, 174);
			this->Overwrite->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Overwrite->Name = L"Overwrite";
			this->Overwrite->Size = System::Drawing::Size(152, 75);
			this->Overwrite->TabIndex = 7;
			this->Overwrite->Text = L"Overwrite";
			this->Overwrite->UseVisualStyleBackColor = false;
			this->Overwrite->Click += gcnew System::EventHandler(this, &Form3::Overwrite_Click);
			// 
			// View
			// 
			this->View->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->View->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View->ForeColor = System::Drawing::SystemColors::Highlight;
			this->View->Location = System::Drawing::Point(248, 174);
			this->View->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->View->Name = L"View";
			this->View->Size = System::Drawing::Size(151, 75);
			this->View->TabIndex = 8;
			this->View->Text = L"View the definition and edit on it";
			this->View->UseVisualStyleBackColor = false;
			this->View->Click += gcnew System::EventHandler(this, &Form3::View_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label2->Location = System::Drawing::Point(16, 126);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"What do you want to do:";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(489, 325);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->View);
			this->Controls->Add(this->Overwrite);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form3";
			this->Text = L"Same name conflict";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Overwrite_Click(System::Object^  sender, System::EventArgs^  e)
	{
		msclr::interop::marshal_context context;
		std::string curwordused = context.marshal_as<std::string>(passedword);
		std::string curdefused = context.marshal_as<std::string>(passeddef);
		definition[curwordused] = curdefused;
		overwriteFile();
		this->Close();
		objofform2->Close();
		objofform1->Show();
	}
	private: System::Void View_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
		objofform2->Show();
	}
};
}
