#include <noita/components/StreamingKeepAliveComponent.h>

void noita::components::StreamingKeepAliveComponent::parse(binary_io::any_istream &in, noita::components::StreamingKeepAliveComponent &out) {
    priv::read_integral(in, out.TEMP_TEMPY);
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
