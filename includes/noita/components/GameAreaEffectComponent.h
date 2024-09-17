#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GameAreaEffectComponent : types::Component {
    const std::string _component_name = "GameAreaEffectComponent";
    float radius;
    std::string collide_with_tag;
    int32_t frame_length;
    std::vector<std::string> game_effect_entitities;

    static void parse(binary_io::any_istream &in, GameAreaEffectComponent &out);
};  // struct

} // namespace
