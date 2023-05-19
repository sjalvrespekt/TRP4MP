#converted DH, may 8 2011, Kane
country = {
	tag = CXB
	intrinsic_gov_type = paternal_autocrat

	#puppet = CHI

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 10
		interventionism = 3
	}
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	diplomacy = {
		relation = { tag = CHI value = 200 access = yes }
		relation = { tag = CSX value = 200 access = yes }
		relation = { tag = CGX value = 200 }
		relation = { tag = CYN value = 200 }
		relation = { tag = JAP value = -75 }
		relation = { tag = MAN value = -75 }
		#relation = { tag = MEN value = -75 }
	}

  SpyInfo                = { country = "CXB" NumberOfSpies = 3 }
	# Resource Reserves
	energy		= 200
	metal		= 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1283 # Ge'ermu
	manpower = 200
	
	dissent = 25
	
	ownedprovinces =      {
	1269 #Uqai=>Yuling
	1268 #Yinchuan
	1270 #Bayan Hot=>Bayan Nur
	1271 #Wuzhong=>Guyuan
	1272 #Linhe=>Bayan Nur(split)
	1265 #Zhangye=>Jinchang
	1266 #Yumen=>Dunhuang
	1283 #Ge'ermu=>Golmud
	1284 #Xining
	1262 #Linxia=>Xining(split)
	1285 #Yushu
	}
	controlledprovinces = {
	1269 #Uqai=>Yuling
	1268 #Yinchuan
	1270 #Bayan Hot=>Bayan Nur
	1271 #Wuzhong=>Guyuan
	1272 #Linhe=>Bayan Nur(split)
	1265 #Zhangye=>Jinchang
	1266 #Yumen=>Dunhuang
	1283 #Ge'ermu=>Golmud
	1284 #Xining
	1262 #Linxia=>Xining(split)
	1285 #Yushu
	}
	nationalprovinces =   {
	1269 #Uqai=>Yuling
	1268 #Yinchuan
	1270 #Bayan Hot=>Bayan Nur
	1271 #Wuzhong=>Guyuan
	1272 #Linhe=>Bayan Nur(split)
	1265 #Zhangye=>Jinchang
	1266 #Yumen=>Dunhuang
	1283 #Ge'ermu=>Golmud
	1284 #Xining
	1262 #Linxia=>Xining(split)
	1285 #Yushu
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

###################################
# XIBEI SAN MA OOB - CXB
###################################

landunit = {
	location = 1268 # Yinchuan
	name = "15. Zhànzheng Qu"
	leader = 504004 # Ma Hongkui
	id = { type = 22200 id = 800 }
        division = { id = { type = 22000 id = 801 } name = "11. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 802 } name = "81. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 803 } name = "82. Jituanjun" type = militia  model = 0 strength = 75  }
	}

} # End File
