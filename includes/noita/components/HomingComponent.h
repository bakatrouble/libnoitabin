#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct HomingComponent : types::Component {
    const std::string _component_name = "HomingComponent";
    std::string target_tag;
    bool target_who_shot;
    float detect_distance;
    float homing_velocity_multiplier;
    float homing_targeting_coeff;
    bool just_rotate_towards_target;
    float max_turn_rate;
    uint32_t predefined_target;
    bool look_for_root_entities_only;

    static void parse(binary_io::any_istream &in, HomingComponent &out);
};  // struct

} // namespace
