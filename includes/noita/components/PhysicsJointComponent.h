#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsJointComponent : types::Component {
    const std::string _component_name = "PhysicsJointComponent";
    bool nail_to_wall;
    bool grid_joint;
    bool breakable;
    enums::JOINT_TYPE type;
    int32_t body1_id;
    int32_t body2_id;
    float pos_x;
    float pos_y;
    float delta_x;
    float delta_y;
    bool mMotorEnabled;
    float mMotorSpeed;
    float mMaxMotorTorque;

    static void parse(binary_io::any_istream &in, PhysicsJointComponent &out);
};  // struct

} // namespace
