#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WormPlayerComponent : types::Component {
    const std::string _component_name = "WormPlayerComponent";

    static void parse(binary_io::any_istream &in, WormPlayerComponent &out);
};  // struct

} // namespace
