#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct InheritTransformComponent : types::Component {
    const std::string _component_name = "InheritTransformComponent";
    bool use_root_parent;
    bool only_position;
    std::string parent_hotspot_tag;
    int32_t parent_sprite_id;
    bool always_use_immediate_parent_rotation;
    bool rotate_based_on_x_scale;
    types::CXForm Transform;

    static void parse(binary_io::any_istream &in, InheritTransformComponent &out);
};  // struct

} // namespace
