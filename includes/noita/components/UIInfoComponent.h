#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct UIInfoComponent : types::Component {
    const std::string _component_name = "UIInfoComponent";
    std::string name;

    static void parse(binary_io::any_istream &in, UIInfoComponent &out);
};  // struct

} // namespace
