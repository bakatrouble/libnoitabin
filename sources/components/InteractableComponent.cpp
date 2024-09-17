#include <noita/components/InteractableComponent.h>

void noita::components::InteractableComponent::parse(binary_io::any_istream &in, noita::components::InteractableComponent &out) {
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.ui_text);
    priv::read_integral(in, out.name);
    priv::read_integral(in, out.exclusivity_group);
}
