#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GameStatsComponent : types::Component {
    const std::string _component_name = "GameStatsComponent";
    std::string name;
    std::string stats_filename;
    bool is_player;
    std::string extra_death_msg;
    bool dont_do_logplayerkill;
    int32_t player_polymorph_count;

    static void parse(binary_io::any_istream &in, GameStatsComponent &out);
};  // struct

} // namespace
