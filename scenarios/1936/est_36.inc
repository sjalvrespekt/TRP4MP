# geändert Zergel, 01.11.2010, Anpassung Province ID an DH

province = {
	id = 270
	anti_air = 2
	naval_base = {
		size = 4
		current_size = 4
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

country = {
    tag = EST

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 1
        free_market = 5
        freedom = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 1
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 20
	
	transports = 10
	escorts = 8

	capital = 270

	
    ownedprovinces =      {
	274 #Narva 
	270 #Tallinn
 	272 #Tartu 
	271 #Parnu->Pärnu
 	273 #Voru
	275 #Kuressaare
	 }
    controlledprovinces = {
	274 #Narva 
	270 #Tallinn
 	272 #Tartu 
	271 #Parnu->Pärnu
 	273 #Voru
	275 #Kuressaare
	  }
    nationalprovinces =   {
	274 #Narva 
	270 #Tallinn
 	272 #Tartu 
	271 #Parnu->Pärnu
 	273 #Voru
	275 #Kuressaare
	}

diplomacy = {
relation = { tag = ENG value = 65 }
relation = { tag = FIN value = 120 }
relation = { tag = FRA value = 65 }
relation = { tag = GER value = 10 }
relation = { tag = LAT value = 150 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = LIT value = 120 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = POL value = 75 }
relation = { tag = SOV value = -30 }
}

  SpyInfo                = { country = "EST" NumberOfSpies = 3 }
	# Eastern Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

1190 # GW Cavalry

1010 # Infantry Division

6400 6410 # Light Inf

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

#Naval doctrines
8760

#Naval Techs
3010 3040 # WW1 Escort
3020 3050 # WW1 DD
3800 # Prewar TP
3700 # Prewar SS
15080 # 1930 SS
3760 # 1936 SS

}

division_development = {
	name = "Kalev"
	type = nuclear_submarine
	model = 2
	cost = 0.03 #0.3
	new_model = no unitcost = yes
	id = { type = 30000 id = 6 }
	date = { year = 1937 month = march day = 12 }
	}

	division_development = {
	name = "Lembit"
	type = nuclear_submarine
	model = 2
	cost = 0.03 #0.3
	new_model = no unitcost = yes
	id = { type = 30000 id = 7 }
	date = { year = 1937 month = april day = 14 }
	}

 # Estonian Army
	
landunit = {
	id = { type = 30000 id = 1 }
	location = 270
	name = "1. Eesti Armee"
		Division = { id = { type = 30000 id = 2 } name = "I Jalaväediviis"   type = d_02 model = 0 }
		Division = { id = { type = 30000 id = 3 } name = "II Jalaväediviis"  type = d_02 model = 0 }
		Division = { id = { type = 30000 id = 4 } name = "III Jalaväediviis" type = d_02 model = 0 }
	}
	
#navalunit = {
#	name = "Eesti Merevägi" 
#	id = { type = 30000 id = 5 } 
#	location = 270
#	base = 270
#		division = { id = { type = 30000 id = 6 } name = "Kalev" type = nuclear_submarine model = 1 }
#		division = { id = { type = 30000 id = 7 } name = "Lembit" type = nuclear_submarine model = 1 }
#	}

} # End File
