#pragma once

#include <string>

class WindowController;

class BaseConsoleWindow
{
public:
	BaseConsoleWindow(WindowController* controller);
	~BaseConsoleWindow();

public:
	std::string WindowName;
	
	WindowController* CurrentController;

public:
	virtual void Show();
	virtual void Update();
	virtual void Hide();
};


