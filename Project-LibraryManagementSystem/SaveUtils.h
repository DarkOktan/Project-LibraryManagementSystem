#pragma once

#include <single_include/nlohmann/json.hpp>
#include <type_traits>
#include <fstream>

#include "Saveable.h"

using json = nlohmann::json;

template <class T1>
class SaveUtils {
	static_assert(std::is_base_of_v<ISaveable, T1>, "T1 must inherit from ISaveable");
public:
	SaveUtils(const std::string& fileName);
public:
	void Save(const T1& data);
	json Load();

private:
	std::string currentFileName;
};

static inline bool File_Exist(const std::string& filename) {
	std::ifstream file(filename);

	return static_cast<bool>(file);
}

template<class T1>
SaveUtils<T1>::SaveUtils(const std::string& fileName)
{
	currentFileName = fileName;
}

template <class T1>
inline void SaveUtils<T1>::Save(const T1& data)
{	
	json j = data.Serialize();

	// Opening file
	std::ofstream savedFile(currentFileName);
	if (savedFile.is_open()) {
		savedFile << j;

		savedFile.close();
	}
}

template<class T1>
inline json SaveUtils<T1>::Load()
{
	if (File_Exist(currentFileName)) {
		std::ifstream savedFile(currentFileName);

		json j = json::parse(savedFile);

		return j;
	}

	return nullptr;
}
