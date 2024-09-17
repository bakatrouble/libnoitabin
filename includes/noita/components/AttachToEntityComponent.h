#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AttachToEntityComponent : types::Component {
    const std::string _component_name = "AttachToEntityComponent";
    bool only_position;
    std::string target_hotspot_tag;
    int32_t target_sprite_id;
    bool rotate_based_on_x_scale;
    bool destroy_component_when_target_is_gone;
    types::CXForm Transform;

    static void parse(binary_io::any_istream &in, AttachToEntityComponent &out);
};  // struct

} // namespace
