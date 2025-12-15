#pragma once

#include "BaseConsoleWindow.h"
#include <vector>
#include <memory>
#include <functional>

class WindowController
{
public:
	std::vector<std::unique_ptr<BaseConsoleWindow>> Windows;
	WindowController(int defaultActiveIndex);
	~WindowController();

	void ActivateWindow(int windowIndex);

	void UpdateWindowBuffer();
	void ClearWindow();

	int InputValueInt(std::istream& in, std::function<void(int)> callback);
	std::string InputValueString(std::istream& in, std::function<void(std::string)> callback);

private:
	int CurrentActiveWindowIndex;
	BaseConsoleWindow* CurrentActiveWindow;

public:
	bool ActiveWindow;
};