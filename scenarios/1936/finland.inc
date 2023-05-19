#converted to DH, 2011, March 4th, Kane
#Mannerheim line
province = {	id = 531 landfort = 2 anti_air = 3 coastalfort = 1 } #Viipuri

#Coastal forts
province = {	id = 525 coastalfort = 1 }#Helsinki
province = {    id = 524 coastalfort = 1 }#Turku

province = {
	id = 524 #Turku
	anti_air = 2
	naval_base = {
		size = 5
		current_size = 5
	}
	air_base = {
		size = 2
		current_size = 2
	}
}
province = {
	id = 525 #Helsinki
	anti_air = 3
	naval_base = {
		size = 5
		current_size = 5
	}
	air_base = {
		size = 5
		current_size = 5
	}
}
province = {
	id = 527 #Tampere
	anti_air = 2
	air_base = {
		size = 3
		current_size = 3
	}
}
province = {
	id = 520 #Oulu
	air_base = {
		size = 3
		current_size = 3
	}
}

country = {
    tag = FIN

     ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 1
        free_market = 9
        freedom = 7
        professional_army = 5
        defense_lobby = 9
        interventionism = 4
    }

    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 525 #Helsinki
	manpower = 70

   nationalprovinces      = 
{  
	512 #Pori
	513 #Inari=>Rovaniemi(split)
	511 #Enontekio=>Rovaniemi(split)
	526 #Ahvenanmaa=>Äland
	524 #Turku
	525 #Helsinki
	518 #Soumussalmi=>Kajaani(split)
	519 #Salla=>Kajaani(split)
	521 #Vaasa
	527 #Tampere
	520 #Oulu
	516 #Tornio
	515 #Rovaniemi
	517 #Petsamo
	523 #Kajaani
	529 #Kouvola
	522 #Kuopio
	528 #Mikkeli
	531 #Viipuri
	532 #Sortavala
	533 #Joensuu
	514 #Kemijarvi=>Kajaani(split)
	530 #Terijoki=>Viipuri(split)
#Claims on Soviet Union
	537 #Kem
	539 #Petrozavodsk
	540 #Kestenga
	538 #Segheza
	536 #Kandalaksha
} 
   ownedprovinces         = {  512 513 511 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 530 514  } 
   controlledprovinces    = {  512 513 511 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 530 514  } 
	
diplomacy = {
relation = { tag = AST value = 65 }
relation = { tag = AUS value = 55 }
relation = { tag = BEL value = 100 }
relation = { tag = BUL value = 35 }
relation = { tag = CZE value = 50 }
relation = { tag = DEN value = 75 }
relation = { tag = ENG value = 85 }
relation = { tag = EST value = 120 }
relation = { tag = FRA value = 85 }
relation = { tag = GER value = 25 }
relation = { tag = GRE value = 40 }
relation = { tag = HOL value = 100 }
relation = { tag = HUN value = 75 }
relation = { tag = IRE value = 50 }
relation = { tag = ITA value = 50 }
relation = { tag = JAP value = 20 }
relation = { tag = LAT value = 90 }
relation = { tag = LIT value = 80 }
relation = { tag = LUX value = 100 }
relation = { tag = NOR value = 75 }
relation = { tag = NZL value = 50 }
relation = { tag = POL value = 100 }
relation = { tag = POR value = 50 }
relation = { tag = ROM value = 40 }
relation = { tag = SAF value = 50 }
relation = { tag = SOV value = 0  }
relation = { tag = SPR value = 35 }
relation = { tag = SWE value = 150 }
relation = { tag = USA value = 90 }
relation = { tag = YUG value = 35 }
}

  SpyInfo                = { country = "FIN" NumberOfSpies = 4 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################


#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, CAS 1930, MRF 1930

4290 4300 # double Engined 1929, tactical 1930

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA
2400 # AT Guns

17000 # 1936 rocket artillery/mortars

1010 1020 # Early infantry

1190 1200 # GW & 1933 Cavalry

1110 # Early Mountain

5010 # Agriculture 
5080 5090  # Construction 
5190 # Basic Oil Refining

6100 6110 6120 # firepower doc

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010 3020 # Prewar Escort and DD
3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA Coastal battleship
3700 15080 # SS 1930
3800 # Prewar TP

	}
blueprints = { 1150 } # Marines 37

################################################
# finish army by Aser & Lord Rommel
################################################

landunit = {
    id = { type = 32000 id = 1 }
	location = 531 #Viipuri
	name = "I Armeijakunta"
		division = { id = { type = 32000 id = 2 } name = "2. Divisioona" type = infantry model = 0 strength = 90 }
	}

landunit = {
    id = { type = 32000 id = 3 }
	name = "II Armeijakunta"
	location = 525 #Helsinki 
		division = { id = { type = 32000 id = 4 } name = "Päämaja"               type = hq          model = 0 }
		division = { id = { type = 32000 id = 5 } name = "1. Divisioona"         type = infantry    model = 0 strength = 90 extra = artillery }
		division = { id = { type = 32000 id = 6 } name = "Ratsuvakiprikaati"     type = cavalry     model = 1 strength = 10 }
		division = { id = { type = 32000 id = 7 } name = "Jaakari"               type = bergsjaeger model = 0 strength = 5  }
		division = { id = { type = 32000 id = 8 } name = "Merivoimat Divisioona" type = garrison    model = 0 strength = 10 } #finnish coastal artillery, naval defense units/regiments and other formations
	}

landunit = {
    id = { type = 32000 id = 9 }
	location = 528 #Mikkeli
	name = "III Armeijakunta"
		division = { id = { type = 32000 id = 10 } name = "3. Divisioona" type = infantry model = 0 strength = 90 }
	}
	
landunit = {
    id = { type = 32000 id = 11 }
	location = 525 #Helsinki
	name = "IV Armeijakunta"
		division = { id = { type = 32000 id = 12 } name = "4. Divisioona" type = garrison model = 1 extra = anti_air brigade_model = 3 locked = yes }
	} # added to help FIN AI hold its capital
	
##################
# dormant german expeditionary units
##################

landdivision = { dormant = yes id = { type = 32000 id = 13 }  name = "169. Infanterie-Division"   type = infantry model = 2 extra = light_armor_brigade brigade_model = 6 }
landdivision = { dormant = yes id = { type = 32000 id = 14 }  name = "163. Infanterie-Division"   type = infantry model = 2 extra = artillery brigade_model = 4 }	
landdivision = { dormant = yes id = { type = 32000 id = 15 }  name = "6. SS-Gebirgs-Division 'Nord'"   type = d_07 model = 1 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 32000 id = 16 }  name = "2. Gebirgsjäger-Division"   type = bergsjaeger model = 1 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 32000 id = 17 }  name = "3. Gebirgsjäger-Division"   type = bergsjaeger model = 1 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 32000 id = 18 }  name = "7. Gebirgsjäger-Division"   type = bergsjaeger model = 1 extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 32000 id = 19 }  name = "AOK Lappland"   type = garrison model = 2 extra = anti_air brigade_model = 3 }

##################
# dormant coastal garrisons in VP provinces
##################

landdivision = { dormant = yes id = { type = 32000 id = 20 }  name = "Vaasa Rannikon Suojelemiseksi"   type = garrison model = 2 extra = anti_air brigade_model = 3 }
landdivision = { dormant = yes id = { type = 32000 id = 21 }  name = "Turku Rannikon Suojelemiseksi"   type = garrison model = 2 extra = anti_air brigade_model = 3 }
landdivision = { dormant = yes id = { type = 32000 id = 22 }  name = "Viipuri Rannikon Suojelemiseksi"   type = garrison model = 2 extra = anti_air brigade_model = 3 }

##################
# Panssaridivisioona
##################

landdivision = { dormant = yes id = { type = 32000 id = 23 }  name = "Panssaridivisioona"  type = armor model = 3 extra = sp_artillery brigade_model = 3 experience = 45 }

###################	
####### Navy ######
###################

navalunit = {
	id = { type = 32000 id = 28 }
	name = "Suomen Laivasto"
	location = 525 #Helsinki
	base = 525
		division = { id = { type = 32000 id = 29 } name = "Ilmarinen" type = heavy_cruiser model = 2 } 
		division = { id = { type = 32000 id = 30 } name = "Väinämöinen" type = heavy_cruiser model = 2 }	
		division = { id = { type = 32000 id = 31 } name = "Saukko" type = nuclear_submarine model = 0 }
		division = { id = { type = 32000 id = 32 } name = "Vesikko" type = nuclear_submarine model = 1 }
		division = { id = { type = 32000 id = 33 } name = "Iku-Turso" type = submarine model = 0 }
		division = { id = { type = 32000 id = 34 } name = "Vetehinen" type = submarine model = 0 }
		division = { id = { type = 32000 id = 35 } name = "Vesihiisi" type = submarine model = 0 }
	}

##################
# Air Force
##################

airunit = { 
	location = 525  
	id = { type = 32000 id = 100 } 
	name = "Ilmavoimat"
	base = 525
		division = { id = { type = 32000 id = 101 } name = "Lentorykmentti 1" type = multi_role model = 0 strength = 60 } #All finish combat aircrafts were merged into the division
	}	
	
transports = 25
escorts = 8

} # End File

