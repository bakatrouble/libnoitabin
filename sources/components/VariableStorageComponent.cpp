#include <noita/components/VariableStorageComponent.h>

void noita::components::VariableStorageComponent::parse(binary_io::any_istream &in, noita::components::VariableStorageComponent &out) {
    priv::read_integral(in, out.name);
    priv::read_integral(in, out.value_string);
    priv::read_integral(in, out.value_int);
    priv::read_integral(in, out.value_bool);
    priv::read_integral(in, out.value_float);
}
