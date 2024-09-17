#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DebugFollowMouseComponent : types::Component {
    const std::string _component_name = "DebugFollowMouseComponent";

    static void parse(binary_io::any_istream &in, DebugFollowMouseComponent &out);
};  // struct

} // namespace
