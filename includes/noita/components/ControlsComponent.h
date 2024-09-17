#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ControlsComponent : types::Component {
    const std::string _component_name = "ControlsComponent";
    bool polymorph_hax;
    int32_t polymorph_next_attack_frame;
    bool enabled;
    bool gamepad_indirect_aiming_enabled;
    bool gamepad_fire_on_thumbstick_extend;
    float gamepad_fire_on_thumbstick_extend_threshold;

    static void parse(binary_io::any_istream &in, ControlsComponent &out);
};  // struct

} // namespace
