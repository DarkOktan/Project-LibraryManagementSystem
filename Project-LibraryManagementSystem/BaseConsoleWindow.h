#pragma once

#include <string>

class BaseConsoleWindow
{
public:
	BaseConsoleWindow();
	~BaseConsoleWindow();

public:
	std::string WindowName;

protected:
	virtual void Show();
	virtual void Hide();
};


