/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Armement civil";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, };
        items[] = {
            { "arifle_SDAR_F", "", 10000, 5000 },
            { "RH_sw659", "", 15000, 7500 },
            { "RH_python", "", 25000, 12500 },
            { "hgun_Pistol_Signal_F", "", 5000, 2500 },
            { "NVGoggles", "", 12000, 6000 }
        };
        mags[] = {
            { "20Rnd_556x45_UW_mag", "", 50, 25 },
            { "RH_14Rnd_9x19_sw", "", 50, 25 },
            { "RH_6Rnd_357_Mag", "", 25, 13 },
            { "6Rnd_RedSignal_F", "", 20, 10 },
            { "6Rnd_GreenSignal_F", "", 20, 10 }
        };
        accs[] = {};
    };

    class rebel {
        name = "Armement Rebelle";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, };
        items[] = {
            { "RH_tec9", "", 50000, 25000 },
            { "RH_mak", "", 20000, 10000 },
            { "RH_muzi", "", 100000, 50000 },
            { "RH_mk2", "", 35000, 17500 },
            { "RH_vz61", "", 80000, 40000 },
            { "hlc_rifle_auga2_b", "", 200000, 100000 },
            { "hlc_rifle_ak12", "", 400000, 200000 },
            { "hlc_rifle_ak74", "", 350000, 175000 },
            { "hlc_rifle_aks74", "", 300000, 150000 },
            { "hlc_rifle_aks74u", "", 280000, 140000 },
            { "hlc_rifle_aek971_mtk", "", 450000, 225000 },
            { "hlc_rifle_slr107u_MTK", "", 500000, 250000 },
            { "hlc_rifle_ak47", "", 600000, 300000 },
            { "hlc_rifle_akm", "", 600000, 300000 },
            { "hlc_rifle_RPK12", "", 750000, 375000 },
            { "hlc_rifle_rpk74n", "", 750000, 375000 },
            { "hlc_rifle_rpk", "", 900000, 450000 },
            { "R3F_SIG551", "", 350000, 175000 },
            { "hlc_rifle_FAL5000Rail", "", 500000, 250000 },
            { "hlc_rifle_g3sg1ris", "", 500000, 250000 },
            { "hlc_rifle_saiga12k", "", 500000, 250000 },
			{ "Mask_M50", "", 10000, 5000 },
            { "ACRE_PRC152", "", 2500, 1750 },
            { "ACRE_SEM70", "", 7500, 3750 },
			{ "ItemGPS", "", 100, 50, },
            { "ItemMap", "", 50, 25 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, 25 },
			{ "Binocular", "", 150, 75 },
			{ "FirstAidKit", "", 150, 75 },
            { "NVGoggles", "", 12000, 6000 },
			{ "SmokeShell", "", 5000, 2500 },
			{ "HandGrenade", "", 50000, 25000 },
            { "Chemlight_red", "", 300, 150 },
            { "Chemlight_yellow", "", 300, 150 },
            { "Chemlight_green", "", 300, 150 },
            { "Chemlight_blue", "", 300, 150 },
            { "optic_ACO_grn", "", 2000, 1000 },
            { "optic_Arco", "", 5000, 2500 },
            { "optic_Arco_blk_F", "", 5000, 2500 },
            { "optic_Holosight", "", 3000, 1500 },
			{ "optic_Holosight_blk_F", "", 3000, 1500 },
            { "optic_MRCO", "", 5000, 2500 },
            { "optic_Hamr", "", 5000, 2500 },
            { "acc_flashlight", "", 2000, 1000 },
            { "acc_pointer_IR", "", 1000, 500 }
        };
        mags[] = {
            { "RH_32Rnd_9x19_tec", "", 50, 25 },
            { "RH_8Rnd_9x18_Mak", "", 50, 25 },
            { "RH_30Rnd_9x19_UZI", "", 150, 75 },
            { "RH_10Rnd_22LR_mk2", "", 50, 25 },
            { "RH_20Rnd_32cal_vz61", "", 100, 50 },
            { "hlc_30Rnd_556x45_B_AUG", "", 100, 50 },
            { "hlc_30Rnd_762x39_b_ak", "", 200, 100 },
            { "hlc_30Rnd_762x39_t_ak", "", 100, 50 },
			{ "hlc_30Rnd_545x39_B_AK", "", 100, 50 },
            { "hlc_30Rnd_545x39_t_ak", "", 50, 25 },
            { "hlc_45Rnd_762x39_m_rpk", "", 400, 200 },
            { "hlc_45Rnd_762x39_t_rpk", "", 200, 100 },
            { "hlc_45Rnd_545x39_t_rpk", "", 300, 150 },
            { "hlc_60Rnd_545x39_t_rpk", "", 500, 250 },
            { "hlc_20Rnd_762x51_B_fal", "", 300, 150 },
            { "hlc_20Rnd_762x51_T_fal", "", 200, 100 },
            { "hlc_20rnd_762x51_b_G3", "", 300, 150 },
            { "hlc_20rnd_762x51_T_G3", "", 200, 100 },
            { "hlc_10rnd_12g_buck_S12", "", 100, 50 },
            { "hlc_10rnd_12g_slug_S12", "", 100, 50 },
            { "R3F_30Rnd_556x45_SIG551", "", 200, 100, },
            { "R3F_30Rnd_556x45_TRACER_SIG551", "", 100, 50 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 2000, 1000 },
            { "optic_Arco", "", 5000, 2500 },
            { "optic_Arco_blk_F", "", 5000, 2500 },
            { "optic_Holosight", "", 3000, 1500 },
			{ "optic_Holosight_blk_F", "", 3000, 1500 },
            { "optic_MRCO", "", 5000, 2500 },
            { "optic_Hamr", "", 5000, 2500 },
            { "acc_flashlight", "", 2000, 1000 },
            { "acc_pointer_IR", "", 1000, 500 }
        };
    };

    class gang {
        name = "Armement Gangster";
        side = "civ";
        license = "";
        level[] = { "", "", -1, };
        items[] = {
            { "arifle_SDAR_F", "", 200000, 50000 },
            { "SMG_01_F", "", 200000, 100000 },
            { "arifle_Mk20_plain_F", "", 350000, 175000 },
            { "arifle_TRG21_F", "", 250000, 175000 },
            { "hlc_rifle_auga2para_b", "", 800000, 200000 },
			{ "Mask_M50", "", 20000, 10000 },
            { "ACRE_PRC152", "", 5000, 1750 },
            { "tf_rt1523g_black", "", 15000, 3750 },
			{ "ItemGPS", "", 200, 100 },
            { "ItemMap", "", 100, 50 },
            { "ItemCompass", "", 100, 50 },
            { "ItemWatch", "", 100, 50 },
			{ "Binocular", "", 300, 150 },
			{ "FirstAidKit", "", 300, 150 },
            { "NVGoggles", "", 24000, 6000 },
			{ "SmokeShell", "", 10000, 5000 },
            { "Chemlight_red", "", 600, 300 },
            { "Chemlight_yellow", "", 600, 300 },
            { "Chemlight_green", "", 600, 300 },
            { "Chemlight_blue", "", 600, 300 },
            { "optic_Aco", "", 5000, 2000 },
            { "optic_Holosight", "", 10000, 5000 },
            { "acc_flashlight", "", 8000, 4000 },
            { "acc_pointer_IR", "", 4000, 2000 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 500, 250 },
            { "30Rnd_45ACP_Mag_SMG_01", "", 400, 200 },
            { "20Rnd_556x45_UW_mag", "", 200, 100 }
        };
        accs[] = {
            { "optic_Aco", "", 5000, 2000 },
            { "optic_Holosight", "", 10000, 5000 },
            { "acc_flashlight", "", 8000, 4000 },
            { "acc_pointer_IR", "", 4000, 2000 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Magasin Général";
        side = "civ";
        license = "";
        level[] = { "", "", -1, };
        items[] = {
            { "Binocular", "", 150, 75 },
            { "ACRE_PRC152", "", 2500, 1750 },
            { "tf_rt1523g_black", "", 7500, 3750 },
            { "ItemGPS", "", 100, 50 },
            { "ItemMap", "", 50, 25 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, 25 },
            { "FirstAidKit", "", 150, 75 },
            { "NVGoggles", "", 20000, 6000 },
            { "Chemlight_red", "", 300, 150 },
            { "Chemlight_yellow", "", 300, 150 },
            { "Chemlight_green", "", 300, 150 },
            { "Chemlight_blue", "", 300, 150 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Magasin Général Station Service";
        side = "";
        license = "";
        level[] = { "", "", -1, };
        items[] = {
            { "Binocular", "", 750, 75 },
            { "tf_anprc152", "", 7500, 1750 },
            { "tf_rt1523g_black", "", 22500, 3750 },
            { "ItemGPS", "", 500, 50 },
            { "ItemMap", "", 250, 25 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, 25 },
            { "FirstAidKit", "", 750, 75 },
            { "Chemlight_red", "", 1500, 150 },
            { "Chemlight_yellow", "", 1500, 150 },
            { "Chemlight_green", "", 1500, 150 },
            { "Chemlight_blue", "", 1500, 150 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, };
        items[] = {
			{ "DDOPP_X26", $STR_W_items_StunPistol, 0, 0 },
            { "RH_p226", "", 0, 0 },
            { "hlc_smg_mp5a4", "", 0, 0 },
			{ "hlc_rifle_G36C", "", 0, 0 "call life_coplevel >= 5" },
			{ "R3F_M4S90", "", 0, 0 "call life_coplevel >= 6" },
			{ "Mask_M50", "", 0, 0 },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 0, 0 },
			{ "SmokeShell", "", 0, 0 },
			{ "SmokeShellYellow", "Grenade Lacrymogène", 0, 0 },
			{ "SatchelCharge_Remote_Mag", "", 0, 0 "call life_coplevel >= 7" },
			{ "NVGoggles", "", 0, 0 },
			{ "Binocular", "", 0, 0 },
			{ "Rangefinder", "", 0, 0 "call life_coplevel >= 4" },
			{ "FirstAidKit", "", 0, 0 },
			{ "Chemlight_red", "", 0, 0 },
            { "Chemlight_yellow", "", 0, 0 },
            { "Chemlight_green", "", 0, 0 },
            { "Chemlight_blue", "", 0, 0 },
            { "ACRE_PRC152", "", 0, 0 },
            { "ACRE_SEM70", "", 0, 0 },
			{ "ItemGPS", "", 0, 0 },
            { "ItemMap", "", 0, 0 },
            { "ItemCompass", "", 0, 0 },
            { "ItemWatch", "", 0, 0 },
            { "optic_ACO_grn", "", 0, 0 },
            { "optic_Arco", "", 0, 0 },
            { "optic_Arco_blk_F", "", 0, 0 },
            { "optic_Holosight", "", 0, 0 },
			{ "optic_Holosight_blk_F", "", 0, 0 },
            { "R3F_AIMPOINT", "", 0, 0 },
            { "R3F_EOTECH", "", 0, 0 },
            { "optic_MRCO", "", 0, 0 },
            { "optic_Hamr", "", 0, 0 },
            { "muzzle_snds_B", "", 0, 0 },
			{ "muzzle_snds_H", "", 0, 0 },
            { "acc_flashlight", "", 0, 0 },
            { "R3F_LAMPE_SURB", "", 0, 0 },
            { "hlc_acc_Surefiregrip", "", 0, 0 },
            { "RH_M6X", "", 0, 0 },
            { "acc_pointer_IR", "", 0, 0 },
            { "R3F_POINTEUR_SURB", "", 0, 0 }
        };
        mags[] = {
            { "DDOPP_1Rnd_X26", "", 0, 0 },
            { "RH_15Rnd_9x19_SIG", "", 0, 0 },
			{ "hlc_30Rnd_9x19_B_MP5", "", 0, 0 },
			{ "hlc_30rnd_556x45_EPR_G36", "", 0, 0 },
			{ "R3F_7Rnd_M4S90", "", 0, 0 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 0, 0 },
            { "optic_Arco", "", 0, 0 },
            { "optic_Arco_blk_F", "", 0, 0 },
            { "optic_Holosight", "", 0, 0 },
			{ "optic_Holosight_blk_F", "", 0, 0 },
            { "R3F_AIMPOINT", "", 0, 0 },
            { "R3F_EOTECH", "", 0, 0 },
            { "optic_MRCO", "", 0, 0 },
            { "optic_Hamr", "", 0, 0 },
            { "muzzle_snds_B", "", 0, 0 },
			{ "muzzle_snds_H", "", 0, 0 },
            { "R3F_SILENCIEUX_HK417", "", 0, 0 },
            { "acc_flashlight", "", 0, 0 },
            { "R3F_LAMPE_SURB", "", 0, 0 },
            { "RH_M6X", "", 0, 0, },
            { "acc_pointer_IR", "", 0, 0 },
            { "R3F_POINTEUR_SURB", "", 0, 0 },
            { "R3F_BIPIED_HK417", "", 0, 0 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, };
        items[] = {
            { "ItemGPS", "", 100, 50 },
            { "Binocular", "", 150, 75 },
            { "FirstAidKit", "", 150, 75 },
            { "NVGoggles", "", 1200, 600 },
            { "ACRE_PRC152", "", 2500, 1750 },
            { "ACRE_SEM70", "", 5000, 2500 }
        };
        mags[] = {};
        accs[] = {};
    };
};
