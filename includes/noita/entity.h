#pragma once

#include <any>
#include <iostream>
#include <string>
#include "components/_components.h"

namespace noita::priv {
    static void parse_component(binary_io::any_istream &in, components::ComponentVariant &out);
}

namespace noita::types {
    struct Entity {
        std::string name;
        uint8_t version;
        std::string xml_file;
        std::set<std::string> tags;
        types::CXForm transform;
        std::vector<components::ComponentVariant> components;
        std::vector<Entity> children;

        static void parse(binary_io::any_istream &in, Entity &out);
    };
}