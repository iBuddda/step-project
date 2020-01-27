#pragma once

namespace Proga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Location = System::Drawing::Point(115, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 242);
			this->panel1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Вход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Пароль";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Пользователь";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(181, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Авторизация";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(135, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(135, 77);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 20);
			this->textBox4->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(250, 299);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(470, 212);
			this->panel2->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Зарегестрироваться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(46, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Повторить пароль";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(144, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(198, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(74, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Пароль";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(144, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 20);
			this->textBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Пользователь";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(144, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(194, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Регистрация";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 535);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		//String^ login = "login";
		//String^ password = "pass";

		array<String^>^ textbox_array_login;
		array<String^>^ textbox_array_pass;

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			textbox_array_login = gcnew array<String^>(10);
			textbox_array_pass = gcnew array<String^>(10);

			textbox_array_login[0] = "admin";
			textbox_array_login[1] = "login2";
			textbox_array_login[2] = "login3";
			textbox_array_login[3] = "login4";
			textbox_array_login[4] = "login5";
			textbox_array_login[5] = "";
			textbox_array_login[6] = "";
			textbox_array_login[7] = "";
			textbox_array_login[8] = "";
			textbox_array_login[9] = "";
			

			textbox_array_pass[0] = "admin";
			textbox_array_pass[1] = "pass2";
			textbox_array_pass[2] = "pass3";
			textbox_array_pass[3] = "pass4";
			textbox_array_pass[4] = "pass5";
			textbox_array_pass[5] = "";
			textbox_array_pass[6] = "";
			textbox_array_pass[7] = "";
			textbox_array_pass[8] = "";
			textbox_array_pass[9] = "";
		}
		

		//авторизация кнопка вход
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = 0;
	bool b = false;

	while (a < 9) {
		if (this->textBox4->Text == textbox_array_login[a] && textBox3->Text == textbox_array_pass[a])
		{
			b = true;
			break;
		}
		else {
			b = false;
			
		}
		a++;

	}

	if (b == true) {
		MessageBox::Show("вход выполнен");
	}
	else
	{
		MessageBox::Show("ошибка");
	}

}





	   //регистрация кнопка регистрация
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int a = 0;
	//bool b = false;

	while (a < 9) {
		if (textbox_array_login[a] == "")
		{
		textbox_array_login[a] = this->textBox1->Text;
		textbox_array_pass[a] = this->textBox2->Text;
			break;
		}
		/*
		else {
			break;

		}*/

		a++;

	}
	/*a = 0;
	while (a < 9) {


		a++;
		MessageBox::Show(textbox_array_login[a]);
	}*/
	
	/*if (b == true) {
		MessageBox::Show("вход выполнен");
	}
	else
	{
		MessageBox::Show("ошибка");
	}*/
}
};
}
