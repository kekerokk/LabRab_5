#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace LabRab5 {

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
	private: System::Windows::Forms::TextBox^ textBox_a;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_c;
	private: System::Windows::Forms::TextBox^ textBox_d;
	private: System::Windows::Forms::TextBox^ textBox_e;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Answer;

	private: System::Windows::Forms::Label^ label6;

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
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_c = (gcnew System::Windows::Forms::TextBox());
			this->textBox_d = (gcnew System::Windows::Forms::TextBox());
			this->textBox_e = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Answer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(100, 141);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(51, 20);
			this->textBox_a->TabIndex = 0;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(201, 141);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(42, 20);
			this->textBox_b->TabIndex = 1;
			// 
			// textBox_c
			// 
			this->textBox_c->Location = System::Drawing::Point(298, 141);
			this->textBox_c->Name = L"textBox_c";
			this->textBox_c->Size = System::Drawing::Size(48, 20);
			this->textBox_c->TabIndex = 2;
			// 
			// textBox_d
			// 
			this->textBox_d->Location = System::Drawing::Point(392, 140);
			this->textBox_d->Name = L"textBox_d";
			this->textBox_d->Size = System::Drawing::Size(49, 20);
			this->textBox_d->TabIndex = 3;
			// 
			// textBox_e
			// 
			this->textBox_e->Location = System::Drawing::Point(487, 141);
			this->textBox_e->Name = L"textBox_e";
			this->textBox_e->Size = System::Drawing::Size(46, 20);
			this->textBox_e->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"b:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(276, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"c:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(370, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"d:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(465, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"e:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(714, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 52);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Я ВСЕ ВПИСАЛ(ТЫК)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Answer
			// 
			this->Answer->Location = System::Drawing::Point(307, 253);
			this->Answer->Name = L"Answer";
			this->Answer->ReadOnly = true;
			this->Answer->Size = System::Drawing::Size(226, 20);
			this->Answer->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(255, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Ответ:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1306, 502);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Answer);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_e);
			this->Controls->Add(this->textBox_d);
			this->Controls->Add(this->textBox_c);
			this->Controls->Add(this->textBox_b);
			this->Controls->Add(this->textBox_a);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ a = textBox_a->Text;
		String^ b = textBox_b->Text;
		String^ c = textBox_c->Text;
		String^ d = textBox_d->Text;
		String^ eg = textBox_e->Text;

		if (a == "" || b == "" || c == "" || d == "" || eg == "")
		{
			Answer->Text = "Ты либо ниче не ввел, либо не ввел какую-то переменную";
		}
		int Inta = Int32::Parse(a);
		int Intb = Int32::Parse(b);
		int Intc = Int32::Parse(c);
		int Intd = Int32::Parse(d);
		int Inte = Int32::Parse(eg);
		float answ = Inta / (Intb - Intc) * (Intd + Inte);
		string asnw2 = to_string(answ);
		Answer->Text = gcnew System::String(asnw2.c_str());

	}
};
}
