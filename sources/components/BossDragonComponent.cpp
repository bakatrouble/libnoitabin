#include <noita/components/BossDragonComponent.h>

void noita::components::BossDragonComponent::parse(binary_io::any_istream &in, noita::components::BossDragonComponent &out) {
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.speed_hunt);
    priv::read_integral(in, out.acceleration);
    priv::read_integral(in, out.direction_adjust_speed);
    priv::read_integral(in, out.direction_adjust_speed_hunt);
    priv::read_integral(in, out.gravity);
    priv::read_integral(in, out.tail_gravity);
    priv::read_integral(in, out.part_distance);
    priv::read_integral(in, out.ground_check_offset);
    priv::read_integral(in, out.eat_ground_radius);
    priv::read_integral(in, out.eat_ground);
    priv::read_integral(in, out.hitbox_radius);
    priv::read_integral(in, out.bite_damage);
    priv::read_integral(in, out.target_kill_radius);
    priv::read_integral(in, out.target_kill_ragdoll_force);
    priv::read_integral(in, out.hunt_box_radius);
    priv::read_integral(in, out.random_target_box_radius);
    priv::read_integral(in, out.new_hunt_target_check_every);
    priv::read_integral(in, out.new_random_target_check_every);
    priv::read_integral(in, out.jump_cam_shake);
    priv::read_integral(in, out.jump_cam_shake_distance);
    priv::read_integral(in, out.eat_anim_wait_mult);
    priv::read_integral(in, out.projectile_1);
    priv::read_integral(in, out.projectile_1_count);
    priv::read_integral(in, out.projectile_2);
    priv::read_integral(in, out.projectile_2_count);
    priv::read_integral(in, out.ragdoll_filename);
}
