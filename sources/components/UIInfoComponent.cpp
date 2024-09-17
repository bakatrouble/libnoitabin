#include <noita/components/UIInfoComponent.h>

void noita::components::UIInfoComponent::parse(binary_io::any_istream &in, noita::components::UIInfoComponent &out) {
    priv::read_integral(in, out.name);
}
