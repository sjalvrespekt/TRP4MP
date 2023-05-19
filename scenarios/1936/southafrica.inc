# geändert Zergel, 19.10.2010, Anpassung Province ID an DH

province = {
	id = 880
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 10
		current_size = 10
	}
}

province = {
	id = 882 #Swakomund
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 872
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

#Anti Aircraft Batteries
province = { id = 876   anti_air = 3 } #Johannesburg
province = { id = 872   anti_air = 1 } #Durban
province = { id = 881   anti_air = 1 } #Port Elizabeth
province = { id = 880   anti_air = 2 } #Cape Town


country = {
    tag = SAF
	capital = 	873

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 10

	manpower = 20
	
	transports = 100
	escorts = 8

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        freedom = 10
        free_market = 8
        professional_army = 5
        defense_lobby = 5
        interventionism = 6
    }
	
	allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

		
    ownedprovinces =      {
	885 #Katima Mulilo
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	883 #Luderitz
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	876 #Jahannesburg
	873 #Pretoria
	872 #Durban
	 }
    controlledprovinces = {
	885 #Katima Mulilo
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	883 #Luderitz
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	876 #Jahannesburg
	873 #Pretoria
	872 #Durban
	  }
    nationalprovinces =   {
	885 #Katima Mulilo
	886 #Tsumeb=>Grootfontein/Dongwa
	882 #Swakopmund=>Walwis Bay
	884 #Windhoek
	883 #Luderitz
	878 #Kimberley=>Mafeking
	879 #De Aar=>Kimberley/Springbok
	880 #Cape Town
	881 #Port Elisabeth=>Port Elisabeth/East London
	875 #Bloemfontain/Johannisburg/Kimberley
	876 #Jahannesburg
	873 #Pretoria
	872 #Durban
	}


diplomacy = {
relation = { tag = AST value = 200 access = yes }
relation = { tag = BEL value = 35 }
relation = { tag = BHU value = 200 }
relation = { tag = CAN value = 200 access = yes }
relation = { tag = ENG value = 200 access = yes }
relation = { tag = FIN value = 50 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = IRE value = 80 }
relation = { tag = IRQ value = 100 }
relation = { tag = ITA value = 0 }
relation = { tag = NEP value = 200 }
relation = { tag = NZL value = 200 access = yes }
relation = { tag = OMN value = 150 }
relation = { tag = POR value = 125 }
relation = { tag = USA value = 125 }
relation = { tag = YEM value = 150 }
}

  SpyInfo                = { country = "SAF" NumberOfSpies = 4 }
	# Commonwealth Tech '36
	deactivate = { }

	techapps = {
# UK 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

2800 # Basic Armoured Car

2550 # GW tank and tankette (Mk. VI) 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

17000 # 1936 rocket artillery/mortars

1010 1020 # Early infantry

1190 1200 1210 # Semi-moto Cavalry


5010 # Agriculture
5080 5090  # Construction 
5190 # Basic Oil Refining
5310  # Basic CT machine

3800 # 1930 transports


6100 6110 6120 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8760

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs
# Escorts up to pre-WW2
3010	3040	3070	3100
3020	3050	3080 # DD just up to Washington!
3030 15250	3060	3090	3120
	}

####################################################
# SA Army
# in 1936 56.000 soldiers at arms + 100.000 reserve
####################################################	

	landdivision = { dormant = yes id = { type = 26600 id = 20 } name = "11th (African) Division"  type = infantry model = 2 strength = 100 }
	landdivision = { dormant = yes id = { type = 26600 id = 21 } name = "12th (African) Division"  type = infantry model = 2 strength = 100 }
	landdivision = { dormant = yes id = { type = 26600 id = 22 } name = "Briggs/Gideon Force"      type = militia  model = 2 strength = 75  }
	landdivision = { dormant = yes id = { type = 26600 id = 23 } name = "6th SA Armoured Division" type = armor    model = 4 strength = 80 extra = tank_destroyer brigade_model = 4 }

landunit = {
	name = "South African Army"
	location = 880
	id = { type = 26600 id = 1 }
		division = { id = { type = 26600 id = 2 } name = "South African Army HQ" type = HQ strength = 50 }
	}
	
landunit = {
	name = "Natal Command"
	location = 872
	id = { type = 26600 id = 3 }
		division = { id = { type = 26600 id = 4 } name = "1st SA Infantry Division" type = infantry strength = 75 model = 1 }
	}

landunit = {
	name = "Cape Command"
	location = 880
	id = { type = 26600 id = 5 }
		division = { id = { type = 26600 id = 6 } name = "2nd SA Infantry Division" type = infantry strength = 75 model = 1 }
	}

landunit = {
	name = "Witwatersrand Command"
	location = 876
	id = { type = 26600 id = 7 }
		division = { id = { type = 26600 id = 8 } name = "3rd SA Infantry Division" type = infantry strength = 75 model = 1 extra = artillery brigade_model = 2 }
	}	

navalunit = {
 	id = { type = 26600 id = 10 }
 	name = "South African Navy"
 	location = 880
	base = 880
#		division = { id = { type = 26600 id = 8 } name = "1st SAN Destroyer Flotilla" type = destroyer model = 0 }
#		division = { id = { type = 26600 id = 9 } name = "2nd SAN Destroyer Flotilla" type = destroyer model = 0 }
#		division = { id = { type = 26600 id = 10 } name = "1st SAN Transport Flotilla" type = transport model = 0 }
#		division = { id = { type = 26600 id = 11 } name = "2nd SAN Transport Flotilla" type = transport model = 0 }
#		division = { id = { type = 26600 id = 12 } name = "3rd SAN Transport Flotilla" type = transport model = 0 }
#		division = { id = { type = 26600 id = 13 } name = "4th SAN Transport Flotilla" type = transport model = 0 }
#		division = { id = { type = 26600 id = 14 } name = "5th SAN Transport Flotilla" type = transport model = 0 }
		division = { id = { type = 26600 id = 15 } name = "Fraternitas" type = transport model = 0 }
	}

} # End File
