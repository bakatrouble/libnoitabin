#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DebugSpatialVisualizerComponent : types::Component {
    const std::string _component_name = "DebugSpatialVisualizerComponent";
    float min_x;
    float min_y;
    float max_x;
    float max_y;
    uint32_t color;

    static void parse(binary_io::any_istream &in, DebugSpatialVisualizerComponent &out);
};  // struct

} // namespace
