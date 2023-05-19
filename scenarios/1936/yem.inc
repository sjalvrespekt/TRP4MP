# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

country = {
	tag = YEM
	#puppet = ENG
	#control = ENG

	# Resource Reserves
	energy	=	200   
	metal	=	200	
	rare_materials =	200	
	oil =	200	
	supplies =	200
	money = 10
	
	manpower = 20
	capital = 	1050
	
	transports = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 4
        professional_army = 1
        defense_lobby = 5
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	}

	#inventions = { 2700061 2700063 2700065 }

	
    ownedprovinces =      {
1050 #Sanaa
	 }
    controlledprovinces = {
1050 #Sanaa
	  }
    nationalprovinces =   {
1050 #Sanaa
	}

diplomacy = {
relation = { tag = AST value = 0 } #150
relation = { tag = BHU value = 0 } #150
relation = { tag = CAN value = 0 } #150
relation = { tag = ENG value = 0 } #150
relation = { tag = FRA value = 25 } #150
relation = { tag = GER value = 0 }
relation = { tag = IRQ value = 125 }
relation = { tag = ITA value = 50 }
relation = { tag = NEP value = 0 } #150
relation = { tag = NZL value = 0 } #150
relation = { tag = OMN value = 150 }
relation = { tag = SAF value = 0 } #150
relation = { tag = SAU value = 125 }
relation = { tag = TUR value = 35 }
relation = { tag = USA value = 100 }
}
  SpyInfo                = { country = "YEM" NumberOfSpies = 2 }
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

3010 # Escorts pre-War
}

landunit = {
	id = { type = 16800 id = 1 }
	name = "Royal Yemenite Army"
	location = 1050
		division = { id = { type = 16800 id = 2 } name = "Royal Division" type = cavalry model = 0 strength = 15 }
	}

} # End File