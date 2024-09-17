#include <noita/components/ExplosionComponent.h>

void noita::components::ExplosionComponent::parse(binary_io::any_istream &in, noita::components::ExplosionComponent &out) {
    priv::read_integral(in, out.trigger);
    types::ConfigExplosion::parse(in, out.config_explosion);
    priv::read_integral(in, out.timeout_frames);
    priv::read_integral(in, out.timeout_frames_random);
    priv::read_integral(in, out.kill_entity);
    priv::read_integral(in, out.mTimerTriggerFrame);
}
