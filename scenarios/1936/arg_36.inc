 
 ############################## 
 # Country definition for ARG # 
 ############################## 
  
               
 province = 
 {  id        = 2050 
   anti_air   = 5
   naval_base = {  size =  5 current_size =  5  } 
   air_base   = {  size =  3 current_size =  3  } 
  }             #Buenos Aires 
      
 province = 
 {  id        = 2053 
   anti_air   = 2 
   naval_base = {  size =  1 current_size =  1  } 
   air_base   = {  size =  3 current_size =  3  } 
  }             # Mar del Plata 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 { tag  = ARG 
   # Resource Reserves 
   energy                 = 1000
   metal                  = 1000
   rare_materials         = 500
   transports = 25
   escorts = 9
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   manpower               = 20
   capital                = 2050 
      
   ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 3 
     free_market       = 8 
     freedom           = 6 
     professional_army = 6 
     defense_lobby     = 7 
     interventionism   = 3 
    } 
	
   nationalprovinces      = 
{  
	2050	#Buenos Aires#
	2048 	#La Plata=>Buenos Aires#
	2027 	#San Miguel de Tucuman#
	2054 	#Cordoba#
	2045 	#Falkland Islands#
	2026 	#Salta=>San Miguel de Tucuman#
	2056	#Resistencia=>Corrientes#
	2055 	#Rosario#
	2028 	#Mendoza=>San Miguel de Tucuman#
	2029 	#San Juan=>San Miguel de Tucuman#
	2053 	#Mar del Plata=>Mardelplata/BahiaBlanca#
	2036 	#Rio Gallegos=>Santa Cruz#
	2037 	#Comodoro Rivadavia#
	2035 	#El Calafate=>Sarmiento#
	2038 	#Trelew=>Puerto Madryn#
	2039 	#Viedma#
	2034 	#Neuquen#
	2044 	#Ushuaia=>TierradelFuego#
	2043 	#Porvenir=>TierradelFuego#
	2049	#Corrientes=>Concordia
} 
   ownedprovinces         = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
   controlledprovinces    = {  2048 2027 2054 2026 2056 2055 2050 2028 2029 2053 2036 2037 2035 2038 2039 2034 2044 2049  } 
   
   diplomacy = 
   { 
	relation = { tag = BOL value = 50 }
	relation = { tag = BRA value = -10 }
	relation = { tag = CHL value = -20 }
	relation = { tag = COL value = 10 }
	relation = { tag = ENG value = 75 }
	relation = { tag = ECU value = 10 }
	relation = { tag = GER value = 75 }
	relation = { tag = IRE value = 20 }
	relation = { tag = ITA value = 30 }
	relation = { tag = PAR value = 50 }
	relation = { tag = PRU value = 20 }
	relation = { tag = URU value = -50 }
	relation = { tag = USA value = 75 }
	relation = { tag = VEN value = 10 }
    } 
	
   SpyInfo                = {  country = "ARG" NumberOfSpies = 6  } 
  
 #######################
 # technologie for ARG # 
 #######################
 
   deactivate = { }
 
   techapps  = {
                4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
                 
				4290 4300 4310 # double Engined 1929, tactical, naval 1930
				
				9010 9020 9030 # Aerial warfare, basic doctrines
 
                2800 # Basic Armoured Car

                2550 # GW tank

                2290 2300 # GW artillery

                2450 2460 # Early Static AA

                2510 # Basic AA

                1010 # Great War Infantry Division

                1190 # GW Cavalry

                5010 # Mechanized Agriculture
				
                5080 5090 # Construction 
				
                5190 # Basic oil conversion

                6100 6110 # Firepower doc

                # Escorts up to Washington
				3010	3040	3070
				3020	3050	3080
				3030 15250	3060	3090

                3350 3390 3430 3480 # Capital Design up to 1925
				3360 3440 3490 # CA up to 1925
				3370 # AC (BC 0)
				3380 3410 # BB up to Dreadnought
				
                3700 15080 # SS 1930
				
                3800 # Prewar TP

                #Naval doctrines
                8070 8130 8180 8760

} 

 #######################
 # army units for ARG  # 
 #######################
 # By Lord Rommel 
 # 11.6.2012
 #######################
 
   landunit = 
   {  id       = {  type = 12000 id = 1  } 
     name     = "II Cuerpo de Ejército" 
     location = 2034 #Neuquen
     Division = {  id  = {  type = 12000 id = 2  } name = "II División 'San Martín'" strength = 100 type = infantry model = 0 } 
	 Division = {  id  = {  type = 12000 id = 3  } name = "I División de Caballería" strength = 95 type = cavalry model = 0 }
	 Division = {  id  = {  type = 12000 id = 12 } name = "Grupo de Infanteria de Monte" strength = 25 type = bergsjaeger model = 0 experience = 50 }
   }
   
   landunit = 
   {  id       = {  type = 12000 id = 4  } 
     name     = "IV Cuerpo de Ejército" 
     location = 2028 #Mendoza  
     Division = 
     {  id  = {  type = 12000 id = 5  } name = "IV División de Infantería" strength = 100 type = infantry model = 0 } 
   }
   
   landunit = 
   {  id       = {  type = 12000 id = 6  } 
     name     = "V Cuerpo de Ejército" 
     location = 2026 #Salta 
     Division = 
     {  id  = {  type = 12000 id = 7  } name = "V División de Infantería" strength = 70 type = infantry model = 0 } 
   }
   
   landunit = 
   {  id       = {  type = 12000 id = 8  } 
     name     = "III Cuerpo de Ejército" 
     location = 2056 #Resistencia 
     Division = 
     {  id  = {  type = 12000 id = 9  } name = "III División 'Pellegrini'" strength = 100 type = infantry model = 0 } 
   }
   
   landunit = 
   {  id       = {  type = 12000 id = 10  } 
     name     = "I Cuerpo de Ejército" 
     location = 2050 # Buenos Aires 
     Division = 
     {  id  = {  type = 12000 id = 11  } name = "I División 'Ing. Krausse'" strength = 100 type = infantry model = 0 } 
    } 
	
 
   
 #######################
 # navy units for ARG  # 
 #######################
    
	navalunit = { 
		id = { type = 12000 id = 13 } 
		name = "Armada de la República Argentina" 
		location = 2053 
		base = 2053 
		division = { id = { type = 12000 id = 18 } name = "ARA Moreno" type = battleship model = 1 }
		division = { id = { type = 12000 id = 20 } name = "ARA Rivadavia" type = battleship model = 1 }
		division = { id = { type = 12000 id = 26 } name = "ARA Generale Belgrano" type = battlecruiser model = 0 }
		division = { id = { type = 12000 id = 28 } name = "ARA Generale Pueyrredon" type = battlecruiser model = 0 }
		division = { id = { type = 12000 id = 116 } name = "ARA Almirante Brown" type = heavy_cruiser model = 4 }
		division = { id = { type = 12000 id = 117 } name = "ARA Veinticinco De Mayo" type = heavy_cruiser model = 4 }
		division = { id = { type = 12000 id = 22 } name = "ARA Independencia" type = heavy_cruiser model = 0 }
		division = { id = { type = 12000 id = 24 } name = "ARA La Libertad" type = heavy_cruiser model = 0 }
		division = { id = { type = 12000 id = 30 } name = "ARA Catamarca" type = destroyer model = 1 }
		division = { id = { type = 12000 id = 31 } name = "ARA Jujuy" type = destroyer model = 1 }
		division = { id = { type = 12000 id = 32 } name = "ARA Córdoba" type = destroyer model = 1 }
		division = { id = { type = 12000 id = 33 } name = "ARA La Plata" type = destroyer model = 1 }
		division = { id = { type = 12000 id = 40 } name = "ARA Mendoza" type = destroyer model = 2 }
		division = { id = { type = 12000 id = 43 } name = "ARA La Rioja" type = destroyer model = 2 }
		division = { id = { type = 12000 id = 44 } name = "ARA Tucumán" type = destroyer model = 2 }		
		division = { id = { type = 12000 id = 45 } name = "ARA Rosario" type = d_09 model = 0 }
		division = { id = { type = 12000 id = 46 } name = "ARA Paraná" type = d_09 model = 0 }
		division = { id = { type = 12000 id = 38 } name = "ARA Cervantes" type = d_09 model = 1 }
		division = { id = { type = 12000 id = 39 } name = "ARA Garay" type = d_09 model = 1 }
		division = { id = { type = 12000 id = 34 } name = "ARA Santa Fe" type = submarine model = 1 } 				
		division = { id = { type = 12000 id = 35 } name = "ARA Salta" type = submarine model = 1 } 
		division = { id = { type = 12000 id = 36 } name = "ARA Santiago del Estero" type = submarine model = 1 } 
		}   
		
   airunit = 
   {  id      = {  type = 12000 id = 50  } 
     name     = "Aviación del Ejército" 
     location = 2050 
     base     = 2050 
     Division = { id = { type = 12000 id = 51 } name = "Grupo Aérea Nro. 1" strength = 55 type = interceptor model = 0 } 
	 Division = { id = { type = 12000 id = 52 } name = "Grupo Aérea Nro. 2" strength = 45 type = interceptor model = 0 } 
    } 
	
   airunit = 
   {  id  = {  type = 12000 id = 60  } 
     name     = "Aviación Naval" 
     location = 2050 
     base     = 2050 
     Division = { id = { type = 12000 id = 61 } name = "Fuerza Aeronaval Nro. 1" strength = 26 type = naval_bomber model = 0 } #extra = escort brigade_model = 0 } 
	 Division = { id = { type = 12000 id = 62 } name = "Fuerza Aeronaval Nro. 2" strength = 20 type = naval_bomber model = 0 } #extra = escort brigade_model = 0 } 
    } 
  } 
 