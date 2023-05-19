

#province = {
#	id = 332 #Cetinje		
#
#	naval_base = {
#		size = 3
#		current_size = 3
#		}
#	}
province = {
	id = 350		#Split
	air_base = {
		size = 2
		current_size = 2
		}

	naval_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 338		#Belgrade
	anti_air = 3
	air_base = {
		size = 6
		current_size = 6
		}

	}


#Anti Aircraft Batteries
province = { id = 352   anti_air = 2 } #Zagreb
province = { id = 350   anti_air = 2 } #Split
province = { id = 343  anti_air = 2 } #Dubrovnik

country = {
    tag = YUG

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 15
	
	transports = 10
	escorts = 24

	capital = 338

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 5
        free_market = 5
        professional_army = 3
        defense_lobby = 7
        interventionism = 6
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	}

	#inventions = { 2700061 2700063 2700065 }

	manpower = 100

	
    ownedprovinces =      {
 	346 #Maribor
 	349 #Ljubljana
 	345 #Bjelovar
 	352 #Zagreb
 	347 #Karlovac=>Rijeka
 	350 #Split
 	357 #Bihac=>Banja Luka
 	353 #Banja Luka
	343 #Dubrovnik
 	344 #Osijek
 	341 #Novi Sad
 	337 #Ruma=>Osijek
 	354 #Tuzla=>Sarajevo
 	358 #Travnik=Zenica
 	351 #Knin=>Split
 	356 #Mostar
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac=>Uzice
 	338 #Belgrade
 	336 #Petrovgrad=>Zrenjanin
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	329 #Pristina
 	335 #Prijepolje=>Uzice
 	332 #Cetinje=>Podgorica
 	334 #Tetovo=>Pristina
 	333 #Skopje
 	328 #Kumanovo=Stip
 	331 #Prirot=>Nis
	 }
    controlledprovinces = {
	346 #Maribor
 	349 #Ljubljana
 	345 #Bjelovar
 	352 #Zagreb
 	347 #Karlovac=>Rijeka
 	350 #Split
 	357 #Bihac
 	353 #Banja Luka
 	344 #Osijek
 	341 #Novi Sad
 	337 #Ruma
 	354 #Tuzla
 	358 #Travnik=Zenica
 	351 #Knin
 	356 #Mostar
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac
 	338 #Belgrade
 	336 #Petrovgrad=>Zrenjanin
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	329 #Pristina
 	335 #Prijepolje
 	332 #Cetinje=>Podgorica
 	334 #Tetovo
 	333 #Skopje
 	328 #Kumanovo=Stip
 	331 #Prirot=>Nis
	343 #Dubrovnik
	  }
    nationalprovinces =   {
	346 #Maribor
 	349 #Ljubljana
 	345 #Bjelovar
 	352 #Zagreb
 	347 #Karlovac=>Rijeka
 	350 #Split
 	357 #Bihac
 	353 #Banja Luka
 	344 #Osijek
 	341 #Novi Sad
 	337 #Ruma
 	354 #Tuzla
 	358 #Travnik=Zenica
 	351 #Knin
 	356 #Mostar
 	355 #Sarajevo
 	342 #Uzice
 	340 #Sabac
 	338 #Belgrade
 	336 #Petrovgrad=>Zrenjanin
 	339 #Bor=>Nis
 	330 #Nis
 	327 #Krusevac=>Nov Pazar
 	329 #Pristina
 	335 #Prijepolje
 	332 #Cetinje=>Podgorica
 	334 #Tetovo
 	333 #Skopje
 	328 #Kumanovo=Stip
 	331 #Prirot=>Nis
	343 #Dubrovnik
	  }

diplomacy = {
relation = { tag = BUL value = 25 }
relation = { tag = CZE value = 50 }
relation = { tag = FIN value = 35 }
relation = { tag = FRA value = 50 }
relation = { tag = GER value = 50 }
relation = { tag = GRE value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = HUN value = 80 }
relation = { tag = ITA value = 75 }
relation = { tag = ROM value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = TUR value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}
  SpyInfo                = { country = "YUG" NumberOfSpies = 6 }

	# Eastern Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2290 2300 # GW artillery

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

1310 # Early logistics

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture

5080 5090 # Construction 

5190 # Basic oil conversion

6100 6110 6120 # Trench Warfare doctrine (land)


#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3030 15250 # CL pre-WW1

3700 15080 # SS 1930
3800 # Prewar TP

}


############################################
# Yug army
############################################

landunit = {
	id = { type = 19800 id = 1 }
	location = 350 #Split
	name = "Boka Kotorska Fortress"
		division = { id = { type = 19800 id = 2 } name = "Boka Kotorska Fortress" strength = 50 type = garrison model = 0 }
	}	

landunit = {
	id = { type = 19800 id = 3 }
	location = 356 #Mostar
	name = "Sibenik Fortress"
		division = { id = { type = 19800 id = 4 } name = "Sibenik Fortress" strength = 50 type = garrison model = 0 }
    }

landunit = {
	id = { type = 19800 id = 5 }
	location = 341 #Novi Sad
	name = "I. Kraljevska Jugoslavenska Armija"
		division = { id = { type = 19800 id = 6 } name = "Guardia Divizija" strength = 70 type = infantry model = 0 extra = artillery }
		division = { id = { type = 19800 id = 7 } name = "1. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 8 } name = "2. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 9 } name = "3. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 10 } name = "1. Konjicka Divizija" strength = 50 type = cavalry model = 0 }
		division = { id = { type = 19800 id = 11 } name = "2. Konjicka Divizija" strength = 50 type = cavalry model = 0 }
	}
	
landunit = {
	id = { type = 19800 id = 12 }
	location = 355 #Sarajewo
	name = "II. Kraljevska Jugoslavenska Armija"
		division = { id = { type = 19800 id = 13 } name = "4. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 14 } name = "5. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 15 } name = "6. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
	}
	
landunit = {
	id = { type = 19800 id = 16 }
	location = 333 #Skopje
	name = "III. Kraljevska Jugoslavenska Armija"
		division = { id = { type = 19800 id = 17 } name = "7. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 18 } name = "8. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 19 } name = "9. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
	}
	
landunit = {
	id = { type = 19800 id = 20 }
	location = 352 #Zagreb
	name = "IV. Kraljevska Jugoslavenska Armija"
		division = { id = { type = 19800 id = 21 } name = "10. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 22 } name = "11. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 23 } name = "12. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
	}
	
landunit = {
	id = { type = 19800 id = 24 }
	location = 330 #Nis
	name = "V. Kraljevska Jugoslavenska Armija"
		division = { id = { type = 19800 id = 25 } name = "13. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 26 } name = "14. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
		division = { id = { type = 19800 id = 27 } name = "15. Savska Pesadijska Divizija" strength = 70 type = infantry model = 0 }
	}
	
############################################
# Yug airforce
############################################

airunit = {
	location = 338
	base = 338
 	id = { type = 19800 id = 30 }
 	name = "Operativno Zrakoplovstvo"
		division = { id = { type = 19800 id = 31 } name = "1. Lovacka Vazduhoplovna" strength = 75 type = interceptor model = 0 }
	  division = { id = { type = 19800 id = 32 } name = "4. Takticka Bombarderska" strength = 75 type = tactical_bomber model = 0 }
	}

navalunit = {
	id = { type = 19800 id = 33 }
	name = "Kraljevska Jugoslavenska Ratna Mornarica"
	location = 350
	base = 350
		division = { id = { type = 19800 id = 34 } name = "Dalmacija" type = light_cruiser model = 1 strength = 40 }
		division = { id = { type = 19800 id = 38 } name = "Dubrovnik" type = d_09 model = 3 }
		division = { id = { type = 19800 id = 40 } name = "Zmaj" type = d_09 model = 0 } # very small seaplane tender / minelayer
	}
	
navalunit = {
	id = { type = 19800 id = 41 }
	name = "Podmornica Flottilla"
	location = 350
	base = 350
		division = { id = { type = 19800 id = 35 } name = "Hrabri" type = submarine model = 0 }
		division = { id = { type = 19800 id = 36 } name = "Nebojsa" type = submarine model = 0 }
		division = { id = { type = 19800 id = 37 } name = "Smeli" type = nuclear_submarine model = 1 }
		division = { id = { type = 19800 id = 39 } name = "Osvetnik" type = nuclear_submarine model = 1 }
	}

} # End File