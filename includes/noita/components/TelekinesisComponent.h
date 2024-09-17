#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct TelekinesisComponent : types::Component {
    const std::string _component_name = "TelekinesisComponent";
    uint32_t min_size;
    uint32_t max_size;
    float radius;
    float throw_speed;
    float target_distance;
    bool kick_to_use;
    int32_t mState;
    uint64_t mBodyID;
    float mStartBodyMaxExtent;
    float mStartAimAngle;
    float mStartBodyAngle;
    float mStartBodyDistance;
    float mStartTime;
    float mMinBodyDistance;
    bool mInteract;

    static void parse(binary_io::any_istream &in, TelekinesisComponent &out);
};  // struct

} // namespace
