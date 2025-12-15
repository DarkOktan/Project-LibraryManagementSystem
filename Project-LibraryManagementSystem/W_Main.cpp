#include "W_Main.h"

#include <iostream>

#include "WindowController.h"

W_Main::W_Main(WindowController* Controller) : BaseConsoleWindow(Controller)
{
	WindowName = "Main Window";
}

void W_Main::Show()
{
	std::cout << "+++++++++++OKTANEL LIBRARY+++++++++++" << std::endl;
	std::cout << "Menus:" << std::endl;
	std::cout << "1. Library" << std::endl;
	std::cout << "2. Quit" << std::endl;
	std::cout << "Insert Index of the Menu: ";

	CurrentController->InputValueInt(std::cin, [this](int val) {
		SelectMenus(val);
		});
}
void W_Main::Hide()
{

}

void W_Main::SelectMenus(int i)
{
	if (i == 2) // Quit
	{
		CurrentController->ActiveWindow = false;
		return;
	}

	std::cout << "Menus : " << i << std::endl;
	CurrentController->ActivateWindow(1);
}