#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct BossHealthBarComponent : types::Component {
    const std::string _component_name = "BossHealthBarComponent";
    bool gui;
    bool gui_special_final_boss;
    bool in_world;
    float gui_max_distance_visible;

    static void parse(binary_io::any_istream &in, BossHealthBarComponent &out);
};  // struct

} // namespace
