# geändert Zergel, 21.10.2010, Anpassung Province ID an DH

province = {
	id = 1721
	anti_air = 2
	naval_base = {
		size = 5
		current_size = 5
	}
	air_base = {
		size = 3
		current_size = 3
	}
}

province = { id = 1731 naval_base = { size = 1 current_size = 1 } air_base = { size = 1 current_size = 1 } supplypool = 1 } # Apia
province = { id = 1720 naval_base = { size = 6 current_size = 6 } air_base = { size = 2 current_size = 2 } supplypool = 1 } # Auckland

  country = {
    tag = NZL

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	transports = 200
	#escorts = 15

	capital = 1721

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 10
        freedom = 10
        free_market = 8
        professional_army = 5
        defense_lobby = 5
        interventionism = 6
    }
	
	allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 2700064 }

	manpower = 20
	
	ownedprovinces =      {
	1720 #Auckland
	1718 #Napier
	1719 #Hamilton=>New Pymouth
	1721 #Wellington
	1722 #Christchurch
	1723 #Dunedin
 	1742 #Avarua
 	1741 #Roto
 	1731 #Apia
 	1732 #Nukunonu
 	1748 #Alofi  
	}
	controlledprovinces = {
	1720 #Auckland
	1718 #Napier
	1719 #Hamilton=>New Pymouth
	1721 #Wellington
	1722 #Christchurch
	1723 #Dunedin
 	1742 #Avarua
 	1741 #Roto
 	1731 #Apia
 	1732 #Nukunonu
 	1748 #Alofi 
	}
    nationalprovinces =   {
	1720 #Auckland
	1718 #Napier
	1719 #Hamilton=>New Pymouth
	1721 #Wellington
	1722 #Christchurch
	1723 #Dunedin	
	}

diplomacy = {
relation = { tag = AST value = 200 access = yes }
relation = { tag = BEL value = 20 }
relation = { tag = BHU value = 200 }
relation = { tag = CAN value = 200 access = yes }
relation = { tag = ENG value = 200 access = yes }
relation = { tag = FIN value = 50 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = IRE value = 75 }
relation = { tag = IRQ value = 100 }
relation = { tag = ITA value = 0 }
relation = { tag = NEP value = 200 }
relation = { tag = OMN value = 150 }
relation = { tag = PHI value = 25 }
relation = { tag = SAF value = 200 access = yes }
relation = { tag = USA value = 125 }
relation = { tag = YEM value = 0 } #150
}


  SpyInfo                = { country = "NZL" NumberOfSpies = 5 }



	# Commonwealth Tech '36
	deactivate = { }

	techapps = {
# UK 1936 techs
#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4050 # Single Engined 1936

4290 # double Engined 1929


#############################

2550 # GW tank 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

17000 # 1936 rocket artillery/mortars

1010 1020 # Early infantry

1190 1200 1210 # Semi-moto Cavalry

1110 # Early Mountain
1310 # Engineers
#1150 # Early Marine

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refining
5310 # Basic CT machine

6100 6110 6120 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8180 8760

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs
# Escorts up to pre-WW2
3010	3040	3070	3100
3020	3050	3080 # DD just up to Washington!
3030 15250	3060	3090	3120
3800 # Prewar TP
	}



landunit = {
	id = { type = 10600 id = 3 }
	name = "Northern Military District"
	location = 1720
  	division = { id = { type = 10600 id = 4 } name = "Fortress Troops North" strength = 30 type = garrison }
	}

landunit = {
	id = { type = 10600 id = 6 }
	name = "Central Military District"
	location = 1721
  	division = { id = { type = 10600 id = 8 } name = "Fortress Troops Central" strength = 30 type = garrison }
    }

landunit = {
	id = { type = 10600 id = 9 }
	name = "Southern Military District"
	location = 1723
  	division = { id = { type = 10600 id = 11 } name = "Fortress Troops South" strength = 30 type = garrison }
	}

navalunit = {
 	id = { type = 10600 id = 12 }
 	name = "HM New Zealand Navy"
 	location = 1721
	base = 1721
 		division = { id = { type = 10600 id = 15 } name = "SS Kopara" type = transport model = 0 }
 		division = { id = { type = 10600 id = 20 } name = "Pamir" type = transport model = 0 }
 		division = { id = { type = 10600 id = 21 } name = "MS Rangitane" type = transport model = 0 }
 		division = { id = { type = 10600 id = 22 } name = "MV Nottingham" type = transport model = 0 }
 		division = { id = { type = 10600 id = 23 } name = "SS Cherry Chepat" type = transport model = 0 }
  }

} # End File