#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct PhysicsBodyComponent : types::Component {
    const std::string _component_name = "PhysicsBodyComponent";
    bool is_external;
    bool hax_fix_going_through_ground;
    bool hax_fix_going_through_sand;
    bool hax_wait_till_pixel_scenes_loaded;
    int32_t uid;
    bool is_enabled;
    float linear_damping;
    float angular_damping;
    bool allow_sleep;
    bool fixed_rotation;
    float buoyancy;
    float gravity_scale_if_has_no_image_shapes;
    bool is_bullet;
    bool is_static;
    bool is_kinematic;
    bool is_character;
    bool go_through_sand;
    bool gridworld_box2d;
    bool auto_clean;
    bool on_death_leave_physics_body;
    bool on_death_really_leave_body;
    bool update_entity_transform;
    bool force_add_update_areas;
    bool kills_entity;
    bool projectiles_rotate_toward_velocity;
    types::vec2<float> initial_velocity;
    bool randomize_init_velocity;
    bool mActiveState;

    static void parse(binary_io::any_istream &in, PhysicsBodyComponent &out);
};  // struct

} // namespace
