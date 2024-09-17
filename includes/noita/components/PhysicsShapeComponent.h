#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsShapeComponent : types::Component {
    const std::string _component_name = "PhysicsShapeComponent";
    bool recreate;
    bool is_circle;
    bool is_box;
    bool is_capsule;
    bool is_based_on_sprite;
    float friction;
    float restitution;
    float density;
    float local_position_x;
    float local_position_y;
    float radius_x;
    float radius_y;
    float capsule_x_percent;
    float capsule_y_percent;
    int32_t material;

    static void parse(binary_io::any_istream &in, PhysicsShapeComponent &out);
};  // struct

} // namespace
