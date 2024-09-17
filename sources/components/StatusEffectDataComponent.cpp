#include <noita/components/StatusEffectDataComponent.h>

void noita::components::StatusEffectDataComponent::parse(binary_io::any_istream &in, noita::components::StatusEffectDataComponent &out) {
    priv::read_integral_vector(in, out.stain_effects);
    priv::read_integral_vector(in, out.stain_effect_cooldowns);
    priv::read_integral_vector(in, out.effects_previous);
    priv::read_integral_vector(in, out.ingestion_effects);
    priv::read_integral_vector(in, out.ingestion_effect_causes);
    priv::read_integral_vector(in, out.ingestion_effect_causes_many);
}
