#pragma once

#include <cmath>
#include <windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Calculator {

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
		bool okr = false;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(92, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X1 +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(206, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"X2 +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label3->Location = System::Drawing::Point(324, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"X3 =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(92, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"X1 +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(205, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"X2 +";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(324, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"X3 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(92, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"X1 +";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(206, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"X2 +";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(324, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 25);
			this->label9->TabIndex = 8;
			this->label9->Text = L"X3 =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(163, 274);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 25);
			this->label10->TabIndex = 9;
			this->label10->Text = L"X1 = ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(163, 314);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 25);
			this->label11->TabIndex = 10;
			this->label11->Text = L"X2 = ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label12->Location = System::Drawing::Point(163, 355);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 25);
			this->label12->TabIndex = 11;
			this->label12->Text = L"X3 = ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(33, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(47, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(153, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(47, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(264, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(47, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(382, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(47, 20);
			this->textBox4->TabIndex = 15;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(32, 126);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(47, 20);
			this->textBox5->TabIndex = 16;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(153, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(47, 20);
			this->textBox6->TabIndex = 17;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(264, 126);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(47, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(382, 126);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(47, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(33, 181);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(47, 20);
			this->textBox9->TabIndex = 20;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox9_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(153, 181);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(47, 20);
			this->textBox10->TabIndex = 21;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(264, 182);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(47, 20);
			this->textBox11->TabIndex = 22;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(381, 182);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(47, 20);
			this->textBox12->TabIndex = 23;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox12_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox13->Location = System::Drawing::Point(215, 274);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(80, 20);
			this->textBox13->TabIndex = 24;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox14->Location = System::Drawing::Point(215, 314);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(80, 20);
			this->textBox14->TabIndex = 25;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::White;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox15->Location = System::Drawing::Point(215, 357);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(80, 20);
			this->textBox15->TabIndex = 26;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label13->Location = System::Drawing::Point(26, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(415, 32);
			this->label13->TabIndex = 27;
			this->label13->Text = L"������� ����������� ���������";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label14->Location = System::Drawing::Point(97, 227);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(278, 27);
			this->label14->TabIndex = 28;
			this->label14->Text = L"����� ������� ���������";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(32, 412);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 37);
			this->button1->TabIndex = 29;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(181, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 37);
			this->button2->TabIndex = 30;
			this->button2->Text = L"������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(329, 412);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 37);
			this->button3->TabIndex = 31;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::White;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox16->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox16->Location = System::Drawing::Point(461, 22);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox16->Size = System::Drawing::Size(258, 427);
			this->textBox16->TabIndex = 32;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(183, 386);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 20);
			this->checkBox1->TabIndex = 33;
			this->checkBox1->Text = L"��������� ";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(744, 469);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(760, 508);
			this->MinimumSize = System::Drawing::Size(760, 508);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox1->Text = L""; textBox2->Text = L"";	textBox3->Text = L""; textBox4->Text = L"";
	textBox5->Text = L""; textBox6->Text = L"";	textBox7->Text = L""; textBox8->Text = L"";
	textBox9->Text = L""; textBox10->Text = L""; textBox11->Text = L"";	textBox12->Text = L"";
	textBox13->Text = L""; textBox14->Text = L""; textBox15->Text = L""; textBox16->Text = L"";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox15->Text = L"";
	textBox14->Text = L"";
	textBox13->Text = L"";
	textBox16->Text = L"";

	int i, j, k;

	msclr::interop::marshal_context context;

	i = 0;
	int count = 0;
	std::string s = context.marshal_as<std::string>(textBox1->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if(s[i] == '+' || s[i] == '-')
		{ 
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else 
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	count = 0;
	s = context.marshal_as<std::string>(textBox2->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox3->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox4->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	count = 0;
	s = context.marshal_as<std::string>(textBox5->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox6->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox7->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox8->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}


	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox9->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}


	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox10->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}


	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox11->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}


	i = 0;
	 count = 0;
	s = context.marshal_as<std::string>(textBox12->Text);

	if (s[i] == '+' || s[i] == '-' || isdigit(s[i]))
	{
		if (isdigit(s[i]))
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
			if (count > 1)
			{
				MessageBox::Show("������������ ����!");
				return;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			for (int g = 0; g < s.size(); g++)
			{
				if (s[g] == ',')
				{
					count++;
				}
			}
			if (count > 1 || s[1] == ',')
			{
				MessageBox::Show("������������ ����!");
				return;
			}
			for (int g = 1; g < s.size(); g++)
			{
				if (s[g] == '+' || s[g] == '-')
				{
					MessageBox::Show("������������ ����!");
					return;
				}
			}
		}
		else
		{
			MessageBox::Show("������������ ����!");
			return;
		}
	}
	else
	{
		MessageBox::Show("������������ ����!");
		return;
	}

	
	const int n = 3;
	const int m = 4;

	double arr[n][m];
	double x[n];

	double x1 = System::Convert::ToDouble(textBox1->Text);
	double x2 = System::Convert::ToDouble(textBox2->Text);
	double x3 = System::Convert::ToDouble(textBox3->Text);
	double a = System::Convert::ToDouble(textBox4->Text);
	double xx1 = System::Convert::ToDouble(textBox5->Text);
	double xx2 = System::Convert::ToDouble(textBox6->Text);
	double xx3 = System::Convert::ToDouble(textBox7->Text);
	double b = System::Convert::ToDouble(textBox8->Text);
	double xxx1 = System::Convert::ToDouble(textBox9->Text);
	double xxx2 = System::Convert::ToDouble(textBox10->Text);
	double xxx3 = System::Convert::ToDouble(textBox11->Text);
	double c = System::Convert::ToDouble(textBox12->Text);

	arr[0][0] = x1;
	arr[0][1] = x2;
	arr[0][2] = x3;
	arr[0][3] = a;

	arr[1][0] = xx1;
	arr[1][1] = xx2;
	arr[1][2] = xx3;
	arr[1][3] = b;

	arr[2][0] = xxx1;
	arr[2][1] = xxx2;
	arr[2][2] = xxx3;
	arr[2][3] = c;

	for (i = 0; i < n; i++)                  
	{
		for (k = i + 1; k < n; k++)
		{
			double x, y;
			x = arr[i][i];
			y = arr[k][i];
			if (abs(x) < abs(y)) 
			{
				for (j = 0; j <= n; j++)
				{
					double temp = arr[i][j];
					arr[i][j] = arr[k][j];
					arr[k][j] = temp;
				}
			}
		}
	}

	for (i = 0; i < n - 1; i++)           
	{
		for (k = i + 1; k < n; k++)
		{
			double t = arr[k][i] / arr[i][i];
			for (j = 0; j <= n; j++)
				arr[k][j] = arr[k][j] - t * arr[i][j];    
		}
	}
	
	for (i = n - 1; i >= 0; i--)               
	{                       
		x[i] = arr[i][n];               
		for (j = i + 1; j < n; j++)
		{
			if (j != i)            
			{
				x[i] = x[i] - arr[i][j] * x[j];
			}
		}
		x[i] = x[i] / arr[i][i];           
	}

	if ((x[0] < 0 || x[0] > 0 || x[0] == 0) || 
		(x[1] < 0 || x[1] > 0 || x[1] == 0) || 
		(x[2] < 0 || x[2] > 0 || x[2] == 0))
	{
		arr[0][0] = x1;
		arr[0][1] = x2;
		arr[0][2] = x3;
		arr[0][3] = a;

		arr[1][0] = xx1;
		arr[1][1] = xx2;
		arr[1][2] = xx3;
		arr[1][3] = b;

		arr[2][0] = xxx1;
		arr[2][1] = xxx2;
		arr[2][2] = xxx3;
		arr[2][3] = c;

		textBox16->Text += "�������� �������: " + Environment::NewLine;
		for (i = 0; i < n; i++)          
		{
			for (j = 0; j <= n; j++)
			{
				textBox16->Text += " " + arr[i][j] + " ";
			}
			textBox16->Text += Environment::NewLine + Environment::NewLine;
		}

		for (i = 0; i < n; i++)             
		{
			for (k = i + 1; k < n; k++)
			{
				double x, y;
				x = arr[i][i];
				y = arr[k][i];
				if (abs(x) < abs(y))
					for (j = 0; j <= n; j++)
					{
						double temp = arr[i][j];
						arr[i][j] = arr[k][j];
						arr[k][j] = temp;
					}
			}
		}

		textBox16->Text += "��������������� �������: " + Environment::NewLine;
		for (i = 0; i < n; i++)         
		{
			for (j = 0; j <= n; j++)
			{
				textBox16->Text += " " + arr[i][j] + " ";
			}
			textBox16->Text += Environment::NewLine + Environment::NewLine;
		}

		for (i = 0; i < n - 1; i++)          
		{
			for (k = i + 1; k < n; k++)
			{
				double t = arr[k][i] / arr[i][i];
				for (j = 0; j <= n; j++)
				{
					arr[k][j] = arr[k][j] - t * arr[i][j];   
					if (okr == true)
						arr[k][j] = double(int(arr[k][j] * 10000.0)) / 10000.0;
				}
			}
		}

		textBox16->Text += "������� ����������� � ������������ ����: " + Environment::NewLine;
		for (i = 0; i < n; i++)           
		{
			for (j = 0; j <= n; j++)
			{
				textBox16->Text += " " + arr[i][j] + " ";
			}
			textBox16->Text += Environment::NewLine + Environment::NewLine;
		}
					
		textBox16->Text += "����� � ������� ��������� ���� �� ������� ������� ����� ���������: " + Environment::NewLine;

		for (i = n - 1; i >= 0; i--)        
		{                     
			x[i] = arr[i][n];      
			for (j = i + 1; j < n; j++)
			{
				if (j != i)  
				{
					x[i] = x[i] - arr[i][j] * x[j];
					if (okr == true)
						x[i] = double(int(x[i] * 10000.0)) / 10000.0;
				}
			}
			x[i] = x[i] / arr[i][i];          
			
			if (okr == true)
				x[i] = double(int(x[i] * 10000.0)) / 10000.0;
			
			textBox15->Text = L"";
			textBox14->Text = L"";
			textBox13->Text = L"";

			textBox13->Text += x[0];
			textBox14->Text += x[1];
			textBox15->Text += x[2];
		}

		for (i = 0; i < n; i++)
			textBox16->Text += "X" + (i + 1) + " = " + x[i] + Environment::NewLine;   
	}
	else 
	{
		MessageBox::Show("������� �� ����� ������������� �������", "��������");
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 &&  (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}

private: System::Void textBox9_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}
private: System::Void textBox12_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;

	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8 && (e->KeyChar <= 42 || e->KeyChar >= 46) && (e->KeyChar <= 39 || e->KeyChar >= 42))
		e->Handled = true;
}
private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox1->Checked)
	{
		MessageBox::Show("������� ����� ������������� � ���������� ���������� �� 4 ������ ����� �������. ������ �����������, ���� ����� ������� � ����� ����� ������ ����� �������, �� �������� ������ ���������� �������", "��������");
		okr = true;
	}
	else
	{
		MessageBox::Show("������� ����� ������������� ��� ���������� ����������", "��������");
		okr = false;
	}
}
};
}
