#pragma once

#include "BaseConsoleWindow.h"

class W_Library_Main : public BaseConsoleWindow {
public:
	W_Library_Main(WindowController* Controller);

public:
	void Show() override;
	void Update() override;
	void Hide() override;

protected:
	void ShowingUserBorrowedList();
	void ShowingMainMenu();

	void SelectMenus(int i);
};
