#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PressurePlateComponent : types::Component {
    const std::string _component_name = "PressurePlateComponent";
    int32_t check_every_x_frames;
    int32_t state;
    types::vec2<float> aabb_min;
    types::vec2<float> aabb_max;
    float material_percent;

    static void parse(binary_io::any_istream &in, PressurePlateComponent &out);
};  // struct

} // namespace
