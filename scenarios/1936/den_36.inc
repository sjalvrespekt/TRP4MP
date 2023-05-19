### Portierung auf DH, Kane, 21.1.2011
province = {
	id = 294 # Copenhagen
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 10
		current_size = 10
	}
}

province = {
	id = 1 # Reykjavik
	anti_air = 1
	naval_base = {
		size = 4
		current_size = 4
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

province = {
	id = 217 # Aalborg
	anti_air = 1
	naval_base = {
		size = 1
		current_size = 1
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

country = {
    tag = DEN

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 10
        free_market = 6
        freedom = 8
        professional_army = 3
        defense_lobby = 1
        interventionism = 3
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	manpower = 20

	capital = 294 # Kopenhagen
	
	ownedprovinces =      
{
    	216 # Abenra 
	220 # Aarhus 
	217 # Aalborg
	218 # Frederikshavn ( vorher Teil von Aalborg )
	219 # Odense
	294 # Kopenhagen
    	1783 # Grönland
    	1 # Reykjavik
	2 #Torshavn
	3 # Akureyri ( ex Hövn )
}
	controlledprovinces = 
{    	216 # Abenra 
	220 # Aarhus 
	217 # Aalborg
	218 # Frederikshavn ( vorher Teil von Aalborg )
	219 # Odense
	294 # Kopenhagen
    	1783 # Grönland
    	1 # Reykjavik
	2 #Torshavn
	3 # Akureyri ( ex Hövn )
}
	nationalprovinces =  
{	216 # Abenra 
	220 # Aarhus 
	217 # Aalborg
	218 # Frederikshavn ( vorher Teil von Aalborg )
	219 # Odense
	294 # Kopenhagen
    	1783 # Grönland
    	1 # Reykjavik
	2 #Torshavn
	3 # Akureyri ( ex Hövn )
}

diplomacy = {
relation = { tag = BEL value = 100 }
relation = { tag = ENG value = 100 }
relation = { tag = FIN value = 75 }
relation = { tag = HOL value = 100 }
relation = { tag = LUX value = 100 }
relation = { tag = NOR value = 150 }
relation = { tag = PER value = 50 }
relation = { tag = SWE value = 75 }
relation = { tag = USA value = 75 }
}
  SpyInfo                = { country = "DEN" NumberOfSpies = 3 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Fighter, CAS 1930

4290 4300 # double Engined 1929, tactical

9010 9020 9030 # Aerial warfare, basic doctrines

2550 # GW tank 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refining
5470 # Nukes faculty

6100 6110 6120 # firepower doc

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010 3020 # Prewar Escort, DD
3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA up to 1914
3700 15080 # SS 1930
3800 # Prewar TP

}

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10


landunit = {
	location = 220
	name = "Den Danske Hær"
	id = { type = 27000 id = 40 }
		division = { id = { type = 27000 id = 41 } name = "1. Jydske Division" type = infantry model = 0 strength = 15 }
	}

navalunit = {
	name = "Den Danske Flåde" 
	id = { type = 27000 id = 44 } 
	location = 294 
	base = 294
		division = { id = { type = 27000 id = 45 } name = "KDM Niels Juel" type = heavy_cruiser model = 2 }
		division = { id = { type = 27000 id = 46 } name = "KDM Peder Skram" type = heavy_cruiser model = 0 }
		division = { id = { type = 27000 id = 49 } name = "KDM Olfert Fischer" type = heavy_cruiser model = 0 strength = 10 } #converted to target ship in 1936
		division = { id = { type = 27000 id = 56 } name = "KDM Hekla" type = d_09 model = 0 } #old, small cruiser
		division = { id = { type = 27000 id = 47 } name = "KDM GALATHEA" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 48 } name = "KDM ROTA" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 50 } name = "KDM RAN" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 51 } name = "KDM TRITON" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 52 } name = "KDM BELLONA" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 53 } name = "KDM FLORA" type = nuclear_submarine model = 0 }
		division = { id = { type = 27000 id = 54 } name = "KDM DAPHNE" type = nuclear_submarine model = 1 }
		division = { id = { type = 27000 id = 55 } name = "KDM DRYADEN" type = nuclear_submarine model = 1 }
	}

	transports = 200
	escorts = 34

} # End File

