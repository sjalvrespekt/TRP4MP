# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 2046 
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	}
# Paraguay

country = {
	tag = PAR
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 2047
	manpower = 20

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 5
        freedom = 3
        free_market = 5
        professional_army = 5
        defense_lobby = 8
        interventionism = 8
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	
    ownedprovinces =      {
 		2046 #Villa Hayes=>Asancion
		2047 #Nuesta Senora de la Asuncion=> Ciudad del Este
	}
    controlledprovinces = {
 		2046 #Villa Hayes=>Asancion
		2047 #Nuesta Senora de la Asuncion=> Ciudad del Este
	}
    nationalprovinces =   {
 		2046 #Villa Hayes=>Asancion
		2047 #Nuesta Senora de la Asuncion=> Ciudad del Este
 	}

diplomacy = {
relation = { tag = ARG value = 50 }
relation = { tag = BRA value = 10 }
relation = { tag = BOL value = -50 }
relation = { tag = CHL value = 35 }
relation = { tag = COL value = 10 }
relation = { tag = ECU value = 25 }
relation = { tag = PRU value = 25 }
relation = { tag = URU value = 20 }
relation = { tag = USA value = 75 }
relation = { tag = VEN value = 10 }
}

  SpyInfo                = { country = "PAR" NumberOfSpies = 3 }

 	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}

landunit = {
	id = { type = 15600 id = 60 }
	name = "Ejercito de Paraguay"
	location = 2046
		division = { id = { type = 15600 id = 6000 } name = "I División" type = militia strength = 20 model = 0 }
	}

} # End File
