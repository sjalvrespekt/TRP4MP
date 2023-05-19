#conversion Dh, Feb 20th 2011, Kane
country = {
	tag = BHU

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 8
        freedom = 9
        professional_army = 1
        defense_lobby = 1
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 20
#	control = ENG #large english political influence, but no participation in WW2 at all
#	puppet = ENG

	# Resource Reserves
	energy	=	200   
	metal	=	200	
	rare_materials =	100	
	oil =	200	
	supplies =	200
	money = 10

	capital = 	1456
	
	ownedprovinces =      {
		1456
	}
	controlledprovinces = {
		1456
	}
    nationalprovinces =   {
		1456
	}

diplomacy = {
	relation = { tag = AST value = 200 }
	relation = { tag = CAN value = 200 }
	relation = { tag = ENG value = 200 }
	relation = { tag = FRA value = 150 }
	relation = { tag = GER value = 0 }
	relation = { tag = IRQ value = 100 }
	relation = { tag = ITA value = 0 }
	relation = { tag = NEP value = 200 }
	relation = { tag = NZL value = 200 }
	relation = { tag = OMN value = 150 }
	relation = { tag = SAF value = 200 }
	relation = { tag = USA value = 100 }
	relation = { tag = YEM value = 150 }
}
  SpyInfo                = { country = "BHU" NumberOfSpies = 2 }

	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930


2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}

landunit = {
	location = 1456
  id = { type = 16000 id = 3001 }
	name = "Royal Bhutanese Army"
		division = { id = { type = 16000 id = 3002 } name = "Household Division" type = militia model = 0 strength  = 100 }
		division = { id = { type = 16000 id = 3003 } name = "Royal Division" type = militia model = 0 strength  = 100 }
	}

} # End File