#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct MaterialAreaCheckerComponent : types::Component {
    const std::string _component_name = "MaterialAreaCheckerComponent";
    int32_t update_every_x_frame;
    bool look_for_failure;
    types::AABB area_aabb;
    int32_t material;
    int32_t material2;
    int32_t count_min;
    bool always_check_fullness;
    bool kill_after_message;

    static void parse(binary_io::any_istream &in, MaterialAreaCheckerComponent &out);
};  // struct

} // namespace
