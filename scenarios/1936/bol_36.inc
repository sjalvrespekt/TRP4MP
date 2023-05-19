#conversion DH, Feb 9 2011, Kane
province = {
	id = 2020 #Nuestra Senora de la Paz
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	}
# Bolivia
country = {
	tag = BOL

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        free_market = 8
        freedom = 7
        professional_army = 7
        defense_lobby = 8
        interventionism = 5
    }
    allowed_divisions = {
        militia = yes
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 20
	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 2020 #Nuestra Senora de la Paz

	

   nationalprovinces      = 
{  
	2064 #La Santisima Trinidad
	2021 #Sucre
	2020 #Nuestra Senora de la Paz
	2019 #Cobija
	2063 #Santa Cruz de la Sierra
	2046 #Villa Hayes
	2002 #Rio Branco
	2024 #Iquique
} 
   ownedprovinces         = {  2064 2021 2020 2019 2063  } 
   controlledprovinces    = {  2064 2021 2020 2019 2063  } 


diplomacy = {
	relation = { tag = ARG value = 50 }
	relation = { tag = BRA value = 10 }
	relation = { tag = CHL value = -50 }
	relation = { tag = COL value = 0 }
	relation = { tag = ECU value = -20 }
	relation = { tag = GER value = 15 }
	relation = { tag = PAR value = -50 }
	relation = { tag = PRU value = 30 }
	relation = { tag = URU value = 10 }
	relation = { tag = USA value = 85 }
	relation = { tag = VEN value = -15 }
}
  SpyInfo                = { country = "BOL" NumberOfSpies = 3 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering


# Optional doctrines

6500 # Guerilla doc

}

#######################################
# army datas by Lord Rommel
# datas by League of Nations
# 11.6.2012
#######################################

landunit = {
	id = { type = 17000 id = 3001 }
	name = "Ejercito de Bolivia"
	location = 2020 #Nuestra Senora de la Paz
	    division = { id = { type = 17000 id = 3004 } name = "1. División de Inf. 'Bolívar'"     strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3005 } name = "2. División de Infantería"         strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3006 } name = "3. División de Infantería"         strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3007 } name = "4. División de Infantería"         strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3008 } name = "5. División de Infantería"         strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3009 } name = "6. División de Infantería"         strength = 15 type = militia model = 0 }
		division = { id = { type = 17000 id = 3010 } name = "1. División de Caballería 'Chaco'" strength = 10 type = cavalry model = 0 }
	}

} # End File