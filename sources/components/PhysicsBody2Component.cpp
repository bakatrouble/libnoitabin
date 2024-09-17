#include <noita/components/PhysicsBody2Component.h>

void noita::components::PhysicsBody2Component::parse(binary_io::any_istream &in, noita::components::PhysicsBody2Component &out) {
    priv::read_integral(in, out.mBodyId);
    priv::read_integral(in, out.linear_damping);
    priv::read_integral(in, out.angular_damping);
    priv::read_integral(in, out.allow_sleep);
    priv::read_integral(in, out.fixed_rotation);
    priv::read_integral(in, out.is_bullet);
    priv::read_integral(in, out.is_static);
    priv::read_integral(in, out.buoyancy);
    priv::read_integral(in, out.hax_fix_going_through_ground);
    priv::read_integral(in, out.hax_fix_going_through_sand);
    priv::read_integral(in, out.hax_wait_till_pixel_scenes_loaded);
    priv::read_integral(in, out.go_through_sand);
    priv::read_integral(in, out.auto_clean);
    priv::read_integral(in, out.force_add_update_areas);
    priv::read_integral(in, out.update_entity_transform);
    priv::read_integral(in, out.kill_entity_if_body_destroyed);
    priv::read_integral(in, out.kill_entity_after_initialized);
    priv::read_integral(in, out.manual_init);
    priv::read_integral(in, out.destroy_body_if_entity_destroyed);
    priv::read_integral(in, out.root_offset_x);
    priv::read_integral(in, out.root_offset_y);
    priv::read_integral(in, out.init_offset_x);
    priv::read_integral(in, out.init_offset_y);
    priv::read_integral(in, out.mActiveState);
    types::vec2<float>::parse(in, out.mLocalPosition);
    priv::read_integral(in, out.mPixelCountOrig);
}
