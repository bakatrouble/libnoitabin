#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PlayerStatsComponent : types::Component {
    const std::string _component_name = "PlayerStatsComponent";
    int32_t lives;
    float max_hp;
    float speed;

    static void parse(binary_io::any_istream &in, PlayerStatsComponent &out);
};  // struct

} // namespace
