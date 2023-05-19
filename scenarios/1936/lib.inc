# geändert Zergel, 22.10.2010, Anpassung Province ID an DH

province = {
	id = 969
	anti_air = 1
	naval_base = {
		size = 2
		current_size = 2
		}
	air_base = {
		size = 4
		current_size = 4
		}
	}
country = {
	tag = LIB

	puppet = USA
	control = USA

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 5
        freedom = 3
        free_market = 4
        professional_army = 1
        defense_lobby = 3
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	capital = 	969
	manpower = 20
   transports = 10

	
    ownedprovinces =      {
		969 #Monrovia
	 }
    controlledprovinces = {
		969 #Monrovia
	  }
    nationalprovinces =   {
		969 #Monrovia
	}

diplomacy = {
relation = { tag = PHI value = 200 }
relation = { tag = USA value = 200 }
}
  SpyInfo                = { country = "LIB" NumberOfSpies = 1 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare

3010 # Escorts prewar
	}

landunit = {
	location = 969
	id = { type = 25500 id = 1 }
	name = "Army of Liberia"
		division = { id = { type = 25000 id = 2 } name = "1st Republican Guards Div." type = militia model = 0 strength = 85 }
	}

#navalunit = {
#	id = { type = 25500 id = 4 }
#	name = "Liberian Navy"
#	location = 969
#	base = 969
#		division = { id = { type = 25500 id = 5 } name = "LN Freedom" type = destroyer model = 0 }
#	}

} # End File