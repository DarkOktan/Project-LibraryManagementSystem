#pragma once

#include <single_include/nlohmann/json.hpp>
#include <type_traits>

#include "Saveable.h"

using json = nlohmann::json;

template <class T1>
class SaveUtils {
	static_assert(std::is_base_of_v<ISaveable, T1>, "T1 must inherit from ISaveable");
public:
	SaveUtils(const std::string& fileName);
public:
	void Save(const T1& data);
	T1 Load();

private:
	std::string currentFileName;
};

template<typename T1>
SaveUtils<T1>::SaveUtils(const std::string& fileName)
{
	currentFileName = fileName;
}

template <typename T1>
inline void SaveUtils<T1>::Save(const T1& data)
{	
	json j = data.Serialize();

	
}

template<typename T1>
inline T1 SaveUtils<T1>::Load()
{


	return T1();
}
