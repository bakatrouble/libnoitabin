#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SimplePhysicsComponent : types::Component {
    const std::string _component_name = "SimplePhysicsComponent";
    bool can_go_up;

    static void parse(binary_io::any_istream &in, SimplePhysicsComponent &out);
};  // struct

} // namespace
