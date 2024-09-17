#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ConsumableTeleportComponent : types::Component {
    const std::string _component_name = "ConsumableTeleportComponent";
    bool create_other_end;
    bool is_at_home;
    float collision_radius;
    types::vec2<float> target_location;
    uint32_t target_id;
    uint32_t id;
    int32_t mNextUsableFrame;
    bool mHasOtherEnd;

    static void parse(binary_io::any_istream &in, ConsumableTeleportComponent &out);
};  // struct

} // namespace
