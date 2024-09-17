#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LocationMarkerComponent : types::Component {
    const std::string _component_name = "LocationMarkerComponent";
    int32_t id;

    static void parse(binary_io::any_istream &in, LocationMarkerComponent &out);
};  // struct

} // namespace
