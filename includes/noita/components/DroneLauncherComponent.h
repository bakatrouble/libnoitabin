#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct DroneLauncherComponent : types::Component {
    const std::string _component_name = "DroneLauncherComponent";
    std::string drone_entity_file;

    static void parse(binary_io::any_istream &in, DroneLauncherComponent &out);
};  // struct

} // namespace
