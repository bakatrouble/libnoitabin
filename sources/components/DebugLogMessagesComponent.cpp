#include <noita/components/DebugLogMessagesComponent.h>

void noita::components::DebugLogMessagesComponent::parse(binary_io::any_istream &in, noita::components::DebugLogMessagesComponent &out) {
    priv::read_integral(in, out.TEMP_TEMPY);
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
