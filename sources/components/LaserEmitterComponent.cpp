#include <noita/components/LaserEmitterComponent.h>

void noita::components::LaserEmitterComponent::parse(binary_io::any_istream &in, noita::components::LaserEmitterComponent &out) {
    types::ConfigLaser::parse(in, out.laser);
    priv::read_integral(in, out.is_emitting);
    priv::read_integral(in, out.emit_until_frame);
    priv::read_integral(in, out.laser_angle_add_rad);
}
