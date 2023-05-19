# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

province = {
	id = 2079
	naval_base = {
		size = 1
		current_size = 1
	}
	air_base = {
		size = 1
		current_size = 1
	}
	}

country = {
	tag = SAL
	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	manpower = 20
	capital = 	2079
	
	transports = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 5
        free_market = 5
        professional_army = 5
        defense_lobby = 5
        interventionism = 3
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	
    ownedprovinces =      {
		2079 #San Salvador
	}
    controlledprovinces = {
		2079 #San Salvador
	}
    nationalprovinces =   {
		2079 #San Salvador
	}

diplomacy = {
relation = { tag = HON value = 100 }
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "SAL" NumberOfSpies = 1 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 2300 # GW artillery

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare

2450 2460 # Early Static AA

2510 # Basic AA

5010 #  Agriculture
5080 # Construction 
5190 # Basic oil conversion

3010 # Escorts prewar
}

landunit = {
	id = { type = 21600 id = 70 }
	name = "Ejercito del Salvador"
	location = 2079
		division = { id = { type = 21600 id = 7000 } name = "I División" strength = 50    type = militia model = 0 }
		division = { id = { type = 21600 id = 7001 } name = "II División" strength = 50   type = militia model = 0 }
		division = { id = { type = 21600 id = 7002 } name = "III División" strength = 50  type = militia model = 0 }
		division = { id = { type = 21600 id = 7003 } name = "IV División" strength = 50   type = militia model = 0 }
		division = { id = { type = 21600 id = 7004 } name = "V División" strength = 50    type = militia model = 0 }
	}

} # End File
