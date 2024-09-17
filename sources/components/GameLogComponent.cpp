#include <noita/components/GameLogComponent.h>

void noita::components::GameLogComponent::parse(binary_io::any_istream &in, noita::components::GameLogComponent &out) {
    priv::read_integral(in, out.report_death);
    priv::read_integral(in, out.report_damage);
    priv::read_integral(in, out.report_new_biomes);
    priv::read_integral_vector(in, out.mVisitiedBiomes);
}
