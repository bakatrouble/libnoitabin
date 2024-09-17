#include <noita/components/BlackHoleComponent.h>

void noita::components::BlackHoleComponent::parse(binary_io::any_istream &in, noita::components::BlackHoleComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.particle_attractor_force);
    priv::read_integral(in, out.damage_probability);
    priv::read_integral(in, out.damage_amount);
}
