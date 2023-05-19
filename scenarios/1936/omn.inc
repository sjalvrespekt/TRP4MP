# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 1052 # Masquat
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}
 ##################### 
 # Country main data # 
 ##################### 
country = {
	tag = OMN
	manpower = 20

   transports = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
	date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 5
        professional_army = 3
        defense_lobby = 4
        interventionism = 3
    	}
allowed_divisions = 
{ 
        militia = yes 
        cavalry = yes 
}
	puppet = ENG
	control = ENG

	# Resource Reserves
	energy	=	200   
	metal	=	200	
	rare_materials =	100	
	oil =	200	
	supplies =	200
	money = 10	

	capital = 	1052
	


 

	#inventions = { 2700061 2700063 2700065 }

	
    ownedprovinces =      {
		1052 #Masqat=>Mascate
		1043 #Khasab(neu)
	}
    controlledprovinces = {
		1052 #Masqat=>Mascate
		1043 #Khasab(neu)
	}
    nationalprovinces =   {
		1052 #Masqat=>Mascate
		1043 #Khasab(neu)
	}

diplomacy = {
relation = { tag = AST value = 150 }
relation = { tag = BHU value = 150 }
relation = { tag = CAN value = 150 }
relation = { tag = ENG value = 150 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = IRQ value = 125 }
relation = { tag = ITA value = 50 }
relation = { tag = NEP value = 150 }
relation = { tag = NZL value = 150 }
relation = { tag = SAF value = 150 }
relation = { tag = SAU value = 125 }
relation = { tag = TUR value = 35 }
relation = { tag = USA value = 100 }
relation = { tag = YEM value = 150 }
}
  SpyInfo                = { country = "OMN" NumberOfSpies = 1 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare

3010 # Escorts prewar
	}

landunit = {
	id = { type = 11114 id = 1 }
	name = "Royal Omani Army"
	location = 1052
		division = { id = { type = 11114 id = 2 } name = "Royal Omani Army" type = cavalry model = 0 strength = 15 }
	}

} # End File
