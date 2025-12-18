#include <iostream>

#include "WindowController.h"

#include "W_HomePage.h"
#include "W_Main.h"
#include "W_Library_Main.h"

WindowController::WindowController(int defaultActiveIndex)
{
	bIsRunning = true;

	Windows.push_back(std::make_unique<W_HomePage>(this));
	Windows.push_back(std::make_unique<W_Main>(this));
	Windows.push_back(std::make_unique<W_Library_Main>(this));

	ActivateWindow(defaultActiveIndex);
}

WindowController::~WindowController()
{

}

void WindowController::ActivateWindow(int windowIndex)
{
	ClearWindow();

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

	CurrentActiveWindow = Windows[windowIndex].get();
}


void WindowController::UpdateWindowBuffer()
{
	if (CurrentActiveWindow != nullptr) {
		CurrentActiveWindow->Update();
	}
}

void WindowController::ClearWindow()
{
	std::system("cls");
}

int WindowController::InputValueInt(std::istream& in, std::function<void(int)> callback)
{
	int val = 0;
	in >> val;

	callback(val);

	return val;
}

std::string WindowController::InputValueString(std::istream& in, std::function<void(std::string)> callback)
{
	std::string val;
	in >> val;
	
	callback(val);

	return val;
}


