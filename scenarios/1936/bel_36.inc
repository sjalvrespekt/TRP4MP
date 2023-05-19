province = {
	id = 894 #Matadi
	air_base = {
		size = 1
		current_size = 1
	}
	naval_base = {
		size = 3
		current_size = 3
	}
}

province = {
	id = 116 #Brussels
	air_base = {
		size = 6
		current_size = 6
	}
	}
province = {
	id = 114 #Bruges
	naval_base = {
		size = 3
		current_size = 3
	}
}
province = { #Antwerpen
	id = 115
	anti_air = 2

	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = { size = 6 current_size = 3 }
}


#Namur and Antwerpen
province = {	id = 115 landfort = 2	}
province = {	id = 113 landfort = 2	}

#Anti Aircraft Batteries
province = { id = 108   anti_air = 2 } #Liege
province = { id = 116   anti_air = 1 } #Bruxelles



country = {
    tag = BEL
	
	peacetime_ic_mod = 0.6 # all events up to WW2 breakout will lead to 1.0; plane crash event will boost to 1.2 for some few months

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 1
        free_market = 9
        freedom = 10
        professional_army = 5
        defense_lobby = 8
        interventionism = 8
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
		motorized = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	capital = 116
	manpower = 190
	
	transports = 100
	escorts = 21

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	

   nationalprovinces      = {  114 115 116 112 113 108 117 111 110 } 

###neu
   ownedprovinces         = 
{  
	114 #Bruges(Brügge)
	115 #Antwerpen
	116 #Brussels
	112 #Mons
	113 #Namur
	108 #Liege
	117 #Hasselt=>Antwerpen(split)
	111 #Arlon
	894 #Matadi=>Banana
	901 #Kikwit=>Leopoldville(split)
	904 #Stanleyville
	903 #Aba=>Buta
	905 #Costermanville
	906 #Coquilhatville
	902 #Luluabourg
	898 #Elisabethville
	897 #Kolwesi=>Kindu-Port-Empain
	899 #Leopoldville
	846 #Kigali
	847 #Usumbura=>Kigali(split)
	110 #Eupen
} 
   controlledprovinces    = {  114 115 116 112 113 108 117 111 894 901 904 903 905 906 902 898 897 899 846 847 110  } 
   claimedprovinces       = {  894 901 904 903 905 906 902 898 897 899 846 847 } #Belgian Congo

diplomacy = {
	relation = { tag = AST value = 75 }
	relation = { tag = CAN value = 150 }
	relation = { tag = DEN value = 100 }
	relation = { tag = ENG value = 150 }
	relation = { tag = FIN value = 100 }
	relation = { tag = FRA value = 120 }
	relation = { tag = GER value = 20 }
	relation = { tag = HOL value = 150 }
	relation = { tag = IRE value = 75 }
	relation = { tag = ITA value = -5 }
	relation = { tag = JAP value = -25 }
	relation = { tag = LUX value = 200 }
	relation = { tag = NOR value = 100 }
	relation = { tag = NZL value = 20 }
	relation = { tag = POR value = -20 }
	relation = { tag = SAF value = 35 }
	relation = { tag = SWE value = 100 }
	relation = { tag = USA value = 75 }
}
  SpyInfo                = { country = "BEL" NumberOfSpies = 6 }

	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
4050 # Single Engined 1936

4290 4300 4310 # double Engined 1929, tactical, naval
4330 # double Enginged 1396

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery
2400 # AT gun 
11730 2170 # tank destroyer

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 # Early infantry 36'
10110 # Mot 37'
1310 # Engineers
1190 1200 # Cavalry 36'

1110 # Early Mountain

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refining

# Naval Techs
#Naval Techs; Escorts up to pre-WW1
3010
3020
3800 # Prewar TP
# Naval doctrines
8180

6100 6110 6120 # Trench Warfare doctrine (land)
	}


####################################################################
# Armee belgique by Lord Rommel
####################################################################	

landunit = {
	id = { type = 11500 id = 1 }
	location = 116 #Brussels
	name = "Ière  corps d'armée"
		division = { id = { type = 11500 id = 2 } name = "1ère Division d'Infanterie" type = infantry model = 0 extra = anti_tank brigade_model = 0 strength = 30 }
		division = { id = { type = 11500 id = 3 } name = "2ème Division d'Infanterie" type = infantry model = 0 strength = 30 }
		}

landunit = {
	id = { type = 11500 id = 4 }
	location = 112 #Mons
	name = "IIème  corps d'armée"
		division = { id = { type = 11500 id = 5 } name = "3ème Division d'Infanterie" type = infantry model = 0 extra = anti_tank brigade_model = 0 strength = 30 }
		division = { id = { type = 11500 id = 6 } name = "4ème Division d'Infanterie" type = infantry model = 0 strength = 30 }
		}

landunit = {
	id = { type = 11500 id = 7 }
	location = 108 #Liege
	name = "IIIème  corps d'armée"
		division = { id = { type = 11500 id = 8 } name = "5ème Division d'Infanterie" type = infantry model = 0 extra = anti_tank brigade_model = 0 strength = 30 }
		division = { id = { type = 11500 id = 9 } name = "6ème Division d'Infanterie" type = infantry model = 0 strength = 30 }
		division = { id = { type = 11500 id = 10 } name = "Liège Fortress" type = garrison model = 0 strength = 10 extra = anti_air }
		}
		
landunit = {
	id = { type = 11500 id = 11 }
	location = 116 #Brussels
	name = "Armée de Lancers"
		division = { id = { type = 11500 id = 12 } name = "1ère Division de cavalerie" type = motorized model = 0 strength = 35 extra = tank_destroyer brigade_model = 1 }
		division = { id = { type = 11500 id = 13 } name = "2ème Division de cavalerie" type = motorized model = 0 strength = 35 extra = tank_destroyer brigade_model = 1 }
		}	

landunit = {
	id = { type = 11500 id = 14 }
	location = 113 #Namur
	name = "Corps de Chasseurs Ardennais"
		division = { id = { type = 11500 id = 15 } name = "1ère Chasseurs Ardennais" type = bergsjaeger model = 0 strength = 33 extra = armored_car }		
	    division = { id = { type = 11500 id = 16 } name = "Namur Fortress" type = garrison model = 0 strength = 10 extra = anti_air }
	}	
	
####################################################################
# Free belgian army
####################################################################

landdivision = { dormant = yes id = { type = 11500 id = 50 } name = "Brigade Piron" type = motorized model = 2 strength = 20 }
		
####################################################################
# Colonial troops
# The army in belgian congo had 40.ooo soldiers in 1942.
####################################################################		

landunit = {
	id = { type = 11500 id = 23 }
	location = 894 #Matadi
	name = "Force Publique"
		division = { id = { type = 11500 id = 24 } name = "1ère Groupe de Force Publique" type = garrison model = 0 strength = 20 locked = yes }
		division = { id = { type = 11500 id = 25 } name = "2éme Groupe de Force Publique" type = garrison model = 0 strength = 20 locked = yes }
		}
			
####################################################################
# Belgian airforce
####################################################################

airunit = {
    id = { type = 11500 id = 100 }
    name = "Composante air"
    location = 116 #Brussels
    base = 116
		division = { id = { type = 11500 id = 110 } name = "2ème Régiment d'Aéronautique" strength = 5 type = interceptor model = 0  }
	}

####################################################################
# Belgian navy
####################################################################
navalunit = {
	id = { type = 11500 id = 29 }
	location = 114 #Bruges
	base = 114 #Bruges
	name = "1ste Transportatie Smaldeel"
		division = { id = { type = 11500 id = 28 } name = "Zinnia" type = d_09 model = 0 }
		division = { id = { type = 11500 id = 26 } name = "Emile Francqui" type = transport model = 0 }
		division = { id = { type = 11500 id = 27 } name = "Jan Breydel" type = transport model = 0 }
	}
	
####################################################################
# Belgian army 1940 - Battle of France balance
####################################################################	
#1 corps - Tongeren
landdivision = { dormant = yes id = { type = 11500 id = 500 }  name = "4ème Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 } 
landdivision = { dormant = yes id = { type = 11500 id = 501 }  name = "7ème Division d'Infanterie"       type = infantry    model = 2 extra = artillery brigade_model = 3 }  	
#2 corps - Aarschot
landdivision = { dormant = yes id = { type = 11500 id = 502 }  name = "6ème Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 }	
landdivision = { dormant = yes id = { type = 11500 id = 503 }  name = "9ème Division d'Infanterie"       type = infantry    model = 2 extra = artillery brigade_model = 3 }
landdivision = { dormant = yes id = { type = 11500 id = 504 }  name = "11ème Division d'Infanterie"      type = infantry    model = 2 extra = artillery brigade_model = 3 }
#3 corps - Liege
landdivision = { dormant = yes id = { type = 11500 id = 505 }  name = "2ème Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 }	
landdivision = { dormant = yes id = { type = 11500 id = 506 }  name = "3ème Division d'Infanterie"       type = infantry    model = 2 extra = artillery brigade_model = 3 } 
landdivision = { dormant = yes id = { type = 11500 id = 507 }  name = "Position fortifiée de Liège"      type = garrison    model = 1 }  
#4 corps - Lier
landdivision = { dormant = yes id = { type = 11500 id = 508 }  name = "12ème Division d'Infanterie"      type = infantry    model = 2 extra = anti_tank brigade_model = 0 } 
landdivision = { dormant = yes id = { type = 11500 id = 509 }  name = "15ème Division d'Infanterie"      type = d_02        model = 1 } 
landdivision = { dormant = yes id = { type = 11500 id = 510 }  name = "18ème Division d'Infanterie"      type = d_02        model = 1 }  
#5 corps - Anvers
landdivision = { dormant = yes id = { type = 11500 id = 511 }  name = "13ème Division d'Infanterie"      type = d_02        model = 1 }  
landdivision = { dormant = yes id = { type = 11500 id = 512 }  name = "17ème Division d'Infanterie"      type = d_02        model = 1 }  
#6 corps - Brussel
landdivision = { dormant = yes id = { type = 11500 id = 513 }  name = "5ème Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 } 	
landdivision = { dormant = yes id = { type = 11500 id = 514 }  name = "10ème Division d'Infanterie"      type = infantry    model = 2 extra = artillery brigade_model = 3 } 
#7 corps - Namur
landdivision = { dormant = yes id = { type = 11500 id = 515 }  name = "8ème Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 }  	
landdivision = { dormant = yes id = { type = 11500 id = 516 }  name = "2ème Div. de Chasseurs Ardennais" type = bergsjaeger model = 0 } 
landdivision = { dormant = yes id = { type = 11500 id = 517 }  name = "Position fortifiée de Namur"      type = garrison    model = 1 } 
#cav corps - Sint-Truiden
landdivision = { dormant = yes id = { type = 11500 id = 518 }  name = "1ère Division d'Infanterie"       type = infantry    model = 2 extra = anti_tank brigade_model = 0 } 	
landdivision = { dormant = yes id = { type = 11500 id = 519 }  name = "14ème Division d'Infanterie"      type = d_02        model = 1 } 
landdivision = { dormant = yes id = { type = 11500 id = 520 }  name = "1ère Division de Cavalerie"       type = motorized   model = 1 extra = tank_destroyer brigade_model = 1 }  
#coastal corps - Brugge
landdivision = { dormant = yes id = { type = 11500 id = 521 }  name = "16ème Division d'Infanterie"      type = d_02        model = 1 } 
#group k - St Hubert
landdivision = { dormant = yes id = { type = 11500 id = 522 }  name = "1ère Div. de Chasseurs Ardennais" type = bergsjaeger model = 0 } 
landdivision = { dormant = yes id = { type = 11500 id = 523 }  name = "2ème Division de Cavalerie"       type = motorized   model = 1 extra = tank_destroyer brigade_model = 1 } 	
#airforce
airdivision  = { dormant = yes id = { type = 11500 id = 530 } name = "1ère Régiment d'Aéronautique" type = multi_role    model = 1 }
airdivision  = { dormant = yes id = { type = 11500 id = 531 } name = "2ème Régiment d'Aéronautique" type = interceptor   model = 1 }
airdivision  = { dormant = yes id = { type = 11500 id = 532 } name = "3ème Régiment d'Aéronautique" type = cas           model = 1 strength = 35 }

####################################################################
landdivision = { dormant = yes id = { type = 11500 id = 540 }  name = "1ère Div. de Fusiliers" type = d_02 model = 3 } 
landdivision = { dormant = yes id = { type = 11500 id = 541 }  name = "2ème Div. de Fusiliers" type = d_02 model = 3 } 
landdivision = { dormant = yes id = { type = 11500 id = 542 }  name = "3ème Div. de Fusiliers" type = d_02 model = 3 } 
landdivision = { dormant = yes id = { type = 11500 id = 543 }  name = "4ème Div. de Fusiliers" type = d_02 model = 3 } 

		
} # End File

