#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MusicEnergyAffectorComponent : types::Component {
    const std::string _component_name = "MusicEnergyAffectorComponent";
    float energy_target;
    float fade_range;
    bool trigger_danger_music;
    int32_t fog_of_war_threshold;
    bool is_enemy;
    float energy_lerp_up_speed_multiplier;

    static void parse(binary_io::any_istream &in, MusicEnergyAffectorComponent &out);
};  // struct

} // namespace
