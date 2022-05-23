#include "MyForm.h"
#include <Windows.h>
#include <string>
#include <iostream>
#include <math.h>

using namespace Calculator;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}
