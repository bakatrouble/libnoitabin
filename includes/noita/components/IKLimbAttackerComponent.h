#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct IKLimbAttackerComponent : types::Component {
    const std::string _component_name = "IKLimbAttackerComponent";
    float radius;
    float leg_velocity_coeff;
    float targeting_radius;
    bool targeting_raytrace;
    std::string target_entities_with_tag;
    types::vec2<float> mTarget;

    static void parse(binary_io::any_istream &in, IKLimbAttackerComponent &out);
};  // struct

} // namespace
