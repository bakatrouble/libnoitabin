#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsBodyCollisionDamageComponent : types::Component {
    const std::string _component_name = "PhysicsBodyCollisionDamageComponent";
    float speed_threshold;
    float damage_multiplier;

    static void parse(binary_io::any_istream &in, PhysicsBodyCollisionDamageComponent &out);
};  // struct

} // namespace
