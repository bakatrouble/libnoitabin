#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <noita/enums.h>
#include <noita/types.h>
#include <noita/component.h>

namespace noita::components {

struct BookComponent : types::Component {
    const std::string _component_name = "BookComponent";
    float TEMP_TEMPY;
    float TEMP_TEMP_TEMP;

    static void parse(binary_io::any_istream &in, BookComponent &out);
};  // struct

} // namespace
