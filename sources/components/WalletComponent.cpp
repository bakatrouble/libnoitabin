#include <noita/components/WalletComponent.h>

void noita::components::WalletComponent::parse(binary_io::any_istream &in, noita::components::WalletComponent &out) {
    priv::read_integral(in, out.money);
    priv::read_integral(in, out.money_spent);
    priv::read_integral(in, out.mMoneyPrevFrame);
    priv::read_integral(in, out.mHasReachedInf);
}
