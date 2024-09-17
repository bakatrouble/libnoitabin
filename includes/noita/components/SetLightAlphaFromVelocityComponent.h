#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SetLightAlphaFromVelocityComponent : types::Component {
    const std::string _component_name = "SetLightAlphaFromVelocityComponent";
    float max_velocity;

    static void parse(binary_io::any_istream &in, SetLightAlphaFromVelocityComponent &out);
};  // struct

} // namespace
