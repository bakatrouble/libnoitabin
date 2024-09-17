#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GhostComponent : types::Component {
    const std::string _component_name = "GhostComponent";
    float speed;
    types::vec2<float> velocity;
    int32_t new_hunt_target_check_every;
    float hunt_box_radius;
    float aggressiveness;
    float max_distance_from_home;
    bool die_if_no_home;
    std::string target_tag;

    static void parse(binary_io::any_istream &in, GhostComponent &out);
};  // struct

} // namespace
