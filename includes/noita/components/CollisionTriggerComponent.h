#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CollisionTriggerComponent : types::Component {
    const std::string _component_name = "CollisionTriggerComponent";
    float width;
    float height;
    float radius;
    std::string required_tag;
    bool remove_component_when_triggered;
    bool destroy_this_entity_when_triggered;
    int32_t timer_for_destruction;
    bool self_trigger;
    int32_t skip_self_frames;

    static void parse(binary_io::any_istream &in, CollisionTriggerComponent &out);
};  // struct

} // namespace
