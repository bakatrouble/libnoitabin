#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct FogOfWarRemoverComponent : types::Component {
    const std::string _component_name = "FogOfWarRemoverComponent";
    float radius;

    static void parse(binary_io::any_istream &in, FogOfWarRemoverComponent &out);
};  // struct

} // namespace
