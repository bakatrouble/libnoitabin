#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsJoint2MutatorComponent : types::Component {
    const std::string _component_name = "PhysicsJoint2MutatorComponent";
    uint16_t joint_id;
    bool destroy;
    float motor_speed;
    float motor_max_torque;
    uint64_t mBox2DJointId;

    static void parse(binary_io::any_istream &in, PhysicsJoint2MutatorComponent &out);
};  // struct

} // namespace
