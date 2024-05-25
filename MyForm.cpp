#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Change the namespace to match your project
    RentAndInventoryApp::MyForm form;
    Application::Run(% form);

    return 0;
}
