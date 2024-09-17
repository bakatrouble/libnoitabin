#include <noita/components/ElectricChargeComponent.h>

void noita::components::ElectricChargeComponent::parse(binary_io::any_istream &in, noita::components::ElectricChargeComponent &out) {
    priv::read_integral(in, out.charge_time_frames);
    priv::read_integral(in, out.fx_velocity_max);
    priv::read_integral(in, out.electricity_emission_interval_frames);
    priv::read_integral(in, out.fx_emission_interval_min);
    priv::read_integral(in, out.fx_emission_interval_max);
    priv::read_integral(in, out.charge);
}
