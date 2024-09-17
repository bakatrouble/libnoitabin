#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct HotspotComponent : types::Component {
    const std::string _component_name = "HotspotComponent";
    types::vec2<float> offset;
    bool transform_with_scale;
    std::string sprite_hotspot_name;

    static void parse(binary_io::any_istream &in, HotspotComponent &out);
};  // struct

} // namespace
