# geändert Zergel, 03.11.2010, Anpassung Province ID an DH

province = {
	id = 2016
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

# Peru

country = {
    tag = PRU


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	
	transports = 10
	escorts = 3

	capital = 2016
	manpower = 20

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 4
        free_market = 4
        professional_army = 3
        defense_lobby = 5
        interventionism = 5
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	
    ownedprovinces =      {
		2017 #Arequipa
 		2015 #Cuzco
 		2016 #Lima
 		2011 #Pucallpa
 		2014 #Trujillo
 		2018 #Tarapoto
 		2012 #Requenna
 		2013 #Puerto Maldonado 
	}
    controlledprovinces = {
		2017 #Arequipa
 		2015 #Cuzco
 		2016 #Lima
 		2011 #Pucallpa
 		2014 #Trujillo
 		2018 #Tarapoto
 		2012 #Requenna
 		2013 #Puerto Maldonado  
	}
    nationalprovinces =   {
		2017 #Arequipa
 		2015 #Cuzco
		2016 #Lima 
		2011 #Pucallpa
 		2014 #Trujillo
 		2018 #Tarapoto
 		2012 #Requenna
 		2013 #Puerto Maldonado  
 
#claims on Ecuador
		2008 #Iquitos
		2010 #Nauta
		2033 #Jaen
	}
  SpyInfo                = { country = "PRU" NumberOfSpies = 4 }
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

1400 1460 # Guerilla Infantry Division

1190 # GW Cavalry

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

6500 # Guerilla doc

#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040 # Escorts WW1
3020	3050 # DD WW1
3030 15250 # CL pre-WW1
3700 # SS 1936
3800 # Prewar TP

	}

landunit = {
	id = { type = 17600 id = 1 }
	name = "Ejercito del Peru"
	location = 2016
		division = { id = { type = 17600 id = 2 } name = "1a Div. de Militia del Peru 'Bolognesi'" type = militia model = 0 }
		division = { id = { type = 17600 id = 3 } name = "2a Div. de Militia del Peru" type = militia model = 0 }
		division = { id = { type = 17600 id = 4 } name = "3a Div. de Militia del Peru" type = militia model = 0 }
		division = { id = { type = 17600 id = 5 } name = "1a Brigada Fuerzas Especiales" strength = 33 type = bergsjaeger model = 0 }
	}

navalunit = {
	id = { type = 17600 id = 6 }
	name = "Marina del Guerra del Peru"
	location = 2016
	base = 2016
		division = { id = { type = 17600 id = 8 } name = "BAP Almirante Grau" type = light_cruiser model = 1  }
		division = { id = { type = 17600 id = 9 } name = "BAP Coronel Bolognesi" type = light_cruiser model = 1  }
		division = { id = { type = 17600 id = 7 } name = "BAP Teniente Rodriguez" type = destroyer model = 0 }
		division = { id = { type = 17600 id = 11 } name = "BAP Almirante Guise" type = destroyer model = 1 }
		division = { id = { type = 17600 id = 15 } name = "BAP Almirante Villar" type = destroyer model = 1 }
	}
navalunit = {
	id = { type = 17600 id = 16 }
	name = "Flottilla submarino del Peru"
	location = 2016
	base = 2016
		division = { id = { type = 17600 id = 10 } name = "BAP R-1" type = nuclear_submarine model = 0 } # R-class coastal subs
		division = { id = { type = 17600 id = 12 } name = "BAP R-2" type = nuclear_submarine model = 0 }
		division = { id = { type = 17600 id = 13 } name = "BAP R-4" type = nuclear_submarine model = 0 }
		division = { id = { type = 17600 id = 14 } name = "BAP R-3" type = nuclear_submarine model = 0 }
	}

} # End File 