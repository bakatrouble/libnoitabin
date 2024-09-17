#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemCostComponent : types::Component {
    const std::string _component_name = "ItemCostComponent";
    int64_t cost;
    bool stealable;

    static void parse(binary_io::any_istream &in, ItemCostComponent &out);
};  // struct

} // namespace
