#include <noita/components/TextLogComponent.h>

void noita::components::TextLogComponent::parse(binary_io::any_istream &in, noita::components::TextLogComponent &out) {
    priv::read_integral(in, out.key);
    priv::read_integral(in, out.image_filename);
}
