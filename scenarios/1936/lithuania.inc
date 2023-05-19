# geändert Zergel, 22.10.2010, Anpassung Province ID an DH

province = {
	id = 261
	anti_air = 1
	naval_base = {
		size = 2
		current_size = 2
		}
	air_base = {
		size = 1
		current_size = 1
		}
	}


province = {
	id = 262
	anti_air = 1
	air_base = {
		size = 3
		current_size = 3
		}
	}


country = {
    tag = LIT


	capital = 262

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
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	transports = 10	
	escorts = 1

	
    ownedprovinces =      {
	261 #Klaipeda=>Memel
 	262 #Kaunas
	263 #Alytus
	259 #Siauliau
	260 #Panevezys
	 }
    controlledprovinces = {
	261 #Klaipeda=>Memel
 	262 #Kaunas
	263 #Alytus
	259 #Siauliau
	260 #Panevezys
	  }
   	nationalprovinces =   {
	261 #Klaipeda=>Memel
 	262 #Kaunas
	263 #Alytus
	259 #Siauliau
	260 #Panevezys
	258 #Wilno
	255 #Grodno
	}

diplomacy = {
relation = { tag = ENG value = 65 }
relation = { tag = EST value = 120 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = FIN value = 80 }
relation = { tag = FRA value = 65 }
relation = { tag = GER value = 10 }
relation = { tag = LAT value = 120 guaranteed = { day = 12 month = september year = 1934 } }
relation = { tag = POL value = -75 }
relation = { tag = SOV value = -30 }
}
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
	# Eastern Minor Tech '36
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

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

1190 # GW Cavalry

1010 # Infantry Division

6400 6410 # Light Inf

#Naval doctrines
8070 8130 8760

#Naval Techs
3010 # Prewar Escort
3800 # Prewar TP

	}
############################################
####Lithuanian Army#########################
############################################

landunit = {
	id = { type = 26500 id = 1 }
	location = 262
	name = "1. Lietuvas Kariuomenes Korpusas"
		Division = { id = { type = 26500 id = 2 }  name = "I Pestininkai Divizija"    type = d_02    model = 0 strength = 80 extra = artillery brigade_model = 0 }
		Division = { id = { type = 26500 id = 3 }  name = "II Pestininkai Divizija"   type = d_02    model = 0 strength = 80 }
		Division = { id = { type = 26500 id = 4 }  name = "III Pestininkai Divizija"  type = d_02    model = 0 strength = 80 }
		Division = { id = { type = 26500 id = 10 } name = "Kavalerija Brigada"        type = cavalry model = 0 strength = 30 }
	}

airunit = {
	id = { type = 26500 id = 5 }
	location = 261
	base = 261
	name = "Lietuvas Karines Oro Pajegos"
		Division = { id = { type = 26500 id = 6 } name = "1. Naikintuvas Aviacijos Grupo" type = multi_role model = 0 strength  = 50 }
	}

navalunit = {
	id = { type = 26500 id = 7 }
	name = "Lietuvas Navinkas Juru"
	location = 261
	base = 261
		division = { id = { type = 26500 id = 8 } name = "Kaunas" type = transport model = 0 }
#		division = { id = { type = 26500 id = 9 } name = "Prezidentas Smetona" type = destroyer model = 0 } # small & slow ex-german minesweeper, made it an escort
	}

} # End File
