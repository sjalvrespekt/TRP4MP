#converted to DH, March 6th 2011, Kane
province = {
	id = 1034 #Baghdad
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}
	}

province = {
	id = 1032
	anti_air = 2
	naval_base = {
		size = 4
		current_size = 4
		}
	}

#Anti Aircraft Batteries
province = { id = 1029   anti_air = 1 } #Mosul


country = {
    tag = IRQ

	#puppet = ENG
	#control = ENG

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 5
        freedom = 4
        free_market = 6
        professional_army = 3
        defense_lobby = 7
        interventionism = 6
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }
		
	# Resource Reserves
	energy	=	200   
	metal	=	200	
	rare_materials =	100	
	oil =	1000	
	supplies =	500
	manpower = 0 #48
	money = 10

	capital = 	1034 #Baghdad

	transports = 10

   nationalprovinces      = 
{  
	1036 #Kirkuk
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
	1030 #Karbala
	1027 #Arbil=>Samarra
	1029 #Mosul
	1089 #Abadan(Ahvaz)
	1041 #Kuwait 
} 
   ownedprovinces         = 
{  
	1036 #Kirkuk
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
	1030 #Karbala
	1027 #Arbil=>Samarra
	1029 #Mosul
} 
   controlledprovinces    = 
{  
	1036 #Kirkuk
	1033 #El Hillah
	1034 #Baghdad
	1035 #Kut
	1037 #An Nasiriyyah
	1028 #Al Amarah
	1032 #Basrah
	1031 #An Najaf
	1030 #Karbala
	1027 #Arbil=>Samarra
	1029 #Mosul
} 
	


diplomacy = {
relation = { tag = AST value = 100 }
relation = { tag = BHU value = 100 }
relation = { tag = CAN value = 100 }
relation = { tag = ENG value = 100 }
relation = { tag = FRA value = 100 }
relation = { tag = GER value = 25 }
relation = { tag = ITA value = 25 }
relation = { tag = NEP value = 100 }
relation = { tag = NZL value = 100 }
relation = { tag = OMN value = 125 }
relation = { tag = PER value = 125 }
relation = { tag = SAF value = 100 }
relation = { tag = SAU value = 125 }
relation = { tag = USA value = 120 }
relation = { tag = YEM value = 125 }
}
  SpyInfo                = { country = "IRQ" NumberOfSpies = 2 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare

3010 # Prewar Escort
3800 # Prewar TP
	}


landunit = {
 	id = { type = 22500 id = 1 }
 	name = "Royal Iraqi Army"
 	location = 1034 #Baghdad
	    #army had 20000 soldiers in 1937.
 		division = { id = { type = 22500 id = 2 } name = "1. Iraqi Militia Division"     strength = 80 type = militia  model = 0 } 
		division = { id = { type = 22500 id = 3 } name = "2. Iraqi Militia Division"     strength = 80 type = militia  model = 0 }
		division = { id = { type = 22500 id = 4 } name = "Iraqi Cavalry Brigade"         strength = 30 type = cavalry  model = 0 }
		division = { id = { type = 22500 id = 8 } name = "Iraqi Frontier Guards Brigade" strength = 50 type = garrison model = 0 }
	}
         	


airunit = {
 	id = { type = 22500 id = 5 }
 	name = "Royal Army Air Force"
 	location = 1034 #Baghdad
	base = 1034 #Baghdad
 		division = { id = { type = 22500 id = 6 } name = "1. RIAF Fighter Group" strength = 30 type = interceptor model = 0 }
	}

} # End File