#converted to DH, March 20 2011, Kane
province = {
	id = 392 #Bern
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
	}
}
#Swiss defenses
province = {	id = 392	landfort = 5 } #Bern
province = {	id = 391	landfort = 3 } #Geneva
province = {	id = 389	landfort = 3 } #Zurich
province = {	id = 390	landfort = 6 } #Lugano

#Anti Aircraft Batteries
province = { id = 392   anti_air = 3 } #Bern
province = { id = 391   anti_air = 3 } #Geneva
province = { id = 389   anti_air = 3 } #Zurich
province = { id = 390   anti_air = 3 } #Lugano



country = {
	tag = SCH

	capital = 392 #Bern

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        freedom = 7
        free_market = 9
        professional_army = 2
        defense_lobby = 8
        interventionism = 1
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
		motorized = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 20

	# Resource Reserves
	energy	=	1000   
	metal	= 1000			
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 25

   nationalprovinces      = 
{  
	392 #Bern
	391 #Geneva
	389 #Zurich
	390 #Lugano 
} 
   ownedprovinces         = {  392 391 389 390  } 
   controlledprovinces    = {  392 391 389 390  } 

diplomacy = {
relation = { tag = ENG value = 50 }
relation = { tag = FRA value = 0 }
relation = { tag = GER value = 50 }
}

  SpyInfo                = { country = "SCH" NumberOfSpies = 3 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, MR, CAS 1930

4050 4060 # Single Engined 1936, Int

4290 4320 # double Engined 1929, escort brigade 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations


2400
2800 # Basic Armoured Car

2550  # GW tank 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1310 # Engineers

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refining

1190 # GW Cavalry

1010 1020 1110 10110 # Infantry Division

6100 6110 6120 # Firepower doc

	}


##############################
# Swiss army by Lord Rommel
# Datas by league of nations
# OOB basing on Stahl-Opas Datas
# 5.2.2013
##############################



landunit = {
	id = { type = 30600 id = 1 }
	location = 391 #Geneva
	name = "1. Armeekorps"
		division = { id = { type = 30600 id = 2 } name = "Gebirgsbrigade 10" type = bergsjaeger model = 0 extra = artillery }
		division = { id = { type = 30600 id = 3 } name = "Gebirgsbrigade 11" type = bergsjaeger model = 0 extra = artillery }
	}

landunit = {
	id = { type = 30600 id = 4 }
	location = 392 #Bern
	name = "2. Armeekorps"
		division = { id = { type = 30600 id = 5 } name = "3. Division"    type = bergsjaeger model = 0 extra = artillery }
		division = { id = { type = 30600 id = 6 } name = "4. Division"    type = infantry    model = 0 extra = artillery }
		division = { id = { type = 30600 id = 7 } name = "5. Division"    type = infantry    model = 0 strength = 81 }
		division = { id = { type = 30600 id = 8 } name = "Grenzbrigade 4" type = garrison    model = 0 strength = 73 }
		division = { id = { type = 30600 id = 9 } name = "Grenzbrigade 5" type = garrison    model = 0 strength = 71 }
	}

landunit = {
	id = { type = 30600 id = 10 }
	location = 389 #Zurich
	name = "3. Armeekorps"
		division = { id = { type = 30600 id = 11 } name = "1. Division"       type = infantry  model = 0 extra = artillery }
		division = { id = { type = 30600 id = 12 } name = "6. Division"       type = infantry  model = 0 extra = artillery }
		division = { id = { type = 30600 id = 13 } name = "Grenzbrigade 6"    type = garrison  model = 0 extra = anti_air }
        division = { id = { type = 30600 id = 14 } name = "Leichte Brigade 2" type = motorized model = 0 strength = 51 }
	}
	
landunit = {
	id = { type = 30600 id = 15 }
	location = 390 #Lugano
	name = "4. Armeekorps"
		division = { id = { type = 30600 id = 16 } name = "Gebirgsbrigade 12" type = bergsjaeger model = 0 extra = artillery }
		division = { id = { type = 30600 id = 17 } name = "Grenzbrigade 7"    type = garrison    model = 0 strength = 100 }
		division = { id = { type = 30600 id = 18 } name = "Grenzbrigade 8"    type = garrison    model = 0 strength = 79 }
		division = { id = { type = 30600 id = 19 } name = "Leichte Brigade 1" type = motorized   model = 0 strength = 18 }
	}	

landunit = {
	id = { type = 30600 id = 20 }
	location = 389 #Zurich
	name = "Armeetruppenreserve"
	    division = { id = { type = 30600 id = 21 } name = "Kommandant Heer" type = hq model = 0 extra = engineer }
		division = { id = { type = 30600 id = 22 } name = "2. Division"     type = infantry  model = 0 strength = 79	}
	}
	
landunit = {
	id = { type = 30600 id = 23 }
	location = 391 #Geneva
	name = "Division Murten"
		division = { id = { type = 30600 id = 24 } name = "Grenzbrigade 1"    type = garrison    model = 0 strength = 83 }
		division = { id = { type = 30600 id = 25 } name = "Grenzbrigade 2"    type = garrison    model = 0 strength = 73 }
	}
	
landunit = {
	id = { type = 30600 id = 26 }
	location = 389 #Zurich
	name = "Division Gempen"
		division = { id = { type = 30600 id = 27 } name = "Grenzbrigade 3"    type = garrison    model = 0 extra = anti_air }
	}
		
	
### AIRFORCE
	
airunit = {
	id = { type = 30600 id = 60 }
 	location = 392 #Bern
	base = 392 #Bern
 	name = "Schweizer Luftwaffe" # strength reduced to simulate buildup process
	    division = { id = { type = 30600 id = 61 } name = "Jagdgeschwader 1" strength = 5 type = interceptor model = 1 }
	    division = { id = { type = 30600 id = 62 } name = "Jagdgeschwader 2" strength = 5 type = interceptor model = 1 }
		division = { id = { type = 30600 id = 63 } name = "Kampfgeschwader" strength = 5 type = cas model = 0 extra = escort brigade_model = 0 }
		
	}
	
# dormant "Aktivdienst" fortress and border guard units; 160.000 men in addition to 1936 army and mobilization manpower

	landdivision = { id = { type = 30600 id = 30 } name = "1. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 31 } name = "2. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 32 } name = "3. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 33 } name = "4. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 34 } name = "5. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 35 } name = "6. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 36 } name = "7. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 37 } name = "8. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 38 } name = "9. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 39 } name = "10. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 40 } name = "11. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 41 } name = "12. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 42 } name = "13. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 43 } name = "14. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 44 } name = "15. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 45 } name = "16. Festungsdivision" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }	
	
	landdivision = { id = { type = 30600 id = 46 } name = "Stadtkommando Zürich" type = garrison model = 1 extra = anti_air dormant = yes locked = yes }	
	landdivision = { id = { type = 30600 id = 47 } name = "Festung Sargans"      type = garrison model = 1 extra = anti_air dormant = yes locked = yes }
	landdivision = { id = { type = 30600 id = 48 } name = "Stadtkommando Basel"  type = garrison model = 1 extra = anti_air dormant = yes locked = yes }

} # End File
