#include <format>
#include <noita/entity.h>

void noita::priv::parse_component(binary_io::any_istream &in, components::ComponentVariant &out) {
//        uint32_t componentStart = in.tell();

    std::string componentName;
    priv::read_string(in, componentName);

//        std::cout << std::format("Parsing component `{}` @ 0x{:X}\n", componentName, componentStart);

    if (false) {}
#include <noita/components/_components_branch.inc>
    else {
        throw std::runtime_error(std::format("unknown component type: {}", componentName));
    }

    std::visit([&](auto &&component) {
      priv::read_integral(in, component._version);
      priv::read_integral(in, component._enabled);
      priv::read_csv_string(in, component.tags);
      component.parse(in, component);
    }, out);
}

void noita::types::Entity::parse(binary_io::any_istream &in, noita::types::Entity &out) {
    priv::read_integral(in, out.name);
    priv::read_integral(in, out.version);
    priv::read_integral(in, out.xml_file);
    priv::read_csv_string(in, out.tags);
    types::CXForm::parse(in, out.transform);

    uint32_t componentsSize;
    priv::read_integral(in, componentsSize);
    out.components.resize(componentsSize);
    for (uint32_t i=0; i < componentsSize; i++) {
        priv::parse_component(in, out.components[i]);
    }

    uint32_t childrenSize;
    priv::read_integral(in, childrenSize);
    out.children.resize(childrenSize);
    for (uint32_t i=0; i < childrenSize; i++) {
        Entity::parse(in, out.children[i]);
    }
}
