# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = { id = 232 anti_air = 2 air_base = {	size = 6 current_size = 6 }}

province = { id = 226 naval_base = { size = 8 current_size = 8 }}

province = { id = 223 anti_air = 4 air_base = {	size = 4 current_size = 4 }}

province = { id = 247 landfort = 2 } #Brest Litovsk
province = { id = 239 landfort = 1 } #Przemysl

#Anti Aircraft Batteries

province = { id = 235   anti_air = 2 } #Krakow
province = { id = 258   anti_air = 1 } #Vilna
province = { id = 255   anti_air = 1 } #Grodno
province = { id = 222   anti_air = 1 } #Torun
#province = { id = 224   anti_air = 2 } #Poznan

country = {
    tag = POL
	capital = 232

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 1
        freedom = 4
        free_market = 5
        professional_army = 3
        defense_lobby = 8
        interventionism = 6
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	}
	
	#inventions = { 2700061 2700063 2700065 }
	
	manpower = 20

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 20
	
	transports = 25
	escorts = 22
	
	dormant_leaders        = { 8113 } 

	ownedprovinces =      {
 	# 181 #Danzig
 	226 #Gdynia=>Danzig
 	225 #Bydgoszcz
 	224 #Poznan
 	227 #Czestochowa
 	223 #Lodz
 	231 #Wloclawek
 	232 #Warsaw
 	222 #Torun
 	230 #Plock
 	234 #Radom
 	233 #Sosnowiec
 	237 #Tarnow
 	236 #Nowy Sacz
 	235 #Krakow
 	221 #Katowice=>Krakow
 	239 #Przemysl
 	242 #LWOW
 	241 #Stryj
 	238 #Stanislawow
 	240 #Tarnopol
 	244 #Rowne
 	245 #Luck=>Brest Litovsk
 	246 #Chelm=>Kowel
 	243 #Lublin=>Zamosc
 	228 #Siedlce=>Lublin
 	229 #Ostroleka
 	252 #Suwalki
 	254 #Bialystok
 	250 #Lomza
 	253 #Slonim
 	247 #Brzesc Litewski=>Bilsk/Slonim
	 249 #Sarny=>Pinsk
 	248 #Pinsk=>Baranowieze/Luniniec
 	251 #Nowogrodek=>Lida
 	256 #Molodeczno
 	255 #Grodno
 	257 #Glebokie=>Swieciany
 	258 #Wilno
	}
	
	controlledprovinces = {
	# 181 #Danzig
 	226 #Gdynia=>Danzig
 	225 #Bydgoszcz
 	224 #Poznan
 	227 #Czestochowa
 	223 #Lodz
 	231 #Wloclawek
 	232 #Warsaw
 	222 #Torun
 	230 #Plock
 	234 #Radom
 	233 #Sosnowiec
 	237 #Tarnow
 	236 #Nowy Sacz
 	235 #Krakow
 	221 #Katowice=>Krakow
 	239 #Przemysl
 	242 #LWOW
 	241 #Stryj
 	238 #Stanislawow
 	240 #Tarnopol
 	244 #Rowne
 	245 #Luck=>Brest Litovsk
 	246 #Chelm=>Kowel
 	243 #Lublin=>Zamosc
 	228 #Siedlce=>Lublin
 	229 #Ostroleka
 	252 #Suwalki
 	254 #Bialystok
 	250 #Lomza
 	253 #Slonim
 	247 #Brzesc Litewski=>Bilsk/Slonim
 	249 #Sarny=>Pinsk
 	248 #Pinsk=>Baranowieze/Luniniec
 	251 #Nowogrodek=>Lida
 	256 #Molodeczno
 	255 #Grodno
 	257 #Glebokie=>Swieciany
 	258 #Wilno
	}
	
	nationalprovinces =   {
	181 #Danzig
 	226 #Gdynia=>Danzig
 	225 #Bydgoszcz
 	224 #Poznan
 	227 #Czestochowa
 	223 #Lodz
 	231 #Wloclawek
 	232 #Warsaw
 	222 #Torun
 	230 #Plock
 	234 #Radom
 	233 #Sosnowiec
 	237 #Tarnow
 	236 #Nowy Sacz
 	235 #Krakow
 	221 #Katowice=>Krakow
 	239 #Przemysl
 	242 #LWOW
 	241 #Stryj
 	238 #Stanislawow
 	240 #Tarnopol
 	244 #Rowne
 	245 #Luck=>Brest Litovsk
 	246 #Chelm=>Kowel
 	243 #Lublin=>Zamosc
 	228 #Siedlce=>Lublin
 	229 #Ostroleka
 	252 #Suwalki
 	254 #Bialystok
 	250 #Lomza
 	253 #Slonim
 	247 #Brzesc Litewski=>Bilsk/Slonim
 	249 #Sarny=>Pinsk
 	248 #Pinsk=>Baranowieze/Luniniec
 	251 #Nowogrodek=>Lida
 	256 #Molodeczno
 	255 #Grodno
 	257 #Glebokie=>Swieciany
 	258 #Wilno
	185 #Allenstein
	168 #Gleiwitz
	203 #Teschen
	
	#Claims Soviet Union
	599 #Minsk
	596 #Slutsk=>Bobraisk
	595 #Mozyr
	616 #Novograd-Volynsky=>Korosten
	614 #Proskurov=>Zhitomir
	597 #Luban=>Vinnitsa
	618 #Kamenets-Podolsky=>Mogilev Podolski
	592 #Borisov=>Orsha
	}

diplomacy = {
relation = { tag = CZE value = -1 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = ENG value = 50 }
relation = { tag = EST value = 75 }
relation = { tag = FIN value = 100 }
relation = { tag = FRA value = 100 }
relation = { tag = GER value = -10 }
relation = { tag = GRE value = 35 }
relation = { tag = HUN value = 50 }
relation = { tag = LAT value = 50 }
relation = { tag = LIT value = -75 }
relation = { tag = ROM value = 40 guaranteed = { day = 29 month = december year = 1934 } }
relation = { tag = SOV value = -50 }
relation = { tag = U04 value = 100 guaranteed = { day = 29 month = december year = 1934 } }
}
  SpyInfo                = { country = "POL" NumberOfSpies = 5 }

	deactivate = { }

	techapps = {
#
#####################
# Aircraft techs
#####################
4010 4020 4030 4040 # Single Engined 1929, Int, MRF, CAS 1930
4050 # Single Engined 1936

4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 2290 2300 2450 2460 2510 2550 # Arm

5010 # Modern Agriculture
5080 5090 # Construction
5190 # Basic oil conversion


1310 # Engineers
1010 1020 1110 1190 1200 # Infantry (early inf/berg), Cavalry (early)

6100 6110 6120 # Trench Warfare doctrine (land)

2400

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
3800 # Prewar TP

2310

	}
	
###############################################################################
# polish army
###############################################################################
landunit = {
	id = { type = 18600 id = 101 }
	location = 232 #Warsaw
	name = "Sztab Glowny WP"
		division = { id = { type = 18600 id = 102 } name = "Sztab Glowny WP" type = hq model = 0 }
	}

landunit = {
	id = { type = 18600 id = 103 }
	location = 258 #Wilno
	name = "Garnizon Wilno"
		division = { id = { type = 18600 id = 104 } name = "1 DP Legionów im. Pilsudskiego"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 105 } name = "19 Dywizja Piechoty"	          type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 106 } name = "3 Samodzielna Brygada Kawalerii" type = cavalry  model = 0 strength = 25 }
		division = { id = { type = 18600 id = 107 } name = "Brygada KOP 'Wilno'"             type = garrison model = 0 strength = 35 }
	}
	
landunit = {
	id = { type = 18600 id = 108 }
	location = 234 #Radom
	name = "Garnizon Kielce"
		division = { id = { type = 18600 id = 109 } name = "2 Dywizja Piechoty Legionów"  type = infantry model = 0 strength = 45 }
	}	

landunit = {
	id = { type = 18600 id = 110 }
	location = 243 #Lublin
	name = "3 Dywizja"
		division = { id = { type = 18600 id = 111 } name = "3 Dywizja Piechoty Legionów"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 112 }
	location = 222 #Torun
	name = "Garnizon Torun"
		division = { id = { type = 18600 id = 113 } name = "4 Dywizja Piechoty"           type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 114 } name = "16 Pomorska Dywizja Piechoty" type = infantry model = 0 strength = 45 }		
	}

landunit = {
	id = { type = 18600 id = 115 }
	location = 242 #Lwów
	name = "Garnizon Lwow"
		division = { id = { type = 18600 id = 116 } name = "5 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 117 }
	location = 235 #Kraków
	name = "Garnizon Krakow"
		division = { id = { type = 18600 id = 118 } name = "6 Dywizja Piechoty"                     type = infantry    model = 0 strength = 45 }
		division = { id = { type = 18600 id = 119 } name = "Samodzielna Brygada Kawalerii 'Kraków'" type = cavalry     model = 0 strength = 25 }
		division = { id = { type = 18600 id = 120 } name = "21 Dywizja Piechoty Górskiej"           type = bergsjaeger model = 0 strength = 50 }
	}

landunit = {
	id = { type = 18600 id = 121 }
	location = 227 #Czestochowa
	name = "7 Dywizja"
		division = { id = { type = 18600 id = 122 } name = "7 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 123 }
	location = 232 #Warszawa
	name = "8 Dywizja"
		division = { id = { type = 18600 id = 124 } name = "8 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 125 } name = "28 Dywizja Piechoty" type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 126 } name = "1 Brygada Kawalerii" type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 127 }
	location = 228 #Siedlce
	name = "9 Dywizja"
		division = { id = { type = 18600 id = 128 } name = "9 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 129 }
	location = 223 #Lodz
	name = "Garnizon Lodz"
		division = { id = { type = 18600 id = 130 } name = "10 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 131 } name = "25 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 132 } name = "26 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 133 }
	location = 238 #Stanislawów
	name = "Garnizon Stanislawow"
		division = { id = { type = 18600 id = 134 } name = "11 Karpacka Dywizja Piechoty"    type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 135 } name = "6 Samodzielna Brygada Kawalerii" type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 136 }
	location = 240 #Tarnopol
	name = "Garnizon Tarnopol"
		division = { id = { type = 18600 id = 137 } name = "12 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 138 } name = "Brygada KOP 'Podole'" type = garrison model = 0 strength = 35 }
	}

landunit = {
	id = { type = 18600 id = 139 }
	location = 244 #Rowne
	name = "Garnizon Rowne"
		division = { id = { type = 18600 id = 140 } name = "13 Kresowa Dywizja Piechoty" type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 141 } name = "Brygada Kawalerii 'Równe'"   type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 142 }
	location = 224 #Poznan
	name = "Garnizon Poznan"
		division = { id = { type = 18600 id = 143 } name = "14 Wielkopolska Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 144 } name = "17 Wielkopolska Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 145 } name = "Brygada Kawalerii 'Poznan'"        type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 146 }
	location = 250 #Lomza
	name = "18 Dywizja"
		division = { id = { type = 18600 id = 147 } name = "18 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 148 }
	location = 253 #Wolkowysk
	name = "Garnizon Baranowicze"
		division = { id = { type = 18600 id = 149 } name = "20 Dywizja Piechoty"             type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 150 } name = "Brygada Kawalerii 'Baranowicze'" type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 151 }
	location = 239 #Przemysl
	name = "Garnizon Przemysl"
		division = { id = { type = 18600 id = 152 } name = "22 Dywizja Piechoty Górskiej"  type = bergsjaeger model = 0 strength = 50 }
		division = { id = { type = 18600 id = 153 } name = "24 Dywizja Piechoty"             type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 154 }
	location = 221 #Katowice
	name = "23 Dywizja"
		division = { id = { type = 18600 id = 155 } name = "23 Górnoslaska Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 156 }
	location = 245 #Lutsk
	name = "Garnizon Kowel"
		division = { id = { type = 18600 id = 157 } name = "27 Dywizja Piechoty" type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 158 } name = "Brygada KOP 'Wolyn'" type = garrison model = 0 strength = 35 }
	}

landunit = {
	id = { type = 18600 id = 159 }
	location = 255 #Grodno
	name = "Garnizon Grodno"
		division = { id = { type = 18600 id = 160 } name = "29 Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 161 } name = "Brygada KOP 'Grodno'" type = garrison model = 0 strength = 35 }
	}

landunit = {
	id = { type = 18600 id = 162 }
	location = 247 #Brest-Litovsk
	name = "30 Dywizja"
		division = { id = { type = 18600 id = 163 } name = "30 Poleska Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
	}

landunit = {
	id = { type = 18600 id = 164 }
	location = 252 #Suwalki
	name = "Garnizon Suwalki"
		division = { id = { type = 18600 id = 165 } name = "Brygada Kawalerii 'Suwalki'" type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 166 }
	location = 225 #Bydgoszcz
	name = "Garnizon Bydgoszcz"
		division = { id = { type = 18600 id = 167 } name = "15 Wielkopolska Dywizja Piechoty"  type = infantry model = 0 strength = 45 }
		division = { id = { type = 18600 id = 168 } name = "Brygada Kawalerii 'Bydgoszcz'"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 169 }
	location = 254 #Bialystok
	name = "Brygada Kawalerii"
		division = { id = { type = 18600 id = 170 } name = "Brygada Kawalerii 'Bialystok'"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 171 }
	location = 229 #Ostroleka
	name = "Brygada Kawalerii"
		division = { id = { type = 18600 id = 172 } name = "12 Brygada Kawalerii"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 173 }
	location = 230 #Plock
	name = "Brygada Kawalerii"
		division = { id = { type = 18600 id = 174 } name = "13 Brygada Kawalerii"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 175 }
	location = 237 #Tarnow
	name = "Brygada Kawalerii"
		division = { id = { type = 18600 id = 176 } name = "10 Brygada Kawalerii"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 177 }
	location = 246 #Chelm
	name = "Brygada Kawalerii"
		division = { id = { type = 18600 id = 178 } name = "17 Brygada Kawalerii"     type = cavalry  model = 0 strength = 25 }
	}

landunit = {
	id = { type = 18600 id = 179 }
	location = 251 #Nowogrodek
	name = "Garnizon Nowogródek"
		division = { id = { type = 18600 id = 180 } name = "Brygada KOP 'Nowogródek'" type = garrison model = 0 strength = 35 }
	}

landunit = {
	id = { type = 18600 id = 181 }
	location = 248 #Pinsk
	name = "Garnizon Polesie"
		division = { id = { type = 18600 id = 182 } name = "Brygada KOP 'Polesie'" type = garrison model = 0 strength = 35 }
	}

###############################################################################

navalunit = { 
	id = { type = 18600 id = 53 } 
	name = "Polska Flota Wojenna" 
	location = 226
	base = 226
	division = { id = { type = 18600 id = 63 } name = "ORP Wicher" type = destroyer model = 2 } 
	division = { id = { type = 18600 id = 64 } name = "ORP Burza" type = destroyer model = 2 } 
} 

navalunit = { 
	id = { type = 18600 id = 71 } 
	name = "Podwodny Flottilla" 
	location = 226
	base = 226
	division = { id = { type = 18600 id = 55 } name = "ORP Wilk" type = submarine model = 1 } 
	division = { id = { type = 18600 id = 67 } name = "ORP Rys" type = submarine model = 1 } 
	division = { id = { type = 18600 id = 68 } name = "ORP Zbik" type = submarine model = 1 } 
} 

	
airunit = {
 	id = { type = 18600 id = 59 }
 	name = "III/1 Dyon Brygady Poscigowej"
 	location = 232
	base = 232
		division = { id = { type = 18600 id = 60 } name = "1 Grupa Aeronautyczna" type = interceptor     model = 0 } # between 30 and 105 PZL P.7
		division = { id = { type = 18600 id = 61 } name = "2 Grupa Aeronautyczna" type = multi_role      model = 0 } # between 140 & 175 PZL P.11; some of them accounted to unit id 60 
		division = { id = { type = 18600 id = 62 } name = "3 Grupa Aeronautyczna" type = tactical_bomber model = 0 strength = 32 } # 32 medium bombers Farman F.68 Goliath; went out of service in 1936
		division = { id = { type = 18600 id = 69 } name = "4 Grupa Aeronautyczna" type = cas             model = 0 } # unknown number of old Breguet XIX and Potez XXV light bombers still in service 1936
	}
	
#####under developement##### 

#brigade_development = {
#        id = { type = 18600 id = 200 }
#        cost = 0.6
#        size = 20
#        type = artillery
#		model = 2
#        date  = {  year = 1939 }
#		unitcost = yes
#        }

	division_development = { 
		name = "ORP Gryf" 
		type = d_09 
		model = 2
		cost = 0.06 #0.6 
	new_model = no unitcost = yes
		id = { type = 18600 id = 54 } 
		date = { year = 1938 month = february day = 27 } 
	} 

	division_development = { 
		name = "ORP Grom" 
		type = d_09 
		model = 3
		cost = 0.06 #0.6  
	new_model = no unitcost = yes
		id = { type = 18600 id = 65 } 
		date = { year = 1937 month = may day = 11 } 
	} 

	division_development = { 
		name = "ORP Blyskawica" 
		type = d_09 
		model = 3
		cost = 0.06 #0.6 
	new_model = no unitcost = yes
		id = { type = 18600 id = 66 } 
		date = { year = 1937 month = november day = 25 } 
	} 

#	division_development = { 
#		name = "ORP Orzel" #ocean going
#		type = submarine 
#		model = 1 
#		cost = 0.4 
#	new_model = no unitcost = yes
#		id = { type = 18600 id = 69 } 
#		date = { year = 1939 month = february day = 2 } 
#	} 

#	division_development = { 
#		name = "ORP Sep" #ocean going
#		type = submarine 
#		model = 1 
#		cost = 0.4 
#	new_model = no unitcost = yes
#		id = { type = 18600 id = 70 } 
#		date = { year = 1939 month = april day = 16 } 
#	} 
} # End File 
