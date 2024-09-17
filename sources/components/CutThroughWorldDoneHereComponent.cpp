#include <noita/components/CutThroughWorldDoneHereComponent.h>

void noita::components::CutThroughWorldDoneHereComponent::parse(binary_io::any_istream &in, noita::components::CutThroughWorldDoneHereComponent &out) {
    priv::read_integral(in, out.id_of_done_cut);
}
