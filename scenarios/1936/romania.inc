# geändert Zergel, 22.10.2010, Anpassung Province ID an DH

province = {
	id = 315
	anti_air = 2
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 316
	anti_air = 2
	air_base = {
		size = 5
		current_size = 5
	}
}

province = {
	id = 310 #Constanta=>Tulcea
	naval_base = {
		size = 2
		current_size = 2
	}
}

#Anti Aircraft Batteries
province = { id = 310   anti_air = 2 } #Constanta
province = { id = 311   anti_air = 2 } #Ploesti

country = {
    tag = ROM


	capital = 316

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        freedom = 4
        free_market = 4
        professional_army = 3
        defense_lobby = 5
        interventionism = 6
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 100
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 15
	
	transports = 25
	escorts = 20

	
    ownedprovinces =      {
	306 #Ismail
 	313 #Sulina
 	310 #Constanta=>Tulcea
 	307 #Dobrich=>Constanta
 	304 #Chisinau
 	305 #Cahul
 	298 #Galati
 	309 #Braila
 	314 #Calarasi
 	316 #Bucharest
 	308 #Giurgiu
 	315 #Craiova
 	311 #Ploesti
 	291 #Sibiu
 	293 #Miercurea Ciuc
 	299 #Bacau
 	297 #Iasi
 	303 #Balti
 	302 #Hotin
 	300 #Cernauti
 	301 #Suceava
 	292 #Bistrita
 	288 #Cluj
 	296 #Oradea
 	286 #Arad
 	287 #Turda
 	289 #Albalulia
 	295 #Resita
 	285 #Timisoara
 	312 #Turnu Severin
	 }
    controlledprovinces = {
	306 #Ismail
 	313 #Sulina
 	310 #Constanta=>Tulcea
 	307 #Dobrich=>Constanta
 	304 #Chisinau
 	305 #Cahul
 	298 #Galati
 	309 #Braila
 	314 #Calarasi
 	316 #Bucharest
 	308 #Giurgiu
 	315 #Craiova
 	311 #Ploesti
 	291 #Sibiu
 	293 #Miercurea Ciuc
 	299 #Bacau
 	297 #Iasi
 	303 #Balti
 	302 #Hotin
 	300 #Cernauti
 	301 #Suceava
 	292 #Bistrita
 	288 #Cluj
 	296 #Oradea
 	286 #Arad
 	287 #Turda
 	289 #Albalulia
 	295 #Resita
 	285 #Timisoara
 	312 #Turnu Severin
	  }
    nationalprovinces =   {
	306 #Ismail
 	313 #Sulina
 	310 #Constanta=>Tulcea
 	307 #Dobrich=>Constanta
 	304 #Chisinau
 	305 #Cahul
 	298 #Galati
 	309 #Braila
 	314 #Calarasi
 	316 #Bucharest
 	308 #Giurgiu
 	315 #Craiova
 	311 #Ploesti
 	291 #Sibiu
 	293 #Miercurea Ciuc
 	299 #Bacau
 	297 #Iasi
 	303 #Balti
 	302 #Hotin
 	300 #Cernauti
 	301 #Suceava
 	292 #Bistrita
 	288 #Cluj
 	296 #Oradea
 	286 #Arad
 	287 #Turda
 	289 #Albalulia
 	295 #Resita
 	285 #Timisoara
 	312 #Turnu Severin
	  }

diplomacy = {
relation = { tag = BUL value = 25 }
relation = { tag = CZE value = 20 }
relation = { tag = ENG value = 50 }
relation = { tag = FIN value = 40 }
relation = { tag = FRA value = 50 }
relation = { tag = GER value = 50 }
relation = { tag = GRE value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = HUN value = 0 }
relation = { tag = ITA value = 50 }
relation = { tag = POL value = 40 }
relation = { tag = SOV value = 0 }
relation = { tag = TUR value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = YUG value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}
  SpyInfo                = { country = "ROM" NumberOfSpies = 5 }


	# Eastern Minor Tech '36
	deactivate = { }
	
	dormant_teams = { 2926 2927 2928 2929 2930 2931 2942 2941 2943 }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930


4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930


#############################

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery
2400

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

1310 # Early logistics

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion


6100 6110 6120 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8760

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3700 15080 # SS 1930
3800 # Prewar TP

	}

   #################################################
   # Romanian army
   #################################################
   # 1. Jan. 1936: #
   # 21 InfDivisionen, 2 GebDivs, 4 KavDivs #
   #################################################
   
   landunit = 
   {  location =  315 # Craiova
      name     = "I. Corpuri de armata"
      id       = {  type = 20600 id = 1  }
	  Division = { id = {  type = 20600 id = 10  } name = "Divizie 2 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 11  } name = "Divizie 3 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 12  } name = "Divizie 11 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 13  } name = "Divizie 19 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  316 # Bucharest
      name     = "II. Corpuri de armata"
      id       = {  type = 20600 id = 2  } 
	  Division = { id = {  type = 20600 id = 47  } name = "Fortele Terestre Române" type = hq model = 0 experience = 20 }
	  Division = { id = {  type = 20600 id = 14  } name = "Divizie 1 Garda" type = infantry model = 1 strength = 90 extra = artillery brigade_model = 1} 
	  Division = { id = {  type = 20600 id = 15  } name = "Divizie 4 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 16  } name = "Divizie 9 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 17  } name = "Divizie 13 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  304 # Chisinau
      name     = "III. Corpuri de armata"
      id       = {  type = 20600 id = 3 } 
	  Division = { id = {  type = 20600 id = 18  } name = "Divizie 12 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 19  } name = "Divizie 14 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 20  } name = "Divizie 15 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  297 # Iasi
      name     = "IV. Corpuri de armata"
      id       = {  type = 20600 id = 4  } 
	  Division = { id = {  type = 20600 id = 21  } name = "Divizie 7 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 22  } name = "Divizie 8 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  293 # Brasov
      name     = "V. Corpuri de armata"
      id       = {  type = 20600 id = 5  } 
	  Division = { id = {  type = 20600 id = 23  } name = "Divizie 1 Munte" type = bergsjaeger model = 0 strength = 50 } 
	  Division = { id = {  type = 20600 id = 24  } name = "Divizie 5 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 25  } name = "Divizie 6 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 26  } name = "Divizie 10 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 27  } name = "Divizie 21 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  288 # Cluj
      name     = "VI. Corpuri de armata"
      id       = {  type = 20600 id = 6  } 
	  Division = { id = {  type = 20600 id = 28  } name = "Divizie 2 Munte" type = bergsjaeger model = 0 strength = 50 } 
	  Division = { id = {  type = 20600 id = 29  } name = "Divizie 16 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 30  } name = "Divizie 17 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 31  } name = "Divizie 20 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  291 # Sibiu
      name     = "VII. Corpuri de armata"
      id       = {  type = 20600 id = 7  } 
	  Division = { id = {  type = 20600 id = 32  } name = "Divizie 1 Infanterie" type = infantry model = 0 strength = 40 } 
	  Division = { id = {  type = 20600 id = 33  } name = "Divizie 18 Infanterie" type = infantry model = 0 strength = 40 } 
   }
   
   landunit = 
   {  location =  316 # Bucharest
      name     = "Corpul de Cavalerie "
      id       = {  type = 20600 id = 8  } 
	  Division = { id = {  type = 20600 id = 34  } name = "Divizie 1 Cavalerie" type = cavalry model = 0 strength = 50 } 
	  Division = { id = {  type = 20600 id = 35  } name = "Divizie 2 Cavalerie" type = cavalry model = 0 strength = 50 } 
	  Division = { id = {  type = 20600 id = 36  } name = "Divizie 3 Cavalerie" type = cavalry model = 0 strength = 50 } 
	  Division = { id = {  type = 20600 id = 37  } name = "Divizie 4 Cavalerie" type = cavalry model = 0 strength = 50 } 
   }
   
#################################################
# Romania Navy
#################################################

navalunit = {
	location = 310 #Constanta=>Tulcea
	base = 310
	name = "Flota Romania de Mare"
	id = { type = 20600 id = 40 }
		division = { id = { type = 20600 id = 38 } name = "NMS Regele Ferdinand" type = destroyer model = 2 }
		division = { id = { type = 20600 id = 39 } name = "NMS Regina Maria" type = destroyer model = 2 }
		division = { id = { type = 20600 id = 41 } name = "NMS Marasti" type = d_09 model = 1 }
		division = { id = { type = 20600 id = 46 } name = "NMS Marasesti" type = d_09 model = 1 }
	}

###1937 Naval programm################################	
# pocket battleships
navaldivision = { dormant = yes id = { type = 20600 id = 100 } name = "NMS Mihai Viteazul"     type = heavy_cruiser     model = 6 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 101 } name = "NMS Stefan cel Mare"    type = heavy_cruiser     model = 6 strength = 100 } 
# scout cruisers
navaldivision = { dormant = yes id = { type = 20600 id = 102 } name = "NMS Calugareni"         type = light_cruiser     model = 4 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 103 } name = "NMS Selimbar"           type = light_cruiser     model = 4 strength = 100 } 
# destroyers
navaldivision = { dormant = yes id = { type = 20600 id = 104 } name = "NMS Eugeniu Rosca"      type = destroyer         model = 3 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 105 } name = "NMS Petre Barbuneanu"   type = destroyer         model = 3 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 106 } name = "NMS Eustatiu Sebastian" type = destroyer         model = 3 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 107 } name = "NMS Horia Macellariu"   type = destroyer         model = 3 strength = 100 } 
#coastal subs
navaldivision = { dormant = yes id = { type = 20600 id = 108 } name = "NMS Requinul"           type = nuclear_submarine model = 3 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 109 } name = "NMS Marsuinul"          type = nuclear_submarine model = 3 strength = 100 } 
navaldivision = { dormant = yes id = { type = 20600 id = 110 } name = "NMS Delfinul"           type = nuclear_submarine model = 3 strength = 100 } 
#minelayer
navaldivision = { dormant = yes id = { type = 20600 id = 111 } name = "NMS Amiral Murgescu"    type = d_09 model = 0 }
#division - equipped with german bought weapons 
landdivision = { dormant = yes id = { type = 20600 id = 120 } name = "Divizie 6 Cavalerie" type = cavalry model = 3 strength = 50 } 
landdivision = { dormant = yes id = { type = 20600 id = 121 } name = "Divizie 8 Cavalerie" type = cavalry model = 3 strength = 50 } 
landdivision = { dormant = yes id = { type = 20600 id = 122 } name = "Divizia 1 Blindata"  type = armor   model = 2 strength = 75 } 
landdivision = { dormant = yes id = { type = 20600 id = 123 } name = "Divizia 2 Blindata"  type = armor   model = 4 strength = 75 } 
#Frontier guards division
landdivision = { dormant = yes id = { type = 20600 id = 124 } name = "Divizia 1 Graniceri" type = d_02    model = 2 experience = 40 }
#################################################
# Romania Air Force
#################################################
	
airunit = {
	location = 316 #Bucuresti
	base = 316
	name = "Gruparea Aeriana de Lupta"
	id = { type = 20600 id = 42 }
		division = { id = { type = 20600 id = 43 } name = "Grupul 1 Avion de Vanatoare" type = interceptor     model = 0 strength = 25 }
		division = { id = { type = 20600 id = 50 } name = "Grupul 2 Avion de Vanatoare" type = interceptor     model = 0 strength = 15 }
		division = { id = { type = 20600 id = 44 } name = "Grupul 3 Tactic Bombardier"  type = tactical_bomber model = 0 strength = 15 }
		division = { id = { type = 20600 id = 45 } name = "Grupul Hidroavioane"         type = naval_bomber    model = 0 strength = 10 }
	}
	
#brigade_development = {
#        id = { type = 20600 id = 1400 }
#        cost = 0.6
#        size = 10
#        type = artillery
#		model = 1
#        date  = {  year = 1938 }
#		unitcost = yes
#        }
	
division_development = { 
name = "NMS Delfinul"
type = submarine 
model = 0 
cost = 0.04 #0.4
new_model = no unitcost = yes
id = { type = 20600 id = 49 } 
date = { year = 1936 month = may day = 4 } 
} 

} # End File