#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct HealthBarComponent : types::Component {
    const std::string _component_name = "HealthBarComponent";

    static void parse(binary_io::any_istream &in, HealthBarComponent &out);
};  // struct

} // namespace
