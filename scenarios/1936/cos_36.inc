# geändert Zergel, 02.11.2010, Anpassung Province ID an DH


province = {
	id = 2081 #San Jose
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

# Costa Rica

country = {
	tag = COS

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        free_market = 8
        freedom = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 2
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

	capital = 2081
	
	transports = 10
	
   ownedprovinces =      {
		2081 #San Jose->San José
		2083 #Puerto Limon->San José
	}
    controlledprovinces = {
		2081 #San Jose->San José
		2083 #Puerto Limon->San José
	}
    nationalprovinces =   {
		2081 #San Jose->San José
		2083 #Puerto Limon->San José
	}

diplomacy = {
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "COS" NumberOfSpies = 1 }
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

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

3010 # Escorts prewar

	}

#Americas Group 1#

landunit = {
	id = { type = 25000 id = 60 }
	name = "Ejercito de Costa Rica"
	location = 2081
		division = { id = { type = 25000 id = 6000 } name = "Brigada Nro. 1" type = militia model = 0 }
	}

} # End Line 