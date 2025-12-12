#include <iostream>

#include "WindowController.h"

#include "W_Main.h"

WindowController::WindowController(int defaultActiveIndex)
{
	ActiveWindow = true;

	Windows.push_back(std::make_unique<W_Main>(this));

	ActivateWindow(defaultActiveIndex);
}

WindowController::~WindowController()
{

}

void WindowController::ActivateWindow(int windowIndex)
{
	for (int i = 0; i < Windows.size(); i++)
	{
		if (i == windowIndex) 
		{
			Windows[i]->Show();
		}
		else
		{
			Windows[i]->Hide();
		}
	}
}


void WindowController::UpdateWindowBuffer()
{

}

void WindowController::ClearWindow()
{
	std::system("cls");
}

int WindowController::InputValueInt(std::istream& in)
{
	int val = 0;
	in >> val;

	return val;
}

std::string WindowController::InputValueString(std::istream& in)
{
	std::string val;
	in >> val;

	return val;
}

void WindowController::PrintHEHE()
{
	std::cout << "HEHE" << std::endl;
}


