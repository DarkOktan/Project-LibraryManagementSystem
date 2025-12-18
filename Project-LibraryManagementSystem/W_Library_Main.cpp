#include "W_Library_Main.h"

#include <iostream>
#include <Windows.h>

#include "WindowController.h"

W_Library_Main::W_Library_Main(WindowController* Controller) : BaseConsoleWindow(Controller)
{
	WindowName = "Library Window";
}

void W_Library_Main::Show()
{
	// Check if user have borrowed book or not
	// ShowingUserBorrowedList();
	// Showing list of book and update time

	// Showing menu
	ShowingMainMenu();
}

void W_Library_Main::Update()
{
	if (GetAsyncKeyState(VK_RETURN)) 
	{

	}
}

void W_Library_Main::Hide()
{

}

void W_Library_Main::ShowingUserBorrowedList()
{

}

void W_Library_Main::ShowingMainMenu()
{
	std::cout << "+++++++++++LIBRARY+++++++++++" << std::endl;
	std::cout << "Menus:" << std::endl;
	std::cout << "1. Borrow Book" << std::endl;
	std::cout << "2. Back" << std::endl;
	std::cout << "Insert Index of the Menu: ";

	CurrentController->InputValueInt(std::cin, std::bind(&W_Library_Main::SelectMenus, this, std::placeholders::_1));
}

void W_Library_Main::SelectMenus(int i) 
{
	if (i == 3) {
		CurrentController->ActivateWindow(0);

		return;
	}

	std::cout << "Library Menu Selected : " << i << std::endl;
}
