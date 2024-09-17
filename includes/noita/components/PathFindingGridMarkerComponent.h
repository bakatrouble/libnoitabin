#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PathFindingGridMarkerComponent : types::Component {
    const std::string _component_name = "PathFindingGridMarkerComponent";
    int32_t marker_work_flag;
    float marker_offset_x;
    float marker_offset_y;
    float player_marker_radius;

    static void parse(binary_io::any_istream &in, PathFindingGridMarkerComponent &out);
};  // struct

} // namespace
