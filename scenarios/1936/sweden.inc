# geändert Zergel, 19.10.2010, Anpassung Province ID an DH


province = {
	id = 2153 #Gothenburg
	anti_air = 2
	naval_base = {
		size = 7
		current_size = 7
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

province = {
	id = 2155 #Kalmar
	anti_air = 2
	coastalfort = 3
	naval_base = {
		size = 7
		current_size = 7
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

province = {
	id = 2159 #Stockholm
	anti_air = 2
	naval_base = {
		size = 7
		current_size = 7
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

province = {
	id = 2166 #Lulea
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 4
		current_size = 4
	}
}



province = {	id = 2152	 coastalfort = 1 }#Malmö
province = {	id = 2160	landfort = 1 }#Oerebro Fästning


country = {
    tag = SWE
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 10
		political_left = 10
        freedom = 6
        free_market = 7
        professional_army = 3
        defense_lobby = 5
        interventionism = 4
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	headofgovernment = { type = 9 id = 7033 }
 	foreignminister = { type = 9 id = 7038 }
 	armamentminister = { type = 9 id = 7047 }
 	ministerofsecurity = { type = 9 id = 7058 }

	manpower = 20
	capital =  2159
	
	transports = 50
	escorts = 35

	
    ownedprovinces =      {
 	2167 #Kiruna
 	2166 #Lulea
 	2165 #Ulmea
 	2163 #Vilhelmia=>Gälivare
 	2164 #Oestersund=>Vilhelmia
 	2162 #Gaevle=>Sundsvall
 	2161 #Karlstad=>Sveg/Ludvika
 	2160 #Oerebro=>Karlstad/Skövde
 	2158 #Uppsala
 	2159 #Stockholm
 	2157 #Linkoping=>Norrköping
 	2155 #Kalmar=>Jönköping
 	2152 #Malmö
 	2154 #Joenkoping
 	2153 #Gothenburg
 	2156 #Visby=>Gotland
	 }
    controlledprovinces = {
	2167 #Kiruna
 	2166 #Lulea
 	2165 #Ulmea
 	2163 #Vilhelmia=>Gälivare
 	2164 #Oestersund=>Vilhelmia
 	2162 #Gaevle=>Sundsvall
 	2161 #Karlstad=>Sveg/Ludvika
 	2160 #Oerebro=>Karlstad/Skövde
 	2158 #Uppsala
 	2159 #Stockholm
 	2157 #Linkoping=>Norrköping
 	2155 #Kalmar=>Jönköping
 	2152 #Malmö
 	2154 #Joenkoping
 	2153 #Göteburg
 	2156 #Visby=>Gotland
	  }
	nationalprovinces =   {
	2167 #Kiruna
 	2166 #Lulea
 	2165 #Ulmea
 	2163 #Vilhelmia=>Gälivare
 	2164 #Oestersund=>Vilhelmia
 	2162 #Gaevle=>Sundsvall
 	2161 #Karlstad=>Sveg/Ludvika
 	2160 #Oerebro=>Karlstad/Skövde
 	2158 #Uppsala
 	2159 #Stockholm
 	2157 #Linkoping=>Norrköping
 	2155 #Kalmar=>Jönköping
 	2152 #Malmö
 	2154 #Joenkoping
 	2153 #Göteburg
 	2156 #Visby=>Gotland
	}

diplomacy = {
relation = { tag = BEL value = 100 }
relation = { tag = DEN value = 75 }
relation = { tag = ENG value = 80 }
relation = { tag = FIN value = 150 }
relation = { tag = GER value = 50 }
relation = { tag = HOL value = 100 }
relation = { tag = LUX value = 100 }
relation = { tag = NOR value = 150 }
relation = { tag = PER value = 50 }
relation = { tag = USA value = 75 }
}
  SpyInfo                = { country = "SWE" NumberOfSpies = 5 }
	deactivate = { }
	blueprints = { 3710 } # 1939 submarine
	techapps = {
# Group C 1936 techs
#######################


#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 # Basic Armoured Car
2550 2560 2630 # GW tank, tankette and medium tank (strv m21)

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

5010 # Agriculture 
5080 5090 # Construction 
5190 # Basic Oil Refining
5470 # Nukes faculty

6100 6110 6120 # Firepower doc

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3030 15250 3060 # CL WW1
3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA up to 1914
3370 # AC (BC 0)
3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
3800 # Prewar TP
15090 # WW1 carrier design

	}

dormant_teams    = { 3206 3208 3221 }
	
##################################
# swedish army by Lord Rommel
# Datas by league of nations
# 11.6.2012
##################################	
	
landunit =	{
	location = 2152 #Hälsingborg
	name = "Milo I"
	id = { type = 29600 id = 1 }
		division = { id = { type = 29600 id = 2 } name = "1. Arméfördelning"	type = infantry model = 1 extra = artillery }
	}
	
landunit =	{
	location = 2164 #Oestersund
	name = "Milo II"
	id = { type = 29600 id = 7 }
		division = { id = { type = 29600 id = 8 } name = "2. Arméfördelning" type = infantry model = 1 extra = artillery }
	}	

landunit =	{
	location = 2160 #Skövde
	name = "Milo III"
	id = { type = 29600 id = 3 }
		division = { id = { type = 29600 id = 4 } name = "3. Arméfördelning" type = infantry model = 1 extra = artillery }
	}

landunit =	{
	location = 2157 #Linkoping
	name = "Milo IV"
	id = { type = 29600 id = 9 }
	    division = { id = { type = 29600 id = 6 }  name = "4. Arméfördelning" type = infantry model = 1 extra = artillery }
		#division = { id = { type = 29600 id = 10 } name = "Östra brigad" type = d_02 model = 0 extra = artillery }
	}		
	
landunit =	{
	location = 2159 #Stockholm
	name = "3a Armékåren"
	id = { type = 29600 id = 5 }
		division = { id = { type = 29600 id = 13 } name = "Göta livgarde" type = garrison model = 0 extra = anti_air }
	}
	
landunit =	{
	location = 2166
	name = "Milo IV"
	id = { type = 29600 id = 11 }
	    division = { id = { type = 29600 id = 14 } name = "5. Arméfördelning" type = infantry model = 1 extra = artillery }
		#division = { id = { type = 29600 id = 12 } name = "Bodens förläggningsort" type = garrison model = 0 extra = anti_air }
	}

#############AIRFORCE
	
airunit = {
	location = 2159
	base = 2159
	name = "Svenska Kungliga Flygvapnet"
	id = { type = 29600 id = 15 }
		division = { id = { type = 29600 id = 16 } name = "B1 Flygflottilj" type = tactical_bomber model = 0 strength = 25 } #Taktiska Bombflyggruppen
		division = { id = { type = 29600 id = 17 } name = "F1 Flygflottilj" type = multi_role      model = 0 strength = 45 } #Jaktflyggruppen
	}
	
#############NAVY
	
navalunit = { 
location = 2159 #Berga/Muskö 
base = 2159
name = "Stockhomseskadern" 
id = { type = 29600 id = 18 } 
division = { id = { type = 29600 id = 24 } name = "HMS Sverige" type = heavy_cruiser model = 2 } 
division = { id = { type = 29600 id = 25 } name = "HMS Drottning Victoria" type = heavy_cruiser model = 2 } 
division = { id = { type = 29600 id = 21 } name = "HMS Äran" type = heavy_cruiser model = 0 } 
division = { id = { type = 29600 id = 22 } name = "HMS Wasa" type = heavy_cruiser model = 0 } 
division = { id = { type = 29600 id = 72 } name = "HMS Ragnar" type = destroyer model = 0 } # destroyers in this fleet from here on are exceptions from the 1000 to - rule because of their original designation and Swedens choice for small ships
division = { id = { type = 29600 id = 73 } name = "HMS Sigurd" type = destroyer model = 0 } 
division = { id = { type = 29600 id = 70 } name = "HMS Vidar" type = destroyer model = 0 } 
division = { id = { type = 29600 id = 41 } name = "HMS Wrangel" type = destroyer model = 0 } 
division = { id = { type = 29600 id = 31 } name = "HMS Wachtmeister" type = destroyer model = 0 } 
division = { id = { type = 29600 id = 74 } name = "HMS Hugin" type = destroyer model = 0 }
division = { id = { type = 29600 id = 75 } name = "HMS Munin" type = destroyer model = 0 }
division = { id = { type = 29600 id = 76 } name = "HMS Wale" type = destroyer model = 0 }
division = { id = { type = 29600 id = 77 } name = "HMS Magne" type = destroyer model = 0 }
division = { id = { type = 29600 id = 78 } name = "HMS Mode" type = destroyer model = 0 }
} 

navalunit = { 
location = 2159 #Berga/Muskö 
base = 2159
name = "1:a Ubåtsdivisionen" 
id = { type = 29600 id = 54 } 
division = { id = { type = 29600 id = 52 } name = "HMS Draken" type = submarine model = 1 } 
division = { id = { type = 29600 id = 46 } name = "HMS Gripen" type = submarine model = 1 } 
division = { id = { type = 29600 id = 47 } name = "HMS Ulven" type = submarine model = 1 } 
} 

navalunit = { 
location = 2155 #Kalmar 
base = 2155 
name = "Karlskronavdelningen" 
id = { type = 29600 id = 19 } 
division = { id = { type = 29600 id = 62 } name = "HMS Dristigheten" type = escort_carrier model = 0 } 
division = { id = { type = 29600 id = 61 } name = "HMS Tapperheten" type = heavy_cruiser model = 0 } 
division = { id = { type = 29600 id = 63 } name = "HMS Oden" type = heavy_cruiser model = 0 strength = 30 } # out of service 1937
division = { id = { type = 29600 id = 64 } name = "HMS Thor" type = heavy_cruiser model = 0 strength = 30 } # out of service 1937
division = { id = { type = 29600 id = 29 } name = "HMS Oscar II" type = heavy_cruiser model = 0 } 
division = { id = { type = 29600 id = 23 } name = "HMS Fylgia" type = battlecruiser model = 0 strength = 20 } #bad condition
division = { id = { type = 29600 id = 28 } name = "HMS Gotland" type = light_cruiser model = 2 } 
division = { id = { type = 29600 id = 27 } name = "HMS Clas Fleming" type = d_09 model = 2 } 
division = { id = { type = 29600 id = 35 } name = "HMS Jacob Bagge" type = d_09 model = 0 } 
division = { id = { type = 29600 id = 36 } name = "HMS Örnen" type = d_09 model = 0 } 
division = { id = { type = 29600 id = 32 } name = "HMS Psilander" type = d_09 model = 0 } 
division = { id = { type = 29600 id = 53 } name = "M/S Albatross" type = transport model = 0 } 
} 

navalunit = { 
location = 2155 #Kalmar 
base = 2160 
name = "2:a Ubåtsdivisionen" 
id = { type = 29600 id = 55 } 
division = { id = { type = 29600 id = 33 } name = "HMS Braxen" type = nuclear_submarine model = 0 strength = 30 } 
division = { id = { type = 29600 id = 34 } name = "HMS Abboren" type = nuclear_submarine model = 0 strength = 30 } 
division = { id = { type = 29600 id = 37 } name = "HMS Svärdfisken" type = nuclear_submarine model = 0 strength = 30 } 
division = { id = { type = 29600 id = 38 } name = "HMS Tumlaren" type = nuclear_submarine model = 0 strength = 30 } 
division = { id = { type = 29600 id = 43 } name = "HMS Bävern" type = nuclear_submarine model = 1 } 
division = { id = { type = 29600 id = 44 } name = "HMS Illern" type = nuclear_submarine model = 1 } 
division = { id = { type = 29600 id = 45 } name = "HMS Uttern" type = nuclear_submarine model = 1 }
division = { id = { type = 29600 id = 51 } name = "HMS Valen" type = submarine model = 0 } 
division = { id = { type = 29600 id = 48 } name = "HMS Hajen" type = nuclear_submarine model = 1 }
division = { id = { type = 29600 id = 49 } name = "HMS Sälen" type = nuclear_submarine model = 1 } 
division = { id = { type = 29600 id = 50 } name = "HMS Valrossen" type = nuclear_submarine model = 1 } 
} 

navalunit = { 
location = 2153 #Gothenburgen 
base = 2153 
name = "Göteborgseskadern" 
id = { type = 29600 id = 20 } 
division = { id = { type = 29600 id = 26 } name = "HMS Gustav V" type = heavy_cruiser model = 2 } 
division = { id = { type = 29600 id = 30 } name = "HMS Manligheten" type = heavy_cruiser model = 0 } 
division = { id = { type = 29600 id = 39 } name = "HMS Ehrensköld" type = destroyer model = 1 } 
division = { id = { type = 29600 id = 40 } name = "HMS Nordenskjöld" type = destroyer model = 1 } 
division = { id = { type = 29600 id = 42 } name = "HMS Klas Horn" type = destroyer model = 1 } 
division = { id = { type = 29600 id = 71 } name = "HMS Klas Uggla" type = destroyer model = 1 }
} 

brigade_development = {
        id = { type = 29600 id = 1400 }
        name = "Improved Hull 1936"
		cost = 0.2
        size = 10
        type = naval_improved_hull_s
		model = 0
        date  = {  year = 1939 }
		unitcost = yes
        }

division_development = { 
name = "HMS Göteborg" 
type = destroyer 
model = 1 
cost = 0.05 #0.5
new_model = no unitcost = yes
id = { type = 29600 id = 56 } 
date = { year = 1936 month = october day = 29 } 
} 

division_development = { 
name = "HMS Stockholm" 
type = destroyer 
model = 1 
cost = 0.05 #0.5
new_model = no unitcost = yes
id = { type = 29600 id = 57 } 
date = { year = 1937 month = november day = 24 } 
} 


###coastal subs pre-1936


division_development = { 
name = "HMS Delfinen" 
type = nuclear_submarine 
model = 2
cost = 0.03 #0.3
new_model = no unitcost = yes
id = { type = 29600 id = 58 } 
date = { year = 1936 month = april day = 22 } 
} 

division_development = { 
name = "HMS Nordkaparen" 
type = nuclear_submarine 
model = 2 
cost = 0.03 #0.3
new_model = no unitcost = yes
id = { type = 29600 id = 59 } 
date = { year = 1936 month = october day = 16 } 
} 

division_development = { 
name = "HMS Springaren" 
type = nuclear_submarine 
model = 2 
cost = 0.03 #0.3
new_model = no unitcost = yes
id = { type = 29600 id = 60 } 
date = { year = 1937 month = august day = 3 } 
} 

#####coastal subs class 1936 "sjölejonet class"

division_development = { 
name = "HMS Sjölejonet" 
type = nuclear_submarine 
model = 3 
cost = 0.03 #0.3
new_model = no unitcost = yes
id = { type = 29600 id = 65 } 
date = { year = 1938 month = september day = 2 } 
} 

} # End File
