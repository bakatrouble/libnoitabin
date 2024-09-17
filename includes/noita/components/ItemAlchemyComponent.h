#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ItemAlchemyComponent : types::Component {
    const std::string _component_name = "ItemAlchemyComponent";
    int32_t material_make_always_cast;
    int32_t material_remove_shuffle;
    int32_t material_animate_wand;
    int32_t material_animate_wand_alt;
    int32_t material_increase_uses_remaining;
    int32_t material_sacrifice;

    static void parse(binary_io::any_istream &in, ItemAlchemyComponent &out);
};  // struct

} // namespace
