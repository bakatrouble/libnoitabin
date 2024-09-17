#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemPickUpperComponent : types::Component {
    const std::string _component_name = "ItemPickUpperComponent";
    bool is_in_npc;
    bool pick_up_any_item_buggy;
    bool is_immune_to_kicks;
    uint32_t only_pick_this_entity;
    bool drop_items_on_death;
    types::vec2<float> mLatestItemOverlapInfoBoxPosition;

    static void parse(binary_io::any_istream &in, ItemPickUpperComponent &out);
};  // struct

} // namespace
