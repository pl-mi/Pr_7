#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

 
    Pr_7::Form1 form;
    Application::Run(% form);
    return 0;
}
