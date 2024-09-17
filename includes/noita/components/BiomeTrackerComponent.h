#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct BiomeTrackerComponent : types::Component {
    const std::string _component_name = "BiomeTrackerComponent";
    int32_t limit_to_every_n_frame;

    static void parse(binary_io::any_istream &in, BiomeTrackerComponent &out);
};  // struct

} // namespace
