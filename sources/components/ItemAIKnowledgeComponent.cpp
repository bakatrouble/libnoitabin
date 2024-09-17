#include <noita/components/ItemAIKnowledgeComponent.h>

void noita::components::ItemAIKnowledgeComponent::parse(binary_io::any_istream &in, noita::components::ItemAIKnowledgeComponent &out) {
    priv::read_integral(in, out.is_ranged_weapon);
    priv::read_integral(in, out.is_throwable_weapon);
    priv::read_integral(in, out.is_melee_weapon);
    priv::read_integral(in, out.is_self_healing);
    priv::read_integral(in, out.is_other_healing);
    priv::read_integral(in, out.is_self_buffing);
    priv::read_integral(in, out.is_other_buffing);
    priv::read_integral(in, out.is_weapon);
    priv::read_integral(in, out.is_known);
    priv::read_integral(in, out.is_safe);
    priv::read_integral(in, out.is_consumed);
    priv::read_integral(in, out.never_use);
    priv::read_integral(in, out.ranged_min_distance);
}
