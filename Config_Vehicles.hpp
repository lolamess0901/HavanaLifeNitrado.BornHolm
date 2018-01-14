class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
	        { "Mrshounka_Alfa_Romeo_noir", { "", "", -1 } },
            { "Mrshounka_Alfa_Romeo_bleufonce", { "", "", -1 } },
	        { "Mrshounka_Alfa_Romeo_rouge", { "", "", -1 } },
	        { "Mrshounka_Alfa_Romeo_jaune", { "", "", -1 } },
	        { "Mrshounka_Alfa_Romeo_rose", { "", "", -1 } },
	        { "Mrshounka_Alfa_Romeo_grise", { "", "", -1 } },
            { "Mrshounka_Alfa_Romeo_violet", { "", "", -1 } },
	        { "Mrshounka_Alfa_Romeo_orange", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_noir", { "", "", -1 } },
	        { "Mrshounka_rs4_civ_bleufonce", { "", "", -1 } },
	        { "Mrshounka_rs4_civ_rouge", { "", "", -1 } },
	        { "Mrshounka_rs4_civ_jaune", { "", "", -1 } },
	        { "Mrshounka_rs4_civ_rose", { "", "", -1 } },
			{ "Mrshounka_rs4_civ_grise", { "", "", -1 } },
            { "Mrshounka_rs4_civ_violet", { "", "", -1 } },
	        { "Mrshounka_rs4_civ_orange", { "", "", -1 } },
	        { "shounka_rs6_noir", { "", "", -1 } },
	        { "shounka_rs6_bleufonce", { "", "", -1 } },
	        { "shounka_rs6_rouge", { "", "", -1 } },
	        { "shounka_rs6_jaune", { "", "", -1 } },
	        { "shounka_rs6_rose", { "", "", -1 } },
			{ "shounka_rs6_grise", { "", "", -1 } },
            { "shounka_rs6_violet", { "", "", -1 } },
	        { "shounka_rs6_orange", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_noir", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_bleufonce", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_rouge", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_jaune", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_rose", { "", "", -1 } },
			{ "Mrshounka_Bowler_c_grise", { "", "", -1 } },
            { "Mrshounka_Bowler_c_violet", { "", "", -1 } },
	        { "Mrshounka_Bowler_c_orange", { "", "", -1 } },
	        { "shounka_avalanche_noir", { "", "", -1 } },
	        { "shounka_avalanche_bleufonce", { "", "", -1 } },
	        { "shounka_avalanche_rouge", { "", "", -1 } },
	        { "shounka_avalanche_jaune", { "", "", -1 } },
	        { "shounka_avalanche_rose", { "", "", -1 } },
			{ "shounka_avalanche_grise", { "", "", -1 } },
            { "shounka_avalanche_violet", { "", "", -1 } },
	        { "shounka_avalanche_orange", { "", "", -1 } },
	        { "Berlingo2_civ", { "", "", -1 } },
	        { "Berlingo2_civ_rouge", { "", "", -1 } },
	        { "Berlingo2_civ_bleu", { "", "", -1 } },
			{ "Berlingo2_civ_noir", { "", "", -1 } },
            { "Berlingo2_civ_gris", { "", "", -1 } },
	        { "Berlingo2_civ_yellow", { "", "", -1 } },
	        { "c4hch_civ", { "", "", -1 } },
	        { "c4hch_civ_rouge", { "", "", -1 } },
	        { "c4hch_civ_bleu", { "", "", -1 } },
			{ "c4hch_civ_noir", { "", "", -1 } },
            { "c4hch_civ_gris", { "", "", -1 } },
	        { "c4hch_civ_yellow", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_noir", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_bleufonce", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_civ_rouge", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_civ_jaune", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_civ_rose", { "", "", -1 } },
			{ "Mrshounka_a3_ds3_civ_civ_grise", { "", "", -1 } },
            { "Mrshounka_a3_ds3_civ_civ_violet", { "", "", -1 } },
	        { "Mrshounka_a3_ds3_civ_civ_orange", { "", "", -1 } },
	        { "chduster14_civ", { "", "", -1 } },
	        { "chduster14_civ_rouge", { "", "", -1 } },
	        { "chduster14_civ_bleu", { "", "", -1 } },
			{ "chduster14_civ_noir", { "", "", -1 } },
            { "chduster14_civ_gris", { "", "", -1 } },
	        { "chduster14_civ_yellow", { "", "", -1 } },
	        { "Ducato_civ", { "", "", -1 } },
	        { "Ducato_civ_rouge", { "", "", -1 } },
	        { "Ducato_civ_bleu", { "", "", -1 } },
			{ "Ducato_civ_noir", { "", "", -1 } },
            { "Ducato_civ_gris", { "", "", -1 } },
	        { "Ducato_civ_yellow", { "", "", -1 } },
	        { "cmax_civ", { "", "", -1 } },
	        { "cmax_civ_rouge", { "", "", -1 } },
	        { "cmax_civ_bleu", { "", "", -1 } },
			{ "cmax_civ_noir", { "", "", -1 } },
            { "cmax_civ_gris", { "", "", -1 } },
	        { "cmax_civ_yellow", { "", "", -1 } },
	        { "focus3ch_civ", { "", "", -1 } },
	        { "focus3ch_civ_rouge", { "", "", -1 } },
	        { "focus3ch_civ_bleu", { "", "", -1 } },
			{ "focus3ch_civ_noir", { "", "", -1 } },
            { "focus3ch_civ_gris", { "", "", -1 } },
	        { "focus3ch_civ_yellow", { "", "", -1 } },
	        { "chfcrsciv", { "", "", -1 } },
	        { "chfcrsciv_rouge", { "", "", -1 } },
	        { "chfcrsciv_bleu", { "", "", -1 } },
			{ "chfcrsciv_noir", { "", "", -1 } },
            { "chfcrsciv_gris", { "", "", -1 } },
	        { "chfcrsciv_yellow", { "", "", -1 } },
	        { "focussw1998_civ", { "", "", -1 } },
	        { "focussw1998_civ_rouge", { "", "", -1 } },
	        { "focussw1998_civ_bleu", { "", "", -1 } },
			{ "focussw1998_civ_noir", { "", "", -1 } },
            { "focussw1998_civ_gris", { "", "", -1 } },
	        { "focussw1998_civ_yellow", { "", "", -1 } },
	        { "focussw3_civ", { "", "", -1 } },
	        { "focussw3_civ_rouge", { "", "", -1 } },
	        { "focussw3_civ_bleu", { "", "", -1 } },
			{ "focussw3_civ_noir", { "", "", -1 } },
            { "focussw3_civ_gris", { "", "", -1 } },
	        { "focussw3_civ_yellow", { "", "", -1 } },
	        { "mondeo_civ", { "", "", -1 } },
	        { "mondeo_civ_rouge", { "", "", -1 } },
	        { "mondeo_civ_bleu", { "", "", -1 } },
			{ "mondeo_civ_noir", { "", "", -1 } },
            { "mondeo_civ_gris", { "", "", -1 } },
	        { "mondeo_civ_yellow", { "", "", -1 } },
	        { "galaxych_civ", { "", "", -1 } },
	        { "galaxych_civ_rouge", { "", "", -1 } },
	        { "galaxych_civ_bleu", { "", "", -1 } },
			{ "galaxych_civ_noir", { "", "", -1 } },
            { "galaxych_civ_gris", { "", "", -1 } },
	        { "galaxych_civ_yellow", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_noir", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_bleufonce", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_rouge", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_jaune", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_rose", { "", "", -1 } },
			{ "Mrshounka_Vandura_civ_grise", { "", "", -1 } },
            { "Mrshounka_Vandura_civ_violet", { "", "", -1 } },
	        { "Mrshounka_Vandura_civ_orange", { "", "", -1 } },
	        { "Mrshounka_golfvi_noir", { "", "", -1 } },
	        { "Mrshounka_golfvi_bleufonce", { "", "", -1 } },
	        { "Mrshounka_golfvi_rouge", { "", "", -1 } },
	        { "Mrshounka_golfvi_jaune", { "", "", -1 } },
	        { "Mrshounka_golfvi_rose", { "", "", -1 } },
			{ "Mrshounka_golfvi_grise", { "", "", -1 } },
            { "Mrshounka_golfvi_violet", { "", "", -1 } },
	        { "Mrshounka_golfvi_orange", { "", "", -1 } },
	        { "IvecoCh_cciv", { "", "", -1 } },
	        { "IvecoCh_cciv_rouge", { "", "", -1 } },
	        { "IvecoCh_cciv_bleu", { "", "", -1 } },
			{ "IvecoCh_cciv_noir", { "", "", -1 } },
            { "IvecoCh_cciv_gris", { "", "", -1 } },
	        { "IvecoCh_cciv_yellow", { "", "", -1 } },
	        { "IvecoCh_civ", { "", "", -1 } },
	        { "IvecoCh_civ_rouge", { "", "", -1 } },
	        { "IvecoCh_civ_bleu", { "", "", -1 } },
			{ "IvecoCh_civ_noir", { "", "", -1 } },
            { "IvecoCh_civ_gris", { "", "", -1 } },
	        { "IvecoCh_civ_yellow", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_mat", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_bleu", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_bleu_mat", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_blanc", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_blanc_mat", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_violet", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_violet_mat", { "", "", -1 } },
	        { "Mrshounka_cherokee_noir_rouge", { "", "", -1 } },
            { "Mrshounka_cherokee_noir_rouge_mat", { "", "", -1 } },
	        { "chdefender_civ", { "", "", -1 } },
	        { "chdefender_civ_rouge", { "", "", -1 } },
	        { "chdefender_civ_bleu", { "", "", -1 } },
			{ "chdefender_civ_noir", { "", "", -1 } },
            { "chdefender_civ_gris", { "", "", -1 } },
	        { "chdefender_civ_yellow", { "", "", -1 } },
	        { "chcitan_civ", { "", "", -1 } },
	        { "chcitan_civ_rouge", { "", "", -1 } },
	        { "chcitan_civ_bleu", { "", "", -1 } },
			{ "chcitan_civ_noir", { "", "", -1 } },
            { "chcitan_civ_gris", { "", "", -1 } },
	        { "chcitan_civ_yellow", { "", "", -1 } },
	        { "ch_sprinter_civ", { "", "", -1 } },
	        { "ch_sprinter_civ_rouge", { "", "", -1 } },
	        { "ch_sprinter_civ_bleu", { "", "", -1 } },
			{ "ch_sprinter_civ_noir", { "", "", -1 } },
            { "ch_sprinter_civ_gris", { "", "", -1 } },
	        { "ch_sprinter_civ_yellow", { "", "", -1 } },
	        { "Mer_Vito_civ", { "", "", -1 } },
	        { "Mer_Vito_civ_rouge", { "", "", -1 } },
	        { "Mer_Vito_civ_bleu", { "", "", -1 } },
			{ "Mer_Vito_civ_noir", { "", "", -1 } },
            { "Mer_Vito_civ_gris", { "", "", -1 } },
	        { "Mer_Vito_civ_yellow", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_noir", { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_bleufonce", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_rouge", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_jaune", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_rose", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_grise", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_violet", { "", "", -1 } },
	        { "Mrshounka_mercedes_190_p_orange", { "", "", -1 } },
	        { "ch206_civ", { "", "", -1 } },
	        { "ch206_civ_rouge", { "", "", -1 } },
	        { "ch206_civ_bleu", { "", "", -1 } },
			{ "ch206_civ_noir", { "", "", -1 } },
            { "ch206_civ_gris", { "", "", -1 } },
	        { "ch206_civ_yellow", { "", "", -1 } },
	        { "307ch_civ", { "", "", -1 } },
	        { "307ch_civ_rouge", { "", "", -1 } },
	        { "307ch_civ_bleu", { "", "", -1 } },
			{ "307ch_civ_noir", { "", "", -1 } },
            { "307ch_civ_gris", { "", "", -1 } },
	        { "307ch_civ_yellow", { "", "", -1 } },
	        { "Peugeot_308_civ", { "", "", -1 } },
	        { "Peugeot_308_civ_rouge", { "", "", -1 } },
	        { "Peugeot_308_civ_bleu", { "", "", -1 } },
			{ "Peugeot_308_civ_noir", { "", "", -1 } },
            { "Peugeot_308_civ_gris", { "", "", -1 } },
	        { "Peugeot_308_civ_yellow", { "", "", -1 } },
	        { "Peugeot_Boxer_civ", { "", "", -1 } },
	        { "Peugeot_Boxer_civ_rouge", { "", "", -1 } },
	        { "Peugeot_Boxer_civ_bleu", { "", "", -1 } },
			{ "Peugeot_Boxer_civ_noir", { "", "", -1 } },
            { "Peugeot_Boxer_civ_gris", { "", "", -1 } },
	        { "Peugeot_Boxer_civ_yellow", { "", "", -1 } },
	        { "Peugeot_Expert_civ", { "", "", -1 } },
	        { "Peugeot_Expert_civ_rouge", { "", "", -1 } },
	        { "Peugeot_Expert_civ_bleu", { "", "", -1 } },
			{ "Peugeot_Expert_civ_noir", { "", "", -1 } },
            { "Peugeot_Expert_civ_gris", { "", "", -1 } },
	        { "Peugeot_Expert_civ_yellow", { "", "", -1 } },
	        { "Mrshounka_r5_noir", { "", "", -1 } },
            { "Mrshounka_r5_bleufonce", { "", "", -1 } },
	        { "Mrshounka_r5_rouge", { "", "", -1 } },
	        { "Mrshounka_r5_jaune", { "", "", -1 } },
	        { "Mrshounka_r5_rose", { "", "", -1 } },
	        { "Mrshounka_r5_grise", { "", "", -1 } },
	        { "Mrshounka_r5_violet", { "", "", -1 } },
	        { "Mrshounka_r5_orange", { "", "", -1 } },
	        { "Renault_Clio_civ", { "", "", -1 } },
	        { "Renault_Clio_civ_rouge", { "", "", -1 } },
	        { "Renault_Clio_civ_bleu", { "", "", -1 } },
			{ "Renault_Clio_civ_noir", { "", "", -1 } },
            { "Renault_Clio_civ_gris", { "", "", -1 } },
	        { "Renault_Clio_civ_yellow", { "", "", -1 } },
	        { "chclio3_civ", { "", "", -1 } },
	        { "chclio3_civ_rouge", { "", "", -1 } },
	        { "chclio3_civ_bleu", { "", "", -1 } },
			{ "chclio3_civ_noir", { "", "", -1 } },
            { "chclio3_civ_gris", { "", "", -1 } },
	        { "chclio3_civ_yellow", { "", "", -1 } },
	        { "Renault_ClioIV_civ", { "", "", -1 } },
	        { "Renault_ClioIV_civ_rouge", { "", "", -1 } },
	        { "Renault_ClioIV_civ_bleu", { "", "", -1 } },
			{ "Renault_ClioIV_civ_noir", { "", "", -1 } },
            { "Renault_ClioIV_civ_gris", { "", "", -1 } },
	        { "Renault_ClioIV_civ_yellow", { "", "", -1 } },
	        { "Renault_Espace_civ", { "", "", -1 } },
	        { "Renault_Espace_civ_rouge", { "", "", -1 } },
	        { "Renault_Espace_civ_bleu", { "", "", -1 } },
			{ "Renault_Espace_civ_noir", { "", "", -1 } },
            { "Renault_Espace_civ_gris", { "", "", -1 } },
	        { "Renault_Espace_civ_yellow", { "", "", -1 } },
	        { "kangooII1_civ", { "", "", -1 } },
	        { "kangooII1_civ_rouge", { "", "", -1 } },
	        { "kangooII1_civ_bleu", { "", "", -1 } },
			{ "kangooII1_civ_noir", { "", "", -1 } },
            { "kangooII1_civ_gris", { "", "", -1 } },
	        { "kangooII1_civ_yellow", { "", "", -1 } },
	        { "kangooII1_cciv", { "", "", -1 } },
	        { "kangooII1_cciv_rouge", { "", "", -1 } },
	        { "kangooII1_cciv_bleu", { "", "", -1 } },
			{ "kangooII1_cciv_noir", { "", "", -1 } },
            { "kangooII1_cciv_gris", { "", "", -1 } },
	        { "kangooII1_cciv_yellow", { "", "", -1 } },
	        { "master3p2_civ_civ", { "", "", -1 } },
	        { "master3p2_civ_civ_rouge", { "", "", -1 } },
	        { "master3p2_civ_civ_bleu", { "", "", -1 } },
			{ "master3p2_civ_civ_noir", { "", "", -1 } },
            { "master3p2_civ_civ_gris", { "", "", -1 } },
	        { "master3p2_civ_civ_yellow", { "", "", -1 } },
	        { "Megane_civ", { "", "", -1 } },
	        { "Megane_civ_rouge", { "", "", -1 } },
	        { "Megane_civ_bleu", { "", "", -1 } },
			{ "Megane_civ_noir", { "", "", -1 } },
            { "Megane_civ_gris", { "", "", -1 } },
	        { "Megane_civ_yellow", { "", "", -1 } },
	        { "Megane_Estate_p2_civ", { "", "", -1 } },
	        { "Megane_Estate_p2_civ_rouge", { "", "", -1 } },
	        { "Megane_Estate_p2_civ_bleu", { "", "", -1 } },
			{ "Megane_Estate_p2_civ_noir", { "", "", -1 } },
            { "Megane_Estate_p2_civ_gris", { "", "", -1 } },
	        { "Megane_Estate_p2_civ_yellow", { "", "", -1 } },
	        { "chmeganers_civ", { "", "", -1 } },
	        { "chmeganers_civ_rouge", { "", "", -1 } },
	        { "chmeganers_civ_bleu", { "", "", -1 } },
			{ "chmeganers_civ_noir", { "", "", -1 } },
            { "chmeganers_civ_gris", { "", "", -1 } },
	        { "chmeganers_civ_yellow", { "", "", -1 } },
	        { "Renault_Scenic_civ", { "", "", -1 } },
	        { "Renault_Scenic_civ_rouge", { "", "", -1 } },
	        { "Renault_Scenic_civ_bleu", { "", "", -1 } },
			{ "Renault_Scenic_civ_noir", { "", "", -1 } },
            { "Renault_Scenic_civ_gris", { "", "", -1 } },
	        { "Renault_Scenic_civ_yellow", { "", "", -1 } },
	        { "Scenic3_civ", { "", "", -1 } },
	        { "Scenic3_civ_rouge", { "", "", -1 } },
	        { "Scenic3_civ_bleu", { "", "", -1 } },
			{ "Scenic3_civ_noir", { "", "", -1 } },
            { "Scenic3_civ_gris", { "", "", -1 } },
	        { "Scenic3_civ_yellow", { "", "", -1 } },
	        { "Trafic3civ", { "", "", -1 } },
	        { "Trafic3civ_rouge", { "", "", -1 } },
	        { "Trafic3civ_bleu", { "", "", -1 } },
			{ "Trafic3civ_noir", { "", "", -1 } },
            { "Trafic3civ_gris", { "", "", -1 } },
	        { "Trafic3civ_yellow", { "", "", -1 } },
	        { "Trafic3cciv", { "", "", -1 } },
	        { "Trafic3cciv_rouge", { "", "", -1 } },
	        { "Trafic3cciv_bleu", { "", "", -1 } },
			{ "Trafic3cciv_noir", { "", "", -1 } },
            { "Trafic3cciv_gris", { "", "", -1 } },
	        { "Trafic3cciv_yellow", { "", "", -1 } },
            { "Mrshounka_twingo_p_noir", { "", "", -1 } },
	        { "Mrshounka_twingo_p_bf", { "", "", -1 } },
	        { "Mrshounka_twingo_p_r", { "", "", -1 } },
	        { "Mrshounka_twingo_p_j", { "", "", -1 } },
	        { "Mrshounka_twingo_p_rose", { "", "", -1 } },
			{ "Mrshounka_twingo_p_g", { "", "", -1 } },
            { "Mrshounka_twingo_p_v", { "", "", -1 } },
	        { "Mrshounka_twingo_p_o", { "", "", -1 } },
			{ "Mrshounka_a3_smart_civ", { "", "", -1 } },
            { "Mrshounka_a3_smart_civ_noir", { "", "", -1 } },
	        { "Mrshounka_a3_smart_civ_bleu", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_noir", { "", "", -1 } },
	        { "Mrshounka_Volkswagen_Touareg_bleufonce", { "", "", -1 } },
	        { "Mrshounka_Volkswagen_Touareg_rouge", { "", "", -1 } },
	        { "Mrshounka_Volkswagen_Touareg_jaune", { "", "", -1 } },
	        { "Mrshounka_Volkswagen_Touareg_rose", { "", "", -1 } },
			{ "Mrshounka_Volkswagen_Touareg_grise", { "", "", -1 } },
            { "Mrshounka_Volkswagen_Touareg_violet", { "", "", -1 } },
	        { "Mrshounka_Volkswagen_Touareg_orange", { "", "", -1 } },
	        { "chvwt5_civ", { "", "", -1 } },
	        { "chvwt5_civ_rouge", { "", "", -1 } },
	        { "chvwt5_civ_bleu", { "", "", -1 } },
			{ "chvwt5_civ_noir", { "", "", -1 } },
            { "chvwt5_civ_gris", { "", "", -1 } },
	        { "chvwt5_civ_yellow", { "", "", -1 } },
			{ "Mrshounka_ducati_p", { "", "", -1 } },
			{ "Mrshounka_ducati_p_noir", { "", "", -1 } },
			{ "Mrshounka_ducati_p_bf", { "", "", -1 } },
			{ "Mrshounka_ducati_p_r", { "", "", -1 } },
			{ "Mrshounka_ducati_p_j", { "", "", -1 } },
			{ "Mrshounka_ducati_p_rose", { "", "", -1 } },
			{ "Mrshounka_ducati_p_g", { "", "", -1 } },
			{ "Mrshounka_ducati_p_v", { "", "", -1 } },
			{ "Mrshounka_ducati_p_o", { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
			{ "midlum", { "", "", -1 } },
			{ "midlum_red", { "", "", -1 } },
			{ "midlum_blue", { "", "", -1 } },
			{ "midlum_yellow", { "", "", -1 } },
			{ "midlum_grey", { "", "", -1 } },
			{ "midlum_black", { "", "", -1 } },
			{ "O_Truck_03_device_F", { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "B_Heli_Transport_03_unarmed_F", { "", "", -1 } }, //Apex DLC
			{ "I_Heli_Transport_02_F", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } } //Apex DLC
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "berlingo2_vlcg", { "", "", -1 } },
            { "Dacia_Duster_vlhr", { "", "", -1 } },
            { "chvsavar_iveco", { "", "", -1 } },
            { "chVSAV_Sprinter", { "", "", -1 } },
			{ "chmaster2_vsav", { "", "", -1 } },
            { "chmaster3_vsrl", { "", "", -1 } },
            { "VSAV_Ducato", { "", "", -1 } },
            { "VPL_Boxer", { "", "", -1 } },
			{ "EPA", { "", "", -1 } },
            { "PMA", { "", "", -1 } },
            { "VPC", { "", "", -1 } },
            { "brancardch", { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "ec_635_securite_civ", { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "galaxych_gn", { "", "", -1 } },
            { "Transit_gn", { "", "", -1 } },
            { "IvecoCh_GN", { "", "", -1 } },
            { "Mer_Vito_gn", { "", "", -1 } },
			{ "Megane_Estate_gn", { "", "", -1 } },
            { "chmgrs", { "", "", -1 } },
            { "SubaruWRXgn", { "", "", -1 } },
            { "kangooII1_pn", { "", "", -1 } },
			{ "chmaster2_pnb", { "", "", -1 } },
            { "chMaster3p2_pn", { "", "", -1 } },
            { "Megane_pn", { "", "", -1 } },
            { "Scenic_Pn", { "", "", -1 } },
			{ "Scenic3_Pn", { "", "", -1 } },
            { "trafic3_pn", { "", "", -1 } },
            { "Trafic_pn", { "", "", -1 } },
            { "c4h_bana", "call life_coplevel >= 2" },
            { "focusch3_bac", "call life_coplevel >= 2" },
            { "mondeo_bac", "call life_coplevel >= 2" },
            { "galaxych_raid", "call life_coplevel >= 2" },
            { "308_bac", "call life_coplevel >= 2" },
			{ "308_2015_bac", "call life_coplevel >= 2" },
			{ "Scenic_Bac", "call life_coplevel >= 2" },
            { "Renault_Espace_sphp", "call life_coplevel >= 2" },
            { "chvwt5_raid", "call life_coplevel >= 2" },
            { "B_T_LSV_01_unarmed_F", "call life_coplevel >= 4" },
			{ "B_T_LSV_01_armed_F", "call life_coplevel >= 5" },
            { "B_MRAP_01_F", "call life_coplevel >= 6" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 7" }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "", "", -1 } },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 3" },
			{ "I_Heli_light_03_unarmed_F", "call life_coplevel >= 4" },
			{ "ec_635_securite_civ_rf", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 5" },
            { "C_Scooter_Transport_01_F", "call life_coplevel >= 3" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 75;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = {
            { "Civil", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, { "", "", -1 } },
            { "Noir", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, { "", "", -1 } }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = {
            { "Noir", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, { "", "", -1 } },
            { "Vert", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, { "", "", -1 } },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, { "", "", -1 } },
            { "Blanc", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, { "", "", -1 } }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 2750000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, { "", "", -1 } },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, { "", "", -1 } },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, { "", "", -1 } },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, { "", "", -1 } },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, { "", "", -1 } },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, { "", "", -1 } },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, { "", "", -1 } },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, { "", "", -1 } }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 15;
        conditions = "license_civ_boat || license_cop_cg || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Noir", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, { "", "", -1 } },
            { "Gris", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, { "", "", -1 } },
            { "Vert", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, { "", "", -1 } },
            { "Blanc", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, { "", "", -1 } },
            { "Jaune", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, { "", "", -1 } },
			{ "Noir", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, { "", "", -1 } },
            { "Bleu", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, { "", "", -1 } },
            { "Gris", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, { "", "", -1 } },
            { "Vert", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, { "", "", -1 } },
            { "Blanc", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, { "", "", -1 } },
            { "Jaune", "cop", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, { "", "", -1 } }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = {
            { "Aride", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, { "", "", -1 } },
            { "Noir", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, { "", "", -1 } },
            { "Vert Camo", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, { "", "", -1 } }
        };
    };
	
	class O_T_LSV_02_armed_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 3000000;
        textures[] = {
            { "Aride", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, { "", "", -1 } },
            { "Noir", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, { "", "", -1 } },
            { "Vert Camo", "reb", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, { "", "", -1 } }
        };
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class B_T_LSV_01_armed_F {
        vItemSpace = 50;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };
	
	class O_T_Truck_03_device_ghex_F {
        vItemSpace = 1000;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = {};
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 65;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 500000;
        textures[] = {
            { "Gendarmerie", "cop", {
                "\textures\ghost_gendarmerie.paa"
            }, { "", "", -1 } }
        };
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 50;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {};
    };
	
	class ec_635_securite_civ_rf {
        vItemSpace = 80;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 850000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 65;
        conditions = "";
        price = 1000000;
        textures[] = {
            { "Noir", "cop", {
                "\textures\hunter_gendarmerie.paa",
                "\textures\hunter_gendarmerie_part2.paa",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, { "", "", -1 } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 50;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 10000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 25000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 975;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 1200000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 500;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 1000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 25000;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 1250000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 55;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };

    class B_Truck_01_covered_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 300000;
        textures[] = { };
    };
	
	class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 5000000;
        textures[] = {};
    };
	
	class O_MRAP_02_hmg_F {
        vItemSpace = 60;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 10000000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = {
            { "Rouge", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, { "", "", -1 } },
            { "Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, { "", "", -1 } },
            { "Rouge Foncé", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, { "", "", -1 } },
            { "Bleu et Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, { "", "", -1 } },
			{ "Rouge", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, { "", "", -1 } },
            { "Blanc", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, { "", "", -1 } },
            { "Bleu", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, { "", "", -1 } },
            { "Rouge Foncé", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, { "", "", -1 } },
            { "Bleu et Blanc", "cop", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, { "", "", -1 } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 10;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, { "", "", -1 } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, { "", "", -1 } },
            { "Noir et Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, { "", "", -1 } },
            { "Beige Sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, { "", "", -1 } },
            { "Vert Sport", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, { "", "", -1 } },
			{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, { "", "", -1 } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, { "", "", -1 } },
            { "Blanche", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, { "", "", -1 } },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, { "", "", -1 } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, { "", "", -1 } },
			{ "Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, { "", "", -1 } },
            { "Vert", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, { "", "", -1 } },
            { "Blanche", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, { "", "", -1 } },
            { "Gris", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, { "", "", -1 } },
            { "Noir", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, { "", "", -1 } },
			{ "Rouge", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, { "", "", -1 } },
            { "Orange", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, { "", "", -1 } },
            { "Noir et Blanc", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, { "", "", -1 } },
            { "Beige Sport", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, { "", "", -1 } },
            { "Vert Sport", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, { "", "", -1 } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, { "", "", -1 } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, { "", "", -1 } },
            { "Noir", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, { "", "", -1 } },
            { "Blanc", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, { "", "", -1 } },
            { "Vert Digital", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, { "", "", -1 } },
            { "Hunter Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, { "", "", -1 } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, { "", "", -1 } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 360000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, { "", "", -1 } },
            { "Noir", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, { "", "", -1 } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, { "", "", -1 } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, { "", "", -1 } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, { "", "", -1 } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, { "", "", -1 } },
            { "Blanche", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, { "", "", -1 } },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, { "", "", -1 } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, { "", "", -1 } },
			{ "Beige", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, { "", "", -1 } },
            { "Vert", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, { "", "", -1 } },
            { "Bleu", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, { "", "", -1 } },
            { "Bleu Foncé", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, { "", "", -1 } },
            { "Jaune", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, { "", "", -1 } },
            { "Blanche", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, { "", "", -1 } },
            { "Gris", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, { "", "", -1 } },
            { "Noir", "cop", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, { "", "", -1 } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Rouge Foncé", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Argent", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, { "", "", -1 } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, { "", "", -1 } },
			{ "Rouge Foncé", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Argent", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, { "", "", -1 } },
            { "Orange", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, { "", "", -1 } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 65000;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, { "", "", -1 } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, { "", "", -1 } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Noir", "cop", {
                "\textures\hunter_gendarmerie.paa",
                "\textures\hunter_gendarmerie_part2.paa"
            }, { "", "", -1 } }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, { "", "", -1 } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 45;
        conditions = "license_civ_rebel || {license_cop_cAir} || {license_med_mAir}";
        price = 300000;
        textures[] = {
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, { "", "", -1 } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, { "", "", -1 } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, { "", "", -1 } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, { "", "", -1 } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, { "", "", -1 } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, { "", "", -1 } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, { "", "", -1 } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, { "", "", -1 } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, { "", "", -1 } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, { "", "", -1 } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, { "", "", -1 } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, { "", "", -1 } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, { "", "", -1 } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, { "", "", -1 } },
            { "Gendarmerie", "cop", {
                "\textures\humminbird_gendarmerie.paa"
            }, { "", "", -1 } }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 45;
		conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 275000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 70;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 450000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, { "", "", -1 } },
            { "Blanc et Bleu", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, { "", "", -1 } },
            { "Vert Digital", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, { "", "", -1 } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, { "", "", -1 } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, { "", "", -1 } }
        };
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 700000;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 135;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 1200000;
        textures[] = {};
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 10000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 150;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 105000;
        textures[] = {
            { "Blanc", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, { "", "", -1 } },
            { "Rouge", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, { "", "", -1 } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 250;
        vFuelSpace = 385000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 190000;
        textures[] = {
            { "Blanc", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, { "", "", -1 } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 325;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = {};
    };
	
	class O_Truck_03_fuel_F {
        vItemSpace = 475;
        vFuelSpace = 65000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 575000;
        textures[] = {};
    };
	
	//Pompier
	class berlingo2_vlcg {
        vItemSpace = 75;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class Dacia_Duster_vlhr {
        vItemSpace = 75;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class chvsavar_iveco {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class chVSAV_Sprinter {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class chmaster2_vsav {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class chmaster3_vsrl {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class VSAV_Ducato {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class VPL_Boxer {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class EPA {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class PMA {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class VPC {
        vItemSpace = 80;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class brancardch {
        vItemSpace = 0;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class ec_635_securite_civ {
        vItemSpace = 125;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	//mod normal
	class Mrshounka_Alfa_Romeo_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = { };
    };
    
    class Mrshounka_Alfa_Romeo_bleufonce : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_rouge : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_jaune : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_rose : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_grise : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_violet : Mrshounka_Alfa_Romeo_noir{};
    class Mrshounka_Alfa_Romeo_orange : Mrshounka_Alfa_Romeo_noir{};
    
    class Mrshounka_rs4_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = { };
    };
    
    class Mrshounka_rs4_civ_bleufonce : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_rouge : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_jaune : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_rose : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_grise : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_violet : Mrshounka_rs4_civ_noir{};
    class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ_noir{};
    
    class shounka_rs6_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = { };
    };
    
    class shounka_rs6_bleufonce : shounka_rs6_noir{};
    class shounka_rs6_rouge : shounka_rs6_noir{};
    class shounka_rs6_jaune : shounka_rs6_noir{};
    class shounka_rs6_rose : shounka_rs6_noir{};
    class shounka_rs6_grise : shounka_rs6_noir{};
    class shounka_rs6_violet : shounka_rs6_noir{};
    class shounka_rs6_orange : shounka_rs6_noir{};
    
    class Mrshounka_Bowler_c_noir {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };
    
    class Mrshounka_Bowler_c_bleufonce : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_rouge : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_jaune : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_rose : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_grise : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_violet : Mrshounka_Bowler_c_noir{};
    class Mrshounka_Bowler_c_orange : Mrshounka_Bowler_c_noir{};
    
    class shounka_avalanche_noir {
        vItemSpace = 55;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class shounka_avalanche_bleufonce : shounka_avalanche_noir{};
    class shounka_avalanche_rouge : shounka_avalanche_noir{};
    class shounka_avalanche_jaune : shounka_avalanche_noir{};
    class shounka_avalanche_rose : shounka_avalanche_noir{};
    class shounka_avalanche_grise : shounka_avalanche_noir{};
    class shounka_avalanche_violet : shounka_avalanche_noir{};
    class shounka_avalanche_orange : shounka_avalanche_noir{};
    
    class Berlingo2_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = { };
    };
    
    class Berlingo2_civ_rouge : Berlingo2_civ{};
    class Berlingo2_civ_bleu : Berlingo2_civ{};
    class Berlingo2_civ_noir : Berlingo2_civ{};
    class Berlingo2_civ_gris : Berlingo2_civ{};
    class Berlingo2_civ_yellow : Berlingo2_civ{};
    
    class c4hch_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    
    class c4hch_civ_rouge : c4hch_civ{};
    class c4hch_civ_bleu : c4hch_civ{};
    class c4hch_civ_noir : c4hch_civ{};
    class c4hch_civ_gris : c4hch_civ{};
    class c4hch_civ_yellow : c4hch_civ{};
    
    class Mrshounka_a3_ds3_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 17500;
        textures[] = { };
    };
    
    class Mrshounka_a3_ds3_civ_bleufonce : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_rouge : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_jaune : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_rose : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_grise : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_violet : Mrshounka_a3_ds3_civ_noir{};
    class Mrshounka_a3_ds3_civ_civ_orange : Mrshounka_a3_ds3_civ_noir{};
    
    class chduster14_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 22500;
        textures[] = { };
    };
    
    class chduster14_civ_rouge : chduster14_civ{};
    class chduster14_civ_bleu : chduster14_civ{};
    class chduster14_civ_noir : chduster14_civ{};
    class chduster14_civ_gris : chduster14_civ{};
    class chduster14_civ_yellow : chduster14_civ{};
    
    class Ducato_civ {
        vItemSpace = 120;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class Ducato_civ_rouge : Ducato_civ{};
    class Ducato_civ_bleu : Ducato_civ{};
    class Ducato_civ_noir : Ducato_civ{};
    class Ducato_civ_gris : Ducato_civ{};
    class Ducato_civ_yellow : Ducato_civ{};
    
    class cmax_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = { };
    };
    
    class cmax_civ_rouge : cmax_civ{};
    class cmax_civ_bleu : cmax_civ{};
    class cmax_civ_noir : cmax_civ{};
    class cmax_civ_gris : cmax_civ{};
    class cmax_civ_yellow : cmax_civ{};
    
    class focus3ch_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = { };
    };
    
    class focus3ch_civ_rouge : focus3ch_civ{};
    class focus3ch_civ_bleu : focus3ch_civ{};
    class focus3ch_civ_noir : focus3ch_civ{};
    class focus3ch_civ_gris : focus3ch_civ{};
    class focus3ch_civ_yellow : focus3ch_civ{};
    
    class chfcrsciv {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 85000;
        textures[] = { };
    };
    
    class chfcrsciv_rouge : chfcrsciv{};
    class chfcrsciv_bleu : chfcrsciv{};
    class chfcrsciv_noir : chfcrsciv{};
    class chfcrsciv_gris : chfcrsciv{};
    class chfcrsciv_yellow : chfcrsciv{};
    
    class focussw1998_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    
    class focussw1998_civ_rouge : focussw1998_civ{};
    class focussw1998_civ_bleu : focussw1998_civ{};
    class focussw1998_civ_noir : focussw1998_civ{};
    class focussw1998_civ_gris : focussw1998_civ{};
    class focussw1998_civ_yellow : focussw1998_civ{};
    
    class focussw3_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = { };
    };
    
    class focussw3_civ_rouge : focussw3_civ{};
    class focussw3_civ_bleu : focussw3_civ{};
    class focussw3_civ_noir : focussw3_civ{};
    class focussw3_civ_gris : focussw3_civ{};
    class focussw3_civ_yellow : focussw3_civ{};
    
    class mondeo_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = { };
    };
    
    class mondeo_civ_rouge : mondeo_civ{};
    class mondeo_civ_bleu : mondeo_civ{};
    class mondeo_civ_noir : mondeo_civ{};
    class mondeo_civ_gris : mondeo_civ{};
    class mondeo_civ_yellow : mondeo_civ{};
    
    class galaxych_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };
    
    class galaxych_civ_rouge : galaxych_civ{};
    class galaxych_civ_bleu : galaxych_civ{};
    class galaxych_civ_noir : galaxych_civ{};
    class galaxych_civ_gris : galaxych_civ{};
    class galaxych_civ_yellow : galaxych_civ{};
    
    class Mrshounka_Vandura_civ_noir {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class Mrshounka_Vandura_civ_bleufonce : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_rouge : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_jaune : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_rose : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_grise : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_violet : Mrshounka_Vandura_civ_noir{};
    class Mrshounka_Vandura_civ_orange : Mrshounka_Vandura_civ_noir{};
    
    class Mrshounka_golfvi_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 25000;
        textures[] = { };
    };
    
    class Mrshounka_golfvi_bleufonce : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_rouge : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_jaune : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_rose : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_grise : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_violet : Mrshounka_golfvi_noir{};
    class Mrshounka_golfvi_orange : Mrshounka_golfvi_noir{};
    
    class IvecoCh_cciv {
        vItemSpace = 140;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 80000;
        textures[] = { };
    };
    
    class IvecoCh_cciv_rouge : IvecoCh_cciv{};
    class IvecoCh_cciv_bleu : IvecoCh_cciv{};
    class IvecoCh_cciv_noir : IvecoCh_cciv{};
    class IvecoCh_cciv_gris : IvecoCh_cciv{};
    class IvecoCh_cciv_yellow : IvecoCh_cciv{};
    
    class IvecoCh_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class IvecoCh_civ_rouge : IvecoCh_civ{};
    class IvecoCh_civ_bleu : IvecoCh_civ{};
    class IvecoCh_civ_noir : IvecoCh_civ{};
    class IvecoCh_civ_gris : IvecoCh_civ{};
    class IvecoCh_civ_yellow : IvecoCh_civ{};
    
    class Mrshounka_cherokee_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = { };
    };
    
    class Mrshounka_cherokee_noir_mat : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_bleu : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_bleu_mat : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_blanc : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_blanc_mat : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_violet_mat : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_rouge : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_rouge_mat : Mrshounka_cherokee_noir{};
    
    class chdefender_civ {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class chdefender_civ_rouge : chdefender_civ{};
    class chdefender_civ_bleu : chdefender_civ{};
    class chdefender_civ_noir : chdefender_civ{};
    class chdefender_civ_gris : chdefender_civ{};
    class chdefender_civ_yellow : chdefender_civ{};
    
    class chcitan_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = { };
    };
    
    class chcitan_civ_rouge : chcitan_civ{};
    class chcitan_civ_bleu : chcitan_civ{};
    class chcitan_civ_noir : chcitan_civ{};
    class chcitan_civ_gris : chcitan_civ{};
    class chcitan_civ_yellow : chcitan_civ{};
    
    class ch_sprinter_civ {
        vItemSpace = 120;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 95000;
        textures[] = { };
    };
    
    class ch_sprinter_civ_rouge : ch_sprinter_civ{};
    class ch_sprinter_civ_bleu : ch_sprinter_civ{};
    class ch_sprinter_civ_noir : ch_sprinter_civ{};
    class ch_sprinter_civ_gris : ch_sprinter_civ{};
    class ch_sprinter_civ_yellow : ch_sprinter_civ{};
    
    class Mer_Vito_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 67500;
        textures[] = { };
    };
    
    class Mer_Vito_civ_rouge : Mer_Vito_civ{};
    class Mer_Vito_civ_bleu : Mer_Vito_civ{};
    class Mer_Vito_civ_noir : Mer_Vito_civ{};
    class Mer_Vito_civ_gris : Mer_Vito_civ{};
    class Mer_Vito_civ_yellow : Mer_Vito_civ{};
    
    class Mrshounka_mercedes_190_p_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = { };
    };
    
    class Mrshounka_mercedes_190_p_bleufonce : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_rouge : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_jaune : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_rose : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_grise : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_violet : Mrshounka_mercedes_190_p_noir{};
    class Mrshounka_mercedes_190_p_orange : Mrshounka_mercedes_190_p_noir{};
    
    class ch206_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 20000;
        textures[] = { };
    };
    
    class ch206_civ_rouge : ch206_civ{};
    class ch206_civ_bleu : ch206_civ{};
    class ch206_civ_noir : ch206_civ{};
    class ch206_civ_gris : ch206_civ{};
    class ch206_civ_yellow : ch206_civ{};
    
    class 307ch_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };
    
    class 307ch_civ_rouge : 307ch_civ{};
    class 307ch_civ_bleu : 307ch_civ{};
    class 307ch_civ_noir : 307ch_civ{};
    class 307ch_civ_gris : 307ch_civ{};
    class 307ch_civ_yellow : 307ch_civ{};
    
    class Peugeot_308_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class Peugeot_308_civ_rouge : Peugeot_308_civ{};
    class Peugeot_308_civ_bleu : Peugeot_308_civ{};
    class Peugeot_308_civ_noir : Peugeot_308_civ{};
    class Peugeot_308_civ_gris : Peugeot_308_civ{};
    class Peugeot_308_civ_yellow : Peugeot_308_civ{};
    
    class Peugeot_Boxer_civ {
        vItemSpace = 120;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = { };
    };
    
    class Peugeot_Boxer_civ_rouge : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_bleu : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_noir : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_gris : Peugeot_Boxer_civ{};
    class Peugeot_Boxer_civ_yellow : Peugeot_Boxer_civ{};
    
    class Peugeot_Expert_civ {
        vItemSpace = 75;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 55000;
        textures[] = { };
    };
    
    class Peugeot_Expert_civ_rouge : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_bleu : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_noir : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_gris : Peugeot_Expert_civ{};
    class Peugeot_Expert_civ_yellow : Peugeot_Expert_civ{};
    
    class Mrshounka_r5_noir {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1000;
        textures[] = { };
    };
    
    class Mrshounka_r5_bleufonce : Mrshounka_r5_noir{};
    class Mrshounka_r5_rouge : Mrshounka_r5_noir{};
    class Mrshounka_r5_jaune : Mrshounka_r5_noir{};
    class Mrshounka_r5_rose : Mrshounka_r5_noir{};
    class Mrshounka_r5_grise : Mrshounka_r5_noir{};
    class Mrshounka_r5_violet : Mrshounka_r5_noir{};
    class Mrshounka_r5_orange : Mrshounka_r5_noir{};
    
    class Renault_Clio_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    
    class Renault_Clio_civ_rouge : Renault_Clio_civ{};
    class Renault_Clio_civ_bleu : Renault_Clio_civ{};
    class Renault_Clio_civ_noir : Renault_Clio_civ{};
    class Renault_Clio_civ_gris : Renault_Clio_civ{};
    class Renault_Clio_civ_yellow : Renault_Clio_civ{};
    
    class chclio3_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = { };
    };
    
    class chclio3_civ_rouge : chclio3_civ{};
    class chclio3_civ_bleu : chclio3_civ{};
    class chclio3_civ_noir : chclio3_civ{};
    class chclio3_civ_gris : chclio3_civ{};
    class chclio3_civ_yellow : chclio3_civ{};
    
    class Renault_ClioIV_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 70000;
        textures[] = { };
    };
    
    class Renault_ClioIV_civ_rouge : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_bleu : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_noir : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_gris : Renault_ClioIV_civ{};
    class Renault_ClioIV_civ_yellow : Renault_ClioIV_civ{};
    
    class Renault_Espace_civ {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = { };
    };
    
    class Renault_Espace_civ_rouge : Renault_Espace_civ{};
    class Renault_Espace_civ_bleu : Renault_Espace_civ{};
    class Renault_Espace_civ_noir : Renault_Espace_civ{};
    class Renault_Espace_civ_gris : Renault_Espace_civ{};
    class Renault_Espace_civ_yellow : Renault_Espace_civ{};
    
    class kangooII1_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 27500;
        textures[] = { };
    };
    
    class kangooII1_civ_rouge : kangooII1_civ{};
    class kangooII1_civ_bleu : kangooII1_civ{};
    class kangooII1_civ_noir : kangooII1_civ{};
    class kangooII1_civ_gris : kangooII1_civ{};
    class kangooII1_civ_yellow : kangooII1_civ{};
    
    class kangooII1_cciv {
        vItemSpace = 70;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 65000;
        textures[] = { };
    };
    
    class kangooII1_cciv_rouge : kangooII1_cciv{};
    class kangooII1_cciv_bleu : kangooII1_cciv{};
    class kangooII1_cciv_noir : kangooII1_cciv{};
    class kangooII1_cciv_gris : kangooII1_cciv{};
    class kangooII1_cciv_yellow : kangooII1_cciv{};
    
    class master3p2_civ_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 70000;
        textures[] = { };
    };
    
    class master3p2_civ_civ_rouge : master3p2_civ_civ{};
    class master3p2_civ_civ_bleu : master3p2_civ_civ{};
    class master3p2_civ_civ_noir : master3p2_civ_civ{};
    class master3p2_civ_civ_gris : master3p2_civ_civ{};
    class master3p2_civ_civ_yellow : master3p2_civ_civ{};
    
    class Megane_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = { };
    };
    
    class Megane_civ_rouge : Megane_civ{};
    class Megane_civ_bleu : Megane_civ{};
    class Megane_civ_noir : Megane_civ{};
    class Megane_civ_gris : Megane_civ{};
    class Megane_civ_yellow : Megane_civ{};
    
    class Megane_Estate_p2_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 25000;
        textures[] = { };
    };
    
    class Megane_Estate_p2_civ_rouge : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_bleu : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_noir : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_gris : Megane_Estate_p2_civ{};
    class Megane_Estate_p2_civ_yellow : Megane_Estate_p2_civ{};
    
    class chmeganers_civ {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    
    class chmeganers_civ_rouge : chmeganers_civ{};
    class chmeganers_civ_bleu : chmeganers_civ{};
    class chmeganers_civ_noir : chmeganers_civ{};
    class chmeganers_civ_gris : chmeganers_civ{};
    class chmeganers_civ_yellow : chmeganers_civ{};
    
    class Renault_Scenic_civ {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = { };
    };
    
    class Renault_Scenic_civ_rouge : Renault_Scenic_civ{};
    class Renault_Scenic_civ_bleu : Renault_Scenic_civ{};
    class Renault_Scenic_civ_noir : Renault_Scenic_civ{};
    class Renault_Scenic_civ_gris : Renault_Scenic_civ{};
    class Renault_Scenic_civ_yellow : Renault_Scenic_civ{};
    
    class Scenic3_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class Scenic3_civ_rouge : Scenic3_civ{};
    class Scenic3_civ_bleu : Scenic3_civ{};
    class Scenic3_civ_noir : Scenic3_civ{};
    class Scenic3_civ_gris : Scenic3_civ{};
    class Scenic3_civ_yellow : Scenic3_civ{};
    
    class Trafic3civ {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = { };
    };
    
    class Trafic3civ_rouge : Trafic3civ{};
    class Trafic3civ_bleu : Trafic3civ{};
    class Trafic3civ_noir : Trafic3civ{};
    class Trafic3civ_gris : Trafic3civ{};
    class Trafic3civ_yellow : Trafic3civ{};
    
    class Trafic3cciv {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = { };
    };
    
    class Trafic3cciv_rouge : Trafic3cciv{};
    class Trafic3cciv_bleu : Trafic3cciv{};
    class Trafic3cciv_noir : Trafic3cciv{};
    class Trafic3cciv_gris : Trafic3cciv{};
    class Trafic3cciv_yellow : Trafic3cciv{};
    
    class Mrshounka_twingo_p_noir {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    
    class Mrshounka_twingo_p_bf : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_r : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_j : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_rose : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_g : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_v : Mrshounka_twingo_p_noir{};
    class Mrshounka_twingo_p_o : Mrshounka_twingo_p_noir{};
    
    class Mrshounka_a3_smart_civ {
        vItemSpace = 15;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };
    
    class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ{};
    class Mrshounka_a3_smart_civ_bleu : Mrshounka_a3_smart_civ{};
    
    class Mrshounka_Volkswagen_Touareg_noir {
        vItemSpace = 35;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 50000;
        textures[] = { };
    };
    
    class Mrshounka_Volkswagen_Touareg_bleufonce : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_rouge : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_jaune : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_rose : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_grise : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_violet : Mrshounka_Volkswagen_Touareg_noir{};
    class Mrshounka_Volkswagen_Touareg_orange : Mrshounka_Volkswagen_Touareg_noir{};
    
    class chvwt5_civ {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 35000;
        textures[] = { };
    };
    
    class chvwt5_civ_rouge : chvwt5_civ{};
    class chvwt5_civ_bleu : chvwt5_civ{};
    class chvwt5_civ_noir : chvwt5_civ{};
    class chvwt5_civ_gris : chvwt5_civ{};
    class chvwt5_civ_yellow : chvwt5_civ{};
	
    //camion
	class midlum {
        vItemSpace = 800;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 875000;
        textures[] = { };
    };
    
    class midlum_red : midlum{};
    class midlum_blue : midlum{};
    class midlum_yellow : midlum{};
    class midlum_grey : midlum{};
    class midlum_black : midlum{};
	
	class shounka_a3_renaultmagnum_f {
        vItemSpace = 625;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 925000;
        textures[] = { };
    };
	
    //police
	class berlingo2_pn {
        vItemSpace = 30;
        conditions = "";
        price = 5000;
        textures[] = { };
    };

	class cmax_pn {
        vItemSpace = 40;
        conditions = "";
        price = 7000;
        textures[] = { };
    };
	
	class SubaruWRXgn {
        vItemSpace = 35;
        conditions = "";
        price = 5000;
        textures[] = { };
    };
	
	class chmgrs {
        vItemSpace = 30;
        conditions = "";
        price = 4500;
        textures[] = { };
    };
	
	class Megane_Estate_gn {
        vItemSpace = 35;
        conditions = "";
        price = 47500;
        textures[] = { };
    };
	
	class SubaruWRXgn {
        vItemSpace = 40;
        conditions = "";
        price = 5000;
        textures[] = { };
    };
	
	class chmgrs {
        vItemSpace = 50;
        conditions = "";
        price = 65000;
        textures[] = { };
    };
	
	class kangooII1_pn {
        vItemSpace = 65;
        conditions = "";
        price = 8000;
        textures[] = { };
    };
	
	class chmaster2_pnb {
        vItemSpace = 30;
        conditions = "";
        price = 95000;
        textures[] = { };
    };
	
	class chMaster3p2_pn {
        vItemSpace = 30;
        conditions = "";
        price = 4500;
        textures[] = { };
    };
	
	class Megane_pn {
        vItemSpace = 30;
        conditions = "";
        price = 4500;
        textures[] = { };
    };
	
	class Scenic_Pn {
        vItemSpace = 70;
        conditions = "";
        price = 10000;
        textures[] = { };
    };
	
	class Scenic3_Pn {
        vItemSpace = 45;
        conditions = "";
        price = 6750;
        textures[] = { };
    };
	
	class trafic3_pn {
        vItemSpace = 45;
        conditions = "";
        price = 4850;
        textures[] = { };
    };
	
	class Trafic_pn {
        vItemSpace = 35;
        conditions = "";
        price = 12500;
        textures[] = { };
    };
    
    class c4h_bana {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class focusch3_bac {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class mondeo_bac {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class galaxych_raid {
        vItemSpace = 25;
        conditions = "license_cop_raid || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class 308_bac {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
	
	class 308_2015_bac {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
	
	class Scenic_Bac {
        vItemSpace = 25;
        conditions = "license_cop_bac || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class Renault_Espace_sphp {
        vItemSpace = 25;
        conditions = "license_cop_raid || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
    
    class chvwt5_raid {
        vItemSpace = 25;
        conditions = "license_cop_raid || {!(playerSide isEqualTo west)}";
        price = 1000;
        textures[] = { };
    };
	
	//luxe
	class Mrshounka_agera_p {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 800000;
        textures[] = { };
    };
    
    class Mrshounka_agera_p_noir : Mrshounka_agera_p{};
    class Mrshounka_agera_p_bleu : Mrshounka_agera_p{};
    class Mrshounka_agera_p_jaune : Mrshounka_agera_p{};
    
    class shounka_a3_rs5_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 550000;
        textures[] = { };
    };
    
    class shounka_a3_rs5_civ_bleufonce : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_rouge : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_jaune : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_rose : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_grise : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_violet : shounka_a3_rs5_civ_noir{};
    class shounka_a3_rs5_civ_orange : shounka_a3_rs5_civ_noir{};
    
    class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 500000;
        textures[] = { };
    };
    
    class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_rouge : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_jaune : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_rose : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_grise : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_violet : Mrshounka_bmwm1_civ_noir{};
    class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ_noir{};
    
    class Mrshounka_bmwm6_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 700000;
        textures[] = { };
    };
    
    class Mrshounka_bmwm6_bleufonce : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_rouge : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_jaune : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_rose : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_grise : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_violet : Mrshounka_bmwm6_noir{};
    class Mrshounka_bmwm6_orange : Mrshounka_bmwm6_noir{};
    
    class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 1100000;
        textures[] = { };
    };
    
    class Mrshounka_a3_dodge15_civ_bleufonce : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_rouge : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_jaune : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_rose : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_grise : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_violet : Mrshounka_a3_dodge15_civ_noir{};
    class Mrshounka_a3_dodge15_civ_orange : Mrshounka_a3_dodge15_civ_noir{};
    
    class shounka_f430_spider_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };
    
    class shounka_f430_spider_bleufonce : shounka_f430_spider_noir{};
    class shounka_f430_spider_rouge : shounka_f430_spider_noir{};
    class shounka_f430_spider_jaune : shounka_f430_spider_noir{};
    class shounka_f430_spider_rose : shounka_f430_spider_noir{};
    class shounka_f430_spider_grise : shounka_f430_spider_noir{};
    class shounka_f430_spider_violet : shounka_f430_spider_noir{};
    class shounka_f430_spider_orange : shounka_f430_spider_noir{};
    
    class shounka_gt_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 400000;
        textures[] = { };
    };
    
    class shounka_gt_bleufonce : shounka_gt_noir{};
    class shounka_gt_rouge : shounka_gt_noir{};
    class shounka_gt_jaune : shounka_gt_noir{};
    class shounka_gt_rose : shounka_gt_noir{};
    class shounka_gt_grise : shounka_gt_noir{};
    class shounka_gt_violet : shounka_gt_noir{};
    class shounka_gt_orange : shounka_gt_noir{};
    
    class Mrshounka_mustang_mat {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 700000;
        textures[] = { };
    };
    
    class Mrshounka_mustang_noir : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_mat_n : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_bleufonce : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_mat_b : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_rouge : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_jaune : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_rose : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_grise : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_violet : Mrshounka_mustang_mat{};
    class Mrshounka_mustang_orange : Mrshounka_mustang_mat{};
    
    class Mrshounka_hummer_civ_noir {
        vItemSpace = 50;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 700000;
        textures[] = { };
    };
    
    class Mrshounka_hummer_civ_bleufonce : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_rouge : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_jaune : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_rose : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_grise : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_violet : Mrshounka_hummer_civ_noir{};
    class Mrshounka_hummer_civ_orange : Mrshounka_hummer_civ_noir{};
    
    class shounka_h2_noir {
        vItemSpace = 50;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 1200000;
        textures[] = { };
    };
    
    class shounka_h2_bleufonce : shounka_h2_noir{};
    class shounka_h2_rouge : shounka_h2_noir{};
    class shounka_h2_jaune : shounka_h2_noir{};
    class shounka_h2_rose : shounka_h2_noir{};
    class shounka_h2_grise : shounka_h2_noir{};
    class shounka_h2_violet : shounka_h2_noir{};
    class shounka_h2_orange : shounka_h2_noir{};
    
    class Mrshounka_veneno_c {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 1700000;
        textures[] = { };
    };
    
    class Mrshounka_veneno_c_noir : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_bleu : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_jaune : Mrshounka_veneno_c{};
    
    class Mrshounka_lykan_c_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 1950000;
        textures[] = { };
    };
    
    class Mrshounka_lykan_c_bleufonce : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_rouge : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_jaune : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_rose : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_grise : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_violet : Mrshounka_lykan_c_noir{};
    class Mrshounka_lykan_c_orange : Mrshounka_lykan_c_noir{};
    
    class Mrshounka_c63_2015_mat {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 975000;
        textures[] = { };
    };
    
    class Mrshounka_c63_2015_noir : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_mat_n : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_bleufonce : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_mat_b : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_rouge : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_jaune : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_rose : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_grise : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_violet : Mrshounka_c63_2015_mat{};
    class Mrshounka_c63_2015_orange : Mrshounka_c63_2015_mat{};
    
    class shounka_clk_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 600000;
        textures[] = { };
    };
    
    class shounka_clk_bleufonce : shounka_clk_noir{};
    class shounka_clk_rouge : shounka_clk_noir{};
    class shounka_clk_jaune : shounka_clk_noir{};
    class shounka_clk_rose : shounka_clk_noir{};
    class shounka_clk_grise : shounka_clk_noir{};
    class shounka_clk_violet : shounka_clk_noir{};
    class shounka_clk_orange : shounka_clk_noir{};
    
    class Mrshounka_a3_gtr_civ {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 800000;
        textures[] = { };
    };
    
    class Mrshounka_a3_gtr_civ_noir : Mrshounka_a3_gtr_civ{};
    class Mrshounka_a3_gtr_civ_bleu : Mrshounka_a3_gtr_civ{};
    
    class Mrshounka_pagani_c_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 1725000;
        textures[] = { };
    };
    
    class Mrshounka_pagani_c_bleufonce : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_rouge : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_jaune : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_rose : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_grise : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_violet : Mrshounka_pagani_c_noir{};
    class Mrshounka_pagani_c_orange : Mrshounka_pagani_c_noir{};
    
    class shounka_porsche911_noir {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 650000;
        textures[] = { };
    };
    
    class shounka_porsche911_bleufonce : shounka_porsche911_noir{};
    class shounka_porsche911_rouge : shounka_porsche911_noir{};
    class shounka_porsche911_jaune : shounka_porsche911_noir{};
    class shounka_porsche911_rose : shounka_porsche911_noir{};
    class shounka_porsche911_grise : shounka_porsche911_noir{};
    class shounka_porsche911_violet : shounka_porsche911_noir{};
    class shounka_porsche911_orange : shounka_porsche911_noir{};
    
    class Mrshounka_cayenne_p_noir {
        vItemSpace = 35;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 375000;
        textures[] = { };
    };
    
    class Mrshounka_cayenne_p_bleufonce : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_rouge : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_jaune : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_rose : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_grise : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_violet : Mrshounka_cayenne_p_noir{};
    class Mrshounka_cayenne_p_orange : Mrshounka_cayenne_p_noir{};
    
    class subaruch_civ {
        vItemSpace = 25;
        conditions = "license_civ_luxe || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };
    
    class subaruch_civ_rouge : subaruch_civ{};
    class subaruch_civ_bleu : subaruch_civ{};
    class subaruch_civ_noir : subaruch_civ{};
    class subaruch_civ_gris : subaruch_civ{};
    class subaruch_civ_yellow : subaruch_civ{};
	
	class Mrshounka_ducati_p {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 85000;
        textures[] = { };
    };
    
    class Mrshounka_ducati_p_noir : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_bf : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_r : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_j : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_rose : Mrshounka_ducati_p{};
	class Mrshounka_ducati_p_g : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_v : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_o : Mrshounka_ducati_p{};
    
    class AlessioAventadorM {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };
    
    class AlessioAventador : AlessioAventadorM{};
    class AlessioAventadorG : AlessioAventadorM{};
    class AlessioAventadorC : AlessioAventadorM{};
    
    class AlessioSuperfastMat {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1350000;
        textures[] = { };
    };
    
    class AlessioSuperfast : AlessioSuperfastMat{};
    class AlessioSuperfastG : AlessioSuperfastMat{};
    class AlessioSuperfastC : AlessioSuperfastMat{};
    
    class Alessio718 {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1350000;
        textures[] = { };
    };
    
    class Alessio718M : Alessio718{};
    class Alessio718_Gold : Alessio718{};
    class Alessio718Chrome : Alessio718{};
    
    class AlessioC63M {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };
    
    class AlessioC63 : AlessioC63M{};
    class AlessioC63G : AlessioC63M{};
    class AlessioC63C : AlessioC63M{};
    
    class AlessioBM4M {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };
    
    class AlessioBM4 : AlessioBM4M{};
    class AlessioBMG : AlessioBM4M{};
    class AlessioBMC : AlessioBM4M{};
    
    class mercleeduma_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };
    
    class mercleeduma_civ_rouge : mercleeduma_civ{};
    class mercleeduma_civ_bleu : mercleeduma_civ{};
    class mercleeduma_civ_noir : mercleeduma_civ{};
    class mercleeduma_civ_gris : mercleeduma_civ{};
    class mercleeduma_civ_yellow : mercleeduma_civ{};
    
    class Gallardolu_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2375000;
        textures[] = { };
    };
    
    class Gallardolu_civ_rouge : Gallardolu_civ{};
    class Gallardolu_civ_bleu : Gallardolu_civ{};
    class Gallardolu_civ_noir : Gallardolu_civ{};
    class Gallardolu_civ_gris : Gallardolu_civ{};
    class Gallardolu_civ_yellow : Gallardolu_civ{};
    
    class Panameralu {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1975000;
        textures[] = { };
    };
    
    class Panameralu_rouge : Panameralu{};
    class Panameralu_bleu : Panameralu{};
    class Panameralu_noir : Panameralu{};
    class Panameralu_gris : Panameralu{};
    class Panameralu_yellow : Panameralu{};
    
    class RS7lu_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1825000;
        textures[] = { };
    };
    
    class RS7lu_civ_rouge : RS7lu_civ{};
    class RS7lu_civ_bleu : RS7lu_civ{};
    class RS7lu_civ_noir : RS7lu_civ{};
    class RS7lu_civ_gris : RS7lu_civ{};
    class RS7lu_civ_yellow : RS7lu_civ{};
    
    class M5lu_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1825000;
        textures[] = { };
    };
    
    class M5lu_civ_rouge : M5lu_civ{};
    class M5lu_civ_bleu : M5lu_civ{};
    class M5lu_civ_noir : M5lu_civ{};
    class M5lu_civ_gris : M5lu_civ{};
    class M5lu_civ_yellow : M5lu_civ{};
    
    class Chironlu_civ {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 5000000;
        textures[] = { };
    };
    
    class Chironlu_civ_rouge : Chironlu_civ{};
    class Chironlu_civ_bleu : Chironlu_civ{};
    class Chironlu_civ_noir : Chironlu_civ{};
    class Chironlu_civ_gris : Chironlu_civ{};
    class Chironlu_civ_yellow : Chironlu_civ{};
    
    class ivory_veyron {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3500000;
        textures[] = { };
    };
    
    class ivory_lfa {
        vItemSpace = 30;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 1200000;
        textures[] = { };
    };
};