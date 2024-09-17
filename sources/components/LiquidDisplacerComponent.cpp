#include <noita/components/LiquidDisplacerComponent.h>

void noita::components::LiquidDisplacerComponent::parse(binary_io::any_istream &in, noita::components::LiquidDisplacerComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.velocity_x);
    priv::read_integral(in, out.velocity_y);
}
