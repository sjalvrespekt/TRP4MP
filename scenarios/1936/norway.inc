#converted DH, March 9 2011, Kane
province = {
	id = 495 #Narvik
	anti_air = 1
	naval_base = {
		size = 3
		current_size = 3
	}
}

province = {
	id = 494 #Bodo
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 483 #Oslo
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

province = {
	id = 488 #Bergen
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 5
		current_size = 5
	}
}


province = {	id = 483	 coastalfort = 3 }	#Oslofjorden
province = {	id = 493	 coastalfort = 2 }	#Trondheim/Agdenes
province = {	id = 488	 coastalfort = 3 }	#Bergen
province = {	id = 495	 coastalfort = 2 }	#Narvik
province = {	id = 485	 coastalfort = 2 }	#Kristiansand

country = {
    tag = NOR
	capital = 483 #Oslo

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 9
        political_left = 9
        freedom = 7
        free_market = 7
        professional_army = 3
        defense_lobby = 5
        interventionism = 2
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
		
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 20
#neu
   nationalprovinces      = 
{  
	496 #Alta
	488 #Bergen
	484 #Frederikstad
	483 #Oslo
	485 #Kristiansand
	487 #Stavange
	491 #Alesund
	489 #Hamar
	486 #Honefoss=>Krstiansand
	492 #Lillehammer
	490 #Andalsnes=>Alesund
	493 #Trondheim
	494 #Bodo
	497 #Tromso
	495 #Narvik 
} 
   ownedprovinces         = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  } 
   controlledprovinces    = {  483 485 487 491 489 492 490 493 494 497 496 488 486 484 495  } 
	
diplomacy = {
relation = { tag = BEL value = 100 }
relation = { tag = DEN value = 150 }
relation = { tag = ENG value = 90 }
relation = { tag = FIN value = 75 }
relation = { tag = HOL value = 100 }
relation = { tag = LUX value = 100 }
relation = { tag = SWE value = 150 }
relation = { tag = USA value = 75 }
}

  SpyInfo                = { country = "NOR" NumberOfSpies = 4 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

4290 # double Engined 1929

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

5010 # Agriculture
5080 5090 # Construction 
5190 # Basic Oil Refining

# OR

6100 6110 6120 # Firepower doc

#Naval doctrines
8070 8130 8760

#Naval Techs
# Escorts up to Washington
3010	3040	3070
3020	3050	3080
3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA up to 1914
3700 15080 # SS 1930
3800 # Prewar TP

}

	  transports = 850 # 7th largest merchant navy before ww2
	  escorts = 33

#######################################################################
# Army of Norway by Lord Rommel - 11.6.2012
# Datas by League of Nations
######################################################################  
	    
landunit = {
	location = 484 #Halden
	name = "1. Hærkorps"
	id = { type = 12600 id = 1 }
		division = { id = { type = 12600 id = 2 } name = "1. Infanteridivisjon"  type = infantry model = 0 strength = 35 extra = artillery brigade_model = 2  }
	}
	
landunit = {
	location = 483 #Oslo
	name = "2. Hærkorps"
	id = { type = 12600 id = 3 }
		division = { id = { type = 12600 id = 4 }  name = "2. Infanteridivisjon" type = infantry model = 0 strength = 35 extra = artillery brigade_model = 2 }
		division = { id = { type = 12600 id = 13 } name = "1. Dragondivisjon"    type = cavalry model = 0 strength = 50 }
		}
		
landunit = {
	location = 485 #Kristiansand
	name = "3. Hærkorps"
	id = { type = 12600 id = 5 }
		division = { id = { type = 12600 id = 6 } name = "3. Infanteridivisjon"  type = infantry model = 0 strength = 35 }
		}
		
landunit = {
	location = 488 #Bergen
	name = "4. Hærkorps"
	id = { type = 12600 id = 7 }
		division = { id = { type = 12600 id = 8 } name = "4. Infanteridivisjon"  type = infantry model = 0 strength = 35 }
		}
		
landunit = {
	location = 493 #Trondheim
	name = "5. Hærkorps"
	id = { type = 12600 id = 9 }
		division = { id = { type = 12600 id = 10 } name = "5. Infanteridivisjon" type = infantry model = 0 strength = 35 }
		}

landunit = {
	location = 495 #Harstad
	name = "6. Hærkorps"
	id = { type = 12600 id = 11 }
		division = { id = { type = 12600 id = 12 } name = "6. Infanteridivisjon" type = infantry model = 0 strength = 35 }
		}
		
#############Air Force
airunit = {
	location = 483 #Oslo
	id = { type = 12600 id = 20 }
	name = "Luftforsvaret"
	base = 483 #
		division = { id = { type = 12600 id = 21 } name = "Luftforsvaret Kamp Skvadron" strength = 65 type = multi_role model = 0 }
	}
		
		
#############Navy

navalunit = {
	location = 483 #Oslo
	base = 483 #Oslo
	name = "1. Kystvaktdistrikt"
	id = { type = 12600 id = 22 }
		division = { id = { type = 12600 id = 27 } name = "KNM Norge" type = heavy_cruiser model = 0 }
		division = { id = { type = 12600 id = 28 } name = "KNM Eidsvold" type = heavy_cruiser model = 0 }
		division = { id = { type = 12600 id = 29 } name = "KNM Tordenskjold" type = heavy_cruiser model = 0 }
		division = { id = { type = 12600 id = 30 } name = "KNM Harald Harrfagre" type = heavy_cruiser model = 0 }
		division = { id = { type = 12600 id = 24 } name = "KNM Garm" type = destroyer model = 0 }
		division = { id = { type = 12600 id = 25 } name = "KNM Troll" type = destroyer model = 0 }		
		division = { id = { type = 12600 id = 26 } name = "KNM Draug" type = destroyer model = 0 }
		division = { id = { type = 12600 id = 40 } name = "KNM Fridtjof Nansen" type = d_09 model = 0 } #coastal gunboat
		division = { id = { type = 12600 id = 41 } name = "KNM Olaf Tryggvason" type = d_09 model = 2 } #minelayer
	}
	
navalunit = {
	location = 488 #Bergen
	base = 488 #Bergen
	name = "2. Kystvaktdistrikt"
	id = { type = 12600 id = 23 }
		division = { id = { type = 12600 id = 31 } name = "A-2" type = nuclear_submarine model = 0 }
		division = { id = { type = 12600 id = 32 } name = "A-3" type = nuclear_submarine model = 0 }
		division = { id = { type = 12600 id = 33 } name = "A-4" type = nuclear_submarine model = 0 }
		division = { id = { type = 12600 id = 34 } name = "B-1" type = nuclear_submarine model = 1 }
		division = { id = { type = 12600 id = 35 } name = "B-2" type = nuclear_submarine model = 1 }
		division = { id = { type = 12600 id = 36 } name = "B-3" type = nuclear_submarine model = 1 }
		division = { id = { type = 12600 id = 37 } name = "B-4" type = nuclear_submarine model = 1 }
		division = { id = { type = 12600 id = 38 } name = "B-5" type = nuclear_submarine model = 1 }
		division = { id = { type = 12600 id = 39 } name = "B-6" type = nuclear_submarine model = 1 }
	}
	
division_development = { 
name = "KNM Æger" 
type = destroyer
model = 1 
cost = 0.04 #0.4
new_model = no unitcost = yes
id = { type = 12600 id = 54 } 
date = { year = 1936 month = august day = 24 } 
} 

division_development = { 
name = "KNM Sleipner" 
type = destroyer
model = 1 
cost = 0.04 #0.4
new_model = no unitcost = yes
id = { type = 12600 id = 55 } 
date = { year = 1936 month = may day = 6 } 
} 
	
} # End File