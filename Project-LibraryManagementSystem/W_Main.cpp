#include "W_Main.h"

#include <iostream>

#include "WindowController.h"

W_Main::W_Main(WindowController* Controller) : BaseConsoleWindow(Controller)
{
	WindowName = "Main Window";

	CurrentController->PrintHEHE();
}

void W_Main::Show()
{
	std::cout << "+++++++++++OKTANEL LIBRARY+++++++++++" << std::endl;
	std::cout << "Menus:" << std::endl;
	std::cout << "1. Library" << std::endl;
	std::cout << "2. Quit" << std::endl;
	std::cout << "Insert Index of the Menu: " << std::endl;
}
void W_Main::Hide()
{

}