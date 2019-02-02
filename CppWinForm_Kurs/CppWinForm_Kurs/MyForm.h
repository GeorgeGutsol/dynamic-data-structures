#pragma once
#include "Header.h"
namespace CppWinForm_Kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_firstDD;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox_SecondMM;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox_SecondDD;
	private: System::Windows::Forms::Button^  button_Analiz;
	private: System::Windows::Forms::DataGridView^  dataGridView_Ponedel;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::Label^  label_Pon;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  считатьДанныеToolStripMenuItem;
	private: System::Windows::Forms::Label^  label_Vt;
	private: System::Windows::Forms::DataGridView^  dataGridView_Vtorn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::Label^  label_SR;
	private: System::Windows::Forms::DataGridView^  dataGridView_Sred;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::Label^  label_Чт;
	private: System::Windows::Forms::DataGridView^  dataGridView_Chetverg;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridView^  dataGridView_Pyatn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::Label^  label_Pt;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьДанныеВручнуюToolStripMenuItem;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_kode;
	private: System::Windows::Forms::ListBox^  listBox_Grups;
	private: System::Windows::Forms::Button^  button_ChoiceGroup;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox_audit;
	private: System::Windows::Forms::Button^  button_den;
	private: System::Windows::Forms::ListBox^  listBox_den;
	private: System::Windows::Forms::Button^  button_time;
	private: System::Windows::Forms::ListBox^  listBox_time;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox_Time;
	private: System::Windows::Forms::TextBox^  textBox_Den;
	private: System::Windows::Forms::TextBox^  textBox_audit;

	private: System::Windows::Forms::Button^  button_addRasp;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button_Rasp;
	private: System::Windows::Forms::ListBox^  listBox_Rasp;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::TextBox^  textBox_Month;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  textBox_Chis;
private: System::Windows::Forms::TextBox^  textBox_Kolvo;


	private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  textBox_Gr;
private: System::Windows::Forms::TextBox^  textBox_Rasp;
private: System::Windows::Forms::Button^  button_AddPos;
private: System::Windows::Forms::Button^  button_Сортировать;
private: System::Windows::Forms::TextBox^  textBox_Sort;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::ToolStripMenuItem^  закрытьToolStripMenuItem;








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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox_firstDD = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_SecondMM = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_SecondDD = (gcnew System::Windows::Forms::TextBox());
			this->button_Analiz = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Ponedel = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_Pon = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->считатьДанныеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьДанныеВручнуюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_Vt = (gcnew System::Windows::Forms::Label());
			this->dataGridView_Vtorn = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_SR = (gcnew System::Windows::Forms::Label());
			this->dataGridView_Sred = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_Чт = (gcnew System::Windows::Forms::Label());
			this->dataGridView_Chetverg = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView_Pyatn = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label_Pt = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_kode = (gcnew System::Windows::Forms::TextBox());
			this->listBox_Grups = (gcnew System::Windows::Forms::ListBox());
			this->button_ChoiceGroup = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox_audit = (gcnew System::Windows::Forms::ListBox());
			this->button_den = (gcnew System::Windows::Forms::Button());
			this->listBox_den = (gcnew System::Windows::Forms::ListBox());
			this->button_time = (gcnew System::Windows::Forms::Button());
			this->listBox_time = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_Time = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Den = (gcnew System::Windows::Forms::TextBox());
			this->textBox_audit = (gcnew System::Windows::Forms::TextBox());
			this->button_addRasp = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_Rasp = (gcnew System::Windows::Forms::Button());
			this->listBox_Rasp = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox_Month = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_Chis = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Kolvo = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_Gr = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Rasp = (gcnew System::Windows::Forms::TextBox());
			this->button_AddPos = (gcnew System::Windows::Forms::Button());
			this->button_Сортировать = (gcnew System::Windows::Forms::Button());
			this->textBox_Sort = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Ponedel))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Vtorn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Sred))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Chetverg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Pyatn))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox_firstDD
			// 
			this->textBox_firstDD->Location = System::Drawing::Point(204, 51);
			this->textBox_firstDD->Name = L"textBox_firstDD";
			this->textBox_firstDD->Size = System::Drawing::Size(43, 20);
			this->textBox_firstDD->TabIndex = 0;
			this->textBox_firstDD->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_firstDD_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите период:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(200, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"число";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(169, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"с";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(256, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 19);
			this->label5->TabIndex = 6;
			this->label5->Text = L"по";
			// 
			// textBox_SecondMM
			// 
			this->textBox_SecondMM->Location = System::Drawing::Point(356, 51);
			this->textBox_SecondMM->Name = L"textBox_SecondMM";
			this->textBox_SecondMM->Size = System::Drawing::Size(43, 20);
			this->textBox_SecondMM->TabIndex = 10;
			this->textBox_SecondMM->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_SecondMM_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(352, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 19);
			this->label6->TabIndex = 9;
			this->label6->Text = L"месяц";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(290, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 19);
			this->label7->TabIndex = 8;
			this->label7->Text = L"число";
			// 
			// textBox_SecondDD
			// 
			this->textBox_SecondDD->Location = System::Drawing::Point(296, 51);
			this->textBox_SecondDD->Name = L"textBox_SecondDD";
			this->textBox_SecondDD->Size = System::Drawing::Size(43, 20);
			this->textBox_SecondDD->TabIndex = 7;
			this->textBox_SecondDD->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_SecondDD_TextChanged);
			// 
			// button_Analiz
			// 
			this->button_Analiz->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Analiz->Location = System::Drawing::Point(432, 35);
			this->button_Analiz->Name = L"button_Analiz";
			this->button_Analiz->Size = System::Drawing::Size(133, 33);
			this->button_Analiz->TabIndex = 11;
			this->button_Analiz->Text = L"Анализировать";
			this->button_Analiz->UseVisualStyleBackColor = true;
			this->button_Analiz->Click += gcnew System::EventHandler(this, &MyForm::button_Analiz_Click);
			// 
			// dataGridView_Ponedel
			// 
			this->dataGridView_Ponedel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Ponedel->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView_Ponedel->Location = System::Drawing::Point(246, 110);
			this->dataGridView_Ponedel->Name = L"dataGridView_Ponedel";
			this->dataGridView_Ponedel->ReadOnly = true;
			this->dataGridView_Ponedel->Size = System::Drawing::Size(644, 186);
			this->dataGridView_Ponedel->TabIndex = 12;
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"Аудитории\\Время";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"8:00";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"10:00";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"12:00";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"14:00";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"16:00";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// label_Pon
			// 
			this->label_Pon->AutoSize = true;
			this->label_Pon->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pon->Location = System::Drawing::Point(72, 110);
			this->label_Pon->Name = L"label_Pon";
			this->label_Pon->Size = System::Drawing::Size(99, 19);
			this->label_Pon->TabIndex = 13;
			this->label_Pon->Text = L"Понедельник";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->считатьДанныеToolStripMenuItem,
					this->добавитьДанныеВручнуюToolStripMenuItem, this->закрытьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(924, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// считатьДанныеToolStripMenuItem
			// 
			this->считатьДанныеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->считатьДанныеToolStripMenuItem->Name = L"считатьДанныеToolStripMenuItem";
			this->считатьДанныеToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->считатьДанныеToolStripMenuItem->Text = L"Считать данные";
			this->считатьДанныеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::считатьДанныеToolStripMenuItem_Click);
			// 
			// добавитьДанныеВручнуюToolStripMenuItem
			// 
			this->добавитьДанныеВручнуюToolStripMenuItem->Enabled = false;
			this->добавитьДанныеВручнуюToolStripMenuItem->Name = L"добавитьДанныеВручнуюToolStripMenuItem";
			this->добавитьДанныеВручнуюToolStripMenuItem->Size = System::Drawing::Size(167, 20);
			this->добавитьДанныеВручнуюToolStripMenuItem->Text = L"Добавить данные вручную";
			this->добавитьДанныеВручнуюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::добавитьДанныеВручнуюToolStripMenuItem_Click);
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::закрытьToolStripMenuItem_Click);
			// 
			// label_Vt
			// 
			this->label_Vt->AutoSize = true;
			this->label_Vt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Vt->Location = System::Drawing::Point(103, 293);
			this->label_Vt->Name = L"label_Vt";
			this->label_Vt->Size = System::Drawing::Size(67, 19);
			this->label_Vt->TabIndex = 15;
			this->label_Vt->Text = L"Вторник";
			// 
			// dataGridView_Vtorn
			// 
			this->dataGridView_Vtorn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Vtorn->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->dataGridView_Vtorn->Location = System::Drawing::Point(246, 293);
			this->dataGridView_Vtorn->Name = L"dataGridView_Vtorn";
			this->dataGridView_Vtorn->ReadOnly = true;
			this->dataGridView_Vtorn->Size = System::Drawing::Size(644, 186);
			this->dataGridView_Vtorn->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn1
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Аудитории\\Время";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"8:00";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"10:00";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"12:00";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"14:00";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"16:00";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			// 
			// label_SR
			// 
			this->label_SR->AutoSize = true;
			this->label_SR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_SR->Location = System::Drawing::Point(103, 475);
			this->label_SR->Name = L"label_SR";
			this->label_SR->Size = System::Drawing::Size(50, 19);
			this->label_SR->TabIndex = 17;
			this->label_SR->Text = L"Среда";
			// 
			// dataGridView_Sred
			// 
			this->dataGridView_Sred->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Sred->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11,
					this->dataGridViewTextBoxColumn12
			});
			this->dataGridView_Sred->Location = System::Drawing::Point(246, 475);
			this->dataGridView_Sred->Name = L"dataGridView_Sred";
			this->dataGridView_Sred->ReadOnly = true;
			this->dataGridView_Sred->Size = System::Drawing::Size(644, 186);
			this->dataGridView_Sred->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn7
			// 
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn7->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewTextBoxColumn7->HeaderText = L"Аудитории\\Время";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"8:00";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"10:00";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"12:00";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"14:00";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"16:00";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// label_Чт
			// 
			this->label_Чт->AutoSize = true;
			this->label_Чт->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Чт->Location = System::Drawing::Point(103, 658);
			this->label_Чт->Name = L"label_Чт";
			this->label_Чт->Size = System::Drawing::Size(62, 19);
			this->label_Чт->TabIndex = 19;
			this->label_Чт->Text = L"Четверг";
			// 
			// dataGridView_Chetverg
			// 
			this->dataGridView_Chetverg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Chetverg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18
			});
			this->dataGridView_Chetverg->Location = System::Drawing::Point(246, 658);
			this->dataGridView_Chetverg->Name = L"dataGridView_Chetverg";
			this->dataGridView_Chetverg->ReadOnly = true;
			this->dataGridView_Chetverg->Size = System::Drawing::Size(644, 186);
			this->dataGridView_Chetverg->TabIndex = 20;
			// 
			// dataGridViewTextBoxColumn13
			// 
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn13->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewTextBoxColumn13->HeaderText = L"Аудитории\\Время";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"8:00";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"10:00";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"12:00";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"14:00";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"16:00";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			// 
			// dataGridView_Pyatn
			// 
			this->dataGridView_Pyatn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Pyatn->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn19,
					this->dataGridViewTextBoxColumn20, this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23,
					this->dataGridViewTextBoxColumn24
			});
			this->dataGridView_Pyatn->Location = System::Drawing::Point(246, 840);
			this->dataGridView_Pyatn->Name = L"dataGridView_Pyatn";
			this->dataGridView_Pyatn->ReadOnly = true;
			this->dataGridView_Pyatn->Size = System::Drawing::Size(644, 201);
			this->dataGridView_Pyatn->TabIndex = 21;
			// 
			// dataGridViewTextBoxColumn19
			// 
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn19->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewTextBoxColumn19->HeaderText = L"Аудитории\\Время";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"8:00";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			this->dataGridViewTextBoxColumn20->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"10:00";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			this->dataGridViewTextBoxColumn21->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"12:00";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			this->dataGridViewTextBoxColumn22->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"14:00";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			this->dataGridViewTextBoxColumn23->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"16:00";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			this->dataGridViewTextBoxColumn24->ReadOnly = true;
			// 
			// label_Pt
			// 
			this->label_Pt->AutoSize = true;
			this->label_Pt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pt->Location = System::Drawing::Point(103, 840);
			this->label_Pt->Name = L"label_Pt";
			this->label_Pt->Size = System::Drawing::Size(68, 19);
			this->label_Pt->TabIndex = 22;
			this->label_Pt->Text = L"Пятница";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(959, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 19);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Добавить расписание для группы";
			// 
			// textBox_kode
			// 
			this->textBox_kode->Location = System::Drawing::Point(963, 99);
			this->textBox_kode->Name = L"textBox_kode";
			this->textBox_kode->Size = System::Drawing::Size(65, 20);
			this->textBox_kode->TabIndex = 24;
			this->textBox_kode->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_kode_TextChanged);
			// 
			// listBox_Grups
			// 
			this->listBox_Grups->Enabled = false;
			this->listBox_Grups->FormattingEnabled = true;
			this->listBox_Grups->Location = System::Drawing::Point(1046, 123);
			this->listBox_Grups->Name = L"listBox_Grups";
			this->listBox_Grups->Size = System::Drawing::Size(107, 121);
			this->listBox_Grups->TabIndex = 25;
			this->listBox_Grups->Visible = false;
			this->listBox_Grups->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_Grups_MouseDoubleClick);
			// 
			// button_ChoiceGroup
			// 
			this->button_ChoiceGroup->Location = System::Drawing::Point(1046, 82);
			this->button_ChoiceGroup->Name = L"button_ChoiceGroup";
			this->button_ChoiceGroup->Size = System::Drawing::Size(107, 37);
			this->button_ChoiceGroup->TabIndex = 26;
			this->button_ChoiceGroup->Text = L"Выбрать группу";
			this->button_ChoiceGroup->UseVisualStyleBackColor = true;
			this->button_ChoiceGroup->Click += gcnew System::EventHandler(this, &MyForm::button_ChoiceGroup_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1168, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 37);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Выбрать аудиторию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox_audit
			// 
			this->listBox_audit->Enabled = false;
			this->listBox_audit->FormattingEnabled = true;
			this->listBox_audit->Location = System::Drawing::Point(1168, 123);
			this->listBox_audit->Name = L"listBox_audit";
			this->listBox_audit->Size = System::Drawing::Size(107, 121);
			this->listBox_audit->TabIndex = 28;
			this->listBox_audit->Visible = false;
			this->listBox_audit->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_audit_MouseDoubleClick);
			// 
			// button_den
			// 
			this->button_den->Location = System::Drawing::Point(1290, 82);
			this->button_den->Name = L"button_den";
			this->button_den->Size = System::Drawing::Size(107, 37);
			this->button_den->TabIndex = 29;
			this->button_den->Text = L"День недели";
			this->button_den->UseVisualStyleBackColor = true;
			this->button_den->Click += gcnew System::EventHandler(this, &MyForm::button_den_Click);
			// 
			// listBox_den
			// 
			this->listBox_den->Enabled = false;
			this->listBox_den->FormattingEnabled = true;
			this->listBox_den->Location = System::Drawing::Point(1290, 125);
			this->listBox_den->Name = L"listBox_den";
			this->listBox_den->Size = System::Drawing::Size(107, 121);
			this->listBox_den->TabIndex = 30;
			this->listBox_den->Visible = false;
			this->listBox_den->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_den_MouseDoubleClick);
			// 
			// button_time
			// 
			this->button_time->Location = System::Drawing::Point(1412, 82);
			this->button_time->Name = L"button_time";
			this->button_time->Size = System::Drawing::Size(107, 37);
			this->button_time->TabIndex = 31;
			this->button_time->Text = L"Время";
			this->button_time->UseVisualStyleBackColor = true;
			this->button_time->Click += gcnew System::EventHandler(this, &MyForm::button_time_Click);
			// 
			// listBox_time
			// 
			this->listBox_time->Enabled = false;
			this->listBox_time->FormattingEnabled = true;
			this->listBox_time->Location = System::Drawing::Point(1412, 123);
			this->listBox_time->Name = L"listBox_time";
			this->listBox_time->Size = System::Drawing::Size(107, 121);
			this->listBox_time->TabIndex = 32;
			this->listBox_time->Visible = false;
			this->listBox_time->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_time_MouseDoubleClick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(970, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 19);
			this->label8->TabIndex = 33;
			this->label8->Text = L"Код";
			// 
			// textBox_Time
			// 
			this->textBox_Time->Enabled = false;
			this->textBox_Time->Location = System::Drawing::Point(1412, 125);
			this->textBox_Time->Name = L"textBox_Time";
			this->textBox_Time->Size = System::Drawing::Size(107, 20);
			this->textBox_Time->TabIndex = 36;
			this->textBox_Time->Visible = false;
			this->textBox_Time->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Time_TextChanged);
			// 
			// textBox_Den
			// 
			this->textBox_Den->Enabled = false;
			this->textBox_Den->Location = System::Drawing::Point(1290, 125);
			this->textBox_Den->Name = L"textBox_Den";
			this->textBox_Den->Size = System::Drawing::Size(107, 20);
			this->textBox_Den->TabIndex = 37;
			this->textBox_Den->Visible = false;
			this->textBox_Den->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Den_TextChanged);
			// 
			// textBox_audit
			// 
			this->textBox_audit->Enabled = false;
			this->textBox_audit->Location = System::Drawing::Point(1168, 125);
			this->textBox_audit->Name = L"textBox_audit";
			this->textBox_audit->Size = System::Drawing::Size(107, 20);
			this->textBox_audit->TabIndex = 35;
			this->textBox_audit->Visible = false;
			this->textBox_audit->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_audit_TextChanged);
			// 
			// button_addRasp
			// 
			this->button_addRasp->Enabled = false;
			this->button_addRasp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_addRasp->Location = System::Drawing::Point(1214, 38);
			this->button_addRasp->Name = L"button_addRasp";
			this->button_addRasp->Size = System::Drawing::Size(133, 33);
			this->button_addRasp->TabIndex = 38;
			this->button_addRasp->Text = L"Добавить";
			this->button_addRasp->UseVisualStyleBackColor = true;
			this->button_addRasp->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(959, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(310, 19);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Добавить посещаемость по коду расписания";
			// 
			// button_Rasp
			// 
			this->button_Rasp->Location = System::Drawing::Point(963, 309);
			this->button_Rasp->Name = L"button_Rasp";
			this->button_Rasp->Size = System::Drawing::Size(107, 37);
			this->button_Rasp->TabIndex = 40;
			this->button_Rasp->Text = L"Выбрать расписание";
			this->button_Rasp->UseVisualStyleBackColor = true;
			this->button_Rasp->Click += gcnew System::EventHandler(this, &MyForm::button_Rasp_Click);
			// 
			// listBox_Rasp
			// 
			this->listBox_Rasp->Enabled = false;
			this->listBox_Rasp->FormattingEnabled = true;
			this->listBox_Rasp->Location = System::Drawing::Point(963, 358);
			this->listBox_Rasp->Name = L"listBox_Rasp";
			this->listBox_Rasp->Size = System::Drawing::Size(107, 121);
			this->listBox_Rasp->TabIndex = 41;
			this->listBox_Rasp->Visible = false;
			this->listBox_Rasp->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_Rasp_MouseDoubleClick);
			// 
			// listBox2
			// 
			this->listBox2->Enabled = false;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(1844, 633);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(107, 121);
			this->listBox2->TabIndex = 46;
			this->listBox2->Visible = false;
			// 
			// textBox_Month
			// 
			this->textBox_Month->Location = System::Drawing::Point(1154, 326);
			this->textBox_Month->Name = L"textBox_Month";
			this->textBox_Month->Size = System::Drawing::Size(43, 20);
			this->textBox_Month->TabIndex = 45;
			this->textBox_Month->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Month_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1148, 301);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 19);
			this->label10->TabIndex = 44;
			this->label10->Text = L"месяц";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1081, 301);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 19);
			this->label11->TabIndex = 43;
			this->label11->Text = L"число";
			// 
			// textBox_Chis
			// 
			this->textBox_Chis->Location = System::Drawing::Point(1085, 326);
			this->textBox_Chis->Name = L"textBox_Chis";
			this->textBox_Chis->Size = System::Drawing::Size(43, 20);
			this->textBox_Chis->TabIndex = 42;
			this->textBox_Chis->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Chis_TextChanged);
			// 
			// textBox_Kolvo
			// 
			this->textBox_Kolvo->Location = System::Drawing::Point(1224, 326);
			this->textBox_Kolvo->Name = L"textBox_Kolvo";
			this->textBox_Kolvo->Size = System::Drawing::Size(75, 20);
			this->textBox_Kolvo->TabIndex = 47;
			this->textBox_Kolvo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Kolvo_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1220, 301);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 19);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Количество";
			// 
			// textBox_Gr
			// 
			this->textBox_Gr->Enabled = false;
			this->textBox_Gr->Location = System::Drawing::Point(1046, 125);
			this->textBox_Gr->Name = L"textBox_Gr";
			this->textBox_Gr->Size = System::Drawing::Size(107, 20);
			this->textBox_Gr->TabIndex = 34;
			this->textBox_Gr->Visible = false;
			this->textBox_Gr->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Gr_TextChanged);
			// 
			// textBox_Rasp
			// 
			this->textBox_Rasp->Enabled = false;
			this->textBox_Rasp->Location = System::Drawing::Point(963, 358);
			this->textBox_Rasp->Name = L"textBox_Rasp";
			this->textBox_Rasp->Size = System::Drawing::Size(107, 20);
			this->textBox_Rasp->TabIndex = 49;
			this->textBox_Rasp->Visible = false;
			this->textBox_Rasp->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_Rasp_TextChanged);
			// 
			// button_AddPos
			// 
			this->button_AddPos->Enabled = false;
			this->button_AddPos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_AddPos->Location = System::Drawing::Point(1290, 265);
			this->button_AddPos->Name = L"button_AddPos";
			this->button_AddPos->Size = System::Drawing::Size(133, 33);
			this->button_AddPos->TabIndex = 50;
			this->button_AddPos->Text = L"Добавить";
			this->button_AddPos->UseVisualStyleBackColor = true;
			this->button_AddPos->Click += gcnew System::EventHandler(this, &MyForm::button_AddPos_Click);
			// 
			// button_Сортировать
			// 
			this->button_Сортировать->Enabled = false;
			this->button_Сортировать->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_Сортировать->Location = System::Drawing::Point(581, 35);
			this->button_Сортировать->Name = L"button_Сортировать";
			this->button_Сортировать->Size = System::Drawing::Size(109, 33);
			this->button_Сортировать->TabIndex = 51;
			this->button_Сортировать->Text = L"Сортировать";
			this->button_Сортировать->UseVisualStyleBackColor = true;
			this->button_Сортировать->Click += gcnew System::EventHandler(this, &MyForm::button_Сортировать_Click);
			// 
			// textBox_Sort
			// 
			this->textBox_Sort->Location = System::Drawing::Point(731, 43);
			this->textBox_Sort->Name = L"textBox_Sort";
			this->textBox_Sort->Size = System::Drawing::Size(43, 20);
			this->textBox_Sort->TabIndex = 52;
			this->textBox_Sort->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(699, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 19);
			this->label13->TabIndex = 53;
			this->label13->Text = L"по";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(795, 43);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 19);
			this->label14->TabIndex = 54;
			this->label14->Text = L"часам";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1290, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 33);
			this->button2->TabIndex = 55;
			this->button2->Text = L"<<Скрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(924, 1053);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox_Sort);
			this->Controls->Add(this->button_Сортировать);
			this->Controls->Add(this->button_AddPos);
			this->Controls->Add(this->textBox_Rasp);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox_Kolvo);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->textBox_Month);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox_Chis);
			this->Controls->Add(this->listBox_Rasp);
			this->Controls->Add(this->button_Rasp);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button_addRasp);
			this->Controls->Add(this->textBox_Den);
			this->Controls->Add(this->textBox_Time);
			this->Controls->Add(this->textBox_audit);
			this->Controls->Add(this->textBox_Gr);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox_time);
			this->Controls->Add(this->button_time);
			this->Controls->Add(this->listBox_den);
			this->Controls->Add(this->button_den);
			this->Controls->Add(this->listBox_audit);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_ChoiceGroup);
			this->Controls->Add(this->listBox_Grups);
			this->Controls->Add(this->textBox_kode);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_Pt);
			this->Controls->Add(this->dataGridView_Pyatn);
			this->Controls->Add(this->dataGridView_Chetverg);
			this->Controls->Add(this->label_Чт);
			this->Controls->Add(this->dataGridView_Sred);
			this->Controls->Add(this->label_SR);
			this->Controls->Add(this->dataGridView_Vtorn);
			this->Controls->Add(this->label_Vt);
			this->Controls->Add(this->label_Pon);
			this->Controls->Add(this->dataGridView_Ponedel);
			this->Controls->Add(this->button_Analiz);
			this->Controls->Add(this->textBox_SecondMM);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_SecondDD);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_firstDD);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Курсовая";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Ponedel))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Vtorn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Sred))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Chetverg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Pyatn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		s_Auditory* s_auHead = new s_Auditory;
		s_Auditory* s_au = new s_Auditory;
		s_Gruppa* s_grHead = new s_Gruppa;
		s_Gruppa* s_gr = new s_Gruppa;
		s_Raspisanie* s_raspHead = new s_Raspisanie;
		s_Raspisanie* s_rasp = new s_Raspisanie;
		s_Posechaemost* s_posHead = new s_Posechaemost;
		s_Posechaemost* s_pos = new s_Posechaemost;
		s_Analyz* analyzHead = new s_Analyz;
		s_Analyz* an = new s_Analyz;
		int selGr, selAu, selTime,  kod_r;
		bool check6 = false, check7 = false, check8 = false, check9 = false, check10 = false, check11 = false, check12 = false, check13 = false, check14 = false;
		bool check1 = false, check2 = false, check3 = false, check4 = false, check5 = false, check15 = false;
private: System::Void button_Analiz_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView_Ponedel->Rows->Clear();
	dataGridView_Vtorn->Rows->Clear();
	dataGridView_Sred->Rows->Clear();
	dataGridView_Chetverg->Rows->Clear();
	dataGridView_Pyatn->Rows->Clear();
	int dd=0, dd1=0;
	int mm = 0;
	if (check5)
	{
		if (check3&&check1&&check4)
		{
			dd = Convert::ToInt32(textBox_firstDD->Text);
			dd1 = Convert::ToInt32(textBox_SecondDD->Text);
			mm = Convert::ToInt32(textBox_SecondMM->Text);
			if (dd == dd1)
			{
				
					for (int i = 8; i <= 16; i = i + 2)
					{
						s_au = s_auHead;
						s_au = s_au->next;
						while (s_au != s_auHead)
						{
							s_pos = s_posHead;
							Analyzirovat(s_pos, s_au->data.nomer_a, dd, mm, i, an);
							s_au = s_au->next;
						}
					}
				
				check2 = true;
			}
			else for (dd; dd <= dd1; dd++)
			{
				for (int i = 8; i <= 16; i = i + 2)
				{
					s_au = s_auHead;
					s_au = s_au->next;
					while (s_au != s_auHead)
					{
						s_pos = s_posHead;
						Analyzirovat(s_pos, s_au->data.nomer_a, dd, mm, i, an);
						s_au = s_au->next;
					}
				}
			}
			check2 = true;
		}
		else MessageBox::Show("Вы не указали период. ВВедите данные.");
		if (check2)
		{
			an = analyzHead;
			an = an->next;
			int t = 0;
			int v = 0;
			int c = 0;
			int h = 0;
			int g = 0;
			while (an != analyzHead)
			{
				if (an->data.den[0] == 'П' && an->data.den[1] == 'о' && an->data.den[2] == 'н')
				{
					label_Pon->Text = "Понедельник " + an->data.dd + " " + an->data.mm;
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Ponedel->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Ponedel->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Ponedel->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Ponedel->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Ponedel->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Ponedel->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Ponedel->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Ponedel->Rows->Add();
						dataGridView_Ponedel->Rows[t]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Ponedel->Rows[t]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Ponedel->Rows[t]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Ponedel->Rows[t]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Ponedel->Rows[t]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Ponedel->Rows[t]->Cells[5]->Value = an->data.zagr;
						}
						t++;
					}
				}
				if (an->data.den[0] == 'В' && an->data.den[1] == 'т' && an->data.den[2] == 'о')
				{
					label_Vt->Text = "Вторник " + an->data.dd + " " + an->data.mm;
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Vtorn->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Vtorn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Vtorn->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Vtorn->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Vtorn->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Vtorn->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Vtorn->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Vtorn->Rows->Add();
						dataGridView_Vtorn->Rows[v]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Vtorn->Rows[v]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Vtorn->Rows[v]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Vtorn->Rows[v]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Vtorn->Rows[v]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Vtorn->Rows[v]->Cells[5]->Value = an->data.zagr;
						}
						v++;
					}
				}
				if (an->data.den[0] == 'С' && an->data.den[1] == 'р' && an->data.den[2] == 'е')
				{
					label_SR->Text = "Среда " + an->data.dd + " " + an->data.mm; 
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Sred->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Sred->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Sred->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Sred->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Sred->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Sred->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Sred->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Sred->Rows->Add();
						dataGridView_Sred->Rows[c]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Sred->Rows[c]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Sred->Rows[c]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Sred->Rows[c]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Sred->Rows[c]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Sred->Rows[c]->Cells[5]->Value = an->data.zagr;
						}
						c++;
					}
				}
				if (an->data.den[0] == 'Ч' && an->data.den[1] == 'е' && an->data.den[2] == 'т')
				{
					label_Чт->Text = "Четверг " + an->data.dd + " " + an->data.mm; 
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Chetverg->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Chetverg->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Chetverg->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Chetverg->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Chetverg->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Chetverg->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Chetverg->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Chetverg->Rows->Add();
						dataGridView_Chetverg->Rows[h]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Chetverg->Rows[h]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Chetverg->Rows[h]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Chetverg->Rows[h]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Chetverg->Rows[h]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Chetverg->Rows[h]->Cells[5]->Value = an->data.zagr;
						}
						h++;
					}
				}
				if (an->data.den[0] == 'П' && an->data.den[1] == 'я' && an->data.den[2] == 'т')
				{
					label_Pt->Text = "Пятница " + an->data.dd + " " + an->data.mm; 
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Pyatn->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Pyatn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Pyatn->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Pyatn->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Pyatn->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Pyatn->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Pyatn->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Pyatn->Rows->Add();
						dataGridView_Pyatn->Rows[g]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Pyatn->Rows[g]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Pyatn->Rows[g]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Pyatn->Rows[g]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Pyatn->Rows[g]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Pyatn->Rows[g]->Cells[5]->Value = an->data.zagr;
						}
						g++;
					}
				}
				an = an->next;
			}
		}
		button_Сортировать->Enabled = true;
	}
	else MessageBox::Show("Вы не считали данные");
	
}
private: System::Void считатьДанныеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	s_au = new_Auditory(s_auHead);
	s_gr = new_Gruppa(s_grHead);
	s_rasp = new_Raspisanie(s_raspHead);
	s_pos = new_Posechaemost(s_posHead);
	an = new_Analyz(analyzHead);
	Read_Auditory(s_au, "Auditoria.txt");
	Read_Gruppa(s_gr, "Groups.txt");
	Read_Rasp(s_rasp, "Raspisanie.txt", s_au, s_gr);
	Read_Posech(s_pos, "Poseshaemost.txt", s_rasp);
	MessageBox::Show("Данные успешно считаны");
	добавитьДанныеВручнуюToolStripMenuItem->Enabled = true;
	check5 = true;
	
}
private: System::Void textBox_firstDD_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check1 = true;
}
private: System::Void textBox_SecondDD_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check3 = true;
}
private: System::Void textBox_SecondMM_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check4 = true;
}
private: System::Void добавитьДанныеВручнуюToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	button_AddPos->Enabled = true;
	button_addRasp->Enabled = true;
	Width = 1600;
}
private: System::Void button_ChoiceGroup_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox_Grups->Items->Clear();
	s_gr = s_grHead;
	s_gr = s_gr->next;
	while (s_gr != s_grHead)
	{
		listBox_Grups->Items->Add(s_gr->data.nomer_g);
		s_gr = s_gr->next;
	}
	textBox_Gr->Visible = false;
	listBox_Grups->Enabled = true;
	listBox_Grups->Visible = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox_audit->Items->Clear();
	s_au = s_auHead;
	s_au = s_au->next;
	while (s_au != s_auHead)
	{
		listBox_audit->Items->Add(s_au->data.nomer_a);
		s_au = s_au->next;
	}
	textBox_audit->Visible = false;
	listBox_audit->Enabled = true;
	listBox_audit->Visible = true;
}
private: System::Void button_den_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox_den->Items->Clear();
	listBox_den->Items->Add("Понедельник");
	listBox_den->Items->Add("Вторник");
	listBox_den->Items->Add("Среда");
	listBox_den->Items->Add("Четверг");
	listBox_den->Items->Add("Пятница");
	textBox_Den->Visible = false;
	listBox_den->Enabled = true;
	listBox_den->Visible = true;
}
private: System::Void button_time_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox_time->Items->Clear();
	for (int i = 8; i <= 16; i = i + 2)
	{
		listBox_time->Items->Add(i);
	}
	textBox_Time->Visible = false;
	listBox_time->Enabled = true;
	listBox_time->Visible = true;
}
private: System::Void listBox_Grups_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox_Gr->Text = listBox_Grups->SelectedItem->ToString();
	selGr = Convert::ToInt32(textBox_Gr->Text);
	textBox_Gr->Visible = true;
	listBox_Grups->Enabled = false;
	listBox_Grups->Visible = false;
}
private: System::Void listBox_audit_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox_audit->Text = listBox_audit->SelectedItem->ToString();
	selAu = Convert::ToInt32(textBox_audit->Text);
	textBox_audit->Visible = true;
	listBox_audit->Enabled = false;
	listBox_audit->Visible = false;
}
private: System::Void listBox_den_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox_Den->Text = listBox_den->SelectedItem->ToString();
	textBox_Den->Visible = true;
	listBox_den->Enabled = false;
	listBox_den->Visible = false;
}
private: System::Void listBox_time_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox_Time->Text = listBox_time->SelectedItem->ToString();
	selTime = Convert::ToInt32(textBox_Time->Text);
	textBox_Time->Visible = true;
	listBox_time->Enabled = false;
	listBox_time->Visible = false;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (check10&&check6&&check7&&check8&&check9)
	{
		bool g = true;
		s_rasp = s_raspHead;
		s_rasp = s_rasp->next;
		kod_r = Convert::ToInt32(textBox_kode->Text);
		while (s_rasp != s_raspHead)
		{
			if (s_rasp->data.kod_r == kod_r)
			{
				g = false;
				MessageBox::Show("Расписание с таким кодом уже существует, введите другой код");
			}
			s_rasp = s_rasp->next;
		}
		if (g)
		{
			char* den = new char[50];
			if (textBox_Den-> Text == "Понедельник")
			{
				den = "Понедельник";
			}
			if (textBox_Den->Text == "Вторник")
			{
				den = "Вторник";
			}
			if (textBox_Den->Text == "Среда")
			{
				den = "Среда";
			}
			if (textBox_Den->Text == "Четверг")
			{
				den = "Четверг";
			}
			if (textBox_Den->Text == "Четверг")
			{
				den = "Пятница";
			}
			Create_Rasp(s_rasp, s_gr, s_au, kod_r, selAu, selGr, den,selTime);
			MessageBox::Show("Данные о расписании добавлены");
		}
	}
	else MessageBox::Show("Вы ввели не все данные ниже");

}
private: System::Void textBox_kode_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check6 = true;
}
private: System::Void textBox_Gr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check7 = true;
}
private: System::Void textBox_audit_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check8 = true;
}
private: System::Void textBox_Den_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check9 = true;
}
private: System::Void textBox_Time_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check10 = true;
}
private: System::Void button_Rasp_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox_Rasp->Visible = false;
	s_rasp = s_raspHead;
	s_rasp = s_rasp->next;
	s_Posechaemost* result = new s_Posechaemost;
	bool a = false;
	while (s_rasp != s_raspHead)
	{
		s_pos = s_posHead;
		Poisk_Posechaemost(s_pos, s_rasp->data.kod_r, result);
		if (result->data.kod == -404)
		{
			listBox_Rasp->Items->Add(s_rasp->data.kod_r);
			a = true;
			listBox_Rasp->Visible = true;
			listBox_Rasp->Enabled = true;
		}
		s_rasp = s_rasp->next;
	}
	if (!a) MessageBox::Show("Информация о посещаемости полностью заполнена");
}
private: System::Void listBox_Rasp_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	textBox_Rasp->Text = listBox_Rasp->SelectedItem->ToString();
	listBox_Rasp->Visible = false;
	listBox_Rasp->Enabled = false;
	textBox_Rasp->Visible = true;
}
private: System::Void textBox_Rasp_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check11 = true;
}
private: System::Void textBox_Chis_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check13 = true;
}
private: System::Void textBox_Month_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check14 = true;
}
private: System::Void textBox_Kolvo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check12 = true;
}
private: System::Void button_AddPos_Click(System::Object^  sender, System::EventArgs^  e) {
	if (check11 && check12 && check13 && check14)
	{
		bool g = true;
		s_pos = s_posHead;
		s_pos = s_pos->next;
		int kod = Convert::ToInt32(textBox_Rasp->Text);
		while (s_pos != s_posHead)
		{
			if (s_pos->data.kod== kod)
			{
				g = false;
				MessageBox::Show("Расписание с таким кодом уже существует, введите другой код");
			}
			s_pos = s_pos->next;
		}
		int chislo = Convert::ToInt32(textBox_Chis->Text);
		int month = Convert::ToInt32(textBox_Month->Text);
		int kolvo = Convert::ToInt32(textBox_Kolvo->Text);
		if (g)	Create_Posech(s_pos, s_rasp, kod, chislo, month, kolvo);
		MessageBox::Show("Данные о посещаемости добавлены");
	}
	else MessageBox::Show("Введите все данные ниже");
}
private: System::Void button_Сортировать_Click(System::Object^  sender, System::EventArgs^  e) {
	if (check15)
	{
		Node* Tree = NULL;
		dataGridView_Ponedel->Rows->Clear();
		dataGridView_Vtorn->Rows->Clear();
		dataGridView_Sred->Rows->Clear();
		dataGridView_Chetverg->Rows->Clear();
		dataGridView_Pyatn->Rows->Clear();
		s_Analyz* s_anal = new s_Analyz;
		s_Analyz* headAnal = new s_Analyz;
		s_anal = new_Analyz(headAnal);
		an = analyzHead;
		an = an->next;
		int sort = Convert::ToInt32(textBox_Sort->Text);
		while (an != analyzHead)
		{
			if (an->data.time == sort)
			{
				Dob_Analyz(s_anal, an->data);
			}
			an = an->next;
		}
		s_Analyz* sa = new s_Analyz;
		s_Analyz* aH = new s_Analyz;
		sa = new_Analyz(aH);
		s_anal = headAnal;
		s_anal = s_anal->next;
		
		while (s_anal != headAnal)
		{
			add_node(s_anal, Tree);
			s_anal = s_anal->next;
		}
		
		showTree (Tree, sa);
		sa = aH;
		sa = sa->next;
			int t = 0;
			int v = 0;
			int c = 0;
			int h = 0;
			int g = 0;
			while (sa != aH)
			{
				if (sa->data.den[0] == 'П' && sa->data.den[1] == 'о' && sa->data.den[2] == 'н')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Ponedel->RowCount; i++)
					{
						if (sa->data.nomer_a == Convert::ToInt32(dataGridView_Ponedel->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (sa->data.time == 8)
						{
							dataGridView_Ponedel->Rows[k]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Ponedel->Rows[k]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Ponedel->Rows[k]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Ponedel->Rows[k]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Ponedel->Rows[k]->Cells[5]->Value = sa->data.zagr;
						}

					}
					else
					{
						dataGridView_Ponedel->Rows->Add();
						dataGridView_Ponedel->Rows[t]->Cells[0]->Value = sa->data.nomer_a;
						if (sa->data.time == 8)
						{
							dataGridView_Ponedel->Rows[t]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Ponedel->Rows[t]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Ponedel->Rows[t]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Ponedel->Rows[t]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Ponedel->Rows[t]->Cells[5]->Value = sa->data.zagr;
						}
						t++;
					}
				}
				if (sa->data.den[0] == 'В' && sa->data.den[1] == 'т' && sa->data.den[2] == 'о')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Vtorn->RowCount; i++)
					{
						if (sa->data.nomer_a == Convert::ToInt32(dataGridView_Vtorn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (sa->data.time == 8)
						{
							dataGridView_Vtorn->Rows[k]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Vtorn->Rows[k]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Vtorn->Rows[k]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Vtorn->Rows[k]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Vtorn->Rows[k]->Cells[5]->Value = sa->data.zagr;
						}

					}
					else
					{
						dataGridView_Vtorn->Rows->Add();
						dataGridView_Vtorn->Rows[v]->Cells[0]->Value = sa->data.nomer_a;
						if (sa->data.time == 8)
						{
							dataGridView_Vtorn->Rows[v]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Vtorn->Rows[v]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Vtorn->Rows[v]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Vtorn->Rows[v]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Vtorn->Rows[v]->Cells[5]->Value = sa->data.zagr;
						}
						v++;
					}
				}
				if (sa->data.den[0] == 'С' && sa->data.den[1] == 'р' && sa->data.den[2] == 'е')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Sred->RowCount; i++)
					{
						if (sa->data.nomer_a == Convert::ToInt32(dataGridView_Sred->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (sa->data.time == 8)
						{
							dataGridView_Sred->Rows[k]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Sred->Rows[k]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Sred->Rows[k]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Sred->Rows[k]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Sred->Rows[k]->Cells[5]->Value = sa->data.zagr;
						}

					}
					else
					{
						dataGridView_Sred->Rows->Add();
						dataGridView_Sred->Rows[c]->Cells[0]->Value = sa->data.nomer_a;
						if (sa->data.time == 8)
						{
							dataGridView_Sred->Rows[c]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Sred->Rows[c]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Sred->Rows[c]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Sred->Rows[c]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Sred->Rows[c]->Cells[5]->Value = sa->data.zagr;
						}
						c++;
					}
				}
				if (sa->data.den[0] == 'Ч' && sa->data.den[1] == 'е' && sa->data.den[2] == 'т')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Chetverg->RowCount; i++)
					{
						if (sa->data.nomer_a == Convert::ToInt32(dataGridView_Chetverg->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (sa->data.time == 8)
						{
							dataGridView_Chetverg->Rows[k]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Chetverg->Rows[k]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Chetverg->Rows[k]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Chetverg->Rows[k]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Chetverg->Rows[k]->Cells[5]->Value = sa->data.zagr;
						}

					}
					else
					{
						dataGridView_Chetverg->Rows->Add();
						dataGridView_Chetverg->Rows[h]->Cells[0]->Value = sa->data.nomer_a;
						if (sa->data.time == 8)
						{
							dataGridView_Chetverg->Rows[h]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Chetverg->Rows[h]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Chetverg->Rows[h]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Chetverg->Rows[h]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Chetverg->Rows[h]->Cells[5]->Value = sa->data.zagr;
						}
						h++;
					}
				}
				if (sa->data.den[0] == 'П' && sa->data.den[1] == 'я' && sa->data.den[2] == 'т')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Pyatn->RowCount; i++)
					{
						if (sa->data.nomer_a == Convert::ToInt32(dataGridView_Pyatn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (sa->data.time == 8)
						{
							dataGridView_Pyatn->Rows[k]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Pyatn->Rows[k]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Pyatn->Rows[k]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Pyatn->Rows[k]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Pyatn->Rows[k]->Cells[5]->Value = sa->data.zagr;
						}

					}
					else
					{
						dataGridView_Pyatn->Rows->Add();
						dataGridView_Pyatn->Rows[g]->Cells[0]->Value = sa->data.nomer_a;
						if (sa->data.time == 8)
						{
							dataGridView_Pyatn->Rows[g]->Cells[1]->Value = sa->data.zagr;
						}
						if (sa->data.time == 10)
						{
							dataGridView_Pyatn->Rows[g]->Cells[2]->Value = sa->data.zagr;
						}
						if (sa->data.time == 12)
						{
							dataGridView_Pyatn->Rows[g]->Cells[3]->Value = sa->data.zagr;
						}
						if (sa->data.time == 14)
						{
							dataGridView_Pyatn->Rows[g]->Cells[4]->Value = sa->data.zagr;
						}
						if (sa->data.time == 16)
						{
							dataGridView_Pyatn->Rows[g]->Cells[5]->Value = sa->data.zagr;
						}
						g++;
					}
				}
				sa = sa->next;
			}
			an = analyzHead;
			an = an->next;
			while (an != analyzHead)
			{
				if (an->data.den[0] == 'П' && an->data.den[1] == 'о' && an->data.den[2] == 'н')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Ponedel->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Ponedel->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Ponedel->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Ponedel->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Ponedel->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Ponedel->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Ponedel->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Ponedel->Rows->Add();
						dataGridView_Ponedel->Rows[t]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Ponedel->Rows[t]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Ponedel->Rows[t]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Ponedel->Rows[t]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Ponedel->Rows[t]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Ponedel->Rows[t]->Cells[5]->Value = an->data.zagr;
						}
						t++;
					}
				}
				if (an->data.den[0] == 'В' && an->data.den[1] == 'т' && an->data.den[2] == 'о')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Vtorn->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Vtorn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Vtorn->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Vtorn->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Vtorn->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Vtorn->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Vtorn->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Vtorn->Rows->Add();
						dataGridView_Vtorn->Rows[v]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Vtorn->Rows[v]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Vtorn->Rows[v]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Vtorn->Rows[v]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Vtorn->Rows[v]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Vtorn->Rows[v]->Cells[5]->Value = an->data.zagr;
						}
						v++;
					}
				}
				if (an->data.den[0] == 'С' && an->data.den[1] == 'р' && an->data.den[2] == 'е')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Sred->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Sred->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Sred->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Sred->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Sred->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Sred->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Sred->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Sred->Rows->Add();
						dataGridView_Sred->Rows[c]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Sred->Rows[c]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Sred->Rows[c]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Sred->Rows[c]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Sred->Rows[c]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Sred->Rows[c]->Cells[5]->Value = an->data.zagr;
						}
						c++;
					}
				}
				if (an->data.den[0] == 'Ч' && an->data.den[1] == 'е' && an->data.den[2] == 'т')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Chetverg->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Chetverg->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Chetverg->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Chetverg->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Chetverg->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Chetverg->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Chetverg->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Chetverg->Rows->Add();
						dataGridView_Chetverg->Rows[h]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Chetverg->Rows[h]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Chetverg->Rows[h]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Chetverg->Rows[h]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Chetverg->Rows[h]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Chetverg->Rows[h]->Cells[5]->Value = an->data.zagr;
						}
						h++;
					}
				}
				if (an->data.den[0] == 'П' && an->data.den[1] == 'я' && an->data.den[2] == 'т')
				{
					int k = 0;
					bool l = false;
					for (int i = 0; i < dataGridView_Pyatn->RowCount; i++)
					{
						if (an->data.nomer_a == Convert::ToInt32(dataGridView_Pyatn->Rows[i]->Cells[0]->Value))
						{
							k = i;
							l = true;
						}

					}

					if (l)
					{
						if (an->data.time == 8)
						{
							dataGridView_Pyatn->Rows[k]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Pyatn->Rows[k]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Pyatn->Rows[k]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Pyatn->Rows[k]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Pyatn->Rows[k]->Cells[5]->Value = an->data.zagr;
						}

					}
					else
					{
						dataGridView_Pyatn->Rows->Add();
						dataGridView_Pyatn->Rows[g]->Cells[0]->Value = an->data.nomer_a;
						if (an->data.time == 8)
						{
							dataGridView_Pyatn->Rows[g]->Cells[1]->Value = an->data.zagr;
						}
						if (an->data.time == 10)
						{
							dataGridView_Pyatn->Rows[g]->Cells[2]->Value = an->data.zagr;
						}
						if (an->data.time == 12)
						{
							dataGridView_Pyatn->Rows[g]->Cells[3]->Value = an->data.zagr;
						}
						if (an->data.time == 14)
						{
							dataGridView_Pyatn->Rows[g]->Cells[4]->Value = an->data.zagr;
						}
						if (an->data.time == 16)
						{
							dataGridView_Pyatn->Rows[g]->Cells[5]->Value = an->data.zagr;
						}
						g++;
					}
				}
				an = an->next;
			}
			del(Tree);

	}
	else MessageBox::Show("Введите по какому столбцу сортировать");
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	check15 = true;
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Width = 940;
}
private: System::Void закрытьToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Del_Spisok(s_au, s_auHead);
	Del_Spisok(s_gr, s_grHead);
	Del_Spisok(an, analyzHead);
	Del_Spisok(s_pos, s_posHead);
	Del_Spisok(s_rasp, s_raspHead);
	Close();
}
};
}
