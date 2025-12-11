#pragma once

#include "BaseConsoleWindow.h"

class W_Main : public BaseConsoleWindow
{
public:
	W_Main();

protected:
	void Show() override;
	void Hide() override;
};