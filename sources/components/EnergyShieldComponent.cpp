#include <noita/components/EnergyShieldComponent.h>

void noita::components::EnergyShieldComponent::parse(binary_io::any_istream &in, noita::components::EnergyShieldComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.damage_multiplier);
    priv::read_integral(in, out.max_energy);
    priv::read_integral(in, out.energy_required_to_shield);
    priv::read_integral(in, out.recharge_speed);
    priv::read_integral(in, out.sector_degrees);
    priv::read_integral(in, out.energy);
}
