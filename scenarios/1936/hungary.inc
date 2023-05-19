# geändert Zergel, 21.10.2010, Anpassung Province ID an DH

province = {
	id = 284
	anti_air = 2

	air_base = {
		size = 8
		current_size = 8
		}
	}
	
province = {
	id = 281

	air_base = {
		size = 2
		current_size = 2
		}
	}	

country = {
	tag = HUN

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        free_market = 4
        freedom = 3
        professional_army = 3
        defense_lobby = 7
        interventionism = 8
    }
    allowed_divisions = {
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 
	
	#inventions = { 2700061 2700063 2700065 }
	
	manpower = 0 # The army of post-Trianon Hungary was to be restricted to 35,000 men and there was to be no conscription. Heavy artillery, tanks and air force were prohibited.
	capital = 284

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money	=	10

	
    ownedprovinces =      {
 	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
 	284 #Budapest  
	}
    controlledprovinces = {
 	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
	284 #Budapest  	
	}
    nationalprovinces =   {
	276 #Zalaegerszeg=>Gyor
 	277 #Pecs
 	278 #Szekesfeheran
 	279 #Gyor
 	280 #Szeged=>Gyor
 	281 #Debrecen
 	282 #Miskolc
 	283 #Bekescsaba=>Debrecen
 	284 #Budapest  

	#Claim on Romania
	296 #Oradea
	293 #Miercurea Ciuc
	#288 #Cluj
	#292 #Bistritata
	#301 #Suceava
	#299 #Bacau
	#287 #Turda

	#Claim on Czecho-Slovakia
	#208 #Bratislava
	#212 #Zilina
	#211 #BanskaBystrica
	210 #Komarno=>Bratislava
	209 #Kosice
	#214 #Presov=>Kosice
	#213 #Chust=>Presov
	215 #Uzhorod=>Presov
	
	#Claim on Yugoslavia
	341 #Novisad 
	}
	claimedprovinces = {
	# Austria
	188 #Eisenstadt
	# Slovakia
	208 #Bratislava
	212 #Zilina
	211 #BanskaBystrica
	214 #Presov=>Kosice
	213 #Chust=>Presov
	# Romania
	292 #Bistritata
	287 #Turda
	288 #Cluj
	291 #Sibiu
	289 #Alba Iulia
	286 #Arad
	285 #Timisoara
	295 #Resita
	# Yugoslavia
	336 #Petrovgrad
	337 #Ruma
	344 #Osijek
	345 #Bjelovar
	352 #Zagreb
	347 #Karlovac
	} 

diplomacy = {
relation = { tag = AUS value = 100 guaranteed = { day = 17 month = march year = 1934 } }
relation = { tag = CZE value = -50 }
relation = { tag = ENG value = -50 }
relation = { tag = FIN value = 75 }
relation = { tag = FRA value = -70 }
relation = { tag = GER value = 100 }
relation = { tag = IRE value = 25 }
relation = { tag = ITA value = 125 }
relation = { tag = POL value = 50 }
relation = { tag = ROM value = 0 }
relation = { tag = YUG value = 80 }
}
  SpyInfo                = { country = "HUN" NumberOfSpies = 6 }
	# Eastern Minor Tech '36
	deactivate = { }
	dormant_teams = { 1609 1618 1627 } #Airforce teams
	dormant_ministers = { 21187 }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4290 4300 4320 # double Engined 1929, tactical, escort brigade 1930
4050 4060 4330 4340 # Interceptor 36 & bomber 36

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA
2400
2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

1310 # Early logistics

5010 # Mechanized Agriculture
5080 5090 # Construction 
5190 # Basic Oil Refining

6400 6410 # Light Inf

#Naval Techs; Escorts up to WW1; Austria-Hungary experience

9010 9020 9030 # Aerial warfare, basic doctrines

3010	3040
3020	3050
3030 15250
3350 3390 3430 # Capital Design up to 1914
3360 # Coastal BB (CA 0)
3370 # AC (BC 0)
3380 3410 3420 # BB up to 1914
3700 # Prewar SS
3800 # Prewar TP

	}

##################################################################
# Royal hungarian army by Lord Rommel - 11.6.2012
##################################################################
# Source: Men-at-arms The royal hungarian army in world war II
# 1. jan. 1936:
# 7 mixed brigades and 2 cavlary brigades
##################################################################
# army comments: 
# The mixed brigades were fake formations to camouflage the 
# illegal rearmament program of the honved army. A mixed brigade
# was a camouflaged corps. The "commander unit" was a camouflage
# brigade/light division. The honved army filled up the ranks with
# conscripts when war started.
##################################################################

    landunit = {
	id = { type = 20500 id = 1 }
	name = "I Állandó Hadsereg"
	location = 284
	division = { id = { type = 20500 id = 2 } name = "Magyar királyi honvédség" type = hq model = 0 experience = 20 }
	division = { id = { type = 20500 id = 3 } name = "1. könny Hadosztály" type = d_02 model = 0 strength = 14 }
	division = { id = { type = 20500 id = 4 } name = "2. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 5 } name = "3. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 29 } name = "1. lovasdandár" type = cavalry model = 0 strength = 25 }
	}
	
	landunit = {
	id = { type = 20500 id = 6 }
	name = "II Állandó Hadsereg"
	location = 276
	division = { id = { type = 20500 id = 7 } name = "4. könny Hadosztály" type = d_02 model = 0 strength = 14 }
	division = { id = { type = 20500 id = 8 } name = "5. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 9 } name = "7. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	}
	
	landunit = {
	id = { type = 20500 id = 10 }
	name = "III Állandó Hadsereg"
	location = 277
	division = { id = { type = 20500 id = 11 } name = "8. könny Hadosztály"  type = d_02 model = 0 strength = 14 }
	division = { id = { type = 20500 id = 12 } name = "9. könny Hadosztály"  type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 13 } name = "10. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	}

    landunit = {
	id = { type = 20500 id = 14 }
	name = "IV Állandó Hadsereg"
	location = 278
	division = { id = { type = 20500 id = 15 } name = "11. könny Hadosztály" type = d_02 model = 0 strength = 14 }
	division = { id = { type = 20500 id = 16 } name = "12. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 17 } name = "13. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	}	
	
    landunit = {
	id = { type = 20500 id = 18 }
	name = "V Állandó Hadsereg"
	location = 281
	division = { id = { type = 20500 id = 19 } name = "14. könny Hadosztály" type = d_02 model = 0 strength = 20 }
	division = { id = { type = 20500 id = 20 } name = "18. könny Hadosztály" type = d_02 model = 0 strength = 20 }
	}

    landunit = {
	id = { type = 20500 id = 21 }
	name = "VI Állandó Hadsereg"
	location = 283
	division = { id = { type = 20500 id = 22 } name = "15. könny Hadosztály" type = d_02 model = 0 strength = 14 }
	division = { id = { type = 20500 id = 23 } name = "17. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 24 } name = "22. könny Hadosztály" type = d_02 model = 0 strength = 13 }
	division = { id = { type = 20500 id = 30 } name = "2. lovasdandár" type = cavalry model = 0 strength = 25 }
	}

    landunit = {
	id = { type = 20500 id = 25 }
	name = "VII Állandó Hadsereg"
	location = 279
	division = { id = { type = 20500 id = 26 } name = "19. könny Hadosztály" type = d_02 model = 0 strength = 20 }
	division = { id = { type = 20500 id = 27 } name = "20. könny Hadosztály" type = d_02 model = 0 strength = 20 }
	}	
	
    #landunit = {
	#id = { type = 20500 id = 28 }
	#name = "Magyar Hadsereg"
	#location = 284
#
#
	#}	

##################################################################
# Szent László Division + hun. armored divisions
##################################################################	

 landdivision = { dormant = yes id = { type = 20500 id = 100 } name = "Szent László hadosztály"         type = d_03  model = 4 strength = 75 experience = 50 extra = b_01  brigade_model = 5 }	
 landdivision = { dormant = yes id = { type = 20500 id = 101 } name = "1. 'Hunyadi' Páncéloshadosztály" type = armor model = 2 strength = 35                 extra = super_heavy_armor brigade_model = 2 } 
 landdivision = { dormant = yes id = { type = 20500 id = 102 } name = "2. Páncéloshadosztály"           type = armor model = 4 strength = 75 } 
 
##################################################################
# Royal hungarian airforce
##################################################################

airunit = {
	id = { type = 20500 id = 50 }
	name = "I Légí Hadsereg"
	location = 284
	base = 284
		division = { id = { type = 20500 id = 51 } name = "101. Vadászosztály" type = interceptor     model = 1 strength = 75 }
		division = { id = { type = 20500 id = 52 } name = "102. Vadászosztály" type = tactical_bomber model = 1 strength = 75 }
	}
	
##################################################################
# building queue
##################################################################
	
    province_development = { 
        id = { type = 20500 id = 600 } 
        name = "" 
        location = 284 
        cost = 5.0000 
		date = { 
					year = 1938 
					month = october 
					day = 29 
					hour = 0 
		} 
		days_for_first = 314
		size = 3 
		type = ic 
	}  
    province_development = { 
        id = { type = 20500 id = 601 } 
        name = "" 
        location = 279 
        cost = 5.0000 
		date = { 
		            year = 1937 
		            month = august
		            day = 29 
		            hour = 0 
		} 
		days_for_first = 314
        size = 2 
        type = ic 
	}  

} # End File




