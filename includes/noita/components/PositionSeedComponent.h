#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PositionSeedComponent : types::Component {
    const std::string _component_name = "PositionSeedComponent";
    float pos_x;
    float pos_y;

    static void parse(binary_io::any_istream &in, PositionSeedComponent &out);
};  // struct

} // namespace
