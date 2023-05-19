# geändert Zergel, 01.11.2010, Anpassung Province ID an DH

province = {
	id = 2088
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}

	naval_base = {
		size = 4
		current_size = 4
		}
	}
# Guatemala

country = {
	tag = GUA

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        free_market = 6
        freedom = 4
        professional_army = 1
        defense_lobby = 5
        interventionism = 4
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	manpower = 20

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 2088
	
	transports = 10

	
    ownedprovinces =      {
		2088 #Ciudad de Guatemala->Guatemala
		2087 #Puerto Barrios
	}
    controlledprovinces = {
		2088 #Ciudad de Guatemala->Guatemala
		2087 #Puerto Barrios
	}
    nationalprovinces =   {
		2088 #Ciudad de Guatemala->Guatemala
		2087 #Puerto Barrios
		2079 #San Salvador
	}

diplomacy = {
relation = { tag = HON value = 100 }
relation = { tag = USA value = 125 }
}
  SpyInfo                = { country = "GUA" NumberOfSpies = 1 }
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

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

3010 # Escorts prewar
	}

landunit = {
	id = { type = 16500 id = 65 }
	name = "Ejercito de Guatemala"
	location = 2088
		division = { id = { type = 16500 id = 6500 } name = "Brigada 'Adolfo V. Hall'" type = militia model = 0 }
		}

} # End File 