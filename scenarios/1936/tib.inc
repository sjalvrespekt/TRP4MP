# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

country = {
	tag = TIB
	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 	1289
	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 5
        free_market = 5
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
	
	ownedprovinces =      {
	1286 #Senge Khabab=>Gar
	1287 #Sger Rtse=>Nagqu
 	1288 #Rgyal Rtse=>Kagar/Xigaze
 	1289 #Lhasa
 	1290 #Ri Bo Che=>Quamdo
	1295 #Nying Khri=>Quamdo
	1294 #Chab Mdo=>Quamdo
	}
	controlledprovinces = {
	1286 #Senge Khabab=>Gar
	1287 #Sger Rtse=>Gar
	1288 #Rgyal Rtse=>Kagar/Xigaze
	1289 #Lhasa
	1290 #Ri Bo Che=>Quamdo
	1295 #Nying Khri=>Quamdo
	1294 #Chab Mdo=>Quamdo
	}
	nationalprovinces =   {
	1286 #Senge Khabab=>Gar	
	1287 #Sger Rtse=>Gar
	1288 #Rgyal Rtse=>Kagar/Xigaze
	1289 #Lhasa
	1290 #Ri Bo Che=>Quamdo
	1295 #Nying Khri=>Quamdo
	1294 #Chab Mdo=>Quamdo
	}
  SpyInfo                = { country = "TIB" NumberOfSpies = 4 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}


landunit = {
	location = 1289
	name = "Xi'zang Jüntuan 1"
  id = { type = 10700 id = 1 }
		division = { id = { type = 10700 id = 2 } name = "1 Xi'zang Shi" type = militia model = 0 }
		division = { id = { type = 10700 id = 3 } name = "2 Xi'zang Shi" type = militia model = 0 }
		division = { id = { type = 10700 id = 4 } name = "3 Xi'zang Shi" type = militia model = 0 }		
	}

} # End File
