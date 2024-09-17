#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsKeepInWorldComponent : types::Component {
    const std::string _component_name = "PhysicsKeepInWorldComponent";
    bool check_whole_aabb;
    bool predict_aabb;
    bool keep_at_last_valid_pos;

    static void parse(binary_io::any_istream &in, PhysicsKeepInWorldComponent &out);
};  // struct

} // namespace
