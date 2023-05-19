# geändert Zergel, 30.10.2010, Anpassung Province ID an DH

province = {
	id = 264
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}

	naval_base = {
		size = 3
		current_size = 3
		}
	}


country = {
    tag = LAT


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	capital = 264

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 1
        freedom = 5
        free_market = 5
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	manpower = 20
	transports = 10

	
    ownedprovinces =      {
	268 #Liepaja=>Mazibre
	269 #Jelgave
 	267 #Jekapils
	264 #Riga
 	266 #Dagavpils=>Dagaupulis 
	265 #Valmiera=>Gulbene
	 }
    controlledprovinces = {
	268 #Liepaja=>Mazibre
	269 #Jelgave
 	267 #Jekapils
	264 #Riga
 	266 #Dagavpils=>Dagaupulis 
	265 #Valmiera=>Gulbene
	  }
	nationalprovinces =   {
	268 #Liepaja=>Mazibre
	269 #Jelgave
 	267 #Jekapils
	264 #Riga
 	266 #Dagavpils=>Dagaupulis 
	265 #Valmiera=>Gulbene	
  	}

diplomacy = {
relation = { tag = ENG value = 65 }
relation = { tag = EST value = 150 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = FIN value = 90 }
relation = { tag = FRA value = 65 }
relation = { tag = GER value = 10 }
relation = { tag = LIT value = 120 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = POL value = 75 }
relation = { tag = SOV value = -30 }
}
  SpyInfo                = { country = "LAT" NumberOfSpies = 3 }
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

1010 # Infantry Division

6400 6410 # Light Inf

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

#Naval doctrines
8070 8130 8760

#Naval Techs
3010 # Prewar Escort
3800 # Prewar TP
3700 15080 # SS 1930


	}

landunit = {
	id = { type = 24500 id = 1 }
	location = 264
	name = "Latvijas Armija"
		Division = { id = { type = 24500 id = 2 } name = "Kurzemes Divizija" type = d_02 model = 0 }
		Division = { id = { type = 24500 id = 3 } name = "Vidzemes Divizija" type = d_02 model = 0 }
		Division = { id = { type = 24500 id = 4 } name = "Zemgales Divizija" type = d_02 model = 0 }
		Division = { id = { type = 24500 id = 5 } name = "Latgales Divizija" type = d_02 model = 0 }
	}
	
airunit = {
	id = { type = 24500 id = 9 }
	location = 264
	base = 264
	name = "Latvijas Gaisa speki"
		Division = { id = { type = 24500 id = 10 } name = "1. Gaiss Grupa" type = multi_role model = 0 strength  = 35 }
	}

navalunit = {
  id = { type = 24500 id = 6 }
	location = 264
	base = 264
	name = "Latvijas Juras Speki"
		Division = { id = { type = 24500 id = 7 } name = "Ronis" type = nuclear_submarine model = 1 }
		Division = { id = { type = 24500 id = 8 } name = "Spidola" type = nuclear_submarine model = 1 }
	}

} # End File

