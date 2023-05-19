province = { id = 1390 air_base = { size = 1 current_size = 1 }} #Kunming

country = {
	tag = CYN
	intrinsic_gov_type = paternal_autocrat

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 5
		interventionism = 1
	}
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	diplomacy = {
		relation = { tag = CHI value = 200 }
		relation = { tag = CSX value = 200 }
		relation = { tag = CXB value = 200 }
		relation = { tag = CGX value = 200 }
		relation = { tag = JAP value = -75 }
		relation = { tag = MAN value = -75 }
		#relation = { tag = MEN value = -75 }
	}
  SpyInfo                = { country = "CYN" NumberOfSpies = 2 }
	# Resource Reserves
	energy		= 200
	metal		= 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1390 # Kunming
	manpower = 200
	dissent = 25
	
	ownedprovinces =      {
	1389 #Baoshan
	1390 #Kunming
	1384 #Luxi=>Baoshan(split)
	1385 #Dali
	1386 #Pu'er=>Jinghong(split)
	1387 #Jinghong
	1388 #Gejiung
	1300 #Yibin
	1291 #Xichang=>Ya'an(split)
	1292 #Ya'an
	1293 #Panzhihua=>Kangding
	}
	controlledprovinces = {
	1389 #Baoshan
	1390 #Kunming
	1384 #Luxi=>Baoshan(split)
	1385 #Dali
	1386 #Pu'er=>Jinghong(split)
	1387 #Jinghong
	1388 #Gejiung
	1300 #Yibin
	1291 #Xichang=>Ya'an(split)
	1292 #Ya'an
	1293 #Panzhihua=>Kangding
	}
	nationalprovinces =   {
	1389 #Baoshan
	1390 #Kunming
	1384 #Luxi=>Baoshan(split)
	1385 #Dali
	1386 #Pu'er=>Jinghong(split)
	1387 #Jinghong
	1388 #Gejiung
	1300 #Yibin
	1291 #Xichang=>Ya'an(split)
	1292 #Ya'an
	1293 #Panzhihua=>Kangding
	}

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

#############################################
# CHINA 1936 OOB - CYN
#############################################

landunit = {
	location = 1390 # Kunming
	name = "Yunnan Zhànzheng Qu"
	leader = 501006 # Long Yun
	id = { type = 22100 id = 900 }
	    division = { id = { type = 22000 id = 901 } name = "11. Jituanjun"  type = militia  model = 0 strength = 75  }
        division = { id = { type = 22000 id = 902  } name = "60. Jituanjun" type = d_02     model = 1                }
		}

} # End File