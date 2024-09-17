#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct SpriteStainsComponent : types::Component {
    const std::string _component_name = "SpriteStainsComponent";
    int32_t sprite_id;
    bool fade_stains_towards_srite_top;
    types::LensValue<int32_t> stain_shaken_drop_chance_multiplier;

    static void parse(binary_io::any_istream &in, SpriteStainsComponent &out);
};  // struct

} // namespace
