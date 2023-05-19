# converted to DH, Mar 4, 2011, Kane
province = {
	id = 1780
	naval_base = {
		size = 2
		current_size = 2
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

country = {
	tag = DOM

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        free_market = 8
        freedom = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	manpower = 20
	capital = 1780
	
	transports = 10

	
    ownedprovinces =      { 1780 }
    controlledprovinces = { 1780 }
    nationalprovinces =   { 1780 }

diplomacy = {
relation = { tag = CUB value = 50 }
relation = { tag = HAI value = -30 }
relation = { tag = USA value = 125 }
}

  SpyInfo                = { country = "DOM" NumberOfSpies = 1 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

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
	id = { type = 28000 id = 75 }
	name = "Ejercito de Rep. Dominicana"
	location = 1780
		division = { id = { type = 28000 id = 7500 } name = "I Brigada" strength = 33 type = militia model = 0 }
	}

#navalunit = {
#	id = { type = 28000 id = 7501 }
#	name = "Armada de Rep. Dominicana"
#	location = 1780
#	base = 1780
#		division = { id = { type = 28000 id = 7502 } name = "1. Flotilla de Destructores" type = destroyer model = 0 }
#	}

} # End File
