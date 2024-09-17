#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MoveToSurfaceOnCreateComponent : types::Component {
    const std::string _component_name = "MoveToSurfaceOnCreateComponent";
    enums::MOVETOSURFACE_TYPE type;
    float lookup_radius;
    float offset_from_surface;
    int32_t ray_count;
    float verlet_min_joint_distance;

    static void parse(binary_io::any_istream &in, MoveToSurfaceOnCreateComponent &out);
};  // struct

} // namespace
