# geändert Zergel, 22.10.2010, Anpassung Province ID an DH

province = {
	id = 34
	anti_air = 2
	naval_base = {
		size = 7
		current_size = 7
		}
	air_base = {
		size = 4
		current_size = 4
		}
	}



country = {
    tag = IRE
	capital = 34

	manpower = 20
	transports = 25

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 3
        freedom = 8
        free_market = 7
        professional_army = 3
        defense_lobby = 4
        interventionism = 2
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
		
    ownedprovinces = {
 	33 #Leifear=>Letterkenny
 	32 #Galway=>Sligo
	31 #Cork
	30 #Waterford=>Dublin/Cork
 	34 #Dublin
	}
    controlledprovinces = {
	33 #Leifear=>Letterkenny
 	32 #Galway=>Sligo
	31 #Cork
	30 #Waterford=>Dublin/Cork
 	34 #Dublin
	}
    nationalprovinces =   {
	33 #Leifear=>Letterkenny
 	32 #Galway=>Sligo
	31 #Cork
	30 #Waterford=>Dublin/Cork
 	34 #Dublin 
	
	#von England besetzte Gebiete
	35 #Londonderry=>Portadown
 	36 #Belfast
	}

diplomacy = {
relation = { tag = ARG value = 20 }
relation = { tag = AST value = 75 }
relation = { tag = AUS value = 10 }
relation = { tag = BEL value = 75 }
relation = { tag = BRA value = 20 }
relation = { tag = CAN value = 75 }
relation = { tag = ENG value = 25 }
relation = { tag = ETH value = 100 }
relation = { tag = FIN value = 50 }
relation = { tag = FRA value = 25 }
relation = { tag = GER value = 15 }
relation = { tag = HOL value = 75 }
relation = { tag = HUN value = 25 }
relation = { tag = ITA value = 20 }
relation = { tag = LUX value = 75 }
relation = { tag = MEX value = 30 }
relation = { tag = NZL value = 75 }
relation = { tag = POR value = 25 }
relation = { tag = SAF value = 80 }
relation = { tag = SOV value = 0 }
relation = { tag = SPR value = 50 }
relation = { tag = USA value = 75 }
}
  SpyInfo                = { country = "IRE" NumberOfSpies = 4 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

4290 4300 # double Engined 1929, tactical 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture

5080 5090 # Construction 

5190 # Basic oil conversion

1190 # GW Cavalry

1010 # Infantry Division

6100 6110 6120 # Firepower doc

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010 3020 3030 15250 # Prewar Escort, DD and CL
3800 # Prewar TP

	}

landunit = {
	id = { type = 21500 id = 1 }
	name = "Irish Army"
	location = 34
		division = { id = { type = 21500 id = 2 } name = "1. Irish Division" strength = 50 type = infantry model = 0 }
		division = { id = { type = 21500 id = 3 } name = "2. Irish Division" strength = 50 type = infantry model = 0 }
	}

navalunit = {
	id = { type = 21500 id = 5 }
	name = "Irish Republic Navy"
	location = 34
	base = 34
		division = { id = { type = 21500 id = 7 } name = "Irish Oak" type = transport model = 0 }
	}

} # End File
