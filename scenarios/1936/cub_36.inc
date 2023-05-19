#geändert Zergel, 21.10.2010, Anpassung Province ID an DH

province = {
	id = 1776
	anti_air = 1
	naval_base = {
		size = 4
		current_size = 4
	}
	air_base = {
		size = 1
		current_size = 1
	}
}


country = {
	tag = CUB

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 8
        political_left = 4
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

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	
	transports = 10
	escorts = 9

	manpower = 20
	capital = 1776

	
    ownedprovinces =      {
 	1776 #San Cristobal de la Habana=>Havanna
	1779 #Santa Clara
 	1775 #Camaguey
 	1777 #Santiago de Cuba=>Guantanamo
	}
    controlledprovinces = {
	1776 #San Cristobal de la Habana=>Havanna
 	1779 #Santa Clara
	1775 #Camaguey
 	1777 #Santiago de Cuba=>Guantanamo
	}
    nationalprovinces =   {
	1776 #San Cristobal de la Habana=>Havanna
 	1779 #Santa Clara
 	1775 #Camaguey
 	1777 #Santiago de Cuba=>Guantanamo 

	#Kontrolle von den USA	
	1778 #Guantanamo Bay
	}

diplomacy = {
relation = { tag = DOM value = 50 }
relation = { tag = ENG value = 30 }
relation = { tag = HAI value = 30 }
relation = { tag = USA value = 200 }
}
  SpyInfo                = { country = "CUB" NumberOfSpies = 2 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

1400 1460 # Guerilla Infantry Division

1190 # GW Cavalry

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

6500 # Guerilla doc

#Naval Techs; Escorts up to pre-WW1
3010
3020
	}

landunit = {
	id = { type = 26000 id = 40 }
	name = "Ejercito de Cuba"
	location = 1776
		division = { id = { type = 26000 id = 4000 } name = "1a Brigada de Ejercito" type = militia model = 0 }
        division = { id = { type = 26000 id = 4001 } name = "2a Brigada de Ejercito" type = militia model = 0 }
        division = { id = { type = 26000 id = 4002 } name = "3a Brigada de Ejercito" type = militia model = 0 }
	}

navalunit = {
	id = { type = 26000 id = 35 }
	name = "Armada de Cuba"
	location = 1776
	base = 1776
		division = { id = { type = 26000 id = 3500 } name = "Cuba" type = d_09 model = 0 }
		division = { id = { type = 26000 id = 3501 } name = "Patria" type = d_09 model = 0 }
	}

} # End File