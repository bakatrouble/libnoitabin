#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GodInfoComponent : types::Component {
    const std::string _component_name = "GodInfoComponent";
    float mana_current;
    float mana_max;
    float gold;

    static void parse(binary_io::any_istream &in, GodInfoComponent &out);
};  // struct

} // namespace
