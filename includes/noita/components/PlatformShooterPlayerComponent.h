#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PlatformShooterPlayerComponent : types::Component {
    const std::string _component_name = "PlatformShooterPlayerComponent";
    float aiming_reticle_distance_from_character;
    float camera_max_distance_from_character;
    float alcohol_drunken_speed;
    float blood_fungi_drunken_speed;
    float blood_worm_drunken_speed;
    types::vec2<int32_t> eating_area_min;
    types::vec2<int32_t> eating_area_max;
    int32_t eating_cells_per_frame;
    int32_t eating_probability;
    int32_t eating_delay_frames;
    float stoned_speed;
    bool center_camera_on_this_entity;
    bool move_camera_with_aim;

    static void parse(binary_io::any_istream &in, PlatformShooterPlayerComponent &out);
};  // struct

} // namespace
