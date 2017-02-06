#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	try {
		FeatureFinder::MyForm form;
		Application::Run(%form);
	} catch (SystemException^) {
		MessageBox::Show(
			"Daya! Kuchh to gadbad hai ...",
			"ERROR",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);
	}
}
