# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 2080
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
	tag = NIC

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 2
        freedom = 4
        free_market = 7
        professional_army = 4
        defense_lobby = 8
        interventionism = 8
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

	capital = 	2080
	 manpower = 20
	 
   transports = 10

	
    ownedprovinces =      {
		2080 #Managua
		2082 #Bluefields
	}
    controlledprovinces = {
		2080 #Managua
		2082 #Bluefields
	}
    nationalprovinces =   {
		2080 #Managua
		2082 #Bluefields
	}

diplomacy = {
relation = { tag = HON value = 100 }
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "NIC" NumberOfSpies = 2 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 2300 # GW artillery

1460 # Early Mountain

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare

3010 # Escorts prewar
	}


landunit = {
	id = { type = 11600 id = 45 }
	name = "Ejercito de Nicaragua"
	location = 2080
		division = { id = { type = 11600 id = 4500 } name = "Agrupacion SM nro. 1" strength = 30 type = militia model = 0 }
	}

} # End File
