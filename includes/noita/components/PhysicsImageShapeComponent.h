#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsImageShapeComponent : types::Component {
    const std::string _component_name = "PhysicsImageShapeComponent";
    bool is_root;
    int32_t body_id;
    bool use_sprite;
    bool is_circle;
    bool centered;
    float offset_x;
    float offset_y;
    float z;
    std::string image_file;
    int32_t material;

    static void parse(binary_io::any_istream &in, PhysicsImageShapeComponent &out);
};  // struct

} // namespace
