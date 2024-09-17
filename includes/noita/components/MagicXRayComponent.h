#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MagicXRayComponent : types::Component {
    const std::string _component_name = "MagicXRayComponent";
    int32_t radius;
    int32_t steps_per_frame;
    int32_t mStep;
    int32_t mRadius;

    static void parse(binary_io::any_istream &in, MagicXRayComponent &out);
};  // struct

} // namespace
