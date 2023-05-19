# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 2078
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

# Panama

country = {
	tag = PAN

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	2078
	manpower = 20
	
	transports = 10
	
	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 5
        freedom = 4
        free_market = 4
        professional_army = 3
        defense_lobby = 4
        interventionism = 4
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	
    ownedprovinces =      {
		2078 #Ciudad de Panama=>Panama
		2077 #San Jose de David
	}
    controlledprovinces = {
		2078 #Ciudad de Panama=>Panama
		2077 #San Jose de David
	}
    nationalprovinces =   {
		889 #Balboa
 		2078 #Ciudad de Panama=>Panama 
		2077 #San Jose de David
	}


diplomacy = {

relation = { tag = USA value = 175 access = yes }
}

  SpyInfo                = { country = "PAN" NumberOfSpies = 2 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 # GW light artillery

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare

3010 # Escorts prewar

	}

landunit = {
	id = { type = 14600 id = 50 }
	name = "Ejercito de Panama"
	location = 2078
		division = { id = { type = 14600 id = 5000 } name = "Brigada de Policía" strength = 10 type = militia model = 0 }
	}

#navalunit = {
#	id = { type = 14600 id = 5001 }
#	name = "Armada de Panama"
#	location = 2078
#	base = 2078
#		division = { id = { type = 14600 id = 5002 } name = "Torpedinieros" type = destroyer model = 0 }
#	}

} # End File