#pragma once

#include <unordered_map>
#include <string>

class UserData {
public:
	std::string sUsernameData;
	std::string sPasswordData;
};

class UserDataLoader {
public:
	UserDataLoader();
	
	bool GetUsername(std::string usernameInput);

private:
	std::unordered_map<int, UserData> Users;
};
