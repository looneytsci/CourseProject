#pragma once
#include <string>

namespace CourseGolovinDmitriy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainInterpol
	/// </summary>
	public ref class MainInterpol : public System::Windows::Forms::Form
	{
	public:
		MainInterpol(void)
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
		~MainInterpol()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBoxCc;



	private: System::Windows::Forms::TextBox^ textBoxCb;


	private: System::Windows::Forms::TextBox^ textBoxCa;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxN;
	private: System::Windows::Forms::TextBox^ textBoxK;
	private: System::Windows::Forms::TextBox^ textBoxDispersion;



	private: System::Windows::Forms::TextBox^ textBoxKorrelation;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ C;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ t;
	private: System::Windows::Forms::Button^ button5;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->C = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->t = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxCc = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCb = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCa = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxK = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDispersion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxKorrelation = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->textBoxCc);
			this->groupBox1->Controls->Add(this->textBoxCb);
			this->groupBox1->Controls->Add(this->textBoxCa);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(491, 980);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод исходных данных";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(120, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 52);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Применить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainInterpol::onApplyButtonClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 897);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 59);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainInterpol::onCalculateButtonClick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->C, this->t });
			this->dataGridView1->Location = System::Drawing::Point(24, 301);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(415, 571);
			this->dataGridView1->TabIndex = 8;
			// 
			// C
			// 
			this->C->HeaderText = L"C";
			this->C->MinimumWidth = 10;
			this->C->Name = L"C";
			this->C->Width = 70;
			// 
			// t
			// 
			this->t->HeaderText = L"t";
			this->t->MinimumWidth = 10;
			this->t->Name = L"t";
			this->t->Width = 70;
			// 
			// textBoxCc
			// 
			this->textBoxCc->Location = System::Drawing::Point(231, 118);
			this->textBoxCc->Name = L"textBoxCc";
			this->textBoxCc->Size = System::Drawing::Size(100, 31);
			this->textBoxCc->TabIndex = 7;
			// 
			// textBoxCb
			// 
			this->textBoxCb->Location = System::Drawing::Point(231, 78);
			this->textBoxCb->Name = L"textBoxCb";
			this->textBoxCb->Size = System::Drawing::Size(100, 31);
			this->textBoxCb->TabIndex = 6;
			// 
			// textBoxCa
			// 
			this->textBoxCa->Location = System::Drawing::Point(231, 38);
			this->textBoxCa->Name = L"textBoxCa";
			this->textBoxCa->Size = System::Drawing::Size(100, 31);
			this->textBoxCa->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(19, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(197, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Количество точек:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(231, 165);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 31);
			this->numericUpDown1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Концентрация Cc =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Концентрация Cb =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Концентрация Ca =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 1010);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(225, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Порядок реакции N =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 1045);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(252, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Константа скорости К =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 1081);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 25);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Дисперсия =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 1119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Корреляция =";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(294, 1007);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(100, 31);
			this->textBoxN->TabIndex = 10;
			// 
			// textBoxK
			// 
			this->textBoxK->Location = System::Drawing::Point(294, 1044);
			this->textBoxK->Name = L"textBoxK";
			this->textBoxK->Size = System::Drawing::Size(100, 31);
			this->textBoxK->TabIndex = 14;
			// 
			// textBoxDispersion
			// 
			this->textBoxDispersion->Location = System::Drawing::Point(294, 1081);
			this->textBoxDispersion->Name = L"textBoxDispersion";
			this->textBoxDispersion->Size = System::Drawing::Size(100, 31);
			this->textBoxDispersion->TabIndex = 15;
			// 
			// textBoxKorrelation
			// 
			this->textBoxKorrelation->Location = System::Drawing::Point(294, 1119);
			this->textBoxKorrelation->Name = L"textBoxKorrelation";
			this->textBoxKorrelation->Size = System::Drawing::Size(100, 31);
			this->textBoxKorrelation->TabIndex = 16;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(132, 1200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 59);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainInterpol::onClearButtonClick);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Location = System::Drawing::Point(529, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1307, 1266);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"График";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1105, 1179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 59);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainInterpol::onExitButtonClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(470, 1179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(407, 59);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Очистить график";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainInterpol::onClearGraphButtonClick);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Column;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(30, 41);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Ca";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Cb";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Cc";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1251, 1101);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Alignment = System::Drawing::ContentAlignment::TopCenter;
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title1->Name = L"Title 1";
			title1->Text = L"Концентрация, С";
			title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title2->Name = L"Title1";
			title2->Text = L"Апроксимационная кривая";
			this->chart1->Titles->Add(title1);
			this->chart1->Titles->Add(title2);
			// 
			// MainInterpol
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1850, 1299);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBoxKorrelation);
			this->Controls->Add(this->textBoxDispersion);
			this->Controls->Add(this->textBoxK);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainInterpol";
			this->Text = L"MainInterpol";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void onApplyButtonClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void showMistakeWindow();
private: System::Void onCalculateButtonClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void onClearButtonClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void onClearGraphButtonClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void onExitButtonClick(System::Object^ sender, System::EventArgs^ e);

public:
	int s1;
	double ca, cb, cc, s2, s3, s4, s5, s6;
};
}
