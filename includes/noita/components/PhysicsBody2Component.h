#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsBody2Component : types::Component {
    const std::string _component_name = "PhysicsBody2Component";
    uint64_t mBodyId;
    float linear_damping;
    float angular_damping;
    bool allow_sleep;
    bool fixed_rotation;
    bool is_bullet;
    bool is_static;
    float buoyancy;
    bool hax_fix_going_through_ground;
    bool hax_fix_going_through_sand;
    bool hax_wait_till_pixel_scenes_loaded;
    bool go_through_sand;
    bool auto_clean;
    bool force_add_update_areas;
    bool update_entity_transform;
    bool kill_entity_if_body_destroyed;
    bool kill_entity_after_initialized;
    bool manual_init;
    bool destroy_body_if_entity_destroyed;
    float root_offset_x;
    float root_offset_y;
    float init_offset_x;
    float init_offset_y;
    bool mActiveState;
    types::vec2<float> mLocalPosition;
    uint32_t mPixelCountOrig;

    static void parse(binary_io::any_istream &in, PhysicsBody2Component &out);
};  // struct

} // namespace
