

province = {
	id = 1076 #Izmit
	anti_air = 4
	air_base = {
		size = 6
		current_size = 6
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1075 # Ankara
	anti_air = 4
	air_base = {
		size = 6
		current_size = 6
		}
	}

country = {
    tag = TUR


	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 20

	capital = 1075

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 5
        political_left = 2
        freedom = 4
        free_market = 6
        professional_army = 5
        defense_lobby = 6
        interventionism = 3
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	manpower = 20

	
    ownedprovinces =      {
	385 #Edirne=>Istanbul
 	384 #Gelibolu=>Istanbul
 	409 #Istanbul
 	1076 #Izmit
 	1078 #Bursa
 	1077 #Izmir
 	1079 #Denizli=>Antalya
	#1054 #Antalya 
	1071 #Eskisehir=>Afyonkarahisar
 	1068 #Zuguldak=>Karabük
 	1065 #Karabuk
 	1075 #Ankara
 	1074 #Konya
 	1057 #Antalya
 	1058 #Tarsus=>Antalya
 	1055 #Adana=>Mersin
 	1073 #Kayseri
 	1072 #Kirikkale=>Sivas
 	1066 #Samsun
 	1059 #Sivas
 	1061 #Maltya=>Elazig
 	1056 #Gaziantep
  	1060 #Diyarbakir=>Batman
 	1064 #Elazig=>Erzurum
 	1067 #Trebizond=>Trabzon
 	386 #Kars
 	1063 #Erzurum=>Van
 	1062 #Hakkari=>Van
	 }
    controlledprovinces = {
	385 #Edirne=>Istanbul
 	384 #Gelibolu=>Istanbul
 	409 #Istanbul
 	1076 #Izmit
 	1078 #Bursa
 	1077 #Izmir
 	1079 #Denizli=>Antalya
	#1054 #Antalya 
	1071 #Eskisehir=>Afyonkarahisar
 	1068 #Zuguldak=>Karabük
 	1065 #Karabuk
 	1075 #Ankara
 	1074 #Konya
 	1057 #Antalya
 	1058 #Tarsus=>Antalya
 	1055 #Adana=>Gaziantep/Kayseri
 	1073 #Kayseri
 	1072 #Kirikkale=>Sivas
 	1066 #Samsun
 	1059 #Sivas
 	1061 #Maltya=>Elazig
 	1056 #Gaziantep
  	1060 #Diyarbakir=>Batman
 	1064 #Elazig=>Erzurum
 	1067 #Trebizond=>Trabzon
 	386 #Kars
 	1063 #Erzurum=>Van
 	1062 #Hakkari=>Van 
	  }
    nationalprovinces =   {
	385 #Edirne=>Istanbul
 	384 #Gelibolu=>Istanbul
 	409 #Istanbul
 	1076 #Izmit
 	1078 #Bursa
 	1077 #Izmir
 	1079 #Denizli=>Antalya
	1054 #Antalya 
	1071 #Eskisehir=>Afyonkarahisar
 	1068 #Zuguldak=>Karabük
 	1065 #Karabuk
 	1075 #Ankara
 	1074 #Konya
 	1057 #Antalya
 	1058 #Tarsus=>Antalya
 	1055 #Adana=>Gaziantep/Kayseri
 	1073 #Kayseri
 	1072 #Kirikkale=>Sivas
 	1066 #Samsun
 	1059 #Sivas
 	1061 #Maltya=>Elazig
 	1056 #Gaziantep
  	1060 #Diyarbakir=>Batman
 	1064 #Elazig=>Erzurum
 	1067 #Trebizond=>Trabzon
 	386 #Kars
 	1063 #Erzurum=>Van
 	1062 #Hakkari=>Van 
	1020 #Golan
	}

diplomacy = {
relation = { tag = AFG value = 50 }
relation = { tag = BUL value = 75 }
relation = { tag = ENG value = 75 }
relation = { tag = FRA value = 50 }
relation = { tag = GER value = 10 }
relation = { tag = GRE value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = ITA value = 0 }
relation = { tag = OMN value = 35 }
relation = { tag = PER value = -50 }
relation = { tag = ROM value = 100 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = SAU value = 50 }
relation = { tag = SOV value = 100 }
relation = { tag = YEM value = 35 }
relation = { tag = YUG value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}

  SpyInfo                = { country = "TUR" NumberOfSpies = 5 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4290 4300 4320 # double Engined 1929, tactical, escort brigade 1930

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA
2400 # AT
2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

5010 # Modern Agriculture
5080 5090 # Improved Construction Engineering

# Optional doctrines

6400 6410 # Light Inf

#Naval doctrines
8070 8130 8180 8760

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3030 15250 # CL pre-WW1
3350 3390 # Capital Design up to 1910
3370 3400 # BC up to 1910
3380 3410 # BB up to Dreadnought
3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
3800 # Prewar TP

	}

	navalunit = {
	location = 1076
	base = 1076
        name = "Türkce Deniz Filosu"
        id = { type = 11700 id = 1 }
	  		division = { id = { type = 11700 id = 2 } name = "TDT Yavuz Sultan Selim" type = battlecruiser model = 1 }
           	division = { id = { type = 11700 id = 3 } name = "TDT Hamidieh" type = light_cruiser model = 0 }
			division = { id = { type = 11700 id = 4 } name = "TDT Medjidieh" type = light_cruiser model = 0 }
			division = { id = { type = 11700 id = 5 } name = "TDT Berk-i Satvet" type = d_09 model = 0 }
			division = { id = { type = 11700 id = 6 } name = "TDT Peyk-i Savket" type = d_09 model = 0 }
			division = { id = { type = 11700 id = 7 } name = "TDT Adetepe" type = destroyer model = 2 }
			division = { id = { type = 11700 id = 8 } name = "TDT Kocatepe" type = destroyer model = 2 }
			division = { id = { type = 11700 id = 9 } name = "TDT Tinaztepe" type = destroyer model = 2 }
			division = { id = { type = 11700 id = 10 } name = "TDT Zafer" type = destroyer model = 2 }
			division = { id = { type = 11700 id = 19 } name = "TDT Muavenet-i Milliye" type = destroyer model = 0 }
			}
			
	navalunit = {
	location = 1076
	base = 1076
        name = "Türkce Denizalti Filosu"
        id = { type = 11700 id = 11 }
			division = { id = { type = 11700 id = 12 } name = "TDT Dumlupinar" type = submarine model = 1 }
          	division = { id = { type = 11700 id = 13 } name = "TDT Birinci Inönü" type = nuclear_submarine model = 1 }
			division = { id = { type = 11700 id = 14 } name = "TDT Ikinki Inönü" type = nuclear_submarine model = 1 }
			division = { id = { type = 11700 id = 15 } name = "TDT Sakarya" type = nuclear_submarine model = 2 }
			}
			
	navalunit = {
	location = 1076
	base = 1076
        name = "Türkce Ulastirma Filosu"
        id = { type = 11700 id = 16 }
			division = { id = { type = 11700 id = 17 } name = "SS Kurtulus" type = transport model = 0 }
			}
			
# navy's last stand (decision) #
navaldivision = { dormant = yes id = { type = 11700 id = 21 }  name = "TDT Torgud Reis" type = battleship model = 0 strength = 20 } #party disarmed, used as floating barracks
	
##############################
# Turkey army by Lord Rommel
# Datas by league of nations
# 11.6.2012
##############################

landunit = {
		location = 409
		name = "I. Kolordu"
	    id = { type = 11700 id = 200 }
            division = { id = { type = 11700 id = 201 } name = "1. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 202 } name = "2. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 203 } name = "1. Süvari Tümen" type = cavalry model = 0 strength  = 75 }
		}
		
landunit = {
		location = 1076
		name = "II. Kolordu"
	    id = { type = 11700 id = 204 }
            division = { id = { type = 11700 id = 205 } name = "3. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 206 } name = "4. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
		}
		
landunit = {
		location = 1075
		name = "III. Kolordu"
	    id = { type = 11700 id = 207 }
            division = { id = { type = 11700 id = 208 } name = "5. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 209 } name = "6. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 210 } name = "2. Süvari Tümen" type = cavalry model = 0 strength  = 75 }
		}
		
landunit = {
		location = 1066
		name = "IV. Kolordu"
	    id = { type = 11700 id = 211 }
            division = { id = { type = 11700 id = 212 } name = "7. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 213 } name = "8. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
		}
		
landunit = {
		location = 1077
		name = "V. Kolordu"
	    id = { type = 11700 id = 214 }
            division = { id = { type = 11700 id = 215 } name = "9. Piyade Tümen"  type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 216 } name = "10. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 217 } name = "3. Süvari Tümen" type = cavalry model = 0 strength  = 35 }
		}
		
landunit = {
		location = 1056
		name = "VI. Kolordu"
	    id = { type = 11700 id = 218 }
            division = { id = { type = 11700 id = 219 } name = "11. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 220 } name = "12. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
		}
		
landunit = {
		location = 1058
		name = "VII. Kolordu"
	    id = { type = 11700 id = 221 }
            division = { id = { type = 11700 id = 222 } name = "13. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 223 } name = "14. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 224 } name = "4. Süvari Tümen" type = cavalry model = 0 strength  = 35 }
		}
		
landunit = {
		location = 1057
		name = "VIII. Kolordu"
	    id = { type = 11700 id = 225 }
            division = { id = { type = 11700 id = 226 } name = "15. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 227 } name = "16. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 228 } name = "5. Süvari Tümen" type = cavalry model = 0 strength  = 35 }
		}
		
landunit = {
		location = 1067
		name = "IX. Kolordu"
	    id = { type = 11700 id = 229 }
            division = { id = { type = 11700 id = 230 } name = "17. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 231 } name = "18. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 232 } name = "1. Dagci Tümen" type = bergsjaeger model = 0 strength  = 50 }
		}
		
landunit = {
		location = 1063
		name = "X. Kolordu"
	    id = { type = 11700 id = 234 }
            division = { id = { type = 11700 id = 235 } name = "19. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 236 } name = "20. Piyade Tümen" type = d_02	model = 0 strength  = 75 }
			division = { id = { type = 11700 id = 237 } name = "2. Dagci Tümen" type = bergsjaeger model = 0 strength  = 50 }
			division = { id = { type = 11700 id = 238 } name = "3. Dagci Tümen" type = bergsjaeger model = 0 strength  = 35 }
		}

landdivision = { dormant = yes id = { type = 11700 id = 500 } name = "3. Zirhli Tümen" type = armor model = 3 } #
landdivision = { dormant = yes id = { type = 11700 id = 501 } name = "4. Zirhli Tümen" type = armor model = 3 } #

		
########################################

airunit = {
		location = 1075
		base = 1075
		name = "I. Türkce Hava Kolordu"
	    id = { type = 11700 id = 33 }
		    division = { id = { type = 25635 id = 34 } type = interceptor     model = 0	strength = 73 name = "1. Avci Filo"	}
            division = { id = { type = 25635 id = 35 } type = tactical_bomber model = 0 strength = 60 name = "1. Taktik Bombardiman Filo" }
	}

division_development = { 
name = "TDT Gür" 
type = nuclear_submarine
model = 2 
cost = 0.03 #0.3
new_model = no unitcost = yes
id = { type = 11700 id = 18 } 
date = { year = 1936 month = december day = 28 } 
} 
	
transports = 25
escorts = 5

} # End File

