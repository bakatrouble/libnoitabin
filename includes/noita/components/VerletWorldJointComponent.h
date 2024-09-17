#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct VerletWorldJointComponent : types::Component {
    const std::string _component_name = "VerletWorldJointComponent";
    types::vec2<float> world_position;
    int32_t verlet_point_index;

    static void parse(binary_io::any_istream &in, VerletWorldJointComponent &out);
};  // struct

} // namespace
