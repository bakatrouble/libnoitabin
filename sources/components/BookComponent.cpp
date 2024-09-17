#include <noita/components/BookComponent.h>

void noita::components::BookComponent::parse(binary_io::any_istream &in, noita::components::BookComponent &out) {
    priv::read_integral(in, out.TEMP_TEMPY);
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
