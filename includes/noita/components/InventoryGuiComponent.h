#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct InventoryGuiComponent : types::Component {
    const std::string _component_name = "InventoryGuiComponent";
    bool has_opened_inventory_edit;
    int32_t wallet_money_target;
    bool mDisplayFireRateWaitBar;

    static void parse(binary_io::any_istream &in, InventoryGuiComponent &out);
};  // struct

} // namespace
