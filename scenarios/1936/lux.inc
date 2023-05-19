# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

country = {
	tag = LUX
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 1
        freedom = 9
        free_market = 8
        professional_army = 5
        defense_lobby = 2
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	manpower = 20

	capital = 	109

	
    ownedprovinces =      {
		109 #Luxembourg
	 }
    controlledprovinces = {
		109 #Luxembourg
	  }
    nationalprovinces =   {
		109 #Luxembourg
	}

diplomacy = {
relation = { tag = BEL value = 200 }
relation = { tag = DEN value = 100 }
relation = { tag = FIN value = 100 }
relation = { tag = FRA value = 120 }
relation = { tag = GER value = -50 }
relation = { tag = HOL value = 150 }
relation = { tag = IRE value = 75 }
relation = { tag = NOR value = 100 }
relation = { tag = SWE value = 100 }
}
  SpyInfo                = { country = "LUX" NumberOfSpies = 3 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 2300 # GW artillery

1400 # GW infantry

1190 # GW Cavalry

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refini

6500 6510 # Guerilla doc

	}

landunit = { 
	id = { type = 27500 id = 1 }
	name = "Gendarmerie de Letzebuerg"
	location = 109
		division = { id = { type = 27500 id = 2 } name = "Letzebuerger Gendarmerie" strength = 10 type = militia model = 0 }
	}

} # End File 