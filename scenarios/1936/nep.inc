# geändert Zergel, 21.10.2010, Anpassung Province ID an DH

country = {
	tag = NEP
#	puppet = ENG #large english political influence, but just Gurkha troops sent to serve in armies of British India and ENG
#	control = ENG

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 4
        political_left = 3
        freedom = 6
        free_market = 5
        professional_army = 9
        defense_lobby = 2
        interventionism = 2
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 
	
	#inventions = { 2700061 2700063 2700065 }
	
	# Resource Reserves
	energy	=	200   metal	=	200	rare_materials =	100	oil =	200	supplies =	200
	money = 10

	capital = 	1457
	manpower = 0 #was 20, set to 0 to account for Gurkha elite units in ENG
	
	ownedprovinces =      {
		1457 #Kathmandu
	}
	controlledprovinces = {
		1457 #Kathmandu
	}
	nationalprovinces =   {
		1457 #Kathmandu
	}

diplomacy = {
relation = { tag = AST value = 200 }
relation = { tag = BHU value = 200 }
relation = { tag = CAN value = 200 }
relation = { tag = ENG value = 200 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = IRQ value = 100 }
relation = { tag = ITA value = 0 }
relation = { tag = NZL value = 200 }
relation = { tag = OMN value = 150 }
relation = { tag = SAF value = 200 }
relation = { tag = USA value = 100 }
relation = { tag = YEM value = 150 }
}
  SpyInfo                = { country = "NEP" NumberOfSpies = 1 }

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
	}


landunit = {
	location = 1457
	name = "Royal Nepalese Army"
  id = { type = 31500 id = 1 }
		division = { id = { type = 31500 id = 2 } name = "Royal Nepalese Lifeguard Div." type = militia model = 0 }	
		division = { id = { type = 31500 id = 3 } name = "Royal Household Division"      type = militia model = 0 }
	}

} # End File
