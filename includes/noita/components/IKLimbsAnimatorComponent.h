#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct IKLimbsAnimatorComponent : types::Component {
    const std::string _component_name = "IKLimbsAnimatorComponent";
    int32_t future_state_samples;
    float ground_attachment_ray_length_coeff;
    float leg_velocity_coeff;
    bool affect_flying;
    float large_movement_penalty_coeff;
    float no_ground_attachment_penalty_coeff;
    int32_t ray_skip_material;
    bool is_limp;
    types::vec2<float> mPrevBodyPosition;

    static void parse(binary_io::any_istream &in, IKLimbsAnimatorComponent &out);
};  // struct

} // namespace
