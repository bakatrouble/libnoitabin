#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct WormAttractorComponent : types::Component {
    const std::string _component_name = "WormAttractorComponent";
    int32_t direction;
    float radius;

    static void parse(binary_io::any_istream &in, WormAttractorComponent &out);
};  // struct

} // namespace
