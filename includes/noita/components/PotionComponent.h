#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PotionComponent : types::Component {
    const std::string _component_name = "PotionComponent";
    float spray_velocity_coeff;
    float spray_velocity_normalized_min;
    bool body_colored;
    bool throw_bunch;
    int32_t throw_how_many;
    bool dont_spray_static_materials;
    bool dont_spray_just_leak_gas_materials;
    bool never_color;
    int32_t custom_color_material;

    static void parse(binary_io::any_istream &in, PotionComponent &out);
};  // struct

} // namespace
