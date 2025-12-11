#pragma once

#include "BaseConsoleWindow.h"
#include <vector>
#include <memory>

class WindowController
{
public:
	std::vector<std::unique_ptr<BaseConsoleWindow>> Windows;
	WindowController();
	~WindowController();

	void UpdateWindowBuffer();
	void ClearWindow();

public:
	bool ActiveWindow;
};