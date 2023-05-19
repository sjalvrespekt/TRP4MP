# Conversion DH, Feb 20th 2011, Kane
province = {
	id = 1124 #Ulaabaatar
	air_base = {
		size = 1
		current_size = 1
	}
}


  country = {
	tag = MON

#	puppet = SOV #large soviet political influence, but no participation in WW2 until 1945
#	control = SOV

	# Resource Reserves
	energy	=	200   
	metal	=	200	
	rare_materials =	100	
	oil =	200	
	supplies =	500
	money = 10

	manpower = 20

	capital = 1124 #Ulaabaatar

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 1
        political_left = 7
        freedom = 5
        free_market = 3
        professional_army = 2
        defense_lobby = 4
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes
		cavalry = yes 
	} 

	#inventions = { 2700061 2700063 2700065 }
  SpyInfo                = { country = "MON" NumberOfSpies = 4 }
	
    ownedprovinces =      {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan
	}
    controlledprovinces = {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan		
	}

    nationalprovinces =   {
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan
### Claims on China
	1206 #Haila'er
	1213 #Baicheng
	1209 #Wulanhaote
	1200 #Huma
	1198 #Butehaqi
	1240 #Sili-yin Qota
	1272 #Bayan Hot
	1270 #Linhe
	1269 #Uqai
	1238 #Huhehaote
	1239 #Jining
	}

	# ROTW Minor Tech '36
	deactivate = { }

diplomacy = {
relation = { tag = ENG value = -25 }
relation = { tag = FRA value = -25 }
relation = { tag = USA value = -25 }
relation = { tag = GER value = -50 }
relation = { tag = SIK value = 125 }
relation = { tag = JAP value = -50 }
relation = { tag = U00 value = -50 }
relation = { tag = TAN value = 150 }
relation = { tag = SOV value = 150 }
relation = { tag = CHC value = 75 }
relation = { tag = CHI value = -50 }
relation = { tag = CSX value = -50 }
relation = { tag = CXB value = -50 }
relation = { tag = CYN value = -50 }
relation = { tag = CGX value = -50 }
}
	
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
	location = 1124 #Ulaabaatar
	name = "Armija Mongol Nayramdakh"
	id = { type = 30500 id = 1 }
		division = { id = { type = 30500 id = 2 }  name = "1. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 3 }  name = "2. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 4 }  name = "3. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 5 }  name = "4. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 6 }  name = "5. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 7 }  name = "6. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 1 strength = 10 extra = armored_car brigade_model = 2 }
		division = { id = { type = 30500 id = 8 }  name = "7. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 9 }  name = "8. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 1 strength = 10 }
		division = { id = { type = 30500 id = 10 } name = "9. Nayramdakh Kavaleriyskaya Div."  type = cavalry model = 0 strength = 10 }
		division = { id = { type = 30500 id = 11 } name = "10. Nayramdakh Kavaleriyskaya Div." type = cavalry model = 0 strength = 10 }
	}

} # End File 