#include <noita/components/EndingMcGuffinComponent.h>

void noita::components::EndingMcGuffinComponent::parse(binary_io::any_istream &in, noita::components::EndingMcGuffinComponent &out) {
    priv::read_integral(in, out.TEMP_TEMPY);
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
