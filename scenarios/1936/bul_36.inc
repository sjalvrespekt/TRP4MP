# geändert Zergel, 01.11.2010, Anpassung Province ID an DH

province = {
	id = 326
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}

	naval_base = {
		size = 5
		current_size = 5
		}
	}

province = {
	id = 321
	air_base = {
		size = 2
		current_size = 2
		}
	}

#Anti Aircraft Batteries
province = { id = 321   anti_air = 2 } #Sofia

country = {
	tag = BUL

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 6
        professional_army = 6
        defense_lobby = 5
        interventionism = 9
   	}
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy		= 1000   
	metal		= 1000		
	rare_materials 	= 500	
	oil 		= 500	
	supplies 	= 500
	money 		= 50	

	manpower = 89
	capital = 321
	
	transports = 10
	escorts = 7

	
    ownedprovinces =      {
 	318 #Vidin->Varca
 	323 #Pleven->Pleven
 	325 #Burgas->Varna
 	324 #Plovdiv->Plovdiv
 	321 #Sofia
 	320 #Gorna Dzumaja 
 	319 #Haskovo->Plovdiv
 	326 #Varna->Varna
 	317 #Ruse->Pleven
 	322 #Gabrovo->Pleven
	 }
    controlledprovinces = {
	318 #Vidin->Varca
 	323 #Pleven->Pleven
 	325 #Burgas->Varna
 	324 #Plovdiv->Plovdiv
 	321 #Sofia
 	320 #Gorna Dzumaja 
 	319 #Haskovo->Plovdiv
 	326 #Varna->Varna
 	317 #Ruse->Pleven
 	322 #Gabrovo->Pleven
	  }
    nationalprovinces =   {
        318 #Vidin->Varca
 	323 #Pleven->Pleven
 	325 #Burgas->Varna
 	324 #Plovdiv->Plovdiv
 	321 #Sofia
 	320 #Gorna Dzumaja 
 	319 #Haskovo->Plovdiv
 	326 #Varna->Varna
 	317 #Ruse->Pleven
 	322 #Gabrovo->Pleven
		
	#Macedonia and Greece 
 	#365 #Thessaloniki->Salonika
 	#366 #Kozani->Edessa
 	#333 #Skopje->Skopje
 	#328 #Kumanovo->Stip
	#334 #Tetovo->Skopje
 	#363 #Xanthi->Kavala
 	#364 #Kavala
	#370 #Alexandroupoli

	#Rumänien
	307 #Dobrich->Constanta
	
	#Yugoslavia
	#331
	  }

diplomacy = {
relation = { tag = ENG value = 20 }
relation = { tag = FIN value = 35 }
relation = { tag = FRA value = 20 }
relation = { tag = GER value = 25 }
relation = { tag = GRE value = -75 }
relation = { tag = ITA value = 150 }
relation = { tag = ROM value = 25 }
relation = { tag = SOV value = 15 }
relation = { tag = TUR value = 75 }
relation = { tag = YUG value = 25 }
}
  SpyInfo                = { country = "BUL" NumberOfSpies = 5 }

	# Eastern Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, MR, CAS 1930
4290 4300 # Double Engined 1929, TB 1930


2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic Oil Refining

1190 # GW Cavalry

1010 # Inf Div

1310 # Early logistics

9010 9020 9030 # Aerial warfare, basic doctrines

6400 6410 # Light Inf

3010 # Escorts prewar

}

 dormant_teams = { 816 818 } #waken by event in bulgaria events

############################################################
# bulgarian army by Lord Rommel
############################################################

landunit = {
 	id = { type = 19000 id = 3001 }
 	location = 321 # Sofia
 	name = "1-va Armija"
	    division = { id = { type = 19000 id = 3002 } name = "Bylgarska Armija"              experience = 20 type = hq      model = 0 }
		division = { id = { type = 19000 id = 3003 } name = "1-va Sofiiska pekhotna divizija" strength = 50 type = d_02    model = 0 }
		division = { id = { type = 19000 id = 3004 } name = "6-ta Bdinska pekhotna divizija"  strength = 50 type = d_02    model = 0 }
		division = { id = { type = 19000 id = 3005 } name = "7-ma Rilska pekhotna divizija"   strength = 50 type = d_02    model = 0 }
		division = { id = { type = 19000 id = 3006 } name = "1-ta Burza divizija"             strength = 25 type = cavalry model = 1 }
	}

landunit = {
 	id = { type = 19000 id = 3007 }
 	location = 324 # Plovdiv
 	name = "2-ra Armija"
		division = { id = { type = 19000 id = 3008 } name = "2-ra Trakiiska pekhotna divizija"  strength = 50 type = d_02    model = 0 }
		division = { id = { type = 19000 id = 3009 } name = "3-ta Balkanska pekhotna divizija"  strength = 50 type = d_02    model = 0 }	
 		division = { id = { type = 19000 id = 3010 } name = "8-a Tundzhanska pekhotna divizija" strength = 50 type = d_02    model = 0 }
		division = { id = { type = 19000 id = 3011 } name = "2-ra Burza divizija"               strength = 25 type = cavalry model = 1 }
}

landunit = {
 	id = { type = 19000 id = 3012 }
 	location = 326 #Varna
 	name = "3-ta Armija"
		division = { id = { type = 19000 id = 3013 } name = "4-ta Preslavska pekhotna divizija" strength = 50 type = d_02 model = 0 }
		division = { id = { type = 19000 id = 3014 } name = "5-ta Dunavska pekhotna divizija"   strength = 50 type = d_02 model = 0 }
		division = { id = { type = 19000 id = 3015 } name = "9-ta Plevenska pekhotna divizija"  strength = 10 type = d_02 model = 0 }
	}
	
#3119004 - Bulgaria rearmament
    landdivision = { dormant = yes id = { type = 19000 id = 3020 } name = "Bronirana brigada" type = armor model = 4 strength = 75 } 
	landdivision = { dormant = yes id = { type = 19000 id = 3021 } name = "Broniran Polk"     type = armor model = 2 strength = 35 max_strength = 50 } 
	
###########################################
# Air force basing on the 1934 structure. 
# Formations had just a few planes. Most parts DAR-1 and DAR-2 planes. 
# In 1937 bulgaria got planes as a gift by the Reich. In 1938 bulgaria got planes form the annexion of the CSSR.
# In 1939 bulgaria had ~390 planes. Most of them were gifts from germany.
###########################################

airunit = { 
	location = 326
	id = { type = 19000 id = 3040 } 
	name = "Vuzdushnite na Negovo Velichestvo Voiski"
	base = 326
	    division = { id = { type = 19000 id = 3041 } name = "1-ta Orlyaks" type = interceptor     model = 0 strength  = 15 } 
	    division = { id = { type = 19000 id = 3042 } name = "2-ta Orlyaks" type = multi_role      model = 0 strength  = 5  } 
		division = { id = { type = 19000 id = 3043 } name = "3-ta Orlyaks" type = tactical_bomber model = 0 strength  = 10 } 
	}
		
#navalunit = {
#	id = { type = 19000 id = 1001 }
#	name = "Bulgarska Flota"
#	location = 326
#	base = 326
#		division = { id = { type = 19000 id = 1002 } name = "1-va Podvodnikova" type = destroyer model = 0 }
#	}




} # End File



