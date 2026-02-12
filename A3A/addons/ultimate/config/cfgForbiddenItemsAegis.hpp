class Aegis_limited_base : forbidden_limited_base   // cannot be unlocked in arsenal
    {
        addons[] = {"A3_Aegis"};
    };

class Aegis_unlimited_base : forbidden_unlimited_base   // excluded from loot crate tables but can be unlocked
    {
        addons[] = {"A3_Aegis"};
    };


//// NVG ////
// Armbands
class Aegis_NV_G_Armband_Blu_F : Aegis_unlimited_base {};    // There's gotta be a better way to do this. Unsure if something like wildcards could work here.
class Aegis_NV_G_Armband_IND_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_OPF_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_CSAT_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_FIA_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_IDAP_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_Medic_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_Blu_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_IND_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_OPF_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_CSAT_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_FIA_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_IDAP_alt_F : Aegis_unlimited_base {};
class Aegis_NV_G_Armband_Medic_alt_F : Aegis_unlimited_base {};

// Goggles
class Goggles : Aegis_unlimited_base {};
class Goggles_grn_F : Aegis_unlimited_base {};
class Goggles_tna_F : Aegis_unlimited_base {};
class Aegis_Goggles_Cover_F : Aegis_unlimited_base {};
class Aegis_Goggles_Cover_grn_f : Aegis_unlimited_base {};

// Scrim Nets
class Aegis_NV_G_scrimNet_black_F : Aegis_unlimited_base {};
class Aegis_NV_G_scrimNet_olive_F : Aegis_unlimited_base {};
class Aegis_NV_G_scrimNet_sand_F : Aegis_unlimited_base {};
class Aegis_NV_G_scrimNet_under_black_F : Aegis_unlimited_base {};
class Aegis_NV_G_scrimNet_under_olive_F : Aegis_unlimited_base {};
class Aegis_NV_G_scrimNet_under_sand_F : Aegis_unlimited_base {};

//// GPS ////

class ItemSmartPhone : Aegis_unlimited_base {};

//// BACKPACK ////
// Rally Points
class B_Respawn_RallyPoint_01_bag_grn_F: Aegis_unlimited_base{};
class I_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class O_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class B_H_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class I_I_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class I_E_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class B_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};
class O_R_Respawn_RallyPoint_01_bag_F: Aegis_unlimited_base{};

// Tents
class B_Respawn_TentSolar_01_bag_olive_F : Aegis_unlimited_base{};
class B_Respawn_TentSolar_01_bag_sand_F : Aegis_unlimited_base{};
