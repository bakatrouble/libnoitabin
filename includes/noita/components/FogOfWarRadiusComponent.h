#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct FogOfWarRadiusComponent : types::Component {
    const std::string _component_name = "FogOfWarRadiusComponent";
    float radius;

    static void parse(binary_io::any_istream &in, FogOfWarRadiusComponent &out);
};  // struct

} // namespace
