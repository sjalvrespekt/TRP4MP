# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

province = {
	id = 1048
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

country = {
	tag = SAU
	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 1045

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 2
        defense_lobby = 5
        interventionism = 3
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 20
	
	transports = 10

	
    ownedprovinces =      {
	1048 #Medina
 	1046 #Al-Jawf=>Jawf
 	1044 #Hayel
 	1045 #Riyadh
 	1040 #Dammam
 	1047 #El Hofuf=>Rub al Khali
 	1049 #Mecca=>Abha/Jiddah
	 }
    controlledprovinces = {
	1048 #Medina
	1046 #Al-Jawf=>Jawf
	1044 #Hayel
	1045 #Riyadh
	1040 #Dammam
	1047 #El Hofuf=>Rub al Khali
	1049 #Mecca=>Abha/Jiddah
	  }
    nationalprovinces =   {
	1048 #Medina
	1046 #Al-Jawf=>Jawf
	1044 #Hayel
	1045 #Riyadh
	1040 #Dammam
	1047 #El Hofuf=>Rub al Khali
	1049 #Mecca=>Abha/Jiddah
	  }

diplomacy = {
relation = { tag = AFG value = 50 }
relation = { tag = AUS value = 50 }
relation = { tag = ENG value = 100 }
relation = { tag = FRA value = 10 }
relation = { tag = IRQ value = 125 }
relation = { tag = ITA value = -25 }
relation = { tag = OMN value = 125 }
relation = { tag = PER value = 100 }
relation = { tag = SOV value = 0 }
relation = { tag = TUR value = 50 }
relation = { tag = YEM value = 125 }
}
  SpyInfo                = { country = "SAU" NumberOfSpies = 3 }

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

3010 # Prewar Escort
	}

landunit = {
	location = 1045
	name = "Royal Saudi Army"
	id = { type = 22600 id = 1 }
		division = { id = { type = 22600 id = 2 } name = "al-Mushati al-1i" type = garrison model = 0 }
		division = { id = { type = 22600 id = 3 } name = "Royal Lifeguard" type = garrison model = 0 }
		division = { id = { type = 22600 id = 4 } name = "Royal Saudi Cav. 'Medina'" type = cavalry model = 0 }
	}

} # End File