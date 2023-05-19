# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

province = {
	id = 1423
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

  country = {
    tag = SIA


	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10
	
	transports = 10
	escorts = 6

	capital = 1423

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 3
        free_market = 3
        professional_army = 2
        defense_lobby = 5
        interventionism = 5
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 100

	
    ownedprovinces =      {
 	1431 #Songhla=>Singora
 	1430 #Nakhon Sri Thammarat=>Kra
 	1429 #Prachuap Khiri Khau=>Kra
	 1424 #Nakhon Sawan=>Thon Buri
 	1425 #Chiang Mai=>Chian Rai
 	1426 #Phitsanulok
 	1428 #Phetchabun=>Phitsanulok
 	1427 #Khon Kaen
 	1422 #Chon Buri=>Nakhon Ratchthani
 	1423 #Bangkok
	 }
    controlledprovinces = {
	1431 #Songhla=>Kra
 	1430 #Nakhon Sri Thammarat
 	1429 #Prachuap Khiri Khau
 	1424 #Nakhon Sawan=>Thon Buri
 	1425 #Chiang Mai=>Chian Rai
 	1426 #Phitsanulok
 	1428 #Phetchabun=>Phitsanulok
 	1427 #Khon Kaen
 	1422 #Chon Buri=>Nakhon Ratchthani
 	1423 #Bangkok
	  }
    nationalprovinces =   {
	1431 #Songhla=>Kra
 	1430 #Nakhon Sri Thammarat
 	1429 #Prachuap Khiri Khau
 	1424 #Nakhon Sawan=>Thon Buri
 	1425 #Chiang Mai=>Chian Rai
 	1426 #Phitsanulok
 	1428 #Phetchabun=>Phitsanulok
 	1427 #Khon Kaen
 	1422 #Chon Buri=>Nakhon Ratchthani
 	1423 #Bangkok

	#Claims French Indochine
1402 #Battambang
1401 #Seam Reap
1400 #Phnom Penh
	}

diplomacy = {
relation = { tag = ENG value = 70 }
relation = { tag = FRA value = -100 }
relation = { tag = JAP value = 75 }
relation = { tag = MAN value = 75 }
#relation = { tag = MEN value = 75 }
}
  SpyInfo                = { country = "SIA" NumberOfSpies = 4 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

4290 4300 4320 # double Engined 1929, tactical, escort brigade 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5080 5090 5100 # Construction (up to the forts)


#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3700 # SS 1936
3800 # Prewar TP

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare

	}

landunit = {
	location = 1423
	name = "Royal Thai Army"
 	id = { type = 23600 id = 1 }
		division = { id = { type = 23600 id = 30 } name = "Phayap Hoheishidan"  type = infantry model = 0 strength = 75 }
		division = { id = { type = 23600 id = 31 } name = "Bangkok Hoheishidan" type = infantry model = 0 strength = 75 }
		division = { id = { type = 23600 id = 32 } name = "Shima Hoheishidan"   type = infantry model = 0 strength = 75 }
		division = { id = { type = 23600 id = 33 } name = "Surin Hoheishidan"   type = infantry model = 0 strength = 75 }
		division = { id = { type = 23600 id = 34 } name = "Kiheishidan"         type = cavalry  model = 1 strength = 35 }
	}
			
#landunit = {
#	location = 1423
#	name = "Royal Thai Police Force"
#	id = { type = 23600 id = 4 }
#		division = { id = { type = 23600 id = 5 } name = "1. Royal Thai Police Div." type = garrison strength = 30 extra = police }
#	}
	
airunit = {
	location = 1423
	base = 1423
	name = "Royal Thai Airforce"
	id = { type = 23600 id = 6 }
		Division = { id = { type = 23600 id = 7 } name = "1. RTAF Fighter Group" type = interceptor model = 0 strength = 35 }
		Division = { id = { type = 23600 id = 8 } name = "1. RTAF Tactic Bomb Group" type = tactical_bomber model = 0 strength = 22 extra = escort brigade_model = 0 }
	}

navalunit = {
	location = 1423
	base = 1423
	name = "Royal Thai Navy"
	id = { type = 23600 id = 9 }
		division = { id = { type = 23600 id = 10 } name = "Phra Ruang" type = destroyer model = 1 }
		division = { id = { type = 23600 id = 11 } name = "Ratanakosindra" type = d_09 model = 0 }
		division = { id = { type = 23600 id = 12 } name = "Sukhothai" type = d_09 model = 0 }
	}

division_development = { 
name = "RTNS Thonburi" 
type = heavy_cruiser
model = 0
cost = 0.1 #1
new_model = no unitcost = yes
id = { type = 23600 id = 13 } 
date = { year = 1938 month = january day = 29 } 
} 

division_development = { 
name = "RTNS Sri Ayuthia" 
type = heavy_cruiser
model = 0
cost = 0.1 #1
new_model = no unitcost = yes
id = { type = 23600 id = 14 } 
date = { year = 1938 month = may day = 15 } 
} 

division_development = { 
name = "RTNS Maeklong" 
type = d_09
model = 2 
cost = 0.04 #0.4
new_model = no unitcost = yes
id = { type = 23600 id = 15 } 
date = { year = 1937 month = june day = 0 } 
} 

division_development = { 
name = "RTNS Tachin" 
type = d_09
model = 2
cost = 0.04 #0.4
new_model = no unitcost = yes
id = { type = 23600 id = 16 } 
date = { year = 1937 month = june day = 0 } 
} 
	
division_development = { 
name = "RTNS Matchanu" 
type = nuclear_submarine
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 17 } 
date = { year = 1937 month = may day = 13 } 
} 

division_development = { 
name = "RTNS Phlai" 
type = nuclear_submarine
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 18 } 
date = { year = 1937 month = may day = 13 } 
} 

division_development = { 
name = "RTNS Sinsamut" 
type = nuclear_submarine
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 19 } 
date = { year = 1937 month = may day = 13 } 
} 

division_development = { 
name = "RTNS Wirun" 
type = nuclear_submarine
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 20 } 
date = { year = 1937 month = may day = 13 } 
} 

division_development = { 
name = "RTNS Phuket" 
type = destroyer
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 21 } 
date = { year = 1937 month = may day = 13 } 
} 

division_development = { 
name = "RTNS Trad" 
type = destroyer
model = 0 
cost = 0.02 #0.2
new_model = no unitcost = yes
id = { type = 23600 id = 22 } 
date = { year = 1937 month = may day = 13 } 
} 

} # End File
