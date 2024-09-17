#include <noita/components/ItemActionComponent.h>

void noita::components::ItemActionComponent::parse(binary_io::any_istream &in, noita::components::ItemActionComponent &out) {
    priv::read_integral(in, out.action_id);
}
