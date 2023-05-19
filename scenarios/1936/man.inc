# geändert Zergel, 03.11.2010, Anpassung Province ID an DH

province = {
	id = 1199 #Harbin
	anti_air = 2
	air_base = {
		size = 2
		current_size = 2
	}
}

province = {
	id = 1236 #Chengde
	anti_air = 2
	air_base = {
		size = 2
		current_size = 2
	}
}

country = {
	tag = MAN

	puppet = U00
    #control = JAP
	#Resource Reserves
	energy	=	200  metal	=	200	rare_materials =	100	oil =	200	supplies =	100
	money = 10
	manpower = 50 
	capital = 	1207

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 4
        freedom = 3
        free_market = 3
        professional_army = 3
        defense_lobby = 8
        interventionism = 8
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }
	
	
    ownedprovinces =      {
		1207 #Jilin->Xinjing
 		1214 #Shenyang->Mukden
	}
    controlledprovinces = {
		1207 #Jilin->Xinjing
		1214 #Shenyang->Mukden
	}
    nationalprovinces =   {
		1214 #Shenyang->Mukden
		1207 #Jilin->Xinjing

		#Kwantung Armee
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1212 #Yanji->Jilin/Liaoyuan
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1220 #Dandong->Dalian
 		1218 #Panjin->Jinxi
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1211 #Hunjiang->Adong/Liaoyuan
 		1215 #Fushun->Adong
 		1217 #Anshan->Dalian
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		#1245 #Tangshan
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
 		1235 #Fuxin->Changde
 		1216 #Jinzhou->Jinxi

	}

diplomacy = {
relation = { tag = CHI value = -100 }
relation = { tag = CSX value = -75 }
relation = { tag = CXB value = -75 }
relation = { tag = CYN value = -75 }
relation = { tag = CGX value = -75 }
relation = { tag = JAP value = 200 access = yes }
relation = { tag = U00 value = 200 access = yes }
relation = { tag = U03 value = 70 access = yes }
}
  SpyInfo                = { country = "MAN" NumberOfSpies = 1 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 # GW light artillery

1010 # GW infantry

1190 1200 # GW & 1933 Cavalry

5080 # Basic Construction Engineering Development Process

6400 # Light Infantry
	}

#####################################################	
#Manchukuo Imperial Army
#####################################################	

landunit = {
	location = 1207
	id = { type = 28500 id = 1 }
	name = "Man'chu Gun"
		division = { id = { type = 28500 id = 2 }  name = "1 Gunkanku 'Fengtien'"           type = infantry model = 0 strength = 75  }
		division = { id = { type = 28500 id = 3 }  name = "2 Gunkanku 'Kirin'"              type = infantry model = 0 strength = 85  }
		division = { id = { type = 28500 id = 4 }  name = "3 Gunkanku 'Qiqihar'"            type = infantry model = 0 strength = 85  }
		division = { id = { type = 28500 id = 5 }  name = "4 Gunkanku 'Harbin'"             type = infantry model = 0 strength = 100 }
		division = { id = { type = 28500 id = 6 }  name = "5 Gunkanku 'Chengde'"            type = infantry model = 0 strength = 50  }
		division = { id = { type = 28500 id = 7 }  name = "Man'chu Kihei Gun"               type = cavalry  model = 1 strength = 70  } #7 cav brigades á 1500 soldiers
		division = { id = { type = 28500 id = 8 }  name = "Azuma Hingganling Shubitai Gun"  type = garrison model = 0 strength = 10  }
		division = { id = { type = 28500 id = 9 }  name = "Nishi Hingganling Shubitai Gun"  type = garrison model = 0 strength = 10  }
		division = { id = { type = 28500 id = 10 } name = "Kita Hingganling Shubitai Gun"   type = garrison model = 0 strength = 10  }
		division = { id = { type = 28500 id = 11 } name = "Minami Hingganling Shubitai Gun" type = garrison model = 0 strength = 10  }
		division = { id = { type = 28500 id = 12 } name = "Seian Shubitai Gun"              type = garrison model = 0 strength = 10  }
		division = { id = { type = 28500 id = 13 } name = "Chinganyuchitui"                 type = d_03     model = 0 strength = 10 max_strength = 25 }
		#Manchukuo Imperial Guards (Chinganyuchitui) were the elite unit of MAN. Organised into a brigade (date unknown) they were used for commando missions, secret missions and missions when special skills were needed.
	}
	
airunit = {
	location = 1199 #
	id = { type = 28500 id = 15 }
	name = "Man'chu Kokutai"
	base = 1199 #
		division = { id = { type = 28500 id = 16 } name = "Man'chu Kokugun" strength = 25 type = interceptor model = 1 }
	}

} # End File
