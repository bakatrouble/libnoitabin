#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemStashComponent : types::Component {
    const std::string _component_name = "ItemStashComponent";
    int32_t throw_openable_cooldown_frames;
    bool init_children;

    static void parse(binary_io::any_istream &in, ItemStashComponent &out);
};  // struct

} // namespace
