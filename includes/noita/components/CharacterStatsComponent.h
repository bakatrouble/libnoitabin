#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct CharacterStatsComponent : types::Component {
    const std::string _component_name = "CharacterStatsComponent";

    static void parse(binary_io::any_istream &in, CharacterStatsComponent &out);
};  // struct

} // namespace
