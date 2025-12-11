#include "WindowController.h"

#include "W_Main.h"

WindowController::WindowController()
{
	ActiveWindow = true;

}

WindowController::~WindowController()
{

}

void WindowController::UpdateWindowBuffer()
{
	std::system("cls");
}

void WindowController::ClearWindow()
{

}
