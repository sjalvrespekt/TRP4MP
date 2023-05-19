# geändert Zergel, 02.11.2010, Anpassung Province ID an DH

province = {
	id = 2085
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
# Honduras

country = {
	tag = HON

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
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	manpower = 20
	
	transports = 10

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 	2085
	
   ownedprovinces =      {
		2085 #Tegucigalpa
 		2084 #San Pedro Sula->Tegucigalpa
	}
    controlledprovinces = {
		2085 #Tegucigalpa
 		2084 #San Pedro Sula->Tegucigalpa 
	}
    nationalprovinces =   {
		2085 #Tegucigalpa
 		2084 #San Pedro Sula->Tegucigalpa
	}

diplomacy = {
relation = { tag = ENG value = 50 }
relation = { tag = GUA value = 100 }
relation = { tag = NIC value = 100 }
relation = { tag = SAL value = 100 }
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "HON" NumberOfSpies = 2 }
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
	id = { type = 19500 id = 55 }
	name = "Ejercito de Honduras"
	location = 2085
		division = { id = { type = 19500 id = 5500 } name = "Brigada 'Francesco Marazán'" type = militia model = 0 strength = 15 }
	}

} # End File 