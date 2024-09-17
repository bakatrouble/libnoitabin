#include <noita/components/DrugEffectComponent.h>

void noita::components::DrugEffectComponent::parse(binary_io::any_istream &in, noita::components::DrugEffectComponent &out) {
    types::ConfigDrugFx::parse(in, out.drug_fx_target);
    types::ConfigDrugFx::parse(in, out.m_drug_fx_current);
}
