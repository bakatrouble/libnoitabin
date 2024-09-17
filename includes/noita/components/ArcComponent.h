#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ArcComponent : types::Component {
    const std::string _component_name = "ArcComponent";
    enums::ARC_TYPE type;
    int32_t material;
    int32_t lifetime;

    static void parse(binary_io::any_istream &in, ArcComponent &out);
};  // struct

} // namespace
