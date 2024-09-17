#include <noita/components/VerletWeaponComponent.h>

void noita::components::VerletWeaponComponent::parse(binary_io::any_istream &in, noita::components::VerletWeaponComponent &out) {
    priv::read_integral(in, out.damage_radius);
    priv::read_integral(in, out.physics_force_radius);
    priv::read_integral(in, out.damage_min_step);
    priv::read_integral(in, out.damage_max);
    priv::read_integral(in, out.damage_coeff);
    priv::read_integral(in, out.impulse_coeff);
    priv::read_integral(in, out.fade_duration_frames);
    priv::read_integral(in, out.physics_impulse_coeff);
}
