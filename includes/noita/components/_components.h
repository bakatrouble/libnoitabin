#pragma once

#include <variant>

#include "AIAttackComponent.h"
#include "AIComponent.h"
#include "AbilityComponent.h"
#include "AdvancedFishAIComponent.h"
#include "AltarComponent.h"
#include "AnimalAIComponent.h"
#include "ArcComponent.h"
#include "AreaDamageComponent.h"
#include "AttachToEntityComponent.h"
#include "AudioComponent.h"
#include "AudioListenerComponent.h"
#include "AudioLoopComponent.h"
#include "BiomeTrackerComponent.h"
#include "BlackHoleComponent.h"
#include "BookComponent.h"
#include "BossDragonComponent.h"
#include "BossHealthBarComponent.h"
#include "CameraBoundComponent.h"
#include "CardinalMovementComponent.h"
#include "CellEaterComponent.h"
#include "CharacterCollisionComponent.h"
#include "CharacterDataComponent.h"
#include "CharacterPlatformingComponent.h"
#include "CharacterStatsComponent.h"
#include "CollisionTriggerComponent.h"
#include "ConsumableTeleportComponent.h"
#include "ControllerGoombaAIComponent.h"
#include "ControlsComponent.h"
#include "CrawlerAnimalComponent.h"
#include "CutThroughWorldDoneHereComponent.h"
#include "DamageModelComponent.h"
#include "DamageNearbyEntitiesComponent.h"
#include "DebugFollowMouseComponent.h"
#include "DebugLogMessagesComponent.h"
#include "DebugSpatialVisualizerComponent.h"
#include "DieIfSpeedBelowComponent.h"
#include "DroneLauncherComponent.h"
#include "DrugEffectComponent.h"
#include "DrugEffectModifierComponent.h"
#include "ElectricChargeComponent.h"
#include "ElectricityComponent.h"
#include "ElectricityReceiverComponent.h"
#include "ElectricitySourceComponent.h"
#include "EndingMcGuffinComponent.h"
#include "EnergyShieldComponent.h"
#include "ExplodeOnDamageComponent.h"
#include "ExplosionComponent.h"
#include "FishAIComponent.h"
#include "FlyingComponent.h"
#include "FogOfWarRadiusComponent.h"
#include "FogOfWarRemoverComponent.h"
#include "GameAreaEffectComponent.h"
#include "GameEffectComponent.h"
#include "GameLogComponent.h"
#include "GameStatsComponent.h"
#include "GasBubbleComponent.h"
#include "GenomeDataComponent.h"
#include "GhostComponent.h"
#include "GodInfoComponent.h"
#include "GunComponent.h"
#include "HealthBarComponent.h"
#include "HitEffectComponent.h"
#include "HitboxComponent.h"
#include "HomingComponent.h"
#include "HotspotComponent.h"
#include "IKLimbAttackerComponent.h"
#include "IKLimbComponent.h"
#include "IKLimbWalkerComponent.h"
#include "IKLimbsAnimatorComponent.h"
#include "IngestionComponent.h"
#include "InheritTransformComponent.h"
#include "InteractableComponent.h"
#include "Inventory2Component.h"
#include "InventoryComponent.h"
#include "InventoryGuiComponent.h"
#include "ItemAIKnowledgeComponent.h"
#include "ItemActionComponent.h"
#include "ItemAlchemyComponent.h"
#include "ItemChestComponent.h"
#include "ItemComponent.h"
#include "ItemCostComponent.h"
#include "ItemPickUpperComponent.h"
#include "ItemRechargeNearGroundComponent.h"
#include "ItemStashComponent.h"
#include "KickComponent.h"
#include "LaserEmitterComponent.h"
#include "LevitationComponent.h"
#include "LifetimeComponent.h"
#include "LightComponent.h"
#include "LightningComponent.h"
#include "LimbBossComponent.h"
#include "LiquidDisplacerComponent.h"
#include "LoadEntitiesComponent.h"
#include "LocationMarkerComponent.h"
#include "LooseGroundComponent.h"
#include "LuaComponent.h"
#include "MagicConvertMaterialComponent.h"
#include "MagicXRayComponent.h"
#include "ManaReloaderComponent.h"
#include "MaterialAreaCheckerComponent.h"
#include "MaterialInventoryComponent.h"
#include "MaterialSeaSpawnerComponent.h"
#include "MaterialSuckerComponent.h"
#include "MoveToSurfaceOnCreateComponent.h"
#include "MusicEnergyAffectorComponent.h"
#include "NinjaRopeComponent.h"
#include "NullDamageComponent.h"
#include "OrbComponent.h"
#include "ParticleEmitterComponent.h"
#include "PathFindingComponent.h"
#include "PathFindingGridMarkerComponent.h"
#include "PhysicsAIComponent.h"
#include "PhysicsBody2Component.h"
#include "PhysicsBodyCollisionDamageComponent.h"
#include "PhysicsBodyComponent.h"
#include "PhysicsImageShapeComponent.h"
#include "PhysicsJoint2Component.h"
#include "PhysicsJoint2MutatorComponent.h"
#include "PhysicsJointComponent.h"
#include "PhysicsKeepInWorldComponent.h"
#include "PhysicsPickUpComponent.h"
#include "PhysicsRagdollComponent.h"
#include "PhysicsShapeComponent.h"
#include "PhysicsThrowableComponent.h"
#include "PixelSceneComponent.h"
#include "PixelSpriteComponent.h"
#include "PlatformShooterPlayerComponent.h"
#include "PlayerCollisionComponent.h"
#include "PlayerStatsComponent.h"
#include "PositionSeedComponent.h"
#include "PotionComponent.h"
#include "PressurePlateComponent.h"
#include "ProjectileComponent.h"
#include "RotateTowardsComponent.h"
#include "SetLightAlphaFromVelocityComponent.h"
#include "SetStartVelocityComponent.h"
#include "ShotEffectComponent.h"
#include "SimplePhysicsComponent.h"
#include "SineWaveComponent.h"
#include "SpriteAnimatorComponent.h"
#include "SpriteComponent.h"
#include "SpriteOffsetAnimatorComponent.h"
#include "SpriteParticleEmitterComponent.h"
#include "SpriteStainsComponent.h"
#include "StatusEffectDataComponent.h"
#include "StreamingKeepAliveComponent.h"
#include "TelekinesisComponent.h"
#include "TeleportComponent.h"
#include "TeleportProjectileComponent.h"
#include "TextLogComponent.h"
#include "TorchComponent.h"
#include "UIIconComponent.h"
#include "UIInfoComponent.h"
#include "VariableStorageComponent.h"
#include "VelocityComponent.h"
#include "VerletPhysicsComponent.h"
#include "VerletWeaponComponent.h"
#include "VerletWorldJointComponent.h"
#include "WalletComponent.h"
#include "WalletValuableComponent.h"
#include "WorldStateComponent.h"
#include "WormAIComponent.h"
#include "WormAttractorComponent.h"
#include "WormComponent.h"
#include "WormPlayerComponent.h"

namespace noita::components {
    using ComponentVariant = std::variant<
        AIAttackComponent,
        AIComponent,
        AbilityComponent,
        AdvancedFishAIComponent,
        AltarComponent,
        AnimalAIComponent,
        ArcComponent,
        AreaDamageComponent,
        AttachToEntityComponent,
        AudioComponent,
        AudioListenerComponent,
        AudioLoopComponent,
        BiomeTrackerComponent,
        BlackHoleComponent,
        BookComponent,
        BossDragonComponent,
        BossHealthBarComponent,
        CameraBoundComponent,
        CardinalMovementComponent,
        CellEaterComponent,
        CharacterCollisionComponent,
        CharacterDataComponent,
        CharacterPlatformingComponent,
        CharacterStatsComponent,
        CollisionTriggerComponent,
        ConsumableTeleportComponent,
        ControllerGoombaAIComponent,
        ControlsComponent,
        CrawlerAnimalComponent,
        CutThroughWorldDoneHereComponent,
        DamageModelComponent,
        DamageNearbyEntitiesComponent,
        DebugFollowMouseComponent,
        DebugLogMessagesComponent,
        DebugSpatialVisualizerComponent,
        DieIfSpeedBelowComponent,
        DroneLauncherComponent,
        DrugEffectComponent,
        DrugEffectModifierComponent,
        ElectricChargeComponent,
        ElectricityComponent,
        ElectricityReceiverComponent,
        ElectricitySourceComponent,
        EndingMcGuffinComponent,
        EnergyShieldComponent,
        ExplodeOnDamageComponent,
        ExplosionComponent,
        FishAIComponent,
        FlyingComponent,
        FogOfWarRadiusComponent,
        FogOfWarRemoverComponent,
        GameAreaEffectComponent,
        GameEffectComponent,
        GameLogComponent,
        GameStatsComponent,
        GasBubbleComponent,
        GenomeDataComponent,
        GhostComponent,
        GodInfoComponent,
        GunComponent,
        HealthBarComponent,
        HitEffectComponent,
        HitboxComponent,
        HomingComponent,
        HotspotComponent,
        IKLimbAttackerComponent,
        IKLimbComponent,
        IKLimbWalkerComponent,
        IKLimbsAnimatorComponent,
        IngestionComponent,
        InheritTransformComponent,
        InteractableComponent,
        Inventory2Component,
        InventoryComponent,
        InventoryGuiComponent,
        ItemAIKnowledgeComponent,
        ItemActionComponent,
        ItemAlchemyComponent,
        ItemChestComponent,
        ItemComponent,
        ItemCostComponent,
        ItemPickUpperComponent,
        ItemRechargeNearGroundComponent,
        ItemStashComponent,
        KickComponent,
        LaserEmitterComponent,
        LevitationComponent,
        LifetimeComponent,
        LightComponent,
        LightningComponent,
        LimbBossComponent,
        LiquidDisplacerComponent,
        LoadEntitiesComponent,
        LocationMarkerComponent,
        LooseGroundComponent,
        LuaComponent,
        MagicConvertMaterialComponent,
        MagicXRayComponent,
        ManaReloaderComponent,
        MaterialAreaCheckerComponent,
        MaterialInventoryComponent,
        MaterialSeaSpawnerComponent,
        MaterialSuckerComponent,
        MoveToSurfaceOnCreateComponent,
        MusicEnergyAffectorComponent,
        NinjaRopeComponent,
        NullDamageComponent,
        OrbComponent,
        ParticleEmitterComponent,
        PathFindingComponent,
        PathFindingGridMarkerComponent,
        PhysicsAIComponent,
        PhysicsBody2Component,
        PhysicsBodyCollisionDamageComponent,
        PhysicsBodyComponent,
        PhysicsImageShapeComponent,
        PhysicsJoint2Component,
        PhysicsJoint2MutatorComponent,
        PhysicsJointComponent,
        PhysicsKeepInWorldComponent,
        PhysicsPickUpComponent,
        PhysicsRagdollComponent,
        PhysicsShapeComponent,
        PhysicsThrowableComponent,
        PixelSceneComponent,
        PixelSpriteComponent,
        PlatformShooterPlayerComponent,
        PlayerCollisionComponent,
        PlayerStatsComponent,
        PositionSeedComponent,
        PotionComponent,
        PressurePlateComponent,
        ProjectileComponent,
        RotateTowardsComponent,
        SetLightAlphaFromVelocityComponent,
        SetStartVelocityComponent,
        ShotEffectComponent,
        SimplePhysicsComponent,
        SineWaveComponent,
        SpriteAnimatorComponent,
        SpriteComponent,
        SpriteOffsetAnimatorComponent,
        SpriteParticleEmitterComponent,
        SpriteStainsComponent,
        StatusEffectDataComponent,
        StreamingKeepAliveComponent,
        TelekinesisComponent,
        TeleportComponent,
        TeleportProjectileComponent,
        TextLogComponent,
        TorchComponent,
        UIIconComponent,
        UIInfoComponent,
        VariableStorageComponent,
        VelocityComponent,
        VerletPhysicsComponent,
        VerletWeaponComponent,
        VerletWorldJointComponent,
        WalletComponent,
        WalletValuableComponent,
        WorldStateComponent,
        WormAIComponent,
        WormAttractorComponent,
        WormComponent,
        WormPlayerComponent
    >;
}