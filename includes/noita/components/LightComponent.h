#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LightComponent : types::Component {
    const std::string _component_name = "LightComponent";
    bool update_properties;
    float radius;
    uint32_t r;
    uint32_t g;
    uint32_t b;
    float offset_x;
    float offset_y;
    float fade_out_time;
    float blinking_freq;

    static void parse(binary_io::any_istream &in, LightComponent &out);
};  // struct

} // namespace
