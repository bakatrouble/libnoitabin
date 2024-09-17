#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ShotEffectComponent : types::Component {
    const std::string _component_name = "ShotEffectComponent";
    enums::GAME_EFFECT condition_effect;
    uint32_t condition_status;
    std::string extra_modifier;

    static void parse(binary_io::any_istream &in, ShotEffectComponent &out);
};  // struct

} // namespace
