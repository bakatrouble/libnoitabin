#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GunComponent : types::Component {
    const std::string _component_name = "GunComponent";

    static void parse(binary_io::any_istream &in, GunComponent &out);
};  // struct

} // namespace
