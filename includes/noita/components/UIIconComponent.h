#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct UIIconComponent : types::Component {
    const std::string _component_name = "UIIconComponent";
    std::string icon_sprite_file;
    std::string name;
    std::string description;
    bool display_above_head;
    bool display_in_hud;
    bool is_perk;

    static void parse(binary_io::any_istream &in, UIIconComponent &out);
};  // struct

} // namespace
