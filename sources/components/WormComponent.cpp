#include <noita/components/WormComponent.h>

void noita::components::WormComponent::parse(binary_io::any_istream &in, noita::components::WormComponent &out) {
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.acceleration);
    types::LensValue<float>::parse(in, out.ground_decceleration);
    priv::read_integral(in, out.gravity);
    priv::read_integral(in, out.tail_gravity);
    priv::read_integral(in, out.part_distance);
    priv::read_integral(in, out.ground_check_offset);
    priv::read_integral(in, out.hitbox_radius);
    priv::read_integral(in, out.bite_damage);
    priv::read_integral(in, out.target_kill_radius);
    priv::read_integral(in, out.target_kill_ragdoll_force);
    priv::read_integral(in, out.jump_cam_shake);
    priv::read_integral(in, out.jump_cam_shake_distance);
    priv::read_integral(in, out.eat_anim_wait_mult);
    priv::read_integral(in, out.ragdoll_filename);
    priv::read_integral(in, out.is_water_worm);
    priv::read_integral(in, out.max_speed);
}
