#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct ElectricityReceiverComponent : types::Component {
    const std::string _component_name = "ElectricityReceiverComponent";
    int32_t offset_x;
    int32_t offset_y;
    int32_t radius;
    int32_t active_time_frames;
    int32_t switch_on_msg_interval_frames;
    int32_t electrified_msg_interval_frames;

    static void parse(binary_io::any_istream &in, ElectricityReceiverComponent &out);
};  // struct

} // namespace
