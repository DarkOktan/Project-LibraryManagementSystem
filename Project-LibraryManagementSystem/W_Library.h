#pragma once

#include "BaseConsoleWindow.h"

class W_Library : public BaseConsoleWindow {
public:
	W_Library(WindowController* Controller);

public:
	void Show() override;
	void Hide() override;
};
