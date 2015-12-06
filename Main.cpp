#include "OOPsIWatchedItAgain.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace OOPsIWatchedItAgain;


[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	OOPsIWatchedItAgain::MainWindow mainWindow;
	Application::Run(%mainWindow);
}