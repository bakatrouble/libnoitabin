#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct TeleportProjectileComponent : types::Component {
    const std::string _component_name = "TeleportProjectileComponent";
    float min_distance_from_wall;
    int32_t actionable_lifetime;
    bool reset_shooter_y_vel;

    static void parse(binary_io::any_istream &in, TeleportProjectileComponent &out);
};  // struct

} // namespace
