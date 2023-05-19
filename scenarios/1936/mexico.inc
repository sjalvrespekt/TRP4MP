# provinceconversion to DH, Kane, February 9, 2011
province = {
	id = 1972 #Acapulco
	anti_air = 2
	air_base = {
	size = 2
	current_size = 2
	}
	naval_base = {
	size = 4
	current_size = 4
	}
}

province = { id = 1974   anti_air = 2 } #México City
province = { id = 1975   anti_air = 1 } #Monterey
province = { id = 1982   anti_air = 1 } #Guadalajara


country = {
    tag = MEX
	capital = 1974

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 8
        political_left = 8
        freedom = 6
        free_market = 6
        professional_army = 4
        defense_lobby = 4
        interventionism = 3
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	manpower = 20
	
	transports = 25
	escorts = 4

	
    ownedprovinces =      
{
	1966 #Merida
	1965 #Tuxtla Gutierrez=>Villahermosa
	1970 #Oaxaca de Juarez=>Acapulco(split)
	1968 #Vera Cruz=>Villahermosa
	1974 #Mexico City
	1972 #Acapulco de Juarez
	1971 #Morelia=>Guadalajara
	1973 #Leon de los Aldama
	1967 #Matamoros
	1975 #Monterrey
	1976 #Saltillo
	1969 #Puebla de Zaragoza=>Puebla
	1978 #Aguascalientes
	1980 #Culiacan Rosales
	1977 #Ciudad Juarez=>Nogales/Ciudad Juarez/Chihuahua(merge)
	1979 #Hermosillo
	1981 #Tijuana=>Mexicali/La Paz(merge)
	1982 #Guadalajara
}
    controlledprovinces = 
{
	1966 #Merida
	1965 #Tuxtla Gutierrez=>Villahermosa
	1970 #Oaxaca de Juarez=>Acapulco(split)
	1968 #Vera Cruz=>Villahermosa
	1974 #Mexico City
	1972 #Acapulco de Juarez
	1971 #Morelia=>Guadalajara
	1973 #Leon de los Aldama
	1967 #Matamoros
	1975 #Monterrey
	1976 #Saltillo
	1969 #Puebla de Zaragoza=>Puebla
	1978 #Aguascalientes
	1980 #Culiacan Rosales
	1977 #Ciudad Juarez=>Nogales/Ciudad Juarez/Chihuahua(merge)
	1979 #Hermosillo
	1981 #Tijuana=>Mexicali/La Paz(merge)
	1982 #Guadalajara
}
    nationalprovinces =   
{
	1966 #Merida
	1965 #Tuxtla Gutierrez=>Villahermosa
	1970 #Oaxaca de Juarez=>Acapulco(split)
	1968 #Vera Cruz=>Villahermosa
	1974 #Mexico City
	1972 #Acapulco de Juarez
	1971 #Morelia=>Guadalajara
	1973 #Leon de los Aldama
	1967 #Matamoros
	1975 #Monterrey
	1976 #Saltillo
	1969 #Puebla de Zaragoza=>Puebla
	1978 #Aguascalientes
	1980 #Culiacan Rosales
	1977 #Ciudad Juarez=>Nogales/Ciudad Juarez/Chihuahua(merge)
	1979 #Hermosillo
	1981 #Tijuana=>Mexicali/La Paz(merge)
	1982 #Guadalajara
}

diplomacy = {

relation = { tag = ENG value = 50 }
relation = { tag = HOL value = 25 }
relation = { tag = IRE value = 30 }
relation = { tag = USA value = 125 }
}
  SpyInfo                = { country = "MEX" NumberOfSpies = 5 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group D 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 2300 # GW artillery

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Modern Agriculture

5080 5090 # Construction 

5190 # Basic oil conversion

6400 6410 # Light Infantry

#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3800 # Prewar TP
3350 3360 # Prewar Capital, CA
	}

landunit = {
	id = { type = 29500 id = 1 }
	name = "Ejercito de Mexico"
	location = 1974 #Mexico City
		division = { id = { type = 29500 id = 2 } name = "Guardia del Presidente" type = militia model = 0 strength = 10 }
		division = { id = { type = 29500 id = 3 } name = "I División de Infantería" type = d_02 model = 0 }
		division = { id = { type = 29500 id = 4 } name = "II División de Infantería" type = d_02 model = 0 }
	}

landunit = {
	id = { type = 29500 id = 6 }
	name = "Caballería de Mexico"
	location = 1977 #Ciudad Juarez
		division = { id = { type = 29500 id = 7 } name = "I División de Caballería" type = cavalry model = 0 }
		division = { id = { type = 29500 id = 8 } name = "II División de Caballería" type = cavalry model = 0 }
	}
	
airunit = {
	id = { type = 29500 id = 9 }
	name = "Fuerza Aérea Mexicana"
	location = 1972 #Acapulco
	base = 1972
		division = { id = { type = 29500 id = 10 } name = "1a Grupo Aéreo de Caza" type = interceptor model = 0 strength = 75 }
	}	

navalunit = {
	id = { type = 29500 id = 11 }
	name = "Armada de Mexico"
	location = 1972 #Acapulco
	base = 1972
		division = { id = { type = 29500 id = 12 } name = "ARM Anahuac" type = heavy_cruiser model = 0 strength = 40 } #scrapped 1938
		division = { id = { type = 29500 id = 13 } name = "ARM Progreso" type = d_09 model = 0 } 
		division = { id = { type = 29500 id = 14 } name = "ARM Nicholas Bravo" type = d_09 model = 0 } 
	}

division_development = { 
name = "ARM Guanajuato" 
type = d_09
model = 2
cost = 0.04 #0.4
new_model = no unitcost = yes
extra = naval_improved_hull_s
id = { type = 29500 id = 15 } 
date = { year = 1936 month = may day = 0 } 
} 

division_development = { 
name = "ARM Querétaro" 
type = d_09
model = 2
cost = 0.04 #0.4
new_model = no unitcost = yes
extra = naval_improved_hull_s
id = { type = 29500 id = 16 } 
date = { year = 1936 month = april day = 0 } 
} 

division_development = { 
name = "ARM Potosi" 
type = d_09
model = 2
cost = 0.04 #0.4
new_model = no unitcost = yes
extra = naval_improved_hull_s
id = { type = 29500 id = 17 } 
date = { year = 1936 month = april day = 0 } 
} 

division_development = { 
name = "ARM Durango" 
type = d_09
model = 2
cost = 0.04 #0.4
new_model = no unitcost = yes
extra = naval_improved_hull_s
id = { type = 29500 id = 18 } 
date = { year = 1938 month = august day = 0 } 
} 

} # End File
