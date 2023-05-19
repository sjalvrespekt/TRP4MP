#converted to DH, March 20 2011, Kane
province = { id = 440 anti_air = 2 naval_base = { size = 7 current_size = 7 } air_base = { size = 4 current_size = 4 }} #Barcelona
province = { id = 463 anti_air = 2 naval_base = { size = 3 current_size = 3 } air_base = { size = 2 current_size = 2 }} #Murcia
province = { id = 441 anti_air = 2 naval_base = { size = 7 current_size = 7 } air_base = { size = 4 current_size = 4 }} #Coruna
province = { id = 475 anti_air = 2 air_base = {	size = 4 current_size = 4 }} #Mallorca
province = { id = 474 anti_air = 2 naval_base = { size = 7 current_size = 7 } air_base = { size = 4 current_size = 4 }} #Sevilla
province = { id = 988 anti_air = 2 naval_base = { size = 2 current_size = 2 } air_base = { size = 2 current_size = 2 }} #Villa Cisneros
province = { id = 990 naval_base = { size = 1 current_size = 1 } air_base = { size = 2 current_size = 2 }} #Gran Canaria
province = { id = 460 anti_air = 3 air_base = { size = 2 current_size = 2 }} #Madrid
province = { id = 451 air_base = { size = 1 current_size = 1 }} #Burgos
province = { id = 715 air_base = { size = 1 current_size = 1 }} #Tanger
province = { id = 464 naval_base = { size = 2 current_size = 2 }} #Valancia

#Supply Pools
province = { id = 475  oilpool = 1 supplypool = 10 } #Mallorca
province = { id = 988  oilpool = 1 supplypool = 10 } #Villa Cisneros
province = { id = 990  oilpool = 1 supplypool = 10 } #Gran Canaria
province = { id = 716  oilpool = 1 supplypool = 10 } #Nador
province = { id = 913  oilpool = 1 supplypool = 10 } #Bata



country = {
    tag = SPR
    regular_id = U01
	intrinsic_gov_type = left_wing_radical

	manpower = 0 #20
		# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	dissent = 0
	capital = 460 #Madrid

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 1
        freedom = 7
        free_market = 4
        professional_army = 3
        defense_lobby = 4
        interventionism = 5
    }
    allowed_divisions = { 
        infantry = yes 
		d_02 = yes
        cavalry = yes 
        bergsjaeger = yes
#		motorized = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
#neu
   nationalprovinces      = 
{  
	444 #Oviedo
	451 #Burgos
	441 #Coruna
	453 
	466 #Jaen
	456 #Soria=>Saragossa
	460 #Madrid
	457 #Toledo=>Badajoz
	458 #Badajoz
	472 #Huelva
	474 #Sevilla
	471 #Malaga
	470 #Granada=>Jaen
	467 #Cordoba=>Huelva
	463 #Murcia
	468 #Ciudad Real=>Albacete
	464 #Valencia
	461 #Castellon de la Plana
        348 
	440 #Barcelona
	438 #Huesca
	436 #Taragona
	442 #Zaragoza
	443 #Bilbao
	475 #Mallorca
	437 #Gerona=>Barcelona
	439 #Lerida=>Huesca
	452 #Segovia=>Siguenza
	447 #Salamanca
	990 #Las Palmas de Gran Canaria
	991 #Santa Cruz de Tenerife
	469 #Almeria
        455 #Guadalajara
	448 #Leon=>Valladolid
	449 #Vigo=>Coruna
	446 #Pamplona
	462 #Alicante=>Murcia
	445 #Santander=>Oviedo
	459 #Teruel=>Castellon
	473 
	465 #Albacete
	454 #Tarancon=>Guadalajara
	450 #Plasencia=>Salamanca                      
} 
   ownedprovinces         = 
{  	441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475  
        437 439 452 447 990 991 469 715 987 988 913 446 449 448 455 454 465 473 462 459 445 450 989 716 916    
} 
   # Spanish Guinea 
   controlledprovinces    = 
{  	441 444 451 466 453 460 458 472 474 471 470 467 463 468 464 457 461 456 442 443 436 438 440 475  
        437 439 452 447 990 991 715 987 988 913 446 469 450 449 448 455 454 465 473 462 459 445 989 716 916   
}
	claimedprovinces = 
{
	715 #Tanger
	716 #Nador
	987 #El Aiun
	988 #Villa Cisneros
	989 #Villa Bens=>Ifni
	913 #Bata
	916 #Malaba
}

diplomacy = {
relation = { tag = ENG value = 50 }
relation = { tag = FIN value = 35 }
relation = { tag = FRA value = 75 }
relation = { tag = GER value = -50 }
relation = { tag = IRE value = 50 }
relation = { tag = ITA value = -50 }
relation = { tag = POR value = -50 }
relation = { tag = SOV value = 75 }
}
  SpyInfo                = { country = "SPR" NumberOfSpies = 6 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, MR, CAS 1930

4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930
#4520 # strategical bombers 1930

2800 # Basic Armoured Car

2550 # Tanks
#2400
2290 #2300 # GW artillery

2450 #2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

5010 # Modern Agriculture
5080 5090 # Construction
5190 # Basic oil conversion

1310 # Early logistics

6100 #6110 6120 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040	3070 # Escorts up to Washington
3020	3050	3080 # DD up to Washington
3030 15250	3060	3090 # CL up to Washington
3350 3390 3430 3480 # Capital Design up to 1925
3360 3440 3490 # CA up to 1925
3370 # AC (BC 0)
3380 3410 # BB up to Dreadnought
3700 15080 # SS 1930
3800 # Prewar TP
15090 # WW1 carrier design

9010 9020 9030 # Aerial warfare, basic doctrines

#10110 # motorized Inf 1937

	}

###################################
# Army
###################################		

landunit = {
	id = { type = 27600 id = 5 }
	location = 437
	name = "I Cuerpo de Ejército"
		division = { id = { type = 27600 id = 6 } name = "I Brigada de Montaña" type = bergsjaeger model = 0 extra = artillery locked = yes } #SPR
	}

landunit = {
	id = { type = 27600 id = 7 }
	location = 440
	name = "II Cuerpo de Ejército"
		division = { id = { type = 27600 id = 8 } name = "4a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #SPR
	}

landunit = {
	id = { type = 27600 id = 9 }
	location = 440
	name = "III Cuerpo de Ejército"
		division = { id = { type = 27600 id = 10 } name = "Comandancia de Barcelona" type = garrison model = 0 extra = anti_air strength = 17 locked = yes } #SPR ##artillery
	}

landunit = {
	id = { type = 27600 id = 11 }
	location = 441
	name = "IV Cuerpo de Ejército"
		division = { id = { type = 27600 id = 12 } name = "8a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 13 }
	location = 441
	name = "V Cuerpo de Ejército"
		division = { id = { type = 27600 id = 14 } name = "XXXV Regimiento" type = infantry model = 0 extra = engineer strength = 26 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 15 }
	location = 441
	name = "VI Cuerpo de Ejército"
		division = { id = { type = 27600 id = 16 } name = "II Artillería costera" type = garrison model = 0 strength = 38 locked = yes } #U01
	}

landunit = {
	id = { type = 27600 id = 17 }
	location = 442
	name = "VII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 18 } name = "5a División Orgánica" type = infantry model = 0 extra = light_armor_brigade locked = yes } #U01
	}

landunit = {
	id = { type = 27600 id = 19 }
	location = 442
	name = "VIII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 20 } name = "Comandancia de Zaragoza" type = garrison model = 0 extra = anti_air strength = 30 locked = yes } #U01 ##artillery
	}
	
landunit = {
	id = { type = 27600 id = 21 }
	location = 456 #was 442, but moved to Soria to stabilize frontline
	name = "IX Cuerpo de Ejército"
		division = { id = { type = 27600 id = 22 } name = "Comandancia de Soria" type = garrison model = 0 extra = anti_air strength = 22 locked = yes } #U01 #artillery
	}

landunit = {
	id = { type = 27600 id = 23 }
	location = 456 #was 443, but Bilbao has to be SPR at the beginning
	name = "X Cuerpo de Ejército"
		division = { id = { type = 27600 id = 24 } name = "II Brigada de Montaña" type = bergsjaeger model = 0 extra = artillery locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 25 }
	location = 447
	name = "X Cuerpo de Ejército"
		division = { id = { type = 27600 id = 26 } name = "Brigada Mixta Montaña" type = bergsjaeger model = 0 extra = artillery locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 27 }
	location = 448
	name = "XI Cuerpo de Ejército"
		division = { id = { type = 27600 id = 28 } name = "7a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #U01
	}

landunit = {
	id = { type = 27600 id = 29 }
	location = 448
	name = "XII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 30 } name = "Comandancia de Leon" type = garrison model = 0 strength = 11 locked = yes } #U01
	}

landunit = {
	id = { type = 27600 id = 31 }
	location = 448
	name = "XIII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 32 } name = "I Brigada Caballería" type = cavalry model = 0 extra = engineer strength = 39 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 33 }
	location = 450
	name = "XIV Cuerpo de Ejército"
		division = { id = { type = 27600 id = 34 } name = "VII Batallón d'Ametralladora" type = garrison model = 0 extra = anti_air strength = 13 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 35 }
	location = 451
	name = "XV Cuerpo de Ejército"
		division = { id = { type = 27600 id = 36 } name = "6a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 37 }
	location = 454
	name = "XVI Cuerpo de Ejército"
		division = { id = { type = 27600 id = 38 } name = "II Brigada Caballería" type = cavalry model = 0 strength = 21 locked = yes } #SPR
	}	
	
landunit = {
	id = { type = 27600 id = 39 }
	location = 460
	name = "XVII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 40 } name = "1a División Orgánica" type = infantry model = 0 extra = light_armor_brigade locked = yes } #SPR
	}
	
landunit = {
	id = { type = 27600 id = 41 }
	location = 455 #was 460, but moved to Guadelajara to stabilize frontline
	name = "XVIII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 42 } name = "Comandancia de Guadelajara" type = garrison model = 0 extra = anti_air strength = 38 locked = yes } #SPR ##artillery
	}
	
landunit = {
	id = { type = 27600 id = 43 }
	location = 457 #was 460, but moved to Toledo to stabilize frontline
	name = "XIX Cuerpo de Ejército"
		division = { id = { type = 27600 id = 44 } name = "Comandancia de Toledo" type = garrison model = 0 extra = anti_air strength = 22 locked = yes } #SPR #artillery
	}
	
landunit = {
	id = { type = 27600 id = 45 }
	location = 460
	name = "XX Cuerpo de Ejército"
		division = { id = { type = 27600 id = 46 } name = "Escuela de Vuelo Madrid" type = garrison model = 0 strength = 38 locked = yes } #SPR
	}
	
landunit = {
	id = { type = 27600 id = 47 }
	location = 463
	name = "XXI Cuerpo de Ejército"
		division = { id = { type = 27600 id = 48 } name = "XXXIV Regimiento" type = infantry model = 0 strength = 22 locked = yes } #SPR
	}
	
landunit = {
	id = { type = 27600 id = 49 }
	location = 463
	name = "XXII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 50 } name = "III Artillería costera" type = garrison model = 0 strength = 38 locked = yes } #SPR
	}
	
landunit = {
	id = { type = 27600 id = 51 }
	location = 464
	name = "XXII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 52 } name = "3a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #SPR
	}
	
landunit = {
	id = { type = 27600 id = 53 }
	location = 469
	name = "XXIII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 54 } name = "II Batallón d'Ametralladora" type = garrison model = 0 extra = anti_air strength = 19 locked = yes } #SPR ##artillery
	}
	
landunit = {
	id = { type = 27600 id = 55 }
	location = 473
	name = "XXIV Cuerpo de Ejército"
		division = { id = { type = 27600 id = 56 } name = "XXXIII Regimiento" type = infantry model = 0 extra = artillery strength = 27 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 57 }
	location = 474
	name = "XXV Cuerpo de Ejército"
		division = { id = { type = 27600 id = 58 } name = "I Artillería costera" type = garrison model = 0 strength = 38 locked = yes } #U01, was 473 but moved to Sevilla to stabilize the frontline
	}
	
landunit = {
	id = { type = 27600 id = 59 }
	location = 473
	name = "XXVI Cuerpo de Ejército"
		division = { id = { type = 27600 id = 60 } name = "2a División Orgánica" type = infantry model = 0 extra = artillery locked = yes } #U01, was 474, switched provinces with preceding corps
	}
	
landunit = {
	id = { type = 27600 id = 61 }
	location = 475
	name = "Comandancia de Baleares"
		division = { id = { type = 27600 id = 62 } name = "Comandancia de Baleares" type = d_02 model = 0 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 63 }
	location = 475
	name = "XXVII Cuerpo de Ejército"
		division = { id = { type = 27600 id = 64 } name = "IV Artillería costera" type = garrison strength = 22 model = 0 locked = yes } #U01
	}
	
#landunit = {
#	id = { type = 27600 id = 65 }
#	location = 715
#	name = "I Ejército de África"
#		division = { id = { type = 27600 id = 66 } name = "Circunscripción Occidental" type = d_02 model = 0 extra = artillery locked = yes experience = 30 } #U01
#	}
#	
#landunit = {
#	id = { type = 27600 id = 67 }
#	location = 716
#	name = "II Ejército de África"
#		division = { id = { type = 27600 id = 68 } name = "Circunscripción Oriental" type = d_02 model = 0 locked = yes experience = 30 } #U01
#	}

landunit = {
	id = { type = 27600 id = 65 }
	location = 715
	name = "I Ejército de África"
		division = { id = { type = 27600 id = 66 } name = "Legión Española" type = d_03 strength = 33 model = 0 locked = yes experience = 30 } #U01
	}
	
landunit = {
	id = { type = 27600 id = 67 }
	location = 716
	name = "II Ejército de África"
		division = { id = { type = 27600 id = 68 } name = "Circunscripción Occidental & Oriental" type = d_02 model = 0 extra = artillery locked = yes experience = 30 } #U01
	}
 	

landunit = {
	id = { type = 27600 id = 69 }
	location = 988
	name = "Fuerzas del Sahara"
		division = { id = { type = 27600 id = 70 } name = "Legión del Sahara" type = garrison model = 0 strength = 10 locked = yes } #U01
	}
	
landunit = {
	id = { type = 27600 id = 71 }
	location = 990
	name = "Comandancia de Canarias"
		division = { id = { type = 27600 id = 72 } name = "Comandancia de Canarias" type = d_02 model = 0 locked = yes } #U01
	}

###################################
# Naval units
###################################		
	
# Some naval units were clearly outdated or in bad fighting shape. Strength has been reduced in those cases.

navalunit = { #U01
	location = 473 #Cadiz
	base = 474 #Sevilla
	id = { type = 27600 id = 100 }
	name = "Base Naval Cádiz"
		division = { id = { type = 27600 id = 101 } name = "República" strength = 60 type = light_cruiser model = 2 }
	}

navalunit = { #U01
	location = 441 #Coruna
	base = 441 #Coruna
	id = { type = 27600 id = 102 }
 	name = "Flota del Atlántico"
		division = { id = { type = 27600 id = 103 } name = "España" type = battleship model = 0 }
		division = { id = { type = 27600 id = 105 } name = "Almirante Cervera" type = light_cruiser model = 3 }
		division = { id = { type = 27600 id = 104 } name = "Velasco" type = destroyer model = 1 }
		division = { id = { type = 27600 id = 144 } name = "Cánovas del Castillo" type = d_09 model = 0 }
		division = { id = { type = 27600 id = 145 } name = "Canalejas" type = d_09 model = 0 }
		division = { id = { type = 27600 id = 146 } name = "Dato" type = d_09 model = 0 }
	}
	
navalunit = { #SPR
	location = 913 #Bata; Spanish Guinea
	base = 463 #Murcia
	id = { type = 27600 id = 106 }
 	name = "Flotilla Méndez Núñez"
		division = { id = { type = 27600 id = 107 } name = "Méndez Núñez" type = light_cruiser model = 2 }
	}

navalunit = { #SPR
	location = 445 #Santander
	base = 463 #Murcia
	id = { type = 27600 id = 108 }
	name = "Base Naval Santander"
		division = { id = { type = 27600 id = 109 } name = "Jaime I" type = battleship model = 0 strength = 50 }
		division = { id = { type = 27600 id = 110 } name = "Miguel de Cervantes" type = light_cruiser model = 3 }
		division = { id = { type = 27600 id = 111 } name = "Libertad" type = light_cruiser model = 3 }
	}
	
navalunit = { #SPR
	location = 463 #Murcia
	base = 440 #Murcia
	id = { type = 27600 id = 112 }
	name = "Flota del Mediterráneo"
		division = { id = { type = 27600 id = 113 } name = "Almirante Antequera" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 114 } name = "Churruca" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 115 } name = "Alcalá Galiano" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 116 } name = "Sánchez Barcáiztegui" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 117 } name = "José Luis Díez" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 118 } name = "Lepanto" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 119 } name = "Almirante Valdés" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 120 } name = "Almirante Ferrándiz" type = d_09 model = 1 }
		division = { id = { type = 27600 id = 121 } name = "Alsedo" type = destroyer model = 1 }
		division = { id = { type = 27600 id = 122 } name = "Lazaga" type = destroyer model = 1 }
	}

navalunit = { #SPR
	location = 440 #Barcelona
	base = 440 #Barcelona
	id = { type = 27600 id = 123 }
	name = "Grupo C"
		division = { id = { type = 27600 id = 124 } name = "C-1" type = submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 125 } name = "C-2" type = submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 126 } name = "C-3" type = submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 127 } name = "C-4" type = submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 128 } name = "C-5" type = submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 129 } name = "C-6" type = submarine model = 1 strength = 75 }
	}

navalunit = { #SPR
	location = 464 #Valencia
	base = 464 #Valencia
	id = { type = 27600 id = 130 }
	name = "Grupo B"
		division = { id = { type = 27600 id = 131 } name = "B-1" type = nuclear_submarine model = 1 }
		division = { id = { type = 27600 id = 132 } name = "B-2" type = nuclear_submarine model = 1 }
		division = { id = { type = 27600 id = 133 } name = "B-3" type = nuclear_submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 134 } name = "B-4" type = nuclear_submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 135 } name = "B-5" type = nuclear_submarine model = 1 strength = 75 }
		division = { id = { type = 27600 id = 136 } name = "B-6" type = nuclear_submarine model = 1 strength = 75 }
	}
	
navalunit = { #SPR
	location = 463 #Murcia
	base = 440 #Murcia
	id = { type = 27600 id = 137 }
	name = "Dédalo"
		division = { id = { type = 27600 id = 138 } name = "Dédalo" type = escort_carrier model = 0 strength = 15 } #out of commission since 1934, struck april 1936
	}
	
navalunit = { #SPR
	location = 463 #Murcia
	base = 440 #Murcia
	id = { type = 27600 id = 139 }
	name = "Flota de transporte"
		division = { id = { type = 27600 id = 140 } name = "San Carlos" type = transport model = 0 }
		division = { id = { type = 27600 id = 141 } name = "Badalona" type = transport model = 0 }		
		division = { id = { type = 27600 id = 142 } name = "Nuevo Ons" type = transport model = 0 }
		division = { id = { type = 27600 id = 143 } name = "Sálvora" type = transport model = 0 }
	}

###################################################################
# Spanish Republican Air Force 1936
#
# 4 wings
#
# 36 int Ni-52
# 28 int/light recon/trainers Hispano-Suiza E-30
# => 1 int wing, strength 64 of 120 (53%)
#
# 72 light bombers/light recon Breguet 19
# => 2 mr wings, strength 36 of 120 (30%)
#
# 20 naval recon/bombers Vickers Vildebeest
# 12 naval recon/bombers Do J Wal
# => 1 naval bomber wing, strength 32 of 100 (32%)
#
# 4 transport planes Fokker VII 
# unknown number of (non military) D.H. 60 light. rec. planes
# unknown number of (non military) D.H. 9 ex-WW1-bombers
# => to be modeled by strength gain until SCW outbreak
###################################################################

airunit = { 
	location = 460 #Madrid 
	base = 460 #Madrid 
	id = { type = 27600 id = 200 } 
	name = "1a Escuadra Aérea"
		division = { id = { type = 27600 id = 201 } name = "1er Grupo de Caza" strength = 30 type = multi_role model = 0 } #SPR
	}

airunit = { 
	location = 474 #Sevilla 
	base = 474 #Sevilla
	id = { type = 27600 id = 202 } 
	name = "2a Escuadra Aérea"
		division = { id = { type = 27600 id = 203 } name = "2o Grupo de Caza" strength = 30 type = multi_role model = 0 } #U01
	}
	
airunit = { 
	location = 440 #Barcelona
	base = 440 #Barcelona
	id = { type = 27600 id = 204 } 
	name = "3a Escuadra Aérea"
		division = { id = { type = 27600 id = 205 } name = "3er Grupo de Caza" strength = 53 type = interceptor model = 0 } #SPR
	}

airunit = {
	location = 715 #Tanger
	base = 715 #Tanger
	id = { type = 27600 id = 206 }
	name = "Fuerzas Aéreas del África"
		division = { id = { type = 27600 id = 207 } name = "1er Grupo de Bombardeo" strength = 32 type = naval_bomber } #U01
	}

###################################
# building queue
###################################	

# moved to event 31733016
#
#division_development = {
#	name = "Canarias"
#	type = heavy_cruiser
#	model = 1
#	cost = 0.2 #2
#	new_model = no unitcost = yes
#	id = { type = 27600 id = 500 }
#	date = { year = 1936 month = september day = 0 }
#	}
#
#division_development = {
#	name = "Baleares"
#	type = heavy_cruiser
#	model = 1
#	cost = 0.2 #2
#	new_model = no unitcost = yes
#	id = { type = 27600 id = 501 }
#	date = { year = 1936 month = december day = 27 }
#	}

division_development = {
	name = "Ulloa"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 502 }
	date = { year = 1937 month = january day = 0 }
	}

division_development = {
	name = "Jorge Juan"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 503 }
	date = { year = 1937 month = january day = 14 }
	}
	
division_development = {
	name = "Almirante Miranda"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 504 }
	date = { year = 1936 month = april day = 0 }
	}
	
division_development = {
	name = "Gravina"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 505 }
	date = { year = 1936 month = april day = 0 }
	}
	
division_development = {
	name = "Escaño"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 506 }
	date = { year = 1936 month = april day = 0 }
	}
	
division_development = {
	name = "Císcar"
	type = d_09
	model = 1
	cost = 0.05 #0.5
	new_model = no unitcost = yes
	id = { type = 27600 id = 507 }
	date = { year = 1936 month = april day = 0 }
	}

# international brigades #
landdivision = { dormant = yes id = { type = 27600 id = 11900 } name = "XI. Brigada 'Thälmann'" strength = 57 type = militia model = 1 } #Oktober 1936
landdivision = { dormant = yes id = { type = 27600 id = 11901 } name = "XII. Brigada 'Garibaldi'" strength = 57 type = militia model = 1 } #November 1936
landdivision = { dormant = yes id = { type = 27600 id = 11902 } name = "XIII. Brigada 'Dombrowski'" strength = 57 type = militia model = 1 } #Dezember 1936
landdivision = { dormant = yes id = { type = 27600 id = 11903 } name = "XIV. Brigada 'Marseillaise'" strength = 57 type = militia model = 1 } #Dezember 1936
landdivision = { dormant = yes id = { type = 27600 id = 11904 } name = "I./XV. Brigada 'Lincoln'" strength = 42 type = militia model = 1 } #Juli 1937
landdivision = { dormant = yes id = { type = 27600 id = 11905 } name = "II./XV. Brigada 'Washington'" strength = 42 type = militia model = 1 } #Juli 1937

# russian volunteers #
landdivision = { dormant = yes id = { type = 27600 id = 11910 } name = "Soviética Brigada acorazado" strength = 25 type = armor model = 0 } #September 1936 - División de Ingenios Blindados in 1938
airdivision = { dormant = yes id = { type = 27600 id = 11911 } name = "Soviética Grupo n.1 de Caza F'Lenin'" type = interceptor model = 0 } # Polikarpov I-15
airdivision = { dormant = yes id = { type = 27600 id = 11912 } name = "Soviética Grupo n.2 de Caza F'Revolución octubre'" type = interceptor model = 0 } # Polikarpov I-15
airdivision = { dormant = yes id = { type = 27600 id = 11913 } name = "Soviética Grupo n.3 de Caza F'Comuna Paris'" type = interceptor model = 1 } # Polikarpov I-16
airdivision = { dormant = yes id = { type = 27600 id = 11914 } name = "Soviética Grupo n.12 de Bombardeo FARE" type = tactical_bomber model = 0 strength = 36 } # Tupolev SB-2

# armored units
landdivision = { dormant = yes id = { type = 27600 id = 11922 } name = "División Acorazada no.1" type = mechanized model = 0 strength = 35 }
landdivision = { dormant = yes id = { type = 27600 id = 11923 } name = "División Acorazada no.2" type = mechanized model = 0 strength = 35 }

# basque nationalists
landdivision = { dormant = yes id = { type = 27600 id = 11915 }  name = "Eusko Gudarostea Dibisioko I"  type = militia model = 1 }
landdivision = { dormant = yes id = { type = 27600 id = 11916 }  name = "Eusko Gudarostea Dibisioko II"  type = militia model = 1 }
landdivision = { dormant = yes id = { type = 27600 id = 11917 }  name = "Eusko Gudarostea Dibisioko III"  type = garrison model = 1 }

landdivision = { dormant = yes id = { type = 27600 id = 11918 }  name = "Milícies de l'ERC"  type = militia model = 4 strength = 30 }

landdivision = { dormant = yes id = { type = 27600 id = 11920 } name = "Div. de Ingenios Blindados no.1" strength = 75 type = armor model = 2 }
landdivision = { dormant = yes id = { type = 27600 id = 11921 } name = "Div. de Ingenios Blindados no.2" strength = 75 type = armor model = 2 }
	
transports = 100
escorts = 37

} # End File

