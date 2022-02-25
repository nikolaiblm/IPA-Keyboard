#include "MyForm.h"

using namespace System;
using namespace Windows::Forms;
[STAThread]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IPAKeyboard::MyForm form;
	Application::Run(% form);
}