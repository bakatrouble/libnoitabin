#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DieIfSpeedBelowComponent : types::Component {
    const std::string _component_name = "DieIfSpeedBelowComponent";
    float min_speed;
    float mMinSpeedSquared;

    static void parse(binary_io::any_istream &in, DieIfSpeedBelowComponent &out);
};  // struct

} // namespace
