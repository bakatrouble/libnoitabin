#include <noita/components/GameEffectComponent.h>

void noita::components::GameEffectComponent::parse(binary_io::any_istream &in, noita::components::GameEffectComponent &out) {
    priv::read_integral(in, out.effect);
    priv::read_integral(in, out.custom_effect_id);
    priv::read_integral(in, out.frames);
    priv::read_integral(in, out.exclusivity_group);
    priv::read_integral(in, out.report_block_msg);
    priv::read_integral(in, out.disable_movement);
    priv::read_integral(in, out.ragdoll_effect);
    priv::read_integral(in, out.ragdoll_material);
    priv::read_integral(in, out.ragdoll_effect_custom_entity_file);
    priv::read_integral(in, out.ragdoll_fx_custom_entity_apply_only_to_largest_body);
    priv::read_integral(in, out.polymorph_target);
    priv::read_integral(in, out.mSerializedData);
    priv::read_integral(in, out.mCaster);
    priv::read_integral(in, out.mCasterHerdId);
    priv::read_integral(in, out.teleportation_probability);
    priv::read_integral(in, out.teleportation_delay_min_frames);
    priv::read_integral(in, out.teleportation_radius_min);
    priv::read_integral(in, out.teleportation_radius_max);
    priv::read_integral(in, out.teleportations_num);
    priv::read_integral(in, out.no_heal_max_hp_cap);
    priv::read_integral(in, out.causing_status_effect);
    priv::read_integral(in, out.caused_by_ingestion_status_effect);
    priv::read_integral(in, out.caused_by_stains);
    priv::read_integral(in, out.mCharmDisabledCameraBound);
    priv::read_integral(in, out.mCharmEnabledTeleporting);
    priv::read_integral(in, out.mInvisible);
    priv::read_integral(in, out.mCounter);
    priv::read_integral(in, out.mCooldown);
    priv::read_integral(in, out.mIsExtension);
    priv::read_integral(in, out.mIsSpent);
}
