#include <noita/components/DrugEffectModifierComponent.h>

void noita::components::DrugEffectModifierComponent::parse(binary_io::any_istream &in, noita::components::DrugEffectModifierComponent &out) {
    types::ConfigDrugFx::parse(in, out.fx_add);
    types::ConfigDrugFx::parse(in, out.fx_multiply);
}
