#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct InteractableComponent : types::Component {
    const std::string _component_name = "InteractableComponent";
    float radius;
    std::string ui_text;
    std::string name;
    int32_t exclusivity_group;

    static void parse(binary_io::any_istream &in, InteractableComponent &out);
};  // struct

} // namespace
