# geändert Zergel, 01.11.2010, Anpassung Province ID an DH

province = {
	id = 1781
	anti_air = 1
	naval_base = {
		size = 4
		current_size = 4
	}
	air_base = {
		size = 2
		current_size = 2
	}
}
country = {
	tag = HAI

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 5
        free_market = 4
        freedom = 2
        professional_army = 1
        defense_lobby = 5
        interventionism = 3
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	manpower = 20
	
	transports = 10

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	1781

	
    ownedprovinces =      {
		1781 #Port-au-Prince
	}
    controlledprovinces = {
		1781 #Port-au-Prince
	}
    nationalprovinces =   {
		1781 #Port-au-Prince
		1780 #Ciudad Trujillo ->Santiago/Santo Domingo
	}

diplomacy = {
relation = { tag = CUB value = 30 }
relation = { tag = DOM value = -30 }
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "HAI" NumberOfSpies = 1 }
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
	id = { type = 17500 id = 53 }
	name = "La Grandé Armée du Haiti"
	location = 1781
		division = { id = { type = 17500 id = 5301 } name = "Brigade de Haitien" type = militia model = 0 strength = 40 }
	}

#navalunit = {
#	id = { type = 17500 id = 5302 }
#	name = "La Grande Flotte du Haiti"
#	location = 1781
#	base = 1781
#		division = { id = { type = 17500 id = 5303 } name = "Centenaire" type = destroyer model = 0 }
#	}

} # End File
