#pragma once

#define NOMINMAX

#include <cstdlib>
#include <ctime>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Graph.h"

namespace FeatureFinder {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm() {
			if (components) {
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;

	private:
		Graph *reference;
		Graph *test;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;

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
		void InitializeComponent(void) {
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 31);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(140, 12);
			this->textBox1->Multiline = true;
			this->textBox1->ReadOnly = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(486, 31);
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(14, 87);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(258, 24);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(366, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(259, 24);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(14, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(613, 2);
			this->label1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(14, 279);
			this->textBox2->Multiline = true;
			this->textBox2->ReadOnly = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 178);
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(366, 279);
			this->textBox3->Multiline = true;
			this->textBox3->ReadOnly = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(260, 178);
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->TabIndex = 15;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(319, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(2, 398);
			this->label2->TabIndex = 16;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(150, 156);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(122, 52);
			this->listBox1->TabIndex = 17;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(366, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 31);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Process";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(147, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Choose Y Axis Title";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(14, 156);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(122, 52);
			this->listBox2->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 17);
			this->label4->TabIndex = 21;
			this->label4->Text = L"X Axis Title";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(13, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(613, 2);
			this->label5->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 67);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 17);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Reference Filename";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(365, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Test Filename";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 491);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(393, 17);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Normalized Squared Error of Test file from Reference File is: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 529);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(391, 17);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Pearson Correlation between Test file and Reference File is: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(363, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(407, 491);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 17);
			this->label11->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(407, 529);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 17);
			this->label12->TabIndex = 31;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label13->Location = System::Drawing::Point(13, 226);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(613, 2);
			this->label13->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(14, 257);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(256, 17);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Peaks/Ridges for Reference Data ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(365, 257);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(213, 17);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Peaks/Ridges for Test Data ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->ClientSize = System::Drawing::Size(638, 564);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Name = L"MyForm";
			this->Text = L"Feature Finder";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		}

		System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			FolderBrowserDialog ^ csvBrowser = gcnew FolderBrowserDialog();
			System::Windows::Forms::DialogResult dialog_result = csvBrowser->ShowDialog();
			if (dialog_result == System::Windows::Forms::DialogResult::OK) {
				System::String^ rootFolder = csvBrowser->SelectedPath;
				this->textBox1->Text = rootFolder;
				DirectoryInfo^ di = gcnew DirectoryInfo(rootFolder);
				cli::array<FileInfo^>^ files = di->GetFiles("*.csv");

				if (files->Length == 0) {
					MessageBox::Show(
						"Specified folder does not have any CSV files or is empty!",
						"WARNING",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation
					);
				} else {
					for each (FileInfo ^ file in files) {
						this->comboBox1->Items->Add(file->Name);
						this->comboBox2->Items->Add(file->Name);
					}
					comboBox1->Items->Insert(0, "Please select a file");
					comboBox2->Items->Insert(0, "Please select a file");
					comboBox1->SelectedIndex = 0;
					comboBox2->SelectedIndex = 0;
				}
			}
		}

		Graph *get_graph_from_cli(String^ file_path) {
			FileInfo^ file_info = gcnew FileInfo(file_path);
			Graph *current_graph = new Graph();
			StreamReader^ stream = file_info->OpenText();
			try {
				String^ current_line = "";
				current_line = stream->ReadLine();
				cli::array<String^>^ splits = current_line->Split(',');
				vector<string> titles;
				for each (String^ title in splits)
					titles.push_back(msclr::interop::marshal_as<string>(title));

				current_graph->setX_axis_title(titles[0]);
				vector<string> y_axis_titles(titles.begin() + 1, titles.end());
				current_graph->setY_axes_titles(y_axis_titles);

				vector<long double> x_axis;
				size_t no_of_y_graphs = titles.size() - 1;
				vector<vector<long double>> y_axes(no_of_y_graphs);
				while (current_line = stream->ReadLine()) {
					if (current_line->Length >= 1) {
						splits = current_line->Split(',');
						x_axis.push_back(Double::Parse(splits[0]));
						ArraySegment<String^> segment(splits, 1, no_of_y_graphs);
						vector<long double> ys;
						for (int i = segment.Offset; i < (segment.Offset + segment.Count); i++)
							ys.push_back(Double::Parse(segment.Array[i]));
						for (size_t i = 0; i < no_of_y_graphs; i++)
							y_axes[i].push_back(ys[i]);
					}
				}

				current_graph->setX_axis(x_axis);
				current_graph->setY_axes(y_axes);
			} finally {
				if (stream)
					delete (IDisposable^)stream;
			}
			return current_graph;
		}

		System::Void comboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (this->comboBox1->SelectedIndex > 0 && this->comboBox2->SelectedIndex > 0) {
				this->textBox2->Clear();
				this->textBox3->Clear();
				this->listBox1->Items->Clear();
				this->listBox2->Items->Clear();

				System::String^ root_folder_path = this->textBox1->Text;
				System::String^ reference_file_path = root_folder_path + "\\" + this->comboBox1->Text;
				System::String^ test_file_path = root_folder_path + "\\" + this->comboBox2->Text;

				this->reference = get_graph_from_cli(reference_file_path);
				this->test = get_graph_from_cli(test_file_path);

				this->listBox2->Items->Add(gcnew String(reference->getX_axis_title().c_str()));
				this->listBox2->SetSelected(0, true);

				for each (string y_title in reference->getY_axes_titles()) {
					String^ value = gcnew String(y_title.c_str());
					this->listBox1->Items->Add(value);
				}

				if (reference->getProcessing_index() == -1) {
					reference->setProcessing_index(0);
					test->setProcessing_index(0);
					this->listBox1->SetSelected(0, true);
				}
			}
		}

		System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			reference->setProcessing_index(this->listBox1->SelectedIndex);
			test->setProcessing_index(this->listBox1->SelectedIndex);
		}

		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->textBox2->Clear();
			this->textBox3->Clear();
			this->label11->Text = "";
			this->label12->Text = "";

			if (this->textBox1->TextLength == 0) {
				MessageBox::Show(
					"Path to data folder not specified!", 
					"ERROR",
					MessageBoxButtons::OK, 
					MessageBoxIcon::Error
				);
			} else {
				this->label10->Text = "Processing for " + this->listBox2->Text + " vs. " + this->listBox1->Text;

				reference->process();
				test->process();

				vector<long double> ref_peaks = reference->getPeaks();
				vector<long double> test_peaks = test->getPeaks();

				for (size_t i = 0; i < ref_peaks.size(); i++) {
					this->textBox2->AppendText(ref_peaks[i] + Environment::NewLine);
				}

				for (size_t i = 0; i < test_peaks.size(); i++) {
					this->textBox3->AppendText(test_peaks[i] + Environment::NewLine);
				}

				vector<long double> test_vector = test->getY_axes()[reference->getProcessing_index()];
				long double error = reference->relative_error(test_vector);
				long double corr = reference->correlation(test_vector);
				this->label11->Text = (error * 100.0).ToString() + " %";
				this->label12->Text = corr.ToString();
			}
		}
	};
}
