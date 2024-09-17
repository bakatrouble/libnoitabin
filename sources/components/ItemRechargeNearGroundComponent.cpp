#include <noita/components/ItemRechargeNearGroundComponent.h>

void noita::components::ItemRechargeNearGroundComponent::parse(binary_io::any_istream &in, noita::components::ItemRechargeNearGroundComponent &out) {
    priv::read_integral(in, out.TEMP_TEMPY);
    priv::read_integral(in, out.TEMP_TEMP_TEMP);
}
