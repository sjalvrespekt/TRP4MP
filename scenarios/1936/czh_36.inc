#converted to DH, Mar, 4th 2011, Kane
province = {
	id = 207 #Prag
	anti_air = 2
	air_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 208 #Bratislava
	anti_air = 2
	air_base = {
		size = 1
		current_size = 1
		}
	}


province = {	id = 200	landfort = 8	} #Liberec
province = {	id = 205	landfort = 8	} #Karlovy Vary
province = {	id = 204	landfort = 8	} #Prachatice
province = {	id = 197	landfort = 8	} #Znojmo

#Anti Aircraft Batteries
province = { id = 199   anti_air = 2 } #Plzen
province = { id = 196   anti_air = 2 } #Brno

country = {
	tag = CZE

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 3
        free_market = 9
        freedom = 8
        professional_army = 5
        defense_lobby = 9
        interventionism = 5
	}
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 
	
	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 20

	manpower = 140

	capital = 207

	
    ownedprovinces =      
{
	200 #Liberec
	206 #Opava=>Ostrava(split)
	205 #Karlovy Vary
	197 #Znojmo
	199 #Plzen
	207 #Prague
	198 #Hradec Kralov
	201 #Ostrava
	196 #Brno
	212 #Zilina
	211 #Banska Bystrica
	209 #Kosice
	213 #Chust
	208 #Bratislava
	202 #Ceske Budejovice
	210 #Komarno=>Bratislava(split)
	214 #Presov
	204 #Prachatice
	215 #Uzhorod=>Presov(split)
	203 #Tesin=>Ostrava(split)	
}
    controlledprovinces = 
{
	200 #Liberec
	206 #Opava=>Ostrava(split)
	205 #Karlovy Vary
	197 #Znojmo
	199 #Plzen
	207 #Prague
	198 #Hradec Kralov
	201 #Ostrava
	196 #Brno
	212 #Zilina
	211 #Banska Bystrica
	209 #Kosice
	213 #Chust
	208 #Bratislava
	202 #Ceske Budejovice
	210 #Komarno=>Bratislava(split)
	214 #Presov
	204 #Prachatice
	215 #Uzhorod=>Presov(split)
	203 #Tesin=>Ostrava(split)
}
   nationalprovinces      = 
{  
	200 #Liberec
	206 #Opava=>Ostrava(split)
	205 #Karlovy Vary
	197 #Znojmo
	199 #Plzen
	207 #Prague
	198 #Hradec Kralov
	201 #Ostrava
	196 #Brno
	212 #Zilina
	211 #Banska Bystrica
	209 #Kosice
	213 #Chust
	208 #Bratislava
	202 #Ceske Budejovice
	210 #Komarno=>Bratislava(split)
	214 #Presov
	204 #Prachatice
	215 #Uzhorod=>Presov(split)
	203 #Tesin=>Ostrava(split)
}

diplomacy = {
relation = { tag = ENG value = 125 }
relation = { tag = FIN value = 50 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = -25 }
relation = { tag = HUN value = -50 }
relation = { tag = ITA value = 15 }
relation = { tag = POL value = -1 }
relation = { tag = ROM value = 20 }
relation = { tag = SOV value = 100 }
relation = { tag = YUG value = 50 }
}
  SpyInfo                = { country = "cze" NumberOfSpies = 5 }
	# Eastern Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4050 # Single Engined 1936

4290 4300 # double Engined 1929, tactical
4330 # double Enginged 1396

#############################

2800 # Basic Armoured Car

2550 # Tank

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 # GW infantry
1310 # Engineers
1190 # GW Cavalry
10110 # motorized inf 1937
11750 # 1937 mech inf

1110 # Early Mountain

5010 # Agriculture 
5080 5090  # Construction 
5190 # Basic Oil Refining

6300 6310 # up to Schwerpunkt Doctrine (land)

# Austria-Hungary experience

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs; Escorts up to WW1
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


#################################
#Czech army
#################################
		
landunit = {
	id = { type = 26000 id = 1 }
	location = 198
	name = "Vrchní Velitelství Armády"
	division = { id = { type = 26000 id = 2 } name = "1. rychlé divize" type = mechanized model = 0 strength = 50 }
	division = { id = { type = 26000 id = 3 } name = "4. divize"        type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 4 } name = "12. divize"       type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 5 } name = "13. divize"       type = motorized  model = 0 strength = 80 }
	division = { id = { type = 26000 id = 6 } name = "16. divize"       type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 7 } name = "22. divize"       type = infantry   model = 1 strength = 80 }
	}
	
landunit = {
	id = { type = 26000 id = 8 }
	location = 201
	name = "VIII. Armádní Sbor"
	division = { id = { type = 26000 id = 9 } name = "9. divize"        type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 10 } name = "15. divize"      type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 11 } name = "21. divize"      type = infantry   model = 1 strength = 80 }
	}	
		
landunit = {
	id = { type = 26000 id = 12 }
	location = 207 #Prag
	name = "I. Armáda"
	division = { id = { type = 26000 id = 13 } name = "16. divize"       type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 14 } name = "3. brigáda"       type = d_02     model = 1 strength = 80 }
	division = { id = { type = 26000 id = 15 } name = "4. brigáda"       type = d_02     model = 1 strength = 80 }
	}	

landunit = {
	id = { type = 26000 id = 16 }
	location = 207 #Prag
	name = "I. Armádní Sbor"
	division = { id = { type = 26000 id = 17 } name = "2. divize"            type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 18 } name = "5. divize"            type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 19 } name = "32. pohranicní okres" type = garrison model = 1 strength = 75 }
	}

landunit = {
	id = { type = 26000 id = 20 }
	location = 207 #Prag
	name = "II. Armádní Sbor"
	division = { id = { type = 26000 id = 21 } name = "3. divize"            type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 22 } name = "17. divize"           type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 23 } name = "33. pohranicní okres" type = garrison model = 1 strength = 75 }
	}	
	
landunit = {
	id = { type = 26000 id = 24 }
	location = 207 #Prag
	name = "XI. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 25 } name = "Prague divize"     type = garrison model = 1 strength = 75 }
	division = { id = { type = 26000 id = 26 } name = "1. skupina divize" type = d_02     model = 1 strength = 25 }
	}
	
landunit = {
	id = { type = 26000 id = 27 }
	location = 207 #Prag
	name = "XII. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 28 } name = "34. pohranicní okres" type = garrison model = 1 strength = 75 }
	division = { id = { type = 26000 id = 29 } name = "35. pohranicní okres" type = garrison model = 1 strength = 75 }
	}

landunit = {
	id = { type = 26000 id = 30 }
	location = 206
	name = "II. Armáda"
	division = { id = { type = 26000 id = 31 } name = "8. divize"       type = infantry model = 1 strength = 80 }
	}
	
landunit = {
	id = { type = 26000 id = 32 }
	location = 206
	name = "IV. Armádní Sbor"
	division = { id = { type = 26000 id = 33 } name = "7. divize"            type = infantry model = 1 strength = 80 }
	division = { id = { type = 26000 id = 34 } name = "36. pohranicní okres" type = garrison model = 1 strength = 75 }
	}	
	
landunit = {
	id = { type = 26000 id = 61 }
	location = 206
	name = "XIII. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 36 } name = "37. pohranicní okres" type = garrison model = 1 strength = 75 }
	}
		
landunit = {
	id = { type = 26000 id = 37 }
	location = 211
	name = "III. Armáda"
	division = { id = { type = 26000 id = 38 } name = "3. rychlé divize" type = mechanized model = 0 strength = 50 }
	division = { id = { type = 26000 id = 39 } name = "10. divize"       type = infantry   model = 1 strength = 80 }
	division = { id = { type = 26000 id = 112 } name = "11. divize"      type = infantry   model = 1 strength = 80 }
	}

landunit = {
	id = { type = 26000 id = 41 }
	location = 210
	name = "VII. Armádní Sbor"
    division = { id = { type = 26000 id = 42 } name = "39. pohranicní okres" type = garrison model = 1 strength = 75 }
	}

landunit = {
	id = { type = 26000 id = 43 }
	location = 211
	name = "XV. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 44 } name = "40. pohranicní okres" type = garrison model = 1 strength = 75 }
	}

landunit = {
	id = { type = 26000 id = 45 }
	location = 209
	name = "XVI. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 46 } name = "41. pohranicní okres" type = garrison model = 1 strength = 75 }
	division = { id = { type = 26000 id = 47 } name = "42. pohranicní okres" type = garrison model = 1 strength = 75 }
	}	
		
landunit = {
	id = { type = 26000 id = 48 }
	location = 211
	name = "VI. Armáda"
	division = { id = { type = 26000 id = 49 } name = "2. rychlé divize" type = mechanized model = 0 strength = 50 }
	}
	
landunit = {
	id = { type = 26000 id = 50 }
	location = 196
	name = "III. Armádní Sbor"
	division = { id = { type = 26000 id = 51 } name = "14. divize"        type = infantry  model = 1 strength = 80 }
	division = { id = { type = 26000 id = 52 } name = "29. divize"        type = infantry  model = 1 strength = 80 }
	division = { id = { type = 26000 id = 53 } name = "2. skupina divize" type = d_02      model = 1 strength = 25 }
	}
	
landunit = {
	id = { type = 26000 id = 54 }
	location = 196
	name = "V. Armádní Sbor"
	division = { id = { type = 26000 id = 55 } name = "6. divize"         type = infantry  model = 1 strength = 80 }
	division = { id = { type = 26000 id = 56 } name = "20. divize"        type = infantry  model = 1 strength = 80 }
	}
	
landunit = {
	id = { type = 26000 id = 57 }
	location = 202
	name = "VI. Armádní Sbor"
	division = { id = { type = 26000 id = 58 } name = "4. rychlé divize" type = mechanized model = 0 strength = 50 }
	division = { id = { type = 26000 id = 59 } name = "31. pohranicní okres" type = garrison model = 1 strength = 75 }
	}	
	
landunit = {
	id = { type = 26000 id = 60 }
	location = 196
	name = "XVI. Pohranicní Oblasti"
	division = { id = { type = 26000 id = 111 } name = "38. pohranicní okres" type = garrison model = 1 strength = 75 }
	}
	
#################################
#Czech airforce
#################################
# arround 550 planes in 1936
# Most fighters: Avia B-534 
#################################

airunit = {
	location = 207
	base = 207
	id = { type = 26000 id = 100 }
	name = "1. Vzdusného Armády divize"
		division = { id = { type = 26000 id = 101 } name = "1. Vzduch divize" type = interceptor model = 1 strength = 100 }
	}
		
airunit = {
	location = 207
	base = 207
	id = { type = 26000 id = 102 }
	name = "2. Vzdusného Armády divize"
		division = { id = { type = 26000 id = 103 } name = "2. Vzduch divize" type = interceptor model = 1 strength = 35 }
	}
		
airunit = {
	location = 207
	base = 207
	id = { type = 26000 id = 104 }
	name = "3. Vzdusného Armády divize"
		division = { id = { type = 26000 id = 105 } name = "3. Vzduch divize" type = interceptor model = 1 strength = 35 }
	}
		
airunit = {
	location = 207
	base = 207
	id = { type = 26000 id = 106 }
	name = "4. Vzdusného Armády divize"
		division = { id = { type = 26000 id = 107 } name = "4. Vzduch divize" type = interceptor model = 1 strength = 100 }
	}

airunit = {
	location = 207
	base = 207
	id = { type = 26000 id = 108 }
	name = "Bombardér brigáda"
		division = { id = { type = 26000 id = 109 } name = "5. bombardovací pluk" type = tactical_bomber model = 1 strength = 75  }
		division = { id = { type = 26000 id = 110 } name = "6. bombardovací pluk" type = tactical_bomber model = 1 strength = 100 }
	}


} # End File
