#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AudioLoopComponent : types::Component {
    const std::string _component_name = "AudioLoopComponent";
    std::string file;
    std::string event_name;
    bool auto_play;
    bool auto_play_if_enabled;
    bool play_on_component_enable;
    bool calculate_material_lowpass;
    bool set_speed_parameter;
    bool set_speed_parameter_only_based_on_x_movement;
    bool set_speed_parameter_only_based_on_y_movement;
    float volume_autofade_speed;

    static void parse(binary_io::any_istream &in, AudioLoopComponent &out);
};  // struct

} // namespace
