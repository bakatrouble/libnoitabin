#include <noita/components/ElectricityComponent.h>

void noita::components::ElectricityComponent::parse(binary_io::any_istream &in, noita::components::ElectricityComponent &out) {
    priv::read_integral(in, out.energy);
    priv::read_integral(in, out.probability_to_heat);
    priv::read_integral(in, out.speed);
    priv::read_integral(in, out.splittings_min);
    priv::read_integral(in, out.splittings_max);
    priv::read_integral(in, out.splitting_energy_min);
    priv::read_integral(in, out.splitting_energy_max);
    priv::read_integral(in, out.hack_is_material_crack);
    priv::read_integral(in, out.hack_crack_ice);
    priv::read_integral(in, out.hack_is_set_fire);
}
