# converted to DH, 2011, March 4th, Kane
province = {
	id = 377 #Athens
	anti_air = 1
	air_base = { size = 4 current_size = 4 }
	naval_base = { size = 10 current_size = 10 }
	}

province = {
	id = 382 #Irakleio
	anti_air = 1
	air_base = { size = 2 current_size = 2 }
	naval_base = { size = 2	current_size = 2 }
	}

# Metaxas Line
	
province = {	
	id = 365 #Thessaloniki
	landfort = 5 anti_air = 2
	}

province = {	
	id = 363  #Xanthi
	landfort = 5 
	}

province = {	
	id = 364 #Kavala
	landfort = 5 
	} 


country = {
    tag = GRE

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        free_market = 5
        freedom = 4
        professional_army = 5
        defense_lobby = 5
        interventionism = 4
    }
    allowed_divisions = { 
        infantry = yes 
		d_02 = yes
        cavalry  = yes 
		bergsjaeger = yes 
	} 

	#inventions = { 2700061 2700065 }
	
	manpower = 65

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 377 #Athens

   nationalprovinces      = 
{ 
	363 #Xanthi
	364 #Kavala
	365 #Thessaloniki
	366 #Kozani
	367 #Ionnina
	368 #Larissa
	369 #Metsovo
	370 #Alexandroupoli
	371 #Kerkyra
	372 #Patra
	373 #Corinth
	374 #Chalcis
	375 #Levadhia
	376 #Agrinion
	377 #Athens
	378 #Kalymno
	379 #Rhodos
	380 #Sita
	381 #Ermoupoli
	382 #Irakleio
	383 #Mytilene
#Claimed
	333 #Skopje
	360 #Korce
	328 #Kumanovo
	#387 #Famagusta
	#388 #Nicosia

}
   ownedprovinces         = { 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 380 381 382 383 } 
   controlledprovinces    = { 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 380 381 382 383 }
#  claimedprovinces    	  = { 328 333 360 }	


diplomacy ={
relation = { tag = BUL value = -75 }
relation = { tag = ENG value = 50 }
relation = { tag = FIN value = 40 }
relation = { tag = FRA value = 20 }
relation = { tag = GER value = 15 }
relation = { tag = GRE value = 75 }
relation = { tag = ITA value = -35 }
relation = { tag = POL value = 35 }
relation = { tag = ROM value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = SOV value = 15 }
relation = { tag = TUR value = 100 }
relation = { tag = YUG value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}

  SpyInfo                = { country = "GRE" NumberOfSpies = 5 }


	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, M-R, CAS 1930

4290 4300 4310 # Double Engined 1929, Tactical B. 1930, Naval B. 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2290 2300 # GW artillery

1010 # Great War Division
1110 # Mountain Division
1190 # GW Cavalry

2450 2460 # Early Static AA
2400 # AT
2510 # Basic AA

5010 # Modern Agriculture

5080 5090 # Construction

5190 # Basic oil conversion

6400 6410 # Light Inf

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
# Escorts up to Washington
3010	3040	3070
3020	3050	3080
3030 15250	# CL pre-WW1

3350 3390 # Capital Design up to 1910
3360 # CA 0
3370 # BC 0
3380 3410 3420 # BB up to Super-Dreadnought (French Bretagne class was to be bought)
3600 # naval AA
3700 15080 # SS 1930
3800 # Prewar TP

	}

	
###################################
# hellenic army by Lord Rommel
# Datas by the league of nations
# 14.6.2012
###################################

landunit = {
 	id = { type = 15500 id = 1 }
 	location = 377 #Athens
 	name = "Ypourgeío Polémou"
 		division = { id = { type = 15500 id = 2 } name = "1. Stratiotis Diairesi" type = infantry model = 0 extra = artillery strength = 80 }
 		division = { id = { type = 15500 id = 3 } name = "2. Stratiotis Diairesi" type = infantry model = 0 extra = artillery strength = 80 }
		division = { id = { type = 15500 id = 4 } name = "3. Stratiotis Diairesi" type = infantry model = 0 extra = artillery strength = 80 }
		division = { id = { type = 15500 id = 5 } name = "1. Ippiko Diairesi" type = cavalry model = 0 strength = 50 }
	}

landunit = {
 	id = { type = 15500 id = 6 }
 	location = 377 #Athens
 	name = "1. Stratos Ellenas"
 		division = { id = { type = 15500 id = 7 } name = "4. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
 		division = { id = { type = 15500 id = 8 } name = "5. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
		division = { id = { type = 15500 id = 9 } name = "6. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
	}	

landunit = {
 	id = { type = 15500 id = 10 }
 	location = 365 #Thessaloniki
 	name = "3. Stratos Ellenas"
 	 	division = { id = { type = 15500 id = 11 } name = "7. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
		division = { id = { type = 15500 id = 12 } name = "8. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
		division = { id = { type = 15500 id = 13 } name = "9. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
	}

landunit = {
 	id = { type = 15500 id = 14 }
 	location = 368 #Larissa
 	name = "2. Stratos Ellenas"
 		division = { id = { type = 15500 id = 15 } name = "10. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
		division = { id = { type = 15500 id = 16 } name = "11. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
	}

landunit = {
 	id = { type = 15500 id = 17 }
 	location = 364 #Kavala
 	name = "4. Stratos Ellenas"
 		division = { id = { type = 15500 id = 18 } name = "12. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
		division = { id = { type = 15500 id = 19 } name = "13. Stratiotis Diairesi" type = infantry model = 0 strength = 80 }
	}
	
#############Airforce
# https://en.wikipedia.org/wiki/List_of_historic_aircraft_of_the_Hellenic_Air_Force
#
# naval bombers: 12 Blackburn Velos, 6 Hawker Horsley, 10 Fairey III => 1 wing model 0, strength 28
# cas: 12 Armstrong Whitworth Atlas => 1 wing model 0, strength 10
# tactical bombers: 24 "Potez 25" => 1 wing model 0, strength 24
#
# multi-role: 41 "Breguet 19", 2 "Avia B-534" =>  1 wing model 0, strength 36
# interceptors: 5 "Avia BH-33" => 1 wing model 0, strength 4
# => put together into 1 wing of multi-role-fighters, strength 40
# 

airunit = {
	location = 377 #Athens
	base = 377 
    id = { type = 15500 id = 20 }
	name = "Elliniki Aeroporia"
		division = { id = { type = 15500 id = 21 } name = "Elliniki I. Ptérygas Máchis" type = multi_role model = 0 strength = 40 }
		division = { id = { type = 15500 id = 22 } name = "Elliniki II. Ptérygas Máchis" type = naval_bomber model = 0 strength = 28 }
		division = { id = { type = 15500 id = 23 } name = "Elliniki III. Ptérygas Máchis" type = tactical_bomber model = 0 strength = 24 }
		division = { id = { type = 15500 id = 24 } name = "Elliniki IV. Ptérygas Máchis" type = cas model = 0 strength = 10 }
	}
	
#############Navy

navalunit = {
	id = { type = 15500 id = 25 }
	location = 377 #Athens
	base = 377 #Athens
	name = "Basilikos Stolos Ellenas"
		division = { id = { type = 15500 id = 30 } name = "BN Georgios Averoff" type = battlecruiser model = 0 extra = naval_anti_air_l }
		division = { id = { type = 15500 id = 31 } name = "BN Elli" type = light_cruiser model = 0 extra = naval_anti_air_s }
		division = { id = { type = 15500 id = 102 } name = "BN Hydra" type = destroyer model = 2 }
		division = { id = { type = 15500 id = 103 } name = "BN Kondouriotis" type = destroyer model = 2 }
		division = { id = { type = 15500 id = 104 } name = "BN Psara" type = destroyer model = 2 }
		division = { id = { type = 15500 id = 105 } name = "BN Spetsai" type = destroyer model = 2 }
		division = { id = { type = 15500 id = 28 } name = "BN Aetos" model = 1 type = destroyer extra = naval_anti_air_s }
		division = { id = { type = 15500 id = 32 } name = "BN Ierax" model = 1 type = destroyer extra = naval_anti_air_s }
		division = { id = { type = 15500 id = 100 } name = "BN Leon" model = 1 type = destroyer extra = naval_anti_air_s }
		division = { id = { type = 15500 id = 101 } name = "BN Panthir" model = 1 type = destroyer extra = naval_anti_air_s }
		#division = { id = { type = 15500 id = 106 } name = "BN Aspis" type = destroyer model = 0 } # very small, only 350 to
		#division = { id = { type = 15500 id = 107 } name = "BN Niki" type = destroyer model = 0 }
		#division = { id = { type = 15500 id = 108 } name = "BN Thyella" type = destroyer model = 0 }
		#division = { id = { type = 15500 id = 109 } name = "BN Sfendoni" type = destroyer model = 0 }
	}
	
navalunit = {
	id = { type = 15500 id = 114 }
	location = 377 #Athens
	base = 377 #Athens
	name = "Apothematikó stólou"
		division = { id = { type = 15500 id = 115 } name = "BN Limnos" type = battleship model = 0 strength = 35 } # in reserve & used as a training ship
		#division = { id = { type = 15500 id = 116 } name = "BN Kilkis" type = battleship model = 0 strength = 5 max_strength = 25 } # partially desintegrated after 1932; blockade ship after 1937
	}	
	
navalunit = {
	id = { type = 15500 id = 117 }
	location = 377 #Athens
	base = 377 #Athens
	name = "Ypovrychio stólou"
		division = { id = { type = 15500 id = 29 } name = "BN Katsonis Y-1" model = 1 type = nuclear_submarine }
		division = { id = { type = 15500 id = 33 } name = "BN Papanikolis Y-2" model = 1 type = nuclear_submarine }
		division = { id = { type = 15500 id = 110 } name = "BN Protefs Y-3" model = 0 type = submarine }
		division = { id = { type = 15500 id = 111 } name = "BN Nirefs Y-4" model = 0 type = submarine }
		division = { id = { type = 15500 id = 112 } name = "BN Triton Y-5" model = 0 type = submarine }
		division = { id = { type = 15500 id = 113 } name = "BN Glafkos Y-6" model = 0 type = submarine }
	}

navalunit = {
	id = { type = 15500 id = 118 }
	location = 377 #Athens
	base = 377 #Athens
	name = "Metagogikó stólou"
		division = { id = { type = 15500 id = 26 } name = "Adamastos" type = transport model = 0 }
		division = { id = { type = 15500 id = 27 } name = "Boris" type = transport model = 0 }
	}
	

transports = 300
escorts = 13

###############################################
# dormant BN Kilkis
###############################################
navaldivision = { id = { type = 15500 id = 116 } name = "BN Kilkis" type = battleship model = 0 dormant = yes strength = 5 } # partially desintegrated after 1932; blockade ship after 1937

} # End File