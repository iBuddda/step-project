#pragma once

namespace Proekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		


	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ ��;
	private: System::Windows::Forms::ListBox^ ��������;
	private: System::Windows::Forms::ListBox^ ����;
	private: System::Windows::Forms::ListBox^ ����������;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->�� = (gcnew System::Windows::Forms::ListBox());
			this->�������� = (gcnew System::Windows::Forms::ListBox());
			this->���� = (gcnew System::Windows::Forms::ListBox());
			this->���������� = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�������� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(115, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(147, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(115, 216);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(115, 277);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(147, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"������������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"����";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(147, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"����������";
			// 
			// ��
			// 
			this->��->FormattingEnabled = true;
			this->��->Location = System::Drawing::Point(550, 75);
			this->��->Name = L"��";
			this->��->Size = System::Drawing::Size(108, 173);
			this->��->TabIndex = 10;
			// 
			// ��������
			// 
			this->��������->FormattingEnabled = true;
			this->��������->Location = System::Drawing::Point(664, 75);
			this->��������->Name = L"��������";
			this->��������->Size = System::Drawing::Size(108, 173);
			this->��������->TabIndex = 11;
			// 
			// ����
			// 
			this->����->FormattingEnabled = true;
			this->����->Location = System::Drawing::Point(778, 75);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(108, 173);
			this->����->TabIndex = 12;
			// 
			// ����������
			// 
			this->����������->FormattingEnabled = true;
			this->����������->Location = System::Drawing::Point(892, 75);
			this->����������->Name = L"����������";
			this->����������->Size = System::Drawing::Size(108, 173);
			this->����������->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(640, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(689, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"������������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(853, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"����";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(934, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"����������";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1165, 567);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->����������);
			this->Controls->Add(this->����);
			this->Controls->Add(this->��������);
			this->Controls->Add(this->��);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "" || this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "") {
		MessageBox::Show("�����-�� ���� �� ���������");
	}

	String^ ID;
	ID = Convert::ToString(this->textBox1->Text);
	��->Items->Add(ID);

	String^ Name;
	Name = Convert::ToString(this->textBox4->Text); 
	����������->Items->Add(Name);

	String^ Cost;
	Cost = Convert::ToString(this->textBox3->Text);
	����->Items->Add(Cost);

	String^ Kol;
	Kol = Convert::ToString(this->textBox2->Text);
	��������->Items->Add(Kol);
}
};
}
