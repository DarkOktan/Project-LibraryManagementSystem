#pragma once

#include <single_include/nlohmann/json.hpp>

using json = nlohmann::json;

class ISaveable {
public:
    virtual json Serialize() const = 0;
    virtual void Deserialize(const json& j) = 0;
    virtual ~ISaveable() = default;
};