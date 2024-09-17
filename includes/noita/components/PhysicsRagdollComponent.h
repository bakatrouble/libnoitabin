#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsRagdollComponent : types::Component {
    const std::string _component_name = "PhysicsRagdollComponent";
    std::string filename;
    std::string filenames;
    float offset_x;
    float offset_y;

    static void parse(binary_io::any_istream &in, PhysicsRagdollComponent &out);
};  // struct

} // namespace
