#pragma once

#include "BaseConsoleWindow.h"
#include <vector>
#include <memory>

class WindowController
{
public:
	std::vector<std::unique_ptr<BaseConsoleWindow>> Windows;
	WindowController(int defaultActiveIndex);
	~WindowController();

	void ActivateWindow(int windowIndex);

	void UpdateWindowBuffer();
	void ClearWindow();

	int InputValueInt(std::istream& in);
	std::string InputValueString(std::istream& in);

	void PrintHEHE();

private:
	int CurrentActiveWindowIndex;

public:
	bool ActiveWindow;
};