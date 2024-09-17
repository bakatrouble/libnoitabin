#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct AdvancedFishAIComponent : types::Component {
    const std::string _component_name = "AdvancedFishAIComponent";
    float move_check_range_min;
    float move_check_range_max;

    static void parse(binary_io::any_istream &in, AdvancedFishAIComponent &out);
};  // struct

} // namespace
