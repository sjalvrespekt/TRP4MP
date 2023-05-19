# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 1090 #Busehr
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

province = {
	id = 1085 #Tehran
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
	}
}
  country = {
    tag = PER


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10
	
	transports = 10
	escorts = 7

	capital = 1085

	manpower = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 5
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
	1081 #Rast=>Rasht
 	1083 #Tabriz=>Rast/Rezaiye
 	1082 #Rezaiye
 	1084 #Kermanshah=>Bakhtaran
 	1087 #Hamadan=>Bakhtaran
 	1089 #Ahvaz=>Abadan
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
 	1091 #Gameroon=>Bandar Abbas 
 	1093 #Zahedan=>Chah Bahar
	}
    controlledprovinces = {
	1081 #Rast=>Rasht
 	1083 #Tabriz=>Rast/Rezaiye
 	1082 #Rezaiye
 	1084 #Kermanshah=>Bakhtaran
 	1087 #Hamadan=>Bakhtaran
 	1089 #Ahvaz=>Abadan
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
 	1091 #Gameroon=>Bandar Abbas 
 	1093 #Zahedan=>Chah Bahar	
	}
    nationalprovinces =   {
	1081 #Rast=>Rasht
 	1083 #Tabriz=>Rast/Rezaiye
 	1082 #Rezaiye
 	1084 #Kermanshah=>Bakhtaran
 	1087 #Hamadan=>Bakhtaran
 	1089 #Ahvaz=>Abadan
 	1086 #Esfahan 
 	1085 #Tehran
 	1080 #Sari=>Babol
 	1092 #Mashad
 	1095 #Birjand
 	1094 #Kerman=>Yazd
 	1088 #Siraz
 	1090 #Busehr=>Babolsar
 	1091 #Gameroon=>Bandar Abbas 
 	1093 #Zahedan=>Chah Bahar
	}

diplomacy = {
relation = { tag = AFG value = 25 }
relation = { tag = DEN value = 50 }
relation = { tag = ENG value = 25 }
relation = { tag = IRQ value = 125 }
relation = { tag = SAU value = 100 }
relation = { tag = SOV value = -20 }
relation = { tag = SWE value = 50 }
relation = { tag = TUR value = -50 }
}
  SpyInfo                = { country = "PER" NumberOfSpies = 4 }

	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 # Single Engined 1929, Int 1930, Multi 30

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW light artillery

2550 # 28' tank

2510 # AA brigade

2450 2460 # Provincial AA

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division & Mountain troops

6500 6510 # Guerilla Warfare

#Naval doctrines
8070 8130 8760

#Naval Techs
3010 3020 # Prewar Escort, DD
3800 # Prewar TP
	}

landunit = {
	location = 1085
	name = "I Lasgar Parsi"
	id = { type = 16600 id = 1 }
		division = { id = { type = 16600 id = 2 }  name = "1. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = artillery brigade_model = 1 }
		division = { id = { type = 16600 id = 3 }  name = "2. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = light_armor_brigade }
	}
		
landunit = {
	location = 1083
	name = "II Lasgar Parsi"
	id = { type = 16600 id = 11 }		
		division = { id = { type = 16600 id = 4 }  name = "3. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = anti_air }
		division = { id = { type = 16600 id = 5 }  name = "4. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = armored_car }
	}

landunit = {
	location = 1082
	name = "III Lasgar Parsi"
	id = { type = 16600 id = 12 }		
		division = { id = { type = 16600 id = 6 }  name = "5. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = armored_car }
	}

landunit = {
	location = 1089
	name = "IV Lasgar Parsi"
	id = { type = 16600 id = 13 }		
		division = { id = { type = 16600 id = 7 }  name = "6. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = armored_car }
	}

landunit = {
	location = 1088
	name = "V Lasgar Parsi"
	id = { type = 16600 id = 14 }		
		division = { id = { type = 16600 id = 8 }  name = "7. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 extra = armored_car }
	}

landunit = {
	location = 1093
	name = "VI Lasgar Parsi"
	id = { type = 16600 id = 15 }		
		division = { id = { type = 16600 id = 9 }  name = "8. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 }
	}

landunit = {
	location = 1092
	name = "VII Lasgar Parsi"
	id = { type = 16600 id = 16 }		
		division = { id = { type = 16600 id = 10 } name = "9. Dastebandi Sarbaze Piyade" type = militia model = 0 strength = 55 }
	}
	
airunit = {
	location = 1085
	base     = 1085
	name = "Nyrwy Hwâyy"
	id = { type = 16600 id = 18 }		
		division = { id = { type = 16600 id = 19 } name = "1. Chlbân Hng" type = multi_role model = 0 strength = 45 }
		division = { id = { type = 16600 id = 20 } name = "2. Chlbân Hng" type = multi_role model = 0 strength = 45 }
	}

navalunit = {
	id = { type = 16600 id = 21 }
	name = "Sormeyi Parsi"
	location = 1090
	base = 1090
		division = { id = { type = 16600 id = 22 } name = "Babr"   type = d_09 model = 0 } 
		division = { id = { type = 16600 id = 23 } name = "Palang" type = d_09 model = 0 } 
	}

} # End File
