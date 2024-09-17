#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ManaReloaderComponent : types::Component {
    const std::string _component_name = "ManaReloaderComponent";

    static void parse(binary_io::any_istream &in, ManaReloaderComponent &out);
};  // struct

} // namespace
