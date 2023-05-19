

province = {
	id = 2052
	anti_air = 1
	air_base = {
		size = 1
		current_size = 1
		}

	naval_base = {
		size = 6
		current_size = 6
		}
	}

# Uruguay

country = {
	tag = URU
	capital = 2052
	manpower = 20

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10
	
	transports = 10
	escorts = 3

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 5
        free_market = 5
        professional_army = 2
        defense_lobby = 4
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	}

	#inventions = { 2700061 2700065 }

	
    ownedprovinces =      {
		2052 #Montevideo
		2051 #Salto
	}
    controlledprovinces = {
		2052 #Montevideo
		2051 #Salto
	}
    nationalprovinces =   {
		2052 #Montevideo
		2051 #Salto
	}

diplomacy = {
relation = { tag = ARG value = -50 }
relation = { tag = BOL value = 10 }
relation = { tag = BRA value = 125 }
relation = { tag = CHL value = 20 }
relation = { tag = COL value = 10 }
relation = { tag = ECU value = 10 }
relation = { tag = PAR value = 20 }
relation = { tag = PRU value = 25 }
relation = { tag = SOV value = -100 }
relation = { tag = USA value = 100 }
relation = { tag = VEN value = 10 }
}

  SpyInfo                = { country = "URU" NumberOfSpies = 4 }

	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

1190 # GW Cavalry

3010# Escorts prewar
3020# DD prewar
3030 15250 # CL prewar

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare
}

landunit = {
	id = { type = 13700 id = 40 }
	name = "Ejercito de Uruguay"
	location = 2052
		division = { id = { type = 13700 id = 4000 } name = "Brigada de Inf. 'Don Claudio'" type = militia strength = 50 }
		division = { id = { type = 13700 id = 4001 } name = "Brigada de Milicia"            type = militia strength = 50 }
	}

navalunit = {
	id = { type = 13700 id = 20 }
	name = "Armada de Uruguay"
	location = 2052
	base = 2052
		division = { id = { type = 13700 id = 2000 } name = "ARO Uruguay" type = d_09 model = 0 }
		division = { id = { type = 13700 id = 2001 } name = "ARO Dieciocho de Julio" type = destroyer model = 0 }
	}

} # End File