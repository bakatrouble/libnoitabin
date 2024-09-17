#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct LifetimeComponent : types::Component {
    const std::string _component_name = "LifetimeComponent";
    int32_t lifetime;
    types::ValueRange<float> randomize_lifetime;
    bool fade_sprites;
    bool kill_parent;
    bool kill_all_parents;
    bool serialize_duration;
    int32_t kill_frame_serialized;
    int32_t creation_frame_serialized;

    static void parse(binary_io::any_istream &in, LifetimeComponent &out);
};  // struct

} // namespace
