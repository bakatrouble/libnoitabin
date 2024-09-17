#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LiquidDisplacerComponent : types::Component {
    const std::string _component_name = "LiquidDisplacerComponent";
    int32_t radius;
    float velocity_x;
    float velocity_y;

    static void parse(binary_io::any_istream &in, LiquidDisplacerComponent &out);
};  // struct

} // namespace
