#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AudioComponent : types::Component {
    const std::string _component_name = "AudioComponent";
    std::string file;
    std::string event_root;
    std::string audio_physics_material;
    bool set_latest_event_position;
    bool remove_latest_event_on_destroyed;
    bool send_message_on_event_dead;
    bool play_only_if_visible;

    static void parse(binary_io::any_istream &in, AudioComponent &out);
};  // struct

} // namespace
