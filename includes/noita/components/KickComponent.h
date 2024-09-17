#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct KickComponent : types::Component {
    const std::string _component_name = "KickComponent";
    bool can_kick;
    types::LensValue<float> max_force;
    types::LensValue<float> player_kickforce;
    float kick_radius;
    types::LensValue<float> kick_damage;
    types::LensValue<float> kick_knockback;
    float telekinesis_throw_speed;
    std::string kick_entities;

    static void parse(binary_io::any_istream &in, KickComponent &out);
};  // struct

} // namespace
