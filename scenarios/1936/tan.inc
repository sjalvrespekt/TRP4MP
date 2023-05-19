# geändert Zergel, 18.10.2010, Anpassung Province ID an DH

country = {
	tag = TAN

	puppet = SOV
	control = SOV

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 	1119

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 10
        freedom = 3
        free_market = 3
        professional_army = 1
        defense_lobby = 5
        interventionism = 5
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	manpower = 0 #only 65k inhabitants, no standing army => 10k in case of war

	
    ownedprovinces =      {
1119 #Kyzyl
	 }
    controlledprovinces = {
1119 #Kyzyl
	  }
    nationalprovinces =   {
1119 #Kyzyl
	}

diplomacy = {
relation = { tag = MON value = 200 }
relation = { tag = SIK value = 125 }
relation = { tag = SOV value = 200 }
relation = { tag = TAN value = 50 }
}
  SpyInfo                = { country = "TAN" NumberOfSpies = 2 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}

} #End File
