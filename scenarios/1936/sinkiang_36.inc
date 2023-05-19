# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

country = {
	tag = SIK

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 1
        defense_lobby = 5
        interventionism = 5
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	20000  metal	=	20000	rare_materials =	5000	oil =	5000	supplies =	2000
	money = 10

	capital = 1281 #Urumqi
	manpower = 100
	dissent = 30
	
	ownedprovinces =      {
	1279 #Kaxgar=>Kashgar
 	1274 #Qarqan=>Hotan
 	1282 #Xoten=>Taklimakan Desert
 	1275 #Aqsu=>Aksu
 	1280 #Ghulja
 	1281 #Urumqi
 	1277 #Qumul=>Altay
 	1276 #Karamay
 	1273 #Aletai=>Altay
	}
	controlledprovinces = {
	1279 #Kaxgar=>Kashgar
 	1274 #Qarqan=>Hotan
 	1282 #Xoten=>Taklimakan Desert
 	1275 #Aqsu=>Aksu
 	1280 #Ghulja
 	1281 #Urumqi
 	1277 #Qumul=>Altay
 	1276 #Karamay
 	1273 #Aletai=>Altay
	}
	nationalprovinces =   {
	1279 #Kaxgar=>Kashgar
 	1274 #Qarqan=>Hotan
 	1282 #Xoten=>Taklimakan Desert
 	1275 #Aqsu=>Aksu
 	1280 #Ghulja
 	1281 #Urumqi
 	1277 #Qumul=>Altay
 	1276 #Karamay
 	1273 #Aletai=>Altay
	}
  SpyInfo                = { country = "SIK" NumberOfSpies = 3 }
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
	location = 1281
	name = "Xin'jiang Zhànzheng Qu"
	id = { type = 25600 id = 1000 }
		division = { id = { type = 25600 id = 1001 } name = "Xin'jiang Qibing Jituanjun" type = cavalry strength = 50 model = 0 }
	}
	
landunit = {
	location = 1280 #Ghulja
	name = "Yili-Tacheng Zhùjun"
	id = { type = 25600 id = 1003	}
	   division = { id = { type = 25600 id = 1004 } name = "Yili-Tacheng Zhùjun" type = garrison strength = 5 model = 0 } 
	}		
landunit = {
	location = 1273 #Aletai
	name = "Ashan Zhùjun"
	id = { type = 25600 id = 1005 }
	   division = { id = { type = 25600 id = 1006 } name = "Ashan Zhùjun"        type = garrison strength = 5 model = 0 } 
	}	
landunit = {
	location = 1276 #Karamay
	name = "Qitai Zhùjun"
	id = { type = 25600 id = 1007 }
	   division = { id = { type = 25600 id = 1008 } name = "Qitai Zhùjun"        type = garrison strength = 5 model = 0 } 
	}	
landunit = {
	location = 1277 #Qumul
	name = "Hami Zhùjun"
	id = { type = 25600 id = 1009 }
	   division = { id = { type = 25600 id = 1010 } name = "Hami Zhùjun"         type = garrison strength = 5 model = 0 } 
	}	 
landunit = {
	location = 1275 #Aqsu
	name = "Yanqi Zhùjun"
	id = { type = 25600 id = 1011 }
	   division = { id = { type = 25600 id = 1012 } name = "Yanqi Zhùjun"        type = garrison strength = 5 model = 0 } 
	}
} # End File
