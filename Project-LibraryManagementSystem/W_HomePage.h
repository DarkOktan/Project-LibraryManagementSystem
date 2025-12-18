#pragma once

#include "BaseConsoleWindow.h"

class W_HomePage : public BaseConsoleWindow {
public:
	W_HomePage(WindowController* Controller);

public:
	void Show() override;
	void Update() override;
	void Hide() override;

protected:
	void ShowingLoginPage();
	void ShowingRegisterPage();
};