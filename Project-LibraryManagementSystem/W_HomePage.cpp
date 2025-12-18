#include "W_HomePage.h"

#include <iostream>

#include "WindowController.h"

W_HomePage::W_HomePage(WindowController* Controller) : BaseConsoleWindow(Controller)
{
	WindowName = "Login Page";
}

void W_HomePage::Show()
{
	// Default Showing Login Page
	std::cout << "+++++++++++LIBRARY+++++++++++" << std::endl;
	std::cout << "WELCOME TO HOME PAGE" << std::endl;
	std::cout << "PLEASE SELECT THE CREDENTIAL METHOD" << std::endl;
	std::cout << "IF YOU DONT HAVE ACCOUNT, PLEASE REGISTER!!" << std::endl;
	std::cout << "1. Login" << std::endl;
	std::cout << "2. Register" << std::endl;
	std::cout << "Insert Index of the Menu: ";

	CurrentController->InputValueInt(std::cin, [this](int i) {
		switch (i)
		{
		case 1:
			ShowingLoginPage();
			break;
		case 2:
			ShowingRegisterPage();
			break;
		default:
			CurrentController->ClearWindow();

			std::cout << "WRONG INDEX!!!" << std::endl;
			std::cout << "" << std::endl;
			Show();
			break;
		}
		});
}

void W_HomePage::Update()
{
}

void W_HomePage::Hide()
{
}

void W_HomePage::ShowingLoginPage()
{
	CurrentController->ClearWindow();

	std::cout << "+++++++++++LIBRARY+++++++++++" << std::endl;
	std::cout << "LOGIN PAGE" << std::endl;
	std::cout << "Please Insert your Username and Password" << std::endl;

	std::string username;
	std::string password;

	std::cout << "Username : ";
	std::cin >> username;

	std::cout << "Password : ";
	std::cin >> password;

	std::cout << "Username " << username << ", Password " << password << std::endl;
	// TODO: Check Credential

}

void W_HomePage::ShowingRegisterPage()
{
	std::cout << "+++++++++++LIBRARY+++++++++++" << std::endl;
	std::cout << "REGISTER PAGE" << std::endl;
	std::cout << "Please Insert your Username and Password to Register" << std::endl;

	std::string username;
	std::string password;

	std::cout << "Username : ";
	std::cin >> username;

	std::cout << "Password : ";
	std::cin >> password;

	std::cout << "Username " << username << ", Password " << password << std::endl;
}
