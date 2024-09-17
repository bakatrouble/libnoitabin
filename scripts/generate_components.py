from bs4 import BeautifulSoup

type_map = {
    'bool': 'bool',
    'int': 'int32_t',
    '__int64': 'int64_t',
    'unsigned short': 'uint16_t',
    'unsigned int': 'uint32_t',
    'unsigned __int64': 'uint64_t',
    'float': 'float',
    'double': 'double',
    'class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >': 'std::string',
    'class ConfigGun': 'types::ConfigGun',
    'class ConfigGunActionInfo': 'types::ConfigGunActionInfo',
    'class ConfigExplosion': 'types::ConfigExplosion',
    'class ConfigDamagesByType': 'types::ConfigDamagesByType',
    'class ConfigDrugFx': 'types::ConfigDrugFx',
    'class ConfigLaser': 'types::ConfigLaser',
    'class ConfigDamageCritical': 'types::ConfigDamageCritical',
    'struct ValueRange': 'types::ValueRange<float>',
    'struct ValueRangeInt': 'types::ValueRange<int32_t>',
    'struct types::aabb': 'types::AABB',
    'struct types::iaabb': 'types::AABB',
    'class LensValue<int>': 'types::LensValue<int32_t>',
    'struct LensValue<int>': 'types::LensValue<int32_t>',
    'struct LensValue<float>': 'types::LensValue<float>',
    'struct LensValue<bool>': 'types::LensValue<bool>',
    'enum ARC_TYPE::Enum': 'enums::ARC_TYPE',
    'enum DAMAGE_TYPES::Enum': 'enums::DAMAGE_TYPES',
    'enum RAGDOLL_FX::Enum': 'enums::RAGDOLL_FX',
    'enum EXPLOSION_TRIGGER_TYPE::Enum': 'enums::EXPLOSION_TRIGGER_TYPE',
    'enum GAME_EFFECT::Enum': 'enums::GAME_EFFECT',
    'enum HIT_EFFECT::Enum': 'enums::HIT_EFFECT',
    'enum INVENTORY_KIND::Enum': 'enums::INVENTORY_KIND',
    'enum LUA_VM_TYPE::Enum': 'enums::LUA_VM_TYPE',
    'enum MOVETOSURFACE_TYPE::Enum': 'enums::MOVETOSURFACE_TYPE',
    'enum PARTICLE_EMITTER_CUSTOM_STYLE::Enum': 'enums::PARTICLE_EMITTER_CUSTOM_STYLE',
    'enum JOINT_TYPE::Enum': 'enums::JOINT_TYPE',
    'enum PROJECTILE_TYPE::Enum': 'enums::PROJECTILE_TYPE',
    'enum VERLET_TYPE::Enum': 'enums::VERLET_TYPE',
    'class ceng::math::CVector2<float>': 'types::vec2<float>',
    'class ceng::math::CVector2<int>': 'types::vec2<int32_t>',
    'struct ceng::math::CXForm<float>': 'types::CXForm',
    'class std::vector<int,class std::allocator<int> >': 'std::vector<int32_t>',
    'class std::vector<float,class std::allocator<float> >': 'std::vector<float>',
    'class std::vector<double,class std::allocator<double> >': 'std::vector<double>',
    'class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >': 'std::vector<std::string>',
    'class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >': 'std::unordered_map<std::string, std::string>',
    'class std::vector<struct PathFindingJumpParams,class std::allocator<struct PathFindingJumpParams> >': 'std::vector<types::PathFindingJumpParams>',
    'class std::vector<class ConfigPendingPortal,class std::allocator<class ConfigPendingPortal> >': 'std::vector<types::ConfigPendingPortal>',
    'class std::vector<class ConfigNpcParty,class std::allocator<class ConfigNpcParty> >': 'std::vector<types::ConfigNpcParty>',
    'class std::vector<class ConfigCutThroughWorld,class std::allocator<class ConfigCutThroughWorld> >': 'std::vector<types::ConfigCutThroughWorld>',
    'class PixelSprite *': 'types::PixelSprite',
    'struct SpriteStains *': 'SKIP',
    'class ceng::CColorFloat': 'types::Color<float>',
    'struct UintArrayInline': 'std::vector<uint32_t>',
}

type_parse_map = {
    'bool': 'priv::read_integral',
    'int': 'priv::read_integral',
    '__int64': 'priv::read_integral',
    'unsigned short': 'priv::read_integral',
    'unsigned int': 'priv::read_integral',
    'unsigned __int64': 'priv::read_integral',
    'float': 'priv::read_integral',
    'double': 'priv::read_integral',
    'class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >': 'priv::read_integral',
    'class ConfigGun': 'types::ConfigGun::parse',
    'class ConfigGunActionInfo': 'types::ConfigGunActionInfo::parse',
    'class ConfigExplosion': 'types::ConfigExplosion::parse',
    'class ConfigDamagesByType': 'types::ConfigDamagesByType::parse',
    'class ConfigDrugFx': 'types::ConfigDrugFx::parse',
    'class ConfigLaser': 'types::ConfigLaser::parse',
    'class ConfigDamageCritical': 'types::ConfigDamageCritical::parse',
    'struct ValueRange': 'types::ValueRange<float>::parse',
    'struct ValueRangeInt': 'types::ValueRange<int32_t>::parse',
    'struct types::aabb': 'types::AABB::parse',
    'struct types::iaabb': 'types::AABB::parse',
    'class LensValue<int>': 'types::LensValue<int32_t>::parse',
    'struct LensValue<int>': 'types::LensValue<int32_t>::parse',
    'struct LensValue<float>': 'types::LensValue<float>::parse',
    'struct LensValue<bool>': 'types::LensValue<bool>::parse',
    'enum ARC_TYPE::Enum': 'priv::read_integral',
    'enum DAMAGE_TYPES::Enum': 'priv::read_integral',
    'enum RAGDOLL_FX::Enum': 'priv::read_integral',
    'enum EXPLOSION_TRIGGER_TYPE::Enum': 'priv::read_integral',
    'enum GAME_EFFECT::Enum': 'priv::read_integral',
    'enum HIT_EFFECT::Enum': 'priv::read_integral',
    'enum INVENTORY_KIND::Enum': 'priv::read_integral',
    'enum LUA_VM_TYPE::Enum': 'priv::read_integral',
    'enum MOVETOSURFACE_TYPE::Enum': 'priv::read_integral',
    'enum PARTICLE_EMITTER_CUSTOM_STYLE::Enum': 'priv::read_integral',
    'enum JOINT_TYPE::Enum': 'priv::read_integral',
    'enum PROJECTILE_TYPE::Enum': 'priv::read_integral',
    'enum VERLET_TYPE::Enum': 'priv::read_integral',
    'class ceng::math::CVector2<float>': 'types::vec2<float>::parse',
    'class ceng::math::CVector2<int>': 'types::vec2<int32_t>::parse',
    'struct ceng::math::CXForm<float>': 'types::CXForm::parse',
    'class std::vector<int,class std::allocator<int> >': 'priv::read_integral_vector',
    'class std::vector<float,class std::allocator<float> >': 'priv::read_integral_vector',
    'class std::vector<double,class std::allocator<double> >': 'priv::read_integral_vector',
    'class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >': 'priv::read_integral_vector',
    'class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > >': 'priv::read_integral_map',
    'class std::vector<struct PathFindingJumpParams,class std::allocator<struct PathFindingJumpParams> >': 'priv::read_custom_vector',
    'class std::vector<class ConfigPendingPortal,class std::allocator<class ConfigPendingPortal> >': 'priv::read_custom_vector',
    'class std::vector<class ConfigNpcParty,class std::allocator<class ConfigNpcParty> >': 'priv::read_custom_vector',
    'class std::vector<class ConfigCutThroughWorld,class std::allocator<class ConfigCutThroughWorld> >': 'priv::read_custom_vector',
    'class PixelSprite *': 'types::PixelSprite::parse',
    'struct SpriteStains *': 'SKIP',
    'class ceng::CColorFloat': 'types::Color<float>::parse',
    'struct UintArrayInline': 'priv::read_integral_vector',
}

soup = BeautifulSoup(open('/mnt/landfill/SteamLibrary/steamapps/common/Noita/data/schemas/c8ecfb341d22516067569b04563bff9c.xml').read(), features='lxml')
components_h = open('includes/noita/components/_components.h', 'w')
components_h.write('#pragma once\n\n'
                   '#include <variant>\n\n')
components_branch_inc = open('includes/noita/components/_components_branch.inc', 'w')
components_list = []

for component in soup.find_all('component'):
    component_name = component.get('component_name')
    components_list.append(component_name)
    components_h.write(f'#include "{component_name}.h"\n')

    print(f'sources/components/{component_name}.cpp')

    component_h = open(f'includes/noita/components/{component_name}.h', 'w')
    component_h.write(f'#pragma once\n\n'
                      f'#include <string>\n'
                      f'#include <vector>\n'
                      f'#include <unordered_map>\n'
                      f'#include <noita/enums.h>\n'
                      f'#include <noita/types.h>\n'
                      f'#include <noita/component.h>\n\n'
                      f'namespace noita::components {{\n\n'
                      f'struct {component_name} : types::Component {{\n'
                      # f'    ~{component_name}() = default;\n\n'
                      f'    const std::string _component_name = "{component_name}";\n')

    component_cpp = open(f'sources/components/{component_name}.cpp', 'w')
    component_cpp.write(f'#include <noita/components/{component_name}.h>\n\n'
                        f'void noita::components::{component_name}::parse(binary_io::any_istream &in, noita::components::{component_name} &out) {{\n')

    components_branch_inc.write(f'else if (componentName == "{component_name}") {{\n'
                                f'    out.emplace<components::{component_name}>(components::{component_name}{{}});\n'
                                f'}}\n')

    for var in component.find_all('var'):
        var_name = var.get('name')
        var_type = var.get('type')
        if type_map[var_type] == 'SKIP':
            continue
        component_h.write(f'    {type_map[var_type]} {var_name};\n')
        component_cpp.write(f'    {type_parse_map[var_type]}(in, out.{var_name});\n')

    component_h.write(f'\n'
                      f'    static void parse(binary_io::any_istream &in, {component_name} &out);\n')

    for var in component.find_all('var'):
        var_name = var.get('name')
        var_type = var.get('type')
        if type_map[var_type] == 'SKIP':
            continue

    component_h.write(# f'    }}\n'
                      f'}};  // struct\n\n'
                      f'}} // namespace\n')
    component_cpp.write(f'}}\n')

components_h.write(f'\n'
                   f'namespace noita::components {{\n'
                   f'    using ComponentVariant = std::variant<\n'
                   f'        {",\n        ".join(components_list)}\n'
                   f'    >;\n'
                   f'}}')


