#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ControllerGoombaAIComponent : types::Component {
    const std::string _component_name = "ControllerGoombaAIComponent";
    bool auto_turn_around_enabled;
    int32_t wait_to_turn_around;
    int32_t wall_hit_wait;
    bool check_wall_detection;
    float wall_detection_aabb_min_x;
    float wall_detection_aabb_max_x;
    float wall_detection_aabb_min_y;
    float wall_detection_aabb_max_y;
    bool check_floor_detection;
    float floor_detection_aabb_min_x;
    float floor_detection_aabb_max_x;
    float floor_detection_aabb_min_y;
    float floor_detection_aabb_max_y;

    static void parse(binary_io::any_istream &in, ControllerGoombaAIComponent &out);
};  // struct

} // namespace
