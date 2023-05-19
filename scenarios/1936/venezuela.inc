# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

province = {
	id = 1988
	air_base = {
		size = 1
		current_size = 1
		}

	naval_base = {
		size = 6
		current_size = 6
		}
	}

province = { id = 1988  anti_air = 2 } #Maracaibo
province = { id = 1993  anti_air = 2 } #Caracas

# Venezuela

country = {
    tag = VEN

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 20
	capital = 1993
	manpower = 20
	
	transports = 10
	escorts = 3

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 1
        freedom = 5
        free_market = 7
        professional_army = 3
        defense_lobby = 5
        interventionism = 3
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	
    ownedprovinces =      {
 	1988 #Maracaibo
 	1989 #Barqisimento
 	1993 #Caracas
 	1996 #Barinas=>Caracas
 	1995 #Maturin=>Cumaná
 	1992 #Ciudad Bolivar=>Ciudad Guayana/Ciudad Bolivar
	}
    controlledprovinces = {
	1988 #Maracaibo	
	1989 #Barqisimento
	1993 #Caracas
	1996 #Barinas=>Caracas
	1995 #Maturin=>Cumaná
	1992 #Ciudad Bolivar=>Ciudad Guayana/Ciudad Bolivar
	}
    nationalprovinces =   {
	1988 #Maracaibo	
	1989 #Barqisimento
	1993 #Caracas
	1996 #Barinas=>Caracas
	1995 #Maturin=>Cumaná
	1992 #Ciudad Bolivar=>Ciudad Guayana/Ciudad Bolivar

	}
diplomacy = {
relation = { tag = ARG value = 10 }
relation = { tag = BOL value = -10 }
relation = { tag = BRA value = 10 }
relation = { tag = CHL value = 20 }
relation = { tag = COL value = 20 }
relation = { tag = ECU value = 20 }
relation = { tag = ENG value = -10 }
relation = { tag = PAR value = 10 }
relation = { tag = PRU value = 10 }
relation = { tag = URU value = 10 }
relation = { tag = USA value = 125 }
}

  SpyInfo                = { country = "VEN" NumberOfSpies = 3 }
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
2400 #AT
1400 # Guerilla Infantry Division

1190 # GW Cavalry

1460 # Early Mountain

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

#Naval doctrines
8760

#Naval Techs
3010 # Prewar Escort
3800 # Prewar TP


6500 # Guerilla doc

	}

landunit = {
	id = { type = 15800 id = 45 }
	name = "Ejercito de Venezuela"
	location = 1993
		division = { id = { type = 15800 id = 4500 } name = "1a Div. de Inf. 'Eduardo Blanco'" type = militia model = 0 }
	}

#navalunit = {
#	id = { type = 15800 id = 30 }
#	name = "Armada de Venezuela"
#	location = 1988
#	base = 1988
#		division = { id = { type = 15800 id = 3000 } name = "AdV San Fernando" type = destroyer model = 0 strength = 50 }
#	}

} # End File