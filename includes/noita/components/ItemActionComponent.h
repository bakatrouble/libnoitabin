#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemActionComponent : types::Component {
    const std::string _component_name = "ItemActionComponent";
    std::string action_id;

    static void parse(binary_io::any_istream &in, ItemActionComponent &out);
};  // struct

} // namespace
