#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PlayerCollisionComponent : types::Component {
    const std::string _component_name = "PlayerCollisionComponent";
    int32_t getting_crushed_threshold;
    int32_t moving_up_before_getting_crushed_threshold;

    static void parse(binary_io::any_istream &in, PlayerCollisionComponent &out);
};  // struct

} // namespace
