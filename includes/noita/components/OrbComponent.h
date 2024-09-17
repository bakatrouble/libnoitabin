#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct OrbComponent : types::Component {
    const std::string _component_name = "OrbComponent";
    int32_t orb_id;

    static void parse(binary_io::any_istream &in, OrbComponent &out);
};  // struct

} // namespace
