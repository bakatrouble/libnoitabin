#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct IKLimbWalkerComponent : types::Component {
    const std::string _component_name = "IKLimbWalkerComponent";
    float ground_attachment_min_spread;
    int32_t ground_attachment_max_tries;
    float ground_attachment_max_angle;
    float ground_attachment_ray_length_coeff;
    float leg_velocity_coeff;
    bool affect_flying;
    int32_t ray_skip_material;
    types::vec2<float> mTarget;
    types::vec2<float> mPrevTarget;
    types::vec2<float> mPrevCenterPosition;
    int32_t mState;

    static void parse(binary_io::any_istream &in, IKLimbWalkerComponent &out);
};  // struct

} // namespace
