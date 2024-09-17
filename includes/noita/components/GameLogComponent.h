#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GameLogComponent : types::Component {
    const std::string _component_name = "GameLogComponent";
    bool report_death;
    bool report_damage;
    bool report_new_biomes;
    std::vector<std::string> mVisitiedBiomes;

    static void parse(binary_io::any_istream &in, GameLogComponent &out);
};  // struct

} // namespace
