#conversion DH, Feb 9 2011, Kane
province = {
	id = 2023 #Santiago de Chile
	anti_air = 2
	naval_base = {
		size = 8
		current_size = 8
		}
	air_base = {
		size = 4
		current_size = 4
		}
	}

country = {
    tag = CHL

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        free_market = 8
        freedom = 7
        professional_army = 3
        defense_lobby = 5
        interventionism = 2
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
money 		= 20

	capital = 2023
	manpower = 20
	
	transports = 25
	escorts = 5

   nationalprovinces      = 
{  
	2025 #Antofagasta
	2022 #Valparaiso=>Santiago de Chile
	2023 #Santiago de Chile
	2032 #Talcahuano=>Puerto Montt
	2031 # Temuco=>Puerto Asien
	2024 #Iquique=>Antofagasta(split)
	2030 #Punta Arenas=>Punta Arenas/Wellington(merge)
} 
   ownedprovinces         = {  2031 2032 2023 2022 2025 2024 2030 2043  } 
   controlledprovinces    = {  2031 2032 2023 2022 2025 2024 2030 2043  } 
	
#2043=Porvenir#

diplomacy = {
relation = { tag = ARG value = -20 }
relation = { tag = BOL value = -50 }
relation = { tag = BRA value = 10 }
relation = { tag = COL value = 15 }
relation = { tag = ECU value = 20 }
relation = { tag = GER value = 50 }
relation = { tag = ITA value = 30 }
relation = { tag = JAP value = 20 }
relation = { tag = PAR value = 35 }
relation = { tag = PRU value = -25 }
relation = { tag = URU value = 20 }
relation = { tag = USA value = 100 }
relation = { tag = VEN value = 20 }
}

  SpyInfo                = { country = "CHL" NumberOfSpies = 4 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020  # Single Engined 1929, Int 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

# Optional doctrines
6400 6410 # Light Infantry

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
# Escorts up to WW1
3010	3040
3020	3050
3030 15250	# CL pre-WW1


3350 3390 3430 # Capital Design up to 1914
3360 # Coastal BB (CA 0)
3370 # AC (BC 0)
3380 3410 3420 # BB up to Super-Dreadnought

3700 15080 # SS 1930
3800 # Prewar TP

	}
	
#############################################
# army datas by Lord Rommel                 #
# basing on datas of the League of Nations  #
# 11.6.2012                                 #
#############################################

landunit = {
	id = { type = 12500 id = 1 }
	name = "Ejercito de Chile"
	location = 2023 #Santiago de Chile
		division = { id = { type = 12500 id = 2 } name = "1. División de Infantería"  type = infantry model = 0 strength = 40 extra = artillery }
		division = { id = { type = 12500 id = 3 } name = "División Caballería nro. 1" type = cavalry  model = 0 strength = 35 }
	}
	
landunit = {
	id = { type = 12500 id = 4 }
	name = "Ejercito de Chile"
	location = 2030 #Punta Arenas
		division = { id = { type = 12500 id = 5 } name = "2. División de Infantería"  type = infantry model = 0 strength = 40 }
	}
	
landunit = {
	id = { type = 12500 id = 6 }
	name = "Ejercito de Chile"
	location = 2025 #Antofagasta
		division = { id = { type = 12500 id = 7 } name = "3. División de Infantería"  type = infantry model = 0 strength = 40 }
    }
	
#######Navy

navalunit = 
	{ id = { type = 12500 id = 8 }
	name = "Armada de Chile"
	location = 2023 #Santiago de Chile 
	base = 2023 #Santiago de Chile
		division = { id = { type = 12500 id = 9 } name = "ARC Almirante Latorre" type = battleship model = 2 }
		division = { id = { type = 12500 id = 14 } name = "ARC Almirante O'Higgins" type = battlecruiser model = 0 }
		division = { id = { type = 12500 id = 30 } name = "ARC Capitán Prat" type = heavy_cruiser model = 0 strength = 20 } # old and small pre-dreadnaught BB
		division = { id = { type = 12500 id = 10 } name = "ARC Blanco Encalada" type = light_cruiser model = 0 }
		division = { id = { type = 12500 id = 11 } name = "ARC Chacabuco" type = light_cruiser model = 0 }
		division = { id = { type = 12500 id = 15 } name = "ARC Orella" type = destroyer model = 1 }
		division = { id = { type = 12500 id = 18 } name = "ARC Hyatt" type = destroyer model = 1 }
		division = { id = { type = 12500 id = 19 } name = "ARC Aldea" type = destroyer model = 1 }
		division = { id = { type = 12500 id = 20 } name = "ARC Videla" type = destroyer model = 1 }
		division = { id = { type = 12500 id = 21 } name = "ARC Riquelme" type = destroyer model = 1 }
		division = { id = { type = 12500 id = 27 } name = "ARC Almirante Lynch" type = d_09 model = 1 }
		division = { id = { type = 12500 id = 28 } name = "ARC Almirante Condell" type = d_09 model = 1 }
		division = { id = { type = 12500 id = 29 } name = "ARC Serrano" type = destroyer model = 1 }	
		division = { id = { type = 12500 id = 12 } name = "ARC Almirante Simpson" type = d_08 model = 0 }     #sea-going
		division = { id = { type = 12500 id = 13 } name = "ARC Capitan O'Brien" type = d_08 model = 0 }       #sea-going		
		division = { id = { type = 12500 id = 16 } name = "ARC Capitan Thompson" type = d_08 model = 0 }      #sea-going
		division = { id = { type = 12500 id = 17 } name = "ARC Guacolda" type = nuclear_submarine model = 0 }              #coastal
		division = { id = { type = 12500 id = 22 } name = "ARC Tegualda" type = nuclear_submarine model = 0 }              #coastal
		division = { id = { type = 12500 id = 23 } name = "ARC Rucumilla" type = nuclear_submarine model = 0 }             #coastal
		division = { id = { type = 12500 id = 24 } name = "ARC Guale" type = nuclear_submarine model = 0 }                 #coastal
		division = { id = { type = 12500 id = 25 } name = "ARC Quidora" type = nuclear_submarine model = 0 }               #coastal
		division = { id = { type = 12500 id = 26 } name = "ARC Fresia" type = nuclear_submarine model = 0 }                #coastal
	}

} # End File