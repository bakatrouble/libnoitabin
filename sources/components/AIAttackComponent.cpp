#include <noita/components/AIAttackComponent.h>

void noita::components::AIAttackComponent::parse(binary_io::any_istream &in, noita::components::AIAttackComponent &out) {
    priv::read_integral(in, out.use_probability);
    priv::read_integral(in, out.min_distance);
    priv::read_integral(in, out.max_distance);
    priv::read_integral(in, out.angular_range_deg);
    priv::read_integral(in, out.state_duration_frames);
    priv::read_integral(in, out.frames_between);
    priv::read_integral(in, out.frames_between_global);
    priv::read_integral(in, out.animation_name);
    priv::read_integral(in, out.attack_landing_ranged_enabled);
    priv::read_integral(in, out.attack_ranged_action_frame);
    priv::read_integral(in, out.attack_ranged_offset_x);
    priv::read_integral(in, out.attack_ranged_offset_y);
    priv::read_integral(in, out.attack_ranged_root_offset_x);
    priv::read_integral(in, out.attack_ranged_root_offset_y);
    priv::read_integral(in, out.attack_ranged_use_message);
    priv::read_integral(in, out.attack_ranged_predict);
    priv::read_integral(in, out.attack_ranged_entity_file);
    priv::read_integral(in, out.attack_ranged_entity_count_min);
    priv::read_integral(in, out.attack_ranged_entity_count_max);
    priv::read_integral(in, out.attack_ranged_use_laser_sight);
    priv::read_integral(in, out.attack_ranged_aim_rotation_enabled);
    priv::read_integral(in, out.attack_ranged_aim_rotation_speed);
    priv::read_integral(in, out.attack_ranged_aim_rotation_shooting_ok_angle_deg);
}
