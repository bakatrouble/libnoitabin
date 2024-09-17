#include <noita/components/LoadEntitiesComponent.h>

void noita::components::LoadEntitiesComponent::parse(binary_io::any_istream &in, noita::components::LoadEntitiesComponent &out) {
    priv::read_integral(in, out.entity_file);
    types::ValueRange<int32_t>::parse(in, out.count);
    priv::read_integral(in, out.kill_entity);
    priv::read_integral(in, out.timeout_frames);
    priv::read_integral(in, out.mTimerTriggerFrame);
}
