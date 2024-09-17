#include <noita/components/GenomeDataComponent.h>

void noita::components::GenomeDataComponent::parse(binary_io::any_istream &in, noita::components::GenomeDataComponent &out) {
    types::LensValue<int32_t>::parse(in, out.herd_id);
    priv::read_integral(in, out.is_predator);
    priv::read_integral(in, out.food_chain_rank);
    priv::read_integral(in, out.berserk_dont_attack_friends);
}
