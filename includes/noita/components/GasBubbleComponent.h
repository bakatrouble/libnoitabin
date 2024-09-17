#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct GasBubbleComponent : types::Component {
    const std::string _component_name = "GasBubbleComponent";
    float acceleration;
    float max_speed;

    static void parse(binary_io::any_istream &in, GasBubbleComponent &out);
};  // struct

} // namespace
