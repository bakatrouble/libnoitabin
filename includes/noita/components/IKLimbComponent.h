#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct IKLimbComponent : types::Component {
    const std::string _component_name = "IKLimbComponent";
    float length;
    float thigh_extra_lenght;
    types::vec2<float> end_position;
    float mJointSideInterpolation;
    types::vec2<float> mJointWorldPos;
    types::vec2<float> mEndPrevPos;

    static void parse(binary_io::any_istream &in, IKLimbComponent &out);
};  // struct

} // namespace
