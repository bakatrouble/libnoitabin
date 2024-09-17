#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct HitEffectComponent : types::Component {
    const std::string _component_name = "HitEffectComponent";
    enums::GAME_EFFECT condition_effect;
    uint32_t condition_status;
    enums::HIT_EFFECT effect_hit;
    int32_t value;
    std::string value_string;

    static void parse(binary_io::any_istream &in, HitEffectComponent &out);
};  // struct

} // namespace
