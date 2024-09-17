#include <noita/components/MusicEnergyAffectorComponent.h>

void noita::components::MusicEnergyAffectorComponent::parse(binary_io::any_istream &in, noita::components::MusicEnergyAffectorComponent &out) {
    priv::read_integral(in, out.energy_target);
    priv::read_integral(in, out.fade_range);
    priv::read_integral(in, out.trigger_danger_music);
    priv::read_integral(in, out.fog_of_war_threshold);
    priv::read_integral(in, out.is_enemy);
    priv::read_integral(in, out.energy_lerp_up_speed_multiplier);
}
