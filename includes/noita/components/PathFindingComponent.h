#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PathFindingComponent : types::Component {
    const std::string _component_name = "PathFindingComponent";
    int32_t search_depth_max_no_goal;
    int32_t iterations_max_no_goal;
    int32_t search_depth_max_with_goal;
    int32_t iterations_max_with_goal;
    float cost_of_flying;
    int32_t distance_to_reach_node_x;
    int32_t distance_to_reach_node_y;
    int32_t frames_to_get_stuck;
    int32_t frames_between_searches;
    float y_walking_compensation;
    bool can_fly;
    bool can_walk;
    bool can_jump;
    bool can_dive;
    bool can_swim_on_surface;
    bool never_consider_line_of_sight;
    float space_required;
    float max_jump_distance_from_camera;
    float jump_speed;
    float initial_jump_lob;
    float initial_jump_max_distance_x;
    float initial_jump_max_distance_y;
    std::vector<types::PathFindingJumpParams> jump_trajectories;
    int32_t read_state;

    static void parse(binary_io::any_istream &in, PathFindingComponent &out);
};  // struct

} // namespace
