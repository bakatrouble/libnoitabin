#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct InventoryComponent : types::Component {
    const std::string _component_name = "InventoryComponent";
    int32_t ui_container_type;
    types::vec2<int32_t> ui_container_size;
    types::vec2<int32_t> ui_element_size;
    types::vec2<int32_t> ui_position_on_screen;
    std::string ui_element_sprite;
    std::string actions;

    static void parse(binary_io::any_istream &in, InventoryComponent &out);
};  // struct

} // namespace
