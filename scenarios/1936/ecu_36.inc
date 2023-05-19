# geändert Zergel, 21.10.2010, Anpassung Province ID an DH

province = {
	id = 2042
	anti_air = 2
	air_base = {
		size = 1
		current_size = 1
	}
}
province = {
	id = 2040
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
}

# Ecuador
country = {
	tag = ECU

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        free_market = 8
        freedom = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 2042
	manpower = 20
	
	transports = 10

	
    ownedprovinces =      {
 	2040 #Santiago de Guayaquil=>Guayaquil
 	2042 #San Francisco de Quito/Quito
 	2007 #Puyo=>Tigra
 	2008 #Iquitos=>Nauta
 	2041 #Galapagos Island
 	2033 #Jaen=>Quito
 	2010 #Nauta  
	}
    controlledprovinces = {
	2040 #Santiago de Guayaquil=>Guayaquil
 	2042 #San Francisco de Quito/Quito
 	2007 #Puyo=>Tigra
 	2008 #Iquitos=>Nauta
 	2041 #Galapagos Island
 	2033 #Jaen=>Quito
 	2010 #Nauta
	}
    nationalprovinces =   {
	2040 #Santiago de Guayaquil=>Guayaquil
 	2042 #San Francisco de Quito/Quito
 	2007 #Puyo=>Tigra
 	2008 #Iquitos=>Nauta
 	2041 #Galapagos Island
 	2033 #Jaen=>Quito
 	2010 #Nauta
	}

diplomacy = {
relation = { tag = ARG value = 10 }
relation = { tag = BOL value = -20 }
relation = { tag = BRA value = 10 }
relation = { tag = CHL value = 20 }
relation = { tag = COL value = 20 }
relation = { tag = PAR value = 25 }
relation = { tag = PRU value = -50 }
relation = { tag = URU value = 10 }
relation = { tag = USA value = 75 }
relation = { tag = VEN value = 20 }
}
  SpyInfo                = { country = "ECU" NumberOfSpies = 3 }
	# ROTW Minor Tech '36
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

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

3010 # Escorts prewar
	}

landunit = {
	id = { type = 29000 id = 50 }
	name = "Ejercito de Ecuador"
	location = 2042
		division = { id = { type = 29000 id = 5000 } name = "1a Brigada" type = militia model = 0 extra = anti_air }
	}

#navalunit = {
#	name = "Armada de Eduador"
#	id = { type = 29000 id = 1 }
#	location = 2040
#	base = 2040
#		division = { id = { type = 29000 id = 2 } name = "BAE Orion"	type = destroyer model = 0 }
#	}

} # End File