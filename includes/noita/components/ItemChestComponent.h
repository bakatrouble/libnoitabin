#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemChestComponent : types::Component {
    const std::string _component_name = "ItemChestComponent";
    int32_t item_count_min;
    int32_t item_count_max;
    int32_t level;
    bool enemy_drop;
    std::string actions;
    std::string action_uses_remaining;
    std::string other_entities_to_spawn;
    uint32_t mSeed;

    static void parse(binary_io::any_istream &in, ItemChestComponent &out);
};  // struct

} // namespace
