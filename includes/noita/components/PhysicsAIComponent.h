#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsAIComponent : types::Component {
    const std::string _component_name = "PhysicsAIComponent";
    float target_vec_max_len;
    float force_coeff;
    float force_balancing_coeff;
    float force_max;
    float torque_coeff;
    float torque_balancing_coeff;
    float torque_max;
    float torque_damaged_max;
    float torque_jump_random;
    int32_t damage_deactivation_probability;
    int32_t damage_deactivation_time_min;
    int32_t damage_deactivation_time_max;
    float die_on_remaining_mass_percentage;
    bool levitate;
    bool v0_jump_logic;
    bool v0_swim_logic;
    bool v0_body_id_logic;
    int32_t swim_check_y_min;
    int32_t swim_check_y_max;
    int32_t swim_check_side_x;
    int32_t swim_check_side_y;
    bool keep_inside_world;
    bool free_if_static;

    static void parse(binary_io::any_istream &in, PhysicsAIComponent &out);
};  // struct

} // namespace
