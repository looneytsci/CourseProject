#include "MainInterpol.h"
#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CourseGolovinDmitriy::MainInterpol form;
	Application::Run(% form);
}

System::Void CourseGolovinDmitriy::MainInterpol::onApplyButtonClick(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();

	s1 = Convert::ToInt64(numericUpDown1->Text) - 1; // number of points

	ca = Convert::ToDouble(textBoxCa->Text); // get ca value from textBox
	cb = Convert::ToDouble(textBoxCb->Text); // get cb value from textBox
	cc = Convert::ToDouble(textBoxCc->Text); // get cc value from textBox

	if (s1 < 0 || ca <= 0 || cb <= 0 || cc <= 0) {
		showMistakeWindow();
		MessageBox::Show("Начальные концентрации и кол-во точек должны быть больше нуля", "Внимание");
	}
	else {
		// add new point to dataGridView
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = ca;
		dataGridView1->Rows[0]->Cells[1]->Value = 0;

		for (int i = 0; i < s1; i++) {
			dataGridView1->Rows->Add();
		}
	}
}

System::Void CourseGolovinDmitriy::MainInterpol::onCalculateButtonClick(System::Object^ sender, System::EventArgs^ e) {
	// starting values
	ca = Convert::ToDouble(textBoxCa->Text);
	cb = Convert::ToDouble(textBoxCb->Text);
	cc = Convert::ToDouble(textBoxCc->Text);

	// setting zero values
	s2 = 0;
	s3 = 0;
	s4 = 0;
	s5 = 0;
	s6 = 0;

	double dispersion = 0;

	// clearing graph
	for (int i = 0; i < 2; i++) {
		this->chart1->Series[i]->Points->Clear();
	}

	double* x, * y, * w, * c;

	// timing points array
	x = new double[s1 + 1];
	// concentration points array
	y = new double[s1 + 1];
	// n log speed points array
	w = new double[s1];
	// n log concentration points array
	c = new double[s1];

	// Setting x and y from dataGridView
	for (int i = 0; i < s1 + 1; i++) {
		x[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[1]->Value);
		
		if (i > 0 && x[i] <= x[i - 1]) {
			showMistakeWindow();
			MessageBox::Show("Следующее значение времени не может быть меньше предыдущего или равно ему", "Внимание!");
		}

		y[i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[0]->Value); 
		
		if (i > 0 && (y[i] >= y[i - 1] || y[i] < 0)) {
			showMistakeWindow();
			MessageBox::Show("Следующее значение концентрации не может быть больше предыдущего или равно ему", "Внимание!");
		}
	}

	// Setting w and c
	for (int i = 0; i < s1; i++) {
		w[i] = Math::Log((y[i] - y[i + 1]) / (x[i + 1] - x[i]));
		c[i] = Math::Log(y[i + 1]);
		s2 = s2 + c[i];
		s3 = s3 + w[i];
		s4 = s4 + (c[i] * c[i]);
		s5 = s5 + (c[i] * w[i]);
		s6 = s6 + (w[i] * w[i]);
	}

	// setting calculation results to textBoxes
	double korrelation = ((s1 * s5) - (s2 * s3)) / Math::Sqrt(((s1 * s4) - (s2 * s2)) * ((s1 * s6) - (s3 * s3)));
	textBoxKorrelation->Text = Convert::ToString(korrelation);

	double n = ((s1 * s5) - (s2 * s3)) / ((s1 * s4) - (s2 * s2));
	textBoxN->Text = Convert::ToString(n);

	double k = exp(((s3 * s4) - (s2 * s5)) / ((s1 * s4) - (s2 * s2)));
	textBoxK->Text = Convert::ToString(k);

	// Setting graph and calculate dispersion
	for (int i = 0; i < s1 + 1; i++) {
		if (i == 0) {
			// setting first points
			this->chart1->Series[0]->Points->AddXY(x[i], ca); 
			this->chart1->Series[1]->Points->AddXY(x[i], cb); 
			this->chart1->Series[2]->Points->AddXY(x[i], cc);
		}
		else {
			// setting others
			this->chart1->Series[0]->Points->AddXY(x[i], ca -= k * pow(ca, n) * (x[i] - x[i - 1]));
			this->chart1->Series[1]->Points->AddXY(x[i], cb += 3 * k * pow(ca, n) * (x[i] - x[i - 1]));
			this->chart1->Series[2]->Points->AddXY(x[i], cc += 2 * k * pow(ca, n) * (x[i] - x[i - 1]));
		}
		
		dispersion += pow((y[i] - ca), 2);
	}
	textBoxDispersion->Text = Convert::ToString(dispersion);
}

System::Void CourseGolovinDmitriy::MainInterpol::showMistakeWindow() {
	MessageBox::Show("Ошибка ввода данных", "Внимание");
}

System::Void CourseGolovinDmitriy::MainInterpol::onClearButtonClick(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear(); 
	textBoxK->Text = "";
	textBoxN->Text = "";
	textBoxKorrelation->Text = "";
	numericUpDown1->Value = 0;
	textBoxCa->Text = "";
	textBoxCb->Text = "";
	textBoxCc->Text = "";
	textBoxDispersion->Text = "";
}

System::Void CourseGolovinDmitriy::MainInterpol::onClearGraphButtonClick(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Points->Clear();
	this->chart1->Series[1]->Points->Clear();
	this->chart1->Series[2]->Points->Clear();
}

System::Void CourseGolovinDmitriy::MainInterpol::onExitButtonClick(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Закрыть программу?", "Внимание", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}