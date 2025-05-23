#pragma once
#include <cmath>

namespace Pr_7 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ inputX;
    private: System::Windows::Forms::Button^ calculateButton;
    private: System::Windows::Forms::TextBox^ resultBox;
    private: System::Windows::Forms::Label^ label1;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->inputX = (gcnew System::Windows::Forms::TextBox());
               this->calculateButton = (gcnew System::Windows::Forms::Button());
               this->resultBox = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // inputX
               // 
               this->inputX->Location = System::Drawing::Point(30, 30);
               this->inputX->Name = L"inputX";
               this->inputX->Size = System::Drawing::Size(100, 20);
               this->inputX->TabIndex = 0;
               // 
               // calculateButton
               // 
               this->calculateButton->Location = System::Drawing::Point(150, 30);
               this->calculateButton->Name = L"calculateButton";
               this->calculateButton->Size = System::Drawing::Size(75, 23);
               this->calculateButton->TabIndex = 1;
               this->calculateButton->Text = L"Обчислити";
               this->calculateButton->UseVisualStyleBackColor = true;
               this->calculateButton->Click += gcnew System::EventHandler(this, &Form1::calculateButton_Click);
               // 
               // resultBox
               // 
               this->resultBox->Location = System::Drawing::Point(30, 70);
               this->resultBox->Name = L"resultBox";
               this->resultBox->ReadOnly = true;
               this->resultBox->Size = System::Drawing::Size(195, 20);
               this->resultBox->TabIndex = 2;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(30, 10);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(76, 13);
               this->label1->TabIndex = 3;
               this->label1->Text = L"Введіть x:";
               // 
               // Form1
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(264, 121);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->resultBox);
               this->Controls->Add(this->calculateButton);
               this->Controls->Add(this->inputX);
               this->Name = L"Form1";
               this->Text = L"Обчислення y";
               this->ResumeLayout(false);
               this->PerformLayout();
           }
#pragma endregion

    private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            double x = Convert::ToDouble(inputX->Text);
            double y;

            if (x > 0) {
                y = x * x + log(x);
            }
            else {
                y = sqrt(5 + sin(x));
            }

            resultBox->Text = y.ToString("F4");
        }
        catch (Exception^ ex) {
            MessageBox::Show("Помилка: " + ex->Message);
        }
    }
    };
}
