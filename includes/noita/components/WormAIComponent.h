#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WormAIComponent : types::Component {
    const std::string _component_name = "WormAIComponent";
    float speed;
    float speed_hunt;
    float direction_adjust_speed;
    float direction_adjust_speed_hunt;
    float random_target_box_radius;
    int32_t new_hunt_target_check_every;
    int32_t new_random_target_check_every;
    float hunt_box_radius;
    int32_t cocoon_food_required;
    std::string cocoon_entity;
    float give_up_area_radius;
    int32_t give_up_time_frames;
    bool debug_follow_mouse;

    static void parse(binary_io::any_istream &in, WormAIComponent &out);
};  // struct

} // namespace
