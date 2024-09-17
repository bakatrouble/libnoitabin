#include <noita/components/WalletValuableComponent.h>

void noita::components::WalletValuableComponent::parse(binary_io::any_istream &in, noita::components::WalletValuableComponent &out) {
    priv::read_integral(in, out.money_value);
}
