#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct TeleportComponent : types::Component {
    const std::string _component_name = "TeleportComponent";
    types::vec2<float> target;
    bool target_x_is_absolute_position;
    bool target_y_is_absolute_position;
    std::string source_particle_fx_file;
    std::string target_particle_fx_file;
    bool load_collapse_entity;

    static void parse(binary_io::any_istream &in, TeleportComponent &out);
};  // struct

} // namespace
