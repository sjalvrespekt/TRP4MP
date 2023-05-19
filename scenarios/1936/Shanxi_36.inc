# added airbase Jinan, Kane, August 21 2011
# geändert Zergel, 02.11.2010, Anpassung Province ID an DH

province = { id = 1330 air_base = { size = 3 current_size = 3 }}

country = {
	tag = CSX
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
		relation = { tag = CHI value = 200 access = yes }
		relation = { tag = CGX value = 200 }
		relation = { tag = CXB value = 200 access = yes }
		relation = { tag = CYN value = 200 }
		relation = { tag = JAP value = -75 }
		relation = { tag = MAN value = -75 }
		#relation = { tag = MEN value = -75 }
	}
  SpyInfo                = { country = "CSX" NumberOfSpies = 3 }
	# Resource Reserves
	energy = 200
	metal = 200
	rare_materials 	= 100
	oil 		= 100
	supplies 	= 100
	money		= 50

	capital = 1252 # Taiyuan
	manpower = 200
	dissent = 25
	
	transports = 10
	
	ownedprovinces =      {
	1323 #Anyang->Handan
 	#1241 #Tianjin
 	#1247 #Beijing
 	1246 #Zhangyan->Kalgan
 	1251 #Datong
 	1242 #Shijazhuang
 	1254 #Hequ->Taihuan
 	1252 #Taiyuan->Taihuan
 	1253 #Linfen->Changzhi
 	1248 #Changzhi
 	1249 #Yangquan->Taihuan/Changzhi
 	1250 #Lingqui->Baoding
 	1243 #Baoding
 	1244 #Changzhou->Yucheng
 	1330 #Jinan
 	1239 #Jining
 	1238 #Huhehaote->Hohot
	}

	controlledprovinces = {
 	1323 #Anyang->Handan
 	#1241 #Tianjin
 	#1247 #Beijing
 	1246 #Zhangyan->Kalgan
 	1251 #Datong
 	1242 #Shijazhuang
 	1254 #Hequ->Taihuan
 	1252 #Taiyuan->Taihuan
 	1253 #Linfen->Changzhi
 	1248 #Changzhi
 	1249 #Yangquan->Taihuan/Changzhi
 	1250 #Lingqui->Baoding
 	1243 #Baoding
 	1244 #Changzhou->Yucheng
 	1330 #Jinan
 	1239 #Jining
 	1238 #Huhehaote->Hohot
	}

	nationalprovinces =   {
 	1323 #Anyang->Handan
 	1241 #Tianjin
 	1247 #Beijing
 	1246 #Zhangyan->Kalgan
 	1251 #Datong
 	1242 #Shijazhuang
 	1254 #Hequ->Taihuan
 	1252 #Taiyuan->Taihuan
 	1253 #Linfen->Changzhi
 	1248 #Changzhi
 	1249 #Yangquan->Taihuan/Changzhi
 	1250 #Lingqui->Baoding
 	1243 #Baoding
 	1244 #Changzhou->Yucheng
 	1330 #Jinan
 	1239 #Jining
 	1238 #Huhehaote->Hohot
	}

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

3010 # Prewar Escort
	}

###############################
# SHANXI Land 1936 OOB - CSX
###############################

landunit = {
	location = 1252 
	name = "Shanxi Zhànzheng Qu"
	id = { type = 22300 id = 600 }
		division = { id = { type = 22000 id = 601 } name = "19. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 602 } name = "23. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 603 } name = "33. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 604 } name = "34. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 605 } name = "43. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 606 } name = "61. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 607 } name = "83. Jituanjun" type = militia  model = 0 strength = 75  }
    }
} # End File