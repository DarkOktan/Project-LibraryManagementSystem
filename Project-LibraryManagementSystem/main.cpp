// Project-LibraryManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Library.h"

#include "WindowController.h"

#include <Windows.h>

#include "SaveUtils.h"
#include "Saveable.h"

class SAVECONTAINER : public ISaveable{
public:
	int a;
	int b;

	SAVECONTAINER() {}
	SAVECONTAINER(int a, int b) : a(a), b(b){}
	~SAVECONTAINER() {}

	void Print() {
		std::cout << "A : " << a << "B : " << b << std::endl;
	}

	// Inherited via ISaveable
	json Serialize() const override
	{
		std::cout << a << std::endl;
		std::cout << b << std::endl;

		json j = { {"a", a}, {"b", b} };

		return j;
	}

	void Deserialize(const json& j) override
	{
		j.at("a").get_to(a);
		j.at("b").get_to(b);
	}
};

int main()
{
	SAVECONTAINER s{ 1, 2 };

	std::string file = "Mantap.txt";
	SaveUtils<SAVECONTAINER>* saved = new SaveUtils<SAVECONTAINER>(file);

	s.Deserialize(saved->Load());
	s.Print();

    /*WindowController* wc = new WindowController(0);

	while (wc->bIsRunning)
	{
		wc->UpdateWindowBuffer();
	}

	delete wc;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
