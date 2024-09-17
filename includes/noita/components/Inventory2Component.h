#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct Inventory2Component : types::Component {
    const std::string _component_name = "Inventory2Component";
    int32_t quick_inventory_slots;
    int32_t full_inventory_slots_x;
    int32_t full_inventory_slots_y;
    uint32_t mSavedActiveItemIndex;

    static void parse(binary_io::any_istream &in, Inventory2Component &out);
};  // struct

} // namespace
