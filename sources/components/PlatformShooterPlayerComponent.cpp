#include <noita/components/PlatformShooterPlayerComponent.h>

void noita::components::PlatformShooterPlayerComponent::parse(binary_io::any_istream &in, noita::components::PlatformShooterPlayerComponent &out) {
    priv::read_integral(in, out.aiming_reticle_distance_from_character);
    priv::read_integral(in, out.camera_max_distance_from_character);
    priv::read_integral(in, out.alcohol_drunken_speed);
    priv::read_integral(in, out.blood_fungi_drunken_speed);
    priv::read_integral(in, out.blood_worm_drunken_speed);
    types::vec2<int32_t>::parse(in, out.eating_area_min);
    types::vec2<int32_t>::parse(in, out.eating_area_max);
    priv::read_integral(in, out.eating_cells_per_frame);
    priv::read_integral(in, out.eating_probability);
    priv::read_integral(in, out.eating_delay_frames);
    priv::read_integral(in, out.stoned_speed);
    priv::read_integral(in, out.center_camera_on_this_entity);
    priv::read_integral(in, out.move_camera_with_aim);
}
