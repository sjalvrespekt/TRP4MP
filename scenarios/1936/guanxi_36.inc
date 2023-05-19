# added airbase Haikou, Kane, August 21 2011
# geändert Zergel, 05.11.2010, Anpassung Province ID an DH

#######
# AIR BASES IN CHINA PROPER
#######
province = { id = 1365 air_base = { size = 3 current_size = 3 }} # Haikou/Hainan
province = { id = 1369 air_base = { size = 3 current_size = 3 }	naval_base = { size = 5	current_size = 5 }}
province = { id = 1373 naval_base = { size = 5 current_size = 5 }}

country = {
	tag = CGX
	intrinsic_gov_type = paternal_autocrat

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		freedom = 3
		free_market = 3
		professional_army = 1
		defense_lobby = 1
		interventionism = 2
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
		relation = { tag = CYN value = 200 }
		relation = { tag = JAP value = -75 }
		relation = { tag = MAN value = -75 }
		#relation = { tag = MEN value = -75 }
	}
  SpyInfo                = { country = "CGX" NumberOfSpies = 3 }
	# Resource Reserves
		energy		= 200
		metal		= 200
		rare_materials 	= 100
		oil 		= 100
		supplies 	= 100
		money		= 50

	capital = 1378
	manpower = 200
	dissent = 20
	
	transports = 10
	
	ownedprovinces = {
 	#Guangxi-Clique
 	1378 #Guilin
 	1380 #Liuzhou
	1383 #Wuzhou
 	1381 #Bose
 	1379 #Nanning
 	1374 #Pingxiang->Quinzhou
 	1376 #Debao->Bose
 	1382 #Hechi->Lizhou
	
	#Guangdong
 	1368 #Shaoguan
 	1369 #Guangzhou
 	1375 #Shantou->Chao´an
 	1370 #Lufeng->Bao´an
 	1373 #Jiangmen
 	1377 #Yulin->Maoming
 	1367 #Naoming->Zhanjiang, Maoming
 	1365 #Haikou->Hainan 
	}

	controlledprovinces = {
	#Guangxi-Clique
 	1378 #Guilin
 	1380 #Liuzhou
	1383 #Wuzhou
 	1381 #Bose
 	1379 #Nanning
 	1374 #Pingxiang->Quinzhou
 	1376 #Debao->Bose
 	1382 #Hechi->Lizhou
	
	#Guangdong
 	1368 #Shaoguan
 	1369 #Guangzhou
 	1375 #Shantou->Chao´an
 	1370 #Lufeng->Bao´an
 	1373 #Jiangmen
 	1377 #Yulin->Maoming
 	1367 #Naoming->Zhanjiang, Maoming
 	1365 #Haikou->Hainan
	}

	nationalprovinces =   {
	#Guangxi-Clique
 	1378 #Guilin
 	1380 #Liuzhou
	1383 #Wuzhou
 	1381 #Bose
 	1379 #Nanning
 	1374 #Pingxiang->Quinzhou
 	1376 #Debao->Bose
 	1382 #Hechi->Lizhou
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

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare

#Naval doctrines
8070 8760

#Naval Techs
3010	3040 # Escorts WW1
3020 # DD pre-WW1
3030 15250 3060 # CL pre-WW1
3350 3360 # 1900 Capital and CA
3800 # Prewar TP
	}

###########################################################
# GUANGXI OOB - CGX
###########################################################

landunit = {
	location = 1369
	name = "Guangxi Zhànzheng Qu"
	id = { type = 22400 id = 150 }
		division = { id = { type = 22000 id = 151  } name = "7. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 152  } name = "31. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 153  } name = "46. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 154  } name = "48. Jituanjun" type = d_02     model = 0                }
	}

airunit = {
	location = 1369
	name = "Guangxi Kongjun"
	base = 1313 # Guangzhou
	id = { type = 22400 id = 155 }
		division = { id = { type = 22400 id = 156 } name = "Guangxi Hang Kong Dui" type = interceptor model = 0 strength = 17 }
	}

navalunit = {
	location = 1369
	name = "Guangdong Haijun"
	base = 1369
	id = { type = 22400 id = 157 }
		division = { id = { type = 22400 id = 158 } name = "Chao Ho" type = light_cruiser model = 0 extra = naval_anti_air_s }
		division = { id = { type = 22400 id = 159 } name = "Guangzhou" type = transport model = 0 }
	}

} # End File