#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LaserEmitterComponent : types::Component {
    const std::string _component_name = "LaserEmitterComponent";
    types::ConfigLaser laser;
    bool is_emitting;
    int32_t emit_until_frame;
    float laser_angle_add_rad;

    static void parse(binary_io::any_istream &in, LaserEmitterComponent &out);
};  // struct

} // namespace
