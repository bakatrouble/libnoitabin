#include <noita/components/PotionComponent.h>

void noita::components::PotionComponent::parse(binary_io::any_istream &in, noita::components::PotionComponent &out) {
    priv::read_integral(in, out.spray_velocity_coeff);
    priv::read_integral(in, out.spray_velocity_normalized_min);
    priv::read_integral(in, out.body_colored);
    priv::read_integral(in, out.throw_bunch);
    priv::read_integral(in, out.throw_how_many);
    priv::read_integral(in, out.dont_spray_static_materials);
    priv::read_integral(in, out.dont_spray_just_leak_gas_materials);
    priv::read_integral(in, out.never_color);
    priv::read_integral(in, out.custom_color_material);
}
