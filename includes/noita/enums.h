#pragma once

#include <cstdint>

namespace noita::enums {
    enum class ARC_TYPE : uint32_t {
        MATERIAL,
        LIGHTNING
    };
    
    enum class AUDIO_LAYER : uint32_t {
        EFFECT_GAME,
        EFFECT_UI,
        AMBIENCE,
        MUSIC
    };
    
    enum class BIOME_TYPE : uint32_t {
        BIOME_PROCEDURAL,
        BIOME_BITMAP,
        BIOME_WANG_TILE
    };
    
    enum class DAMAGE_TYPES : uint32_t {
        NONE,
        DAMAGE_MELEE,
        DAMAGE_PROJECTILE,
        DAMAGE_EXPLOSION,
        DAMAGE_BITE,
        DAMAGE_FIRE,
        DAMAGE_MATERIAL,
        DAMAGE_FALL,
        DAMAGE_ELECTRICITY,
        DAMAGE_DROWNING,
        DAMAGE_PHYSICS_BODY_DAMAGED,
        DAMAGE_DRILL,
        DAMAGE_SLICE,
        DAMAGE_ICE,
        DAMAGE_HEALING,
        DAMAGE_PHYSICS_HIT,
        DAMAGE_RADIOACTIVE,
        DAMAGE_POISON,
        DAMAGE_MATERIAL_WITH_FLASH,
        DAMAGE_OVEREATING,
        DAMAGE_CURSE,
        DAMAGE_HOLY
    };
    
    enum class EDGE_STYPE : uint32_t {
        COLOR_EDGE_PIXELS,
        EVERYWHERE,
        CARDINAL_DIRECTIONS,
        NORMAL_BASED
    };
    
    enum class RAGDOLL_FX : uint32_t {
        NONE,
        NORMAL,
        BLOOD_EXPLOSION,
        BLOOD_SPRAY,
        FROZEN,
        CONVERT_TO_MATERIAL,
        CUSTOM_RAGDOLL_ENTITY,
        DISINTEGRATED,
        NO_RAGDOLL_FILE,
        PLAYER_RAGDOLL_CAMERA
    };
    
    enum class FOG_OF_WAR_TYPE : uint32_t {
        DEFAULT,
        HEAVY_CLEAR_AT_PLAYER,
        HEAVY_CLEAR_WITH_MAGIC,
        HEAVY_NO_CLEAR
    };
    
    enum class EXPLOSION_TRIGGER_TYPE : uint32_t {
        ON_DEATH,
        ON_CREATE,
        ON_TIMER
    };
    
    enum class GAME_EFFECT : uint32_t {
        NONE,
        ELECTROCUTION,
        FROZEN,
        ON_FIRE,
        POISON,
        BERSERK,
        CHARM,
        POLYMORPH,
        POLYMORPH_RANDOM,
        BLINDNESS,
        TELEPATHY,
        TELEPORTATION,
        REGENERATION,
        LEVITATION,
        MOVEMENT_SLOWER,
        FARTS,
        DRUNK,
        BREATH_UNDERWATER,
        RADIOACTIVE,
        WET,
        OILED,
        BLOODY,
        SLIMY,
        CRITICAL_HIT_BOOST,
        CONFUSION,
        MELEE_COUNTER,
        WORM_ATTRACTOR,
        WORM_DETRACTOR,
        FOOD_POISONING,
        FRIEND_THUNDERMAGE,
        FRIEND_FIREMAGE,
        INTERNAL_FIRE,
        INTERNAL_ICE,
        JARATE,
        KNOCKBACK,
        KNOCKBACK_IMMUNITY,
        MOVEMENT_SLOWER_2X,
        MOVEMENT_FASTER,
        STAINS_DROP_FASTER,
        SAVING_GRACE,
        DAMAGE_MULTIPLIER,
        HEALING_BLOOD,
        RESPAWN,
        PROTECTION_FIRE,
        PROTECTION_RADIOACTIVITY,
        PROTECTION_EXPLOSION,
        PROTECTION_MELEE,
        PROTECTION_ELECTRICITY,
        TELEPORTITIS,
        STAINLESS_ARMOUR,
        GLOBAL_GORE,
        EDIT_WANDS_EVERYWHERE,
        EXPLODING_CORPSE_SHOTS,
        EXPLODING_CORPSE,
        EXTRA_MONEY,
        EXTRA_MONEY_TRICK_KILL,
        HOVER_BOOST,
        PROJECTILE_HOMING,
        ABILITY_ACTIONS_MATERIALIZE,
        NO_DAMAGE_FLASH,
        NO_SLIME_SLOWDOWN,
        MOVEMENT_FASTER_2X,
        NO_WAND_EDITING,
        LOW_HP_DAMAGE_BOOST,
        FASTER_LEVITATION,
        STUN_PROTECTION_ELECTRICITY,
        STUN_PROTECTION_FREEZE,
        IRON_STOMACH,
        PROTECTION_ALL,
        INVISIBILITY,
        REMOVE_FOG_OF_WAR,
        MANA_REGENERATION,
        PROTECTION_DURING_TELEPORT,
        PROTECTION_POLYMORPH,
        PROTECTION_FREEZE,
        FROZEN_SPEED_UP,
        UNSTABLE_TELEPORTATION,
        POLYMORPH_UNSTABLE,
        CUSTOM,
        ALLERGY_RADIOACTIVE,
        RAINBOW_FARTS,
        WEAKNESS,
        PROTECTION_FOOD_POISONING,
        NO_HEAL,
        PROTECTION_EDGES,
        PROTECTION_PROJECTILE,
        POLYMORPH_CESSATION,
        _LAST
    };
    
    enum class GENERAL_NOISE : uint32_t {
        IQNoise,
        DirtyPeeNoise,
        QemNoise,
        WhiteNoise,
        MixNoise,
        SimplexNoise,
        STB_Perlin,
        FastBlockNoise,
        SimplexNoise1234
    };
    
    enum class HIT_EFFECT : uint32_t {
        NONE,
        LOAD_ENTITY,
        LOAD_CHILD_ENTITY,
        LOAD_UNIQUE_CHILD_ENTITY,
        LOAD_GAME_EFFECT,
        LOAD_UNIQUE_GAME_EFFECT,
        CONVERT_RAGDOLL_TO_MATERIAL,
        CRITICAL_HIT_BOOST,
        DAMAGE_BOOST,
        SWAPPER
    };
    
    enum class INVENTORY_KIND : uint32_t {
        QUICK,
        FULL
    };
    
    enum class LUA_VM_TYPE : uint32_t {
        SHARED_BY_MANY_COMPONENTS,
        CREATE_NEW_EVERY_EXECUTION,
        ONE_PER_COMPONENT_INSTANCE
    };
    
    enum class MATERIALAUDIO_TYPE : uint32_t {
        NONE,
        LAVA,
        MAGICAL
    };
    
    enum class MATERIALBREAKAUDIO_TYPE : uint32_t {
        NONE,
        WOOD,
        CHAIN
    };
    
    enum class MOVETOSURFACE_TYPE : uint32_t {
        ENTITY,
        VERLET_ROPE_ONE_JOINT,
        VERLET_ROPE_TWO_JOINTS
    };
    
    enum class NOISE_TYPE : uint32_t {
        IQ2_SIMPLEX1234,
        IQ_SIMPLEX,
        SIN_CAPPED_EVERYTHING,
        SIN_CAPPED_SIMPLEX
    };
    
    enum class PARTICLE_EMITTER_CUSTOM_STYLE : uint32_t {
        NONE,
        FIRE
    };
    
    enum class JOINT_TYPE : uint32_t {
        REVOLUTE_JOINT,
        WELD_JOINT,
        REVOLUTE_JOINT_ATTACH_TO_NEARBY_SURFACE,
        WELD_JOINT_ATTACH_TO_NEARBY_SURFACE
    };
    
    enum class PROJECTILE_TYPE : uint32_t {
        PROJECTILE,
        LIGHTNING,
        VERLET,
        MATERIAL_PARTICLE
    };
    
    enum class VERLET_TYPE : uint32_t {
        CHAIN,
        CLOTH,
        BLOB
    };
}
