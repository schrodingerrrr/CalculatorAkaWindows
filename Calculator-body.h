#pragma once
#include <string> 
#include <math.h>
#include <windows.h>
int lastAction = 0;
/*
ID`s mean:
1 - "+"
2 - "-"
3 - "*"
4 - "/"
*/
double lastNumber = 0;
double lastAmount = 0;
bool newNumber = false;
bool ansOnce = true;

namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::TextBox^  output;
	private: System::Windows::Forms::Button^  deleteAll;
	private: System::Windows::Forms::Button^  deleteLast;
	private: System::Windows::Forms::Button^  btnNeProd;



	private: System::Windows::Forms::Button^  btnSqrt;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnProd;





	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnMinus;



	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btnPlus;








	private: System::Windows::Forms::Button^  btn3;

	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  btnAns;

	private: System::Windows::Forms::Button^  btn0;

	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  lblWarn;
















	protected: 

	protected: 

	protected: 

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
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->deleteAll = (gcnew System::Windows::Forms::Button());
			this->deleteLast = (gcnew System::Windows::Forms::Button());
			this->btnNeProd = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnProd = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->btnAns = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->lblWarn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::Color::Black;
			this->output->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->output->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->output->ForeColor = System::Drawing::Color::White;
			this->output->Location = System::Drawing::Point(12, 12);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(318, 68);
			this->output->TabIndex = 1;
			this->output->Text = L"0";
			this->output->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// deleteAll
			// 
			this->deleteAll->BackColor = System::Drawing::Color::DimGray;
			this->deleteAll->FlatAppearance->BorderSize = 0;
			this->deleteAll->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->deleteAll->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->deleteAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->deleteAll->ForeColor = System::Drawing::Color::White;
			this->deleteAll->Location = System::Drawing::Point(12, 410);
			this->deleteAll->Name = L"deleteAll";
			this->deleteAll->Size = System::Drawing::Size(75, 75);
			this->deleteAll->TabIndex = 1;
			this->deleteAll->Text = L"C";
			this->deleteAll->UseVisualStyleBackColor = false;
			this->deleteAll->Click += gcnew System::EventHandler(this, &Form1::deleteAll_Click);
			// 
			// deleteLast
			// 
			this->deleteLast->BackColor = System::Drawing::Color::Gainsboro;
			this->deleteLast->FlatAppearance->BorderSize = 0;
			this->deleteLast->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->deleteLast->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->deleteLast->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteLast->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold));
			this->deleteLast->ForeColor = System::Drawing::Color::Black;
			this->deleteLast->Location = System::Drawing::Point(12, 86);
			this->deleteLast->Name = L"deleteLast";
			this->deleteLast->Size = System::Drawing::Size(75, 75);
			this->deleteLast->TabIndex = 2;
			this->deleteLast->Text = L"←";
			this->deleteLast->UseVisualStyleBackColor = false;
			this->deleteLast->Click += gcnew System::EventHandler(this, &Form1::deleteLast_Click);
			// 
			// btnNeProd
			// 
			this->btnNeProd->BackColor = System::Drawing::Color::Orange;
			this->btnNeProd->FlatAppearance->BorderSize = 0;
			this->btnNeProd->FlatAppearance->CheckedBackColor = System::Drawing::Color::Orange;
			this->btnNeProd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnNeProd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnNeProd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNeProd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnNeProd->ForeColor = System::Drawing::Color::White;
			this->btnNeProd->Location = System::Drawing::Point(257, 86);
			this->btnNeProd->Name = L"btnNeProd";
			this->btnNeProd->Size = System::Drawing::Size(75, 75);
			this->btnNeProd->TabIndex = 3;
			this->btnNeProd->Text = L"÷";
			this->btnNeProd->UseVisualStyleBackColor = false;
			this->btnNeProd->Click += gcnew System::EventHandler(this, &Form1::btnNeProd_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::Color::Gainsboro;
			this->btnSqrt->FlatAppearance->BorderSize = 0;
			this->btnSqrt->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->btnSqrt->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->btnSqrt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnSqrt->ForeColor = System::Drawing::Color::Black;
			this->btnSqrt->Location = System::Drawing::Point(174, 86);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(75, 75);
			this->btnSqrt->TabIndex = 4;
			this->btnSqrt->Text = L"sqrt";
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &Form1::btnSqrt_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::DimGray;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn9->ForeColor = System::Drawing::Color::White;
			this->btn9->Location = System::Drawing::Point(174, 167);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 75);
			this->btn9->TabIndex = 8;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnProd
			// 
			this->btnProd->BackColor = System::Drawing::Color::Orange;
			this->btnProd->FlatAppearance->BorderSize = 0;
			this->btnProd->FlatAppearance->CheckedBackColor = System::Drawing::Color::Orange;
			this->btnProd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnProd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnProd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnProd->ForeColor = System::Drawing::Color::White;
			this->btnProd->Location = System::Drawing::Point(255, 167);
			this->btnProd->Name = L"btnProd";
			this->btnProd->Size = System::Drawing::Size(75, 75);
			this->btnProd->TabIndex = 7;
			this->btnProd->Text = L"x";
			this->btnProd->UseVisualStyleBackColor = false;
			this->btnProd->Click += gcnew System::EventHandler(this, &Form1::btnProd_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::DimGray;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn8->ForeColor = System::Drawing::Color::White;
			this->btn8->Location = System::Drawing::Point(93, 167);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 75);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::DimGray;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn7->ForeColor = System::Drawing::Color::White;
			this->btn7->Location = System::Drawing::Point(12, 167);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 75);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::DimGray;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn6->ForeColor = System::Drawing::Color::White;
			this->btn6->Location = System::Drawing::Point(174, 248);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 75);
			this->btn6->TabIndex = 12;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::Color::Orange;
			this->btnMinus->FlatAppearance->BorderSize = 0;
			this->btnMinus->FlatAppearance->CheckedBackColor = System::Drawing::Color::Orange;
			this->btnMinus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnMinus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnMinus->ForeColor = System::Drawing::Color::White;
			this->btnMinus->Location = System::Drawing::Point(255, 248);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(75, 75);
			this->btnMinus->TabIndex = 11;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::btnMinus_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::DimGray;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn5->ForeColor = System::Drawing::Color::White;
			this->btn5->Location = System::Drawing::Point(93, 248);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 75);
			this->btn5->TabIndex = 10;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::DimGray;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn4->ForeColor = System::Drawing::Color::White;
			this->btn4->Location = System::Drawing::Point(12, 248);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 75);
			this->btn4->TabIndex = 9;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::DimGray;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn1->ForeColor = System::Drawing::Color::White;
			this->btn1->Location = System::Drawing::Point(12, 329);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 75);
			this->btn1->TabIndex = 13;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::DimGray;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn2->ForeColor = System::Drawing::Color::White;
			this->btn2->Location = System::Drawing::Point(93, 329);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 75);
			this->btn2->TabIndex = 14;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::Orange;
			this->btnPlus->FlatAppearance->BorderSize = 0;
			this->btnPlus->FlatAppearance->CheckedBackColor = System::Drawing::Color::Orange;
			this->btnPlus->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnPlus->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnPlus->ForeColor = System::Drawing::Color::White;
			this->btnPlus->Location = System::Drawing::Point(255, 329);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(75, 75);
			this->btnPlus->TabIndex = 15;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::btnPlus_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::DimGray;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn3->ForeColor = System::Drawing::Color::White;
			this->btn3->Location = System::Drawing::Point(174, 329);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 75);
			this->btn3->TabIndex = 16;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DimGray;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(174, 410);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 75);
			this->button21->TabIndex = 20;
			this->button21->Text = L",";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// btnAns
			// 
			this->btnAns->BackColor = System::Drawing::Color::Orange;
			this->btnAns->FlatAppearance->BorderSize = 0;
			this->btnAns->FlatAppearance->CheckedBackColor = System::Drawing::Color::Orange;
			this->btnAns->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->btnAns->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnAns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAns->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnAns->ForeColor = System::Drawing::Color::White;
			this->btnAns->Location = System::Drawing::Point(255, 410);
			this->btnAns->Name = L"btnAns";
			this->btnAns->Size = System::Drawing::Size(75, 75);
			this->btnAns->TabIndex = 19;
			this->btnAns->Text = L"=";
			this->btnAns->UseVisualStyleBackColor = false;
			this->btnAns->Click += gcnew System::EventHandler(this, &Form1::btnAns_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::DimGray;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->btn0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btn0->ForeColor = System::Drawing::Color::White;
			this->btn0->Location = System::Drawing::Point(93, 410);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 75);
			this->btn0->TabIndex = 18;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Gainsboro;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::Color::Black;
			this->button24->Location = System::Drawing::Point(93, 86);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 75);
			this->button24->TabIndex = 17;
			this->button24->Text = L"1/x";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// lblWarn
			// 
			this->lblWarn->AutoSize = true;
			this->lblWarn->Location = System::Drawing::Point(67, 34);
			this->lblWarn->Name = L"lblWarn";
			this->lblWarn->Size = System::Drawing::Size(0, 17);
			this->lblWarn->TabIndex = 21;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuText;
			this->ClientSize = System::Drawing::Size(344, 500);
			this->Controls->Add(this->lblWarn);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->btnAns);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnProd);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnNeProd);
			this->Controls->Add(this->deleteAll);
			this->Controls->Add(this->output);
			this->Controls->Add(this->deleteLast);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Калькулятор";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "1";
				 output->SelectionStart = output->Text->Length;
			 } else {
				 if (newNumber) {
					 output->Text = "1";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"1");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "2";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "2";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"2");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "3";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "3";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"3");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "4";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "4";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"4");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "5";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "5";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"5");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "6";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "6";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"6");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "7";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "7";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"7");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "8";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "8";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"8");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text == "0") {
				 output->Text = "9";
				 output->SelectionStart = output->Text->Length;
			 } else {
			 if (newNumber) {
					 output->Text = "9";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"9");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if (output->Text != "0") {
				 if (newNumber) {
					 output->Text = "0";
					 newNumber = false;
				 } else {
					 output->Text = output->Text->Concat(output->Text,"0");
					 output->SelectionStart = output->Text->Length;
				 }
			 }
		 }
private: System::Void deleteAll_Click(System::Object^  sender, System::EventArgs^  e) {
			 output->Text = "0";
			 lastAmount = 0;
			 lastNumber = 0;
			 lastAction = 0;
			 //lblWarnText = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void deleteLast_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 int txtLength = output->Text->Length;
			 if (txtLength > 1) {
				 output->Text = output->Text->Remove(txtLength-1);
			 } else {
				 output->Text = "0";
			 }
		 }
private: System::Void btnSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 int txtLength = output->Text->Length;
			 if (txtLength > 0) {
				 try {
					 double number = Convert::ToDouble(output->Text);
					 output->Text = Convert::ToString(sqrt(number));
				 } catch (...) {//lblWarnText = "Ошибка при выполнение SQRT";
				 }
			 }
		 }
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			int txtLength = output->Text->Length;
			 if (txtLength > 0) {
				 try {
					 double number = Convert::ToDouble(output->Text);
					 if (number == 0) {
						 output->Text = "Ошибка.";
					 } else {
						 output->Text = Convert::ToString(1/number);
					 }
				 } catch (...) {//lblWarnText = "Ошибка при выполнение 1/x";
				 }
			 }
		 }
private: System::Void btnPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 //Show to output
			 lastNumber = Convert::ToDouble(output->Text);
			 if (ansOnce) {
				 switch (lastAction) {
					 case 1:
						 output->Text = Convert::ToString(lastAmount + lastNumber);
						 break;
					 case 2:
						 output->Text = Convert::ToString(lastAmount - lastNumber);
						 break;
					 case 3:
						 output->Text = Convert::ToString(lastAmount * lastNumber);
						 break;
					 case 4:
						 if (lastAmount != 0) {
							 output->Text = Convert::ToString(lastAmount / lastNumber);
						 } else {
							 output->Text = "Ошибка.";
						 }
						 break;
				 }
			 }
			 //Save to numbers and actions to memory
			 ansOnce = true;
			 try { lastAmount = Convert::ToDouble(output->Text); } catch (...) {}
			 lastAction = 1; // "+"
			 newNumber = true;
			 //lblWarnText = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void btnAns_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 //Show to output
			 if (ansOnce) {
				 lastNumber = Convert::ToDouble(output->Text);
			 }
			 switch (lastAction) {
				 case 1:
					 output->Text = Convert::ToString(lastAmount + lastNumber);
					 break;
				 case 2:
					 output->Text = Convert::ToString(lastAmount - lastNumber);
					 break;
				 case 3:
					 output->Text = Convert::ToString(lastAmount * lastNumber);
					 break;
				 case 4:
					 if (lastAmount != 0) {
							 output->Text = Convert::ToString(lastAmount / lastNumber);
						 } else {
							 output->Text = "Ошибка.";
						 }
					 break;
			 }
			 //Save to numbers and actions to memory
			 try { lastAmount = Convert::ToDouble(output->Text); } catch (...) {}
			 //lastNumber = currentNumber;
			 ansOnce = false;
			 //lblWarnText = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void btnMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 //Show to output
			 lastNumber = Convert::ToDouble(output->Text);
			 if (ansOnce) {
				 switch (lastAction) {
					 case 1:
						 output->Text = Convert::ToString(lastAmount + lastNumber);
						 break;
					 case 2:
						 output->Text = Convert::ToString(lastAmount - lastNumber);
						 break;
					 case 3:
						 output->Text = Convert::ToString(lastAmount * lastNumber);
						 break;
					 case 4:
						 if (lastAmount != 0) {
							 output->Text = Convert::ToString(lastAmount / lastNumber);
						 } else {
							 output->Text = "Ошибка.";
						 }
						 break;
				 }
			 }
			 //Save to numbers and actions to memory
			 ansOnce = true;
			 try { lastAmount = Convert::ToDouble(output->Text); } catch (...) {}
			 lastAction = 2; // "-"
			 newNumber = true;
			 //lblWarnText = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void btnProd_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 //Show to output
			 lastNumber = Convert::ToDouble(output->Text);
			 if (ansOnce) {
				 switch (lastAction) {
					 case 1:
						 output->Text = Convert::ToString(lastAmount + lastNumber);
						 break;
					 case 2:
						 output->Text = Convert::ToString(lastAmount - lastNumber);
						 break;
					 case 3:
						 output->Text = Convert::ToString(lastAmount * lastNumber);
						 break;
					 case 4:
						 if (lastAmount != 0) {
							 output->Text = Convert::ToString(lastAmount / lastNumber);
						 } else {
							 output->Text = "Ошибка.";
						 }
						 break;
				 }
			 }
			 //Save to numbers and actions to memory
			 ansOnce = true;
			 try { lastAmount = Convert::ToDouble(output->Text); } catch (...) {}
			 lastAction = 3; // "*"
			 newNumber = true;
			 //lblWarnText = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void btnNeProd_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 //Show to output
			 lastNumber = Convert::ToDouble(output->Text);
			 if (ansOnce) {
				 switch (lastAction) {
					 case 1:
						 output->Text = Convert::ToString(lastAmount + lastNumber);
						 break;
					 case 2:
						 output->Text = Convert::ToString(lastAmount - lastNumber);
						 break;
					 case 3:
						 output->Text = Convert::ToString(lastAmount * lastNumber);
						 break;
					 case 4:
						 if (lastAmount != 0) {
							 output->Text = Convert::ToString(lastAmount / lastNumber);
						 } else {
							 output->Text = "Ошибка.";
						 }
						 break;
				 }
			 }
			 //Save to numbers and actions to memory
			 ansOnce = true;
			 try { lastAmount = Convert::ToDouble(output->Text); } catch (...) {}
			 lastAction = 4; // "/"
			 newNumber = true;
			 //lblWarn->Text = "lastNumber: " + lastNumber + "\nlastAmount: " + lastAmount + "\nlastAction:" + lastAction;
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (output->Text->IndexOf("Ошибка") > -1) {
				 output->Text = "0";
			 }
			 if ((output->Text == "0")||(newNumber)) {
				 output->Text = "0,";
				 newNumber = false;
			 } else if (output->Text->IndexOf(",") == -1) {
				 output->Text = output->Text->Concat(output->Text, ",");
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

