#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsJoint2Component : types::Component {
    const std::string _component_name = "PhysicsJoint2Component";
    uint16_t joint_id;
    float break_force;
    float break_distance;
    bool break_on_body_modified;
    float break_on_shear_angle_deg;
    enums::JOINT_TYPE type;
    int32_t body1_id;
    int32_t body2_id;
    float offset_x;
    float offset_y;
    float ray_x;
    float ray_y;
    float surface_attachment_offset_x;
    float surface_attachment_offset_y;

    static void parse(binary_io::any_istream &in, PhysicsJoint2Component &out);
};  // struct

} // namespace
