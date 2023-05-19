# conversion to DH, Feb 9 2011, Kane
province = {
	id = 1990 #Cucuta
	air_base = {
		size = 1
		current_size = 1
		}

	naval_base = {
		size = 2
		current_size = 2
		}
	}

province = { id = 1990   anti_air = 2 } #Cucuta
province = { id = 1991   anti_air = 2 } #Santa Fe de Bogota



# Colombia
country = {
	tag = COL

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 7
        free_market = 8
        freedom = 7
        professional_army = 3
        defense_lobby = 5
        interventionism = 2
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	transports = 10
	escorts = 13
	
	manpower = 20
	capital = 1991

	
    ownedprovinces =      
{
	1990 #Cucuta=>Baranquilla
	1991 #Santa Fe de Bogota=>Cucuta
	1987 #Medellin=>Bogota
	1986 #Baranquilla=>Medellin
	1994 #Villavicencio=>Inirida
	2009 #Florencia=>Angostura Falls
	1985 #Cali=>Medellin(split)
	1756 #San Jose del Guaviare=>Mitu
}
    controlledprovinces = 
{
	1990 #Cucuta=>Baranquilla
	1991 #Santa Fe de Bogota=>Cucuta
	1987 #Medellin=>Bogota
	1986 #Baranquilla=>Medellin
	1994 #Villavicencio=>Inirida
	2009 #Florencia=>Angostura Falls
	1985 #Cali=>Medellin(split)
	1756 #San Jose del Guaviare=>Mitu
}
    nationalprovinces =   
{
	1990 #Cucuta=>Baranquilla
	1991 #Santa Fe de Bogota=>Cucuta
	1987 #Medellin=>Bogota
	1986 #Baranquilla=>Medellin
	1994 #Villavicencio=>Inirida
	2009 #Florencia=>Angostura Falls
	1985 #Cali=>Medellin(split)
	1756 #San Jose del Guaviare=>Mitu
}

diplomacy= {
relation = { tag = ARG value = 10 }
relation = { tag = BOL value = 0 }
relation = { tag = BRA value = 10 }
relation = { tag = CHL value = 15 }
relation = { tag = ECU value = 20 }
relation = { tag = GER value = -20 }
relation = { tag = PAN value = 50 }
relation = { tag = PAR value = 10 }
relation = { tag = PRU value = -35 }
relation = { tag = URU value = 10 }
relation = { tag = USA value = 75 }
relation = { tag = VEN value = 20 }
}

  SpyInfo                = { country = "COL" NumberOfSpies = 3 }
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

1400 1460 # Guerilla infantry

1190 # GW Cavalry

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion


# Optional doctrines

6500 # Guerilla doc

#Naval doctrines
8760
#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington

	}

landunit = {
	id = { type = 23000 id = 40 }
	name = "Ejercito de Colombia"
	location = 1991 #Santa Fe de Bogota
		division = { id = { type = 23000 id = 4000 } name = "1a Brigada" strength = 16 type = militia model = 0 }
		division = { id = { type = 23000 id = 4001 } name = "2a Brigada" strength = 16 type = militia model = 0 }
		division = { id = { type = 23000 id = 4002 } name = "3a Brigada" strength = 16 type = militia model = 0 }
		division = { id = { type = 23000 id = 4003 } name = "4a Brigada" strength = 16 type = militia model = 0 }
		division = { id = { type = 23000 id = 4004 } name = "5a Brigada" strength = 16 type = militia model = 0 }

	}

navalunit = {
	id = { type = 23000 id = 4005 }
	name = "Armada de Colombia"
	location = 1990 # Cucuta
	base = 1990
		division = { id = { type = 23000 id = 4006 } name = "ARC Antioquia" type = destroyer model = 2 } #all bought from Portugal
		division = { id = { type = 23000 id = 4007 } name = "ARC Caldas" type = destroyer model = 2 }
		division = { id = { type = 23000 id = 4008 } name = "ARC Antiquois" type = destroyer model = 0 strength = 50 }
	}

} # End File 