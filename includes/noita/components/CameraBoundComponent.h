#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CameraBoundComponent : types::Component {
    const std::string _component_name = "CameraBoundComponent";
    bool enabled;
    float distance;
    float distance_border;
    int32_t max_count;
    bool freeze_on_distance_kill;
    bool freeze_on_max_count_kill;

    static void parse(binary_io::any_istream &in, CameraBoundComponent &out);
};  // struct

} // namespace
