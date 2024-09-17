#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SpriteAnimatorComponent : types::Component {
    const std::string _component_name = "SpriteAnimatorComponent";
    std::string target_sprite_comp_name;
    bool rotate_to_surface_normal;

    static void parse(binary_io::any_istream &in, SpriteAnimatorComponent &out);
};  // struct

} // namespace
