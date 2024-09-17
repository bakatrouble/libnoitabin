#include <noita/components/TelekinesisComponent.h>

void noita::components::TelekinesisComponent::parse(binary_io::any_istream &in, noita::components::TelekinesisComponent &out) {
    priv::read_integral(in, out.min_size);
    priv::read_integral(in, out.max_size);
    priv::read_integral(in, out.radius);
    priv::read_integral(in, out.throw_speed);
    priv::read_integral(in, out.target_distance);
    priv::read_integral(in, out.kick_to_use);
    priv::read_integral(in, out.mState);
    priv::read_integral(in, out.mBodyID);
    priv::read_integral(in, out.mStartBodyMaxExtent);
    priv::read_integral(in, out.mStartAimAngle);
    priv::read_integral(in, out.mStartBodyAngle);
    priv::read_integral(in, out.mStartBodyDistance);
    priv::read_integral(in, out.mStartTime);
    priv::read_integral(in, out.mMinBodyDistance);
    priv::read_integral(in, out.mInteract);
}
