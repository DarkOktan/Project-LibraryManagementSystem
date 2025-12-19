#pragma once

#include <single_include/nlohmann/json.hpp>

template <typename T1>
class SaveUtils {
public:
	void Save(T1 saveTarget);
	T1 Load();
};
