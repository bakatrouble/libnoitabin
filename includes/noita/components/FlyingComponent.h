#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct FlyingComponent : types::Component {
    const std::string _component_name = "FlyingComponent";
    int32_t type;
    float perlin_freq;
    float perlin_time_freq;
    float perlin_wind_x;
    float perlin_wind_y;

    static void parse(binary_io::any_istream &in, FlyingComponent &out);
};  // struct

} // namespace
