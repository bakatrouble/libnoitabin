#include <noita/components/PhysicsBodyComponent.h>

void noita::components::PhysicsBodyComponent::parse(binary_io::any_istream &in, noita::components::PhysicsBodyComponent &out) {
    priv::read_integral(in, out.is_external);
    priv::read_integral(in, out.hax_fix_going_through_ground);
    priv::read_integral(in, out.hax_fix_going_through_sand);
    priv::read_integral(in, out.hax_wait_till_pixel_scenes_loaded);
    priv::read_integral(in, out.uid);
    priv::read_integral(in, out.is_enabled);
    priv::read_integral(in, out.linear_damping);
    priv::read_integral(in, out.angular_damping);
    priv::read_integral(in, out.allow_sleep);
    priv::read_integral(in, out.fixed_rotation);
    priv::read_integral(in, out.buoyancy);
    priv::read_integral(in, out.gravity_scale_if_has_no_image_shapes);
    priv::read_integral(in, out.is_bullet);
    priv::read_integral(in, out.is_static);
    priv::read_integral(in, out.is_kinematic);
    priv::read_integral(in, out.is_character);
    priv::read_integral(in, out.go_through_sand);
    priv::read_integral(in, out.gridworld_box2d);
    priv::read_integral(in, out.auto_clean);
    priv::read_integral(in, out.on_death_leave_physics_body);
    priv::read_integral(in, out.on_death_really_leave_body);
    priv::read_integral(in, out.update_entity_transform);
    priv::read_integral(in, out.force_add_update_areas);
    priv::read_integral(in, out.kills_entity);
    priv::read_integral(in, out.projectiles_rotate_toward_velocity);
    types::vec2<float>::parse(in, out.initial_velocity);
    priv::read_integral(in, out.randomize_init_velocity);
    priv::read_integral(in, out.mActiveState);
}
