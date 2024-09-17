#include <noita/components/FlyingComponent.h>

void noita::components::FlyingComponent::parse(binary_io::any_istream &in, noita::components::FlyingComponent &out) {
    priv::read_integral(in, out.type);
    priv::read_integral(in, out.perlin_freq);
    priv::read_integral(in, out.perlin_time_freq);
    priv::read_integral(in, out.perlin_wind_x);
    priv::read_integral(in, out.perlin_wind_y);
}
