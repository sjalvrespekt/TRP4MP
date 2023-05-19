 ############################## 
 # Country definition for ITA # 
 ##############################
     
province = { id = 396  anti_air = 6 air_base = { size = 10 current_size = 10 } naval_base = { size = 10 current_size = 10 } } #Genoa + La Spezia
province = { id = 404  air_base = { size = 10 current_size = 10 } } #Udine
province = { id = 406  anti_air = 2 naval_base = { size = 6 current_size = 6 } } #Pola
province = { id = 407  air_base = { size = 4 current_size = 4 } anti_air = 3 } #Milan
province = { id = 400  anti_air = 2 naval_base = { size = 6 current_size = 6 } air_base = { size = 10 current_size = 10 } } #Venice
province = { id = 379  naval_base = { size = 2 current_size = 2 } air_base = { size = 4 current_size = 4 } oilpool = 100 supplypool = 100 } #Rhodes
province = { id = 411  anti_air = 1 } #Bologna
province = { id = 410  anti_air = 1 } #Florence
province = { id = 419  anti_air = 1 air_base = { size = 10 current_size = 10 }} #Rome
province = { id = 421  naval_base = { size = 6 current_size = 6 } air_base = { size = 4 current_size = 4 }} #Naples
province = { id = 422  anti_air = 1 naval_base = { size = 10 current_size = 10 } air_base = { size = 10 current_size = 10 } } #Taranto
province = { id = 430  anti_air = 2 naval_base = { size = 6 current_size = 6 } air_base = { size = 10 current_size = 10 } } #Palermo
province = { id = 398  anti_air = 3 } # Turin
province = { id = 434  anti_air = 1 naval_base = { size = 4 current_size = 4 } air_base = { size = 4 current_size = 4 } oilpool = 100 supplypool = 500 } #Cagliari
province = { id = 765  anti_air = 2 naval_base = { size = 6 current_size = 6 } air_base = { size = 2 current_size = 2 } landfort = 3 } #Tobruk
province = { id = 761  anti_air = 1 naval_base = { size = 2 current_size = 2 } air_base = { size = 4 current_size = 4 } } #Bengazi
province = { id = 750  anti_air = 1 naval_base = { size = 2 current_size = 2 } air_base = { size = 10 current_size = 10 } oilpool = 100 supplypool = 500 } #Tripoli
province = { id = 815  anti_air = 1 naval_base = { size = 6 current_size = 6 } oilpool = 100 supplypool = 500 } #Massaua
province = { id = 817  air_base = { size = 4 current_size = 4 } } #Asmara
province = { id = 836  naval_base = { size = 2 current_size = 2 } air_base = { size = 1 current_size = 1 } oilpool = 100 supplypool = 500 } # Mogadishu 
province = { id = 769  landfort = 1 } #Bir Hakeim

# Vallo Alpino
province = { id = 396  landfort = 3 } #Genoa
province = { id = 398  landfort = 3 } #Turin
province = { id = 403  landfort = 1 } #Capodistria
province = { id = 407  landfort = 1 } #Milan
  
 ##################### 
 # Country main data # 
 ##################### 
 
country = {
  tag                    = ITA
  manpower               = 160
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 50
  belligerence           = 20 #to avoid MP problems
  capital                = 419 #Rom
  
  transports             = 600
  escorts                = 75
  
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
		motorized = yes
	} 
	   
 	#inventions = { 2700061 2700063 2700065 }
 
 	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy =
       {  date             = {  year = 0 month = january day = 0  }
          democratic        = 2
          political_left    = 3
          freedom           = 4
          free_market       = 4
          professional_army = 3
          defense_lobby     = 7
          interventionism   = 6
        }
		
#		peacetime_ic_mod     = 0.7
#		wartime_ic_mod       = 0.8
		
  headofstate            = { type = 9 id = 3001 }
  headofgovernment       = { type = 9 id = 3002 }
  foreignminister        = { type = 9 id = 3003 }
  armamentminister       = { type = 9 id = 3004 }
  ministerofsecurity     = { type = 9 id = 3093 }
  ministerofintelligence = { type = 9 id = 3194 }
  chiefofstaff           = { type = 9 id = 3195 }
  chiefofarmy            = { type = 9 id = 3196 }
  chiefofnavy            = { type = 9 id = 3009 }
  chiefofair             = { type = 9 id = 3010 }
 
    diplomacy =
    {
	relation = { tag = AFG value = 50 }
    relation = { tag = ALB value = 10 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 } relation = { tag = AUS value = 125 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 150 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = CZE value = 15 }
    relation = { tag = ENG value = -50 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = -50 }
    relation = { tag = GER value = 50 }
    relation = { tag = GRE value = -35 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = HOL value = -20 }
    relation = { tag = HUN value = 125 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = IRE value = 20 }
    relation = { tag = IRQ value = 25 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = { tag = ROM value = 50 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation = { tag = SCH value = 1 guaranteed = { day = 16 month = may year = 1935 }}
    relation = { tag = SPR value = -50 }
    relation = { tag = TUR value = 1 guaranteed = { day = 17 month = march year = 1934 }}
    relation = { tag = YEM value = 50 }
    relation = { tag = YUG value = 75 }
    }
		
	SpyInfo = {  country = "ITA" NumberOfSpies = 9  }
	   
    nationalprovinces = {  
	#Sizilien
	430 #Palermo
	431 #Messina
	432 #Catania
	433 #Siracuse
	#Sardinien
	434 #Cagliari
	435 #Sassari
	#Italien
	425 #Reggio Calabria
	422 #Taranto
	424 #Potenza
	421 #Naples
	420 #Foggia
	416 #Anzio
	423 #Campobasso
	415 #Pescara
	414 #Perugia
	419 #Rom
	410 #Florence
	412 #Ancona
	411 #Bologna
	393 #Brescia
	408 #Parma
	396 #Genoa
	398 #Turin
	407 #Milan
	401 #Trento
	400 #Venice  
    	403 #Capodistria
	406 #Pola
	402 #Bolzano
	413 #Livorno
	417 #Cassino
	405 #Udine
	404 #Trieste
	399 #Alessandria
	378 #Kalymnos
	379 #Rhodos
	394 #Belluno
	395 #Bergamo
	418 #Gaeta
	426 #Bari
	427 #Salerno
	428 #Cosenza
	349 #Ljubljana#
	350 #Split#
	#351 #Knin#
	343 #Dubrovnik#
	#332 #Cetinje#
	}
	       
    ownedprovinces = { 
    #Sizilien
	430 #Palermo
	431 #Messina
	432 #Catania
	433 #Siracuse
	#Sardinien
	434 #Cagliari
	435 #Sassari
	#Italien
	425 #Reggio Calabria
	422 #Taranto
	424 #Potenza
	421 #Naples
	420 #Foggia
	416 #Anzio
	423 #Campobasso
	415 #Pescara
	414 #Perugia
	419 #Rom
	410 #Florence
	412 #Ancona
	411 #Bologna
	393 #Brescia
	408 #Parma
	396 #Genoa
	398 #Turin
	407 #Milan
	401 #Trento
	400 #Venice  
    403 #Capodistria
	406 #Pola
	402 #Bolzano
	413 #Livorno
	417 #Cassino
	405 #Udine
	404 #Trieste
	399 #Alessandria
	378 #Kalymnos
	379 #Rhodos
	394 #Belluno
	395 #Bergamo
	418 #Gaeta
	426 #Bari
	427 #Salerno
	428 #Cosenza
    #Libyen
	754 #Maradah
	752 #Az Zawiyah
	750 #Tripolis
	757 #Misratah
	756 #Surt
	762 #Ajdabiya
	761 #Benghazi
	768 #Darnah
	760 #Masus
	766 #El Mukhayla
	765 #Tobruk
	771 #Al Bardia
	769 #Bir Hakeim
	770 #El Jaghbub
	773 #Jalu
	755 #Houn
	751 #Gharyan
	774 #Al Jawf
    776 #Sabhah
	777 #Ayn Ath Thalab
	758 #Bu Nujaym
	759 #El Agheila
	763 #Qaminis
	775 #Wadi al Hamim
	764 #Al Bayda
	767 #Gazala
	772 #Bir al Ghabi
	753 #Ghadamis
	#Abessinien
	815 #Messawa
    817 #Asmaraa
	816 #Assab
	837 #Bayahabo
	836 #Mogadishu
	838 #Kismaayo
    834 #Gardo
	835 #Galkayo
	}

    controlledprovinces = { 
#Sizilien
	430 #Palermo#
	431 #Messina#
	432 #Catania#
	433 #Siracuse#
#Sardinien
	434 #Cagliari#
	435 #Sassari#
#Italien
	425 #Reggio Calabria#
	422 #Taranto#
	424 #Potenza#
	421 #Naples#
	420 #Foggia#
	416 #Anzio#
	423 #Campobasso#
	415 #Pescara#
	414 #Perugia#
	419 #Rom#
	410 #Florence#
	412 #Ancona#
	411 #Bologna#
	393 #Brescia#
	408 #Parma#
	396 #Genoa#
	398 #Turin#
	407 #Milan#
	401 #Trento#
	400 #Venice#  
        403 #Capodistria#
	406 #Pola#
	402 #Bolzano#
	413 #Livorno#
	417 #Cassino#
	405 #Udine#
	404 #Trieste#
	399 #Alessandria#
	378 #Kalymnos#
	379 #Rhodos#
	394 #Belluno#
	395 #Bergamo#
	418 #Gaeta#
	426 #Bari#
	427 #Salerno#
	428 #Cosenza#
	# 381 #Ermoupoli#
#Libyen
	754 #Maradah#
	752 #Az Zawiyah#
	750 #Tripoli#
	757 #Misratah#
	756 #Sirt#
	762 #Agedabiya#
	761 #Benghazi#
	768 #Darnah#
	760 #Msus#
	766 #El Mukhayla#
	765 #Tobruk#
	771 #Bardia#
	769 #Bir Hakeim#
	770 #Al Jaghbub#
	773 #Jalu#
	755 #Houn#
	751 #Gharyan#
	774 #Al Jawf#
	776 #Sabha#
	777 #Ayn Ath Talab#
	758 #Bu Nujaym#
	759 #El Agheila#
	763 #Qaminis#
	775 #Wadi al Hamim#
	764 #Al Bayda#
	767 #Gazala#
	772 #Bir al Ghabi#
	753 #Ghadamis#
#Abessinien
	815 #Massawa#
	817 #Asmara#
	816 #Assab#
	837 #Baidoa#
	836 #Mogadishu#
	838 #Kismayo#
	834 #Gardo#
	835 #Galkacyo#
	}

 ##################### 
 # technologie datas # 
 #####################     
	   
	deactivate = { }

	blueprints = { 1070 1150 3710 3810 }

  techapps = { 
	2800 2810  2550  2560  2570  2290  2300 2450  
	1010  1020  1190  1200  1110  5010  
	5080  5090  5190  5310  5320  5470  5480  
	9010 9020 9030 # Aerial warfare, basic doctrines
	9600 # Early Airborne Experience
	1310 # Rear Area Supply Dumps
	
	2510 # basic AA brigade

	6400 6410 # Light Infantry
	
	10110 # motorized Inf 1937
	
	2010 2630 # Tank Division 36 & medium tanks 36
							 
	#Naval doctrines
	8070 8130 8180 8240 8610 8660 8760

	#Naval Techs
	# Escorts up to pre-WW2
	3010	3040	3070	3100
	3020	3050	3080	3110
	3030 15250	3060	3090	3120
	
	3350 3390 3430 3480 3510 15100 # Capital Design up to 1935
	3360 3440 3490	3520 # CA up to 1930
	3370 # AC (BC 0)
	3380 3410 3420	3470 3500 3530 3550 # BB up to 1936
	7550 # WW1 Monitor
	15090 16030 3190 3200 # Prewar Carrier and CV 1930
	3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
	3800 # Prewar TP
	3850 # torpedoes 36
	
	#Air force
	4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
	4050 # Single Engined 1936

	4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930
	4330 4350 4370 # double Engined 1936, naval bomber 1937, transport plane 1937
	
}

 dormant_teams = { 1849 } #ITA Carrier
 inventions = { 8023 } # Monitor
      
 ##################### 
 # ITA ARMY OOB      # 
 ##################### 
 
 landunit =
  { id       = { type = 23500 id = 1 }
    location = 419 #Rome
    name     = "Comando Supremo"
    division = { id = { type = 23500 id = 2 } name = "Comando Supremo" type = hq model = 0 extra = engineer strength = 75 }
  } 

 landunit =
  { id       = { type = 23500 id = 3 }
    location = 398 #Turin
    name     = "Comando 1a Divisione Alpina"
	division = { id = { type = 23500 id = 4 } name = "1a Divisione Alpina 'Taurinense'" type = d_07 model = 0 strength = 75 experience = 65 }
  }

 landunit =
  { id       = { type = 23500 id = 5 }
    location = 402 #Bolzano
    name     = "Comando 2a Divisione Alpina"
	division = { id = { type = 23500 id = 6 } name = "2a Divisione Alpina 'Tridentina'" type = d_07 model = 0 strength = 75 experience = 65 }
  }

#3a Divisione Alpina 'Julia' ()
# In Abessinien

 landunit =
  { id       = { type = 23500 id = 7 }
    location = 396 #Genoa
    name     = "Comando 4a Divisione Alpina"
	division = { id = { type = 23500 id = 8 } name = "4a Divisione Alpina 'Cuneense'" type = d_07 model = 0 strength = 75 experience = 65 }
  }

 landunit =
  { id       = { type = 23500 id = 9 }
    location = 405 #Udine
    name     = "Comando 1a Divisione Celere"
	division = { id = { type = 23500 id = 10 } name = "1a Divisione Celere 'Eugenio di Savoia'" type = cavalry model = 2 strength = 75 extra = light_armor_brigade }
  }

 landunit =
  { id       = { type = 23500 id = 11 }
    location = 411 #Bologna
    name     = "Comando 2a Divisione Celere"
    division = { id = { type = 23500 id = 12 } name = "2a Divisione Celere 'Emanuele Filiberto Testa di Ferro'" type = cavalry model = 2 strength = 75 extra = light_armor_brigade }
  }

 landunit =
  { id       = { type = 23500 id = 13 }
    location = 407 #Milan
    name     = "Comando 2a Divisione Celere"
    division = { id = { type = 23500 id = 14 } name = "3a Divisione Celere 'Principe Amedeo Duca d'Aosta'" type = cavalry model = 2 strength = 75 extra = light_armor_brigade } 
  }

##############################

 landunit =
  { id       = { type = 23500 id = 15 }
    location = 398 # Turin
    name     = "I Corpo d'Armata"
    division = { id = { type = 23500 id = 16 } name = "1a Div. di fanteria 'Superga'"   type = d_02 model = 0 strength = 85 }
	division = { id = { type = 23500 id = 17 } name = "2a Div. di fanteria 'Sforzesca'" type = d_02 model = 0 strength = 85 }
  }

 landunit =
  { id       = { type = 23500 id = 18 }
    location = 399 # Alessandria
    name     = "II Corpo d'Armata"
    division = { id = { type = 23500 id = 19 } name = "3a Div. di fanteria 'Ravenna'" type = d_02 model = 0 strength = 85 }
	division = { id = { type = 23500 id = 20 } name = "4a Div. di fanteria 'Livorno'" type = d_02 model = 0 strength = 85 }
  }  

 landunit =
  { id       = { type = 23500 id = 21 }
    location = 407 # Milan
    name     = "III Corpo d'Armata"
    division = { id = { type = 23500 id = 22 } name = "6a Div. di fanteria 'Cuneo'"           type = d_02      model = 0 strength = 85 }
	division = { id = { type = 23500 id = 23 } name = "7a Div. di fanteria 'Lupi di Toscana'" type = d_02      model = 0 strength = 85 }
    division = { id = { type = 23500 id = 24 } name = "101a Div. motorizzata 'Trieste'"       type = motorized model = 0 strength = 75 }
 }  

 landunit =
  { id       = { type = 23500 id = 25 }
    location = 400 # Venice
    name     = "IV Corpo d'Armata"
    division = { id = { type = 23500 id = 26 } name = "9a Div. autotrasportabile 'Pasubio'" type = motorized model = 0 strength = 40 }
	division = { id = { type = 23500 id = 27 } name = "11a Div. di fanteria 'Brennero'"     type = d_02      model = 0 strength = 85 }
  }

 landunit =
  { id       = { type = 23500 id = 28 }
    location = 404 # Trieste
    name     = "V Corpo d'Armata"
	division = { id = { type = 23500 id = 29 } name = "12a Div. di fanteria 'Sassari'" type = d_02 model = 0 strength = 85 }
    division = { id = { type = 23500 id = 30 } name = "15a Div. di fanteria 'Bergamo'" type = d_02 model = 0 strength = 85 }
  }

 landunit =
  { id       = { type = 23500 id = 31 }
    location = 411 # Bologna
    name     = "VI Corpo d'Armata"
    division = { id = { type = 23500 id = 32 } name = "16a Div. di fanteria 'Pistoia'"     type = d_02      model = 0 strength = 85 } 
    division = { id = { type = 23500 id = 33 } name = "18a Div. di fanteria 'Messina'"     type = d_02      model = 0 strength = 85 }	
    division = { id = { type = 23500 id = 34 } name = "17a Div. autotrasportabile 'Pavia'" type = motorized model = 0 strength = 40 }	
  }

 landunit =
  { id       = { type = 23500 id = 35 }
    location = 410 # Florenz
    name     = "VII Corpo d'Armata"
    division = { id = { type = 23500 id = 36 } name = "20a Div. di fanteria 'Friuli'" type = d_02 model = 0 strength = 85 }
  } 

 landunit =
  { id       = { type = 23500 id = 37 }
    location = 419 #Rom
    name     = "VIII Corpo d'Armata"	
	division = { id = { type = 23500 id = 38 } name = "21a Div. di fanteria 'Granatieri di Sardegna'" type = d_02 model = 0 strength = 85 }
	division = { id = { type = 23500 id = 39 } name = "22a Div. di fanteria 'Cacciatori delle Alpi'"  type = d_02 model = 0 strength = 85 }
  }

 landunit =
  { id       = { type = 23500 id = 40 }
    location = 426 # Bari
    name     = "IX Copro d'Armata"  
    division = { id = { type = 23500 id = 41 } name = "23a Div. di fanteria 'Ferrara'" type = d_02 model = 0 strength = 75 }
  } 

 landunit =
  { id       = { type = 23500 id = 42 }
    location = 421 # Naples
    name     = "X Copro d'Armata"  
    division = { id = { type = 23500 id = 43 } name = "25a Div. di fanteria 'Bologna'" type = d_02 model = 0 strength = 75 }
  } 

 landunit =
  { id       = { type = 23500 id = 44 }
    location = 405 # Udine
    name     = "XI Corpo d'Armata"
	division = { id = { type = 23500 id = 45 } name = "13a Div. di fanteria 'Re'"           type = d_02      model = 0 strength = 85 }
    division = { id = { type = 23500 id = 46 } name = "14a Div. di fanteria 'Isonzo'"       type = d_02      model = 0 strength = 85 }	
    division = { id = { type = 23500 id = 47 } name = "10a Div. autotrasportabile 'Piave'"  type = motorized model = 0 strength = 40 }
  }

 landunit =
  { id       = { type = 23500 id = 48 }
    location = 430 # Palermo
    name     = "XII Corpo d'Armata"  
    division = { id = { type = 23500 id = 49 } name = "28a Div. di fanteria 'Aosta'" type = d_02 model = 0 strength = 85 }
  }  

 landunit =
  { id       = { type = 23500 id = 50 }
    location = 434 # Sardinien
    name     = "XIII Corpo d'Armata"
    division = { id = { type = 23500 id = 51 } name = "31a Div. di fanteria 'Calabria' " type = d_02 model = 0 strength = 85 }
  }

 landunit =
  { id       = { type = 23500 id = 52 }
    location = 750 #Tripoli
    name     = "Comando FF.AA. 'A.S.I.'"
    division = { id = { type = 23500 id = 53 } name = "Comando FF.AA. 'A.S.I.'" type = hq model = 0 extra = engineer strength = 75 }
  } 

 landunit =
  { id       = { type = 23500 id = 54 }
    location = 765 # Tobruk
    name     = "Corpo d'Armata L.B."  
    division = { id = { type = 23500 id = 55 }  name = "102a Div. motorizzata 'Trento'" type = motorized model = 0 strength = 75 }
	division = { id = { type = 23500 id = 84 } name = "7a Divisione CC.NN. 'Cirene'"    type = d_02 model = 1 strength = 100 } 	
  } 
  
 landunit =
  { id       = { type = 23500 id = 700 }
    location = 406 # Pola
    name     = "Comando Reggimento San Marco"
	division = { id = { type = 23500 id = 701 } name = "1a Reggimento San Marco" type = marine model = 0 strength = 10 experience = 10 }
  }     

################
#Abessinia OOB#
################

landunit =
  { id       = { type = 23500 id = 60 }
    location = 815 #
    name     = "Comando Superiore dell'A.O.I."
    division = { id = { type = 23500 id = 61 } name = "Comando FF.AA. 'A.O.I.'" type = hq model = 0 extra = engineer strength = 60 experience = 25 }
  }
  
landunit =
  { id       = { type = 23500 id = 62 }
    location = 816 #
    name     = "I Corpo d'Armata dell'A.O.I." 
   	division = { id = { type = 23500 id = 63 } name = "26a Div. di fanteria 'Assietta'" type = d_02 model = 1 extra = artillery brigade_model = 1 strength = 100 }
    division = { id = { type = 23500 id = 64 } name = "30a Div. di fanteria 'Sabauda'"  type = d_02 model = 1 strength = 100 }
    division = { id = { type = 23500 id = 65 } name = "4a Divisione CC.NN. '3 Gennaio'" type = d_02 model = 1 strength = 100 }
    division = { id = { type = 23500 id = 66 } name = "3a Divisione Alpina 'Julia'"     type = d_07 model = 0 strength = 85 experience = 55 }
	division = { id = { type = 23500 id = 67 } name = "5a Divisione Alpina 'Pusteria'"  type = d_07 model = 0 strength = 80 experience = 60 }
  }
  
landunit =
  { id       = { type = 23500 id = 68 }
    location = 817 #
    name     = "II Corpo d'Armata dell'A.O.I." 
   	division = { id = { type = 23500 id = 69 } name = "19a Div. di fanteria 'Venezia'"  type = d_02 model = 1 extra = artillery brigade_model = 1 strength = 100 }
    division = { id = { type = 23500 id = 70 } name = "24a Div. di fanteria 'Pinerolo'" type = d_02 model = 1 strength = 100 }
    division = { id = { type = 23500 id = 71 } name = "3a Divisione CC.NN. '21 Aprile'" type = d_02 model = 1 extra = artillery brigade_model = 1 strength = 100 }
  }  
 
landunit =
  { id       = { type = 23500 id = 72 }
    location = 817 #
    name     = "Corpo d'Armata Eritreo" 
   	division = { id = { type = 23500 id = 73 }  name = "1a Divisione Eritrea" type = d_02 model = 0 strength = 85 }
    division = { id = { type = 23500 id = 74 }  name = "2a Divisione Eritrea" type = d_02 model = 0 strength = 85 }
  }  
  
landunit =
  { id       = { type = 23500 id = 75 }
    location = 816 #
    name     = "III Corpo d'Armata dell'A.O.I." 
   	division = { id = { type = 23500 id = 76 } name = "27a Div. autotrasportabile 'Brescia'" type = motorized model = 0 extra = light_armor_brigade brigade_model = 1 strength = 100 }
    division = { id = { type = 23500 id = 77 } name = "1a Divisione CC.NN. '23 Marzo'"       type = d_02 model = 1 extra = artillery brigade_model = 1 strength = 100 } 
 } 
  
landunit =
  { id       = { type = 23500 id = 89 }
    location = 816 #
    name     = "Schieramento dall'Eritreo" 
   	division = { id = { type = 23500 id = 90 } name = "Banda Ascari Indigeni" type = militia model = 0 strength = 45 }
    division = { id = { type = 23500 id = 91 } name = "Celere Column A.O."    type = cavalry model = 1 strength = 25 } 
 }   
  
landunit =
  { id       = { type = 23500 id = 78 }
    location = 817 #
    name     = "IV Corpo d'Armata dell'A.O.I." 
   	division = { id = { type = 23500 id = 79 } name = "5a Div. di fanteria 'Cosseria'"   type = d_02 model = 1 extra = artillery brigade_model = 1 strength = 100 }
    division = { id = { type = 23500 id = 80 } name = "2a Divisione CC.NN. '28 Ottobre'" type = d_02 model = 1 strength = 100 }
    division = { id = { type = 23500 id = 81 } name = "5a Divisione CC.NN. '1 Febbraio'" type = d_02 model = 1 strength = 100 }  
  } 
  
landunit =
  { id       = { type = 23500 id = 82 }
    location = 837 #
    name     = "Comando FF.AA. 'Somalia Italiana'" 
   	#division = { id = { type = 23500 id =  } name = "29a Div. di fanteria 'Peloritana'" type = d_02 model = 1 strength = 100 }
    #division = { id = { type = 23500 id =  } name = "Divisione Libia"                   type = d_02 model = 0 strength = 75 }
	# split up to form a coherent front line
    division = { id = { type = 23500 id = 83 } name = "6a Divisione CC.NN. 'Tevere'" type = d_02 model = 1 strength = 100 }  
  }  
  
landunit =
  { id       = { type = 23500 id = 85 }
    location = 835 #
    name     = "Schieramento dalla Somalia I" 
    division = { id = { type = 23500 id = 86 } name = "Divisione Libia" type = d_02 model = 0 strength = 75 }
  }  

landunit =
  { id       = { type = 23500 id = 87 }
    location = 838 #
    name     = "Schieramento dalla Somalia II" 
   	division = { id = { type = 23500 id = 88 }  name = "29a Div. di fanteria 'Peloritana'" type = d_02 model = 1 strength = 100 }
  }  
  
    ######################################################
	#Piazzaforte in africa (dormant for AI)
	######################################################  

	landdivision = { dormant = yes id = { type = 23500 id = 93 }  name = "Piazzaforte di Tripoli"  type = garrison model = 2 extra = anti_air brigade_model = 3 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 94 }  name = "Piazzaforte di Bengazi"  type = militia model = 2 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 95 }  name = "Piazzaforte di Zawijah"  type = militia model = 2 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 96 }  name = "Piazzaforte di Tobruk"   type = garrison model = 2 extra = anti_air brigade_model = 3 locked = yes strength = 50 }
	landdivision = { dormant = yes id = { type = 23500 id = 98 }  name = "Piazzaforte di Sassari"  type = militia model = 2 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2001 }  name = "Piazzaforte di Tirana" type = garrison model = 2 extra = anti_air brigade_model = 3 locked = yes }

	######################################################  
	#Guardia alla Frontiera
	######################################################

	landdivision = { dormant = yes id = { type = 23500 id = 2010 }  name = "GaF I-Torino"       type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2011 }  name = "GaF II-Alessandria" type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2012 }  name = "GaF III-Milano"     type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2013 }  name = "GaF IV-Bolzano"     type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2014 }  name = "GaF V-Trieste"      type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2015 }  name = "GaF XI-Udine"       type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2016 }  name = "GaF XIV-Treviso"    type = garrison model = 1 strength = 25 locked = yes }
	landdivision = { dormant = yes id = { type = 23500 id = 2017 }  name = "GaF XV-Genova"      type = garrison model = 1 strength = 25 locked = yes }
	
    ######################################################
	#Libyan paratroopers
	######################################################  

	landdivision = { dormant = yes id = { type = 23500 id = 99 }  name = "Battaglione paracadutisti libico 'Fanti dell'aria'" type = paratrooper model = 0 strength = 8 } # 800 men, 500 of Fanti dell'aria battalion, 300 of national paratrooper battalion

	
    ######################################################
	#Italian Navy OOB
	######################################################
	
	######################################################
	#Ramb
	#banana boats, converted to auxiliary cruisers
	#Ramb IV converted to hospital ship
	######################################################  

	navaldivision = { dormant = yes id = { type = 23500 id = 1295 }  name = "RN Ramb I" type = d_09 model = 0 }
	navaldivision = { dormant = yes id = { type = 23500 id = 1296 }  name = "RN Ramb II" type = d_09 model = 0 }
	navaldivision = { dormant = yes id = { type = 23500 id = 1297 }  name = "RN Ramb III" type = d_09 model = 0 }


  navalunit =
  { id       = { type = 23500 id = 999 }
    name     = "Regia Marina"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1000 } name = "RN Pola"    type = heavy_cruiser model = 5 experience = 15 }
    division = { id = { type = 23500 id = 1005 } name = "RN Taranto" type = light_cruiser model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1006 } name = "RN Bari"    type = light_cruiser model = 2 experience = 15 }
	division = { id = { type = 23500 id = 1001 } name = "RN Espero"     type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1002 } name = "RN Borea"      type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1003 } name = "RN Zeffiro"    type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1004 } name = "RN Ostro"      type = destroyer model = 2 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1013 }
    name     = "1a Squadra di Marina"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1014 } name = "RN Andrea Doria"         type = battleship model = 1 experience = 15 }
    division = { id = { type = 23500 id = 1015 } name = "RN Caio Duilio"          type = battleship model = 1 experience = 15 }
    division = { id = { type = 23500 id = 1016 } name = "RN Giulio Cesare"        type = battleship model = 1 div_upgr_progress = 0.6 experience = 15 } # reconstruction until june 4 1937
    division = { id = { type = 23500 id = 1017 } name = "RN Conte di Cavour"      type = battleship model = 1 div_upgr_progress = 0.6 experience = 15 } # reconstruction until june 2 1937
	division = { id = { type = 23500 id = 1018 } name = "RN Zara"                 type = heavy_cruiser model = 5 experience = 15 }
    division = { id = { type = 23500 id = 1019 } name = "RN Gorizia"              type = heavy_cruiser model = 5 experience = 15 }
    division = { id = { type = 23500 id = 1020 } name = "RN Fiume"                type = heavy_cruiser model = 5 experience = 15 }
    division = { id = { type = 23500 id = 1021 } name = "RN Alberico da Barbiano" type = light_cruiser model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1023 } name = "RN Alberto da Guissano"  type = light_cruiser model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1022 } name = "RN Luigi Cadorna"        type = light_cruiser model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1024 } name = "RN Armando Diaz"         type = light_cruiser model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1025 } name = "RN Freccia"                 type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1026 } name = "RN Dardo"                   type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1027 } name = "RN Saetta"                  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1028 } name = "RN Strale"                  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1029 } name = "RN Folgore"                 type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1030 } name = "RN Baleno"                  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1031 } name = "RN Fulmine"                 type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1032 } name = "RN Lampo"                   type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1033 } name = "RN Nicoloso da Recco"       type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1034 } name = "RN Antoniotto Usodimare"    type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1035 } name = "RN Luca Tarigo"             type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1036 } name = "RN Emanuele Pessagno"       type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1037 } name = "RN Ugolino Vivaldi"         type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1038 } name = "RN Antonio da Noli"         type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1039 } name = "RN Leone Pancaldo"          type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1040 } name = "RN Antonio Pigafetta"       type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1041 } name = "RN Nicolo Zeno"             type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1042 } name = "RN Alvise da Mosto"         type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1043 } name = "RN Giovanni da Verrazzano"  type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1044 } name = "RN Lanzerrotto Malocello"   type = d_09 model = 3 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1045 }
    name     = "2a Squadra di Marina"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1046 } name = "RN Trento"                 type = heavy_cruiser model = 4 experience = 15 }
    division = { id = { type = 23500 id = 1047 } name = "RN Bolzano"                type = heavy_cruiser model = 4 experience = 15 }
    division = { id = { type = 23500 id = 1048 } name = "RN Trieste"                type = heavy_cruiser model = 4 experience = 15 }
    division = { id = { type = 23500 id = 1049 } name = "RN Giovanni delle Bande Nere"             type = light_cruiser model = 3 experience = 15  }
    division = { id = { type = 23500 id = 1050 } name = "RN Bartolomeo Colleoni"    type = light_cruiser model = 3 experience = 15  }
    division = { id = { type = 23500 id = 1051 } name = "RN Emanuele Filiberto Duca d'Aosta"           type = light_cruiser model = 4 experience = 15 } 
	division = { id = { type = 23500 id = 1052 } name = "RN Muzio Attendolo"        type = light_cruiser model = 3 experience = 15  }
    division = { id = { type = 23500 id = 1053 } name = "RN Raimondo Montecuccoli" type = light_cruiser model = 3 experience = 15  }
    division = { id = { type = 23500 id = 1054 } name = "RN Maestrale" type = destroyer model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1055 } name = "RN Grecale"   type = destroyer model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1056 } name = "RN Libeccio"  type = destroyer model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1057 } name = "RN Scirocco"  type = destroyer model = 3 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1058 }
    name     = "Navi Ausiliarie"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1007 } name = "Piemonte"         type = transport model = 0 }
    division = { id = { type = 23500 id = 1008 } name = "Napoli"       type = transport model = 0 }
    division = { id = { type = 23500 id = 1009 } name = "Anna Maria Gualdi"     type = transport model = 0 }
    division = { id = { type = 23500 id = 1010 } name = "Remo"     type = transport model = 0 }
    division = { id = { type = 23500 id = 1011 } name = "Belvedere" type = transport model = 0 }  
    division = { id = { type = 23500 id = 1012 } name = "Cellina"      type = transport model = 0 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1113 }
    name     = "Comando Navale Libia"
    location = 750 #Tripolis
    base     = 750
    division = { id = { type = 23500 id = 1114 } name = "RN San Giorgio" type = battlecruiser model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1213 } name = "RN Pisa" type = battlecruiser model = 0 strength = 15 experience = 15 }
#	division = { id = { type = 23500 id = 1214 } name = "RN San Marco" type = battlecruiser model = 0 strength = 5 experience = 15 }
	division = { id = { type = 23500 id = 1215 } name = "RN Campania" type = light_cruiser model = 0 strength = 40 experience = 15 }
	division = { id = { type = 23500 id = 1216 } name = "RN Ancona" type = light_cruiser model = 2 strength = 30 experience = 15 }
	division = { id = { type = 23500 id = 1217 } name = "RN Quarto" type = light_cruiser model = 1 strength = 60 experience = 15 }
	division = { id = { type = 23500 id = 1115 } name = "RN Libia"   type = light_cruiser model = 0 strength = 40 experience = 15 } 
    division = { id = { type = 23500 id = 1116 } name = "RN Turbine"   type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1117 } name = "RN Aquilone"  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1118 } name = "RN Euro"      type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1119 } name = "RN Nembo"     type = destroyer model = 2 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1120 }
    name     = "Comando Navale AOI"
    location = 815 #Massaua
    base     = 815
	division = { id = { type = 23500 id = 1210 } name = "RN Giuseppe Miraglia" type = escort_carrier model = 1 experience = 15 }
    division = { id = { type = 23500 id = 1121 } name = "RN Pantera"          type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1122 } name = "RN Leone"            type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1123 } name = "RN Tigre"            type = d_09 model = 3 experience = 15 }
    division = { id = { type = 23500 id = 1124 } name = "RN Francesco Nullo"  type = destroyer model = 2 experience = 15 }  
	division = { id = { type = 23500 id = 1125 } name = "RN Nazario Sauro"    type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1126 } name = "RN Cesare Battisti"  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1127 } name = "RN Daniele Manin"    type = destroyer model = 2 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1128 }
    name     = "Comando Navale Egeo"
    location = 379 #Rhodos
    base     = 379
    division = { id = { type = 23500 id = 1129 } name = "RN Francesco Crispi"  type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1130 } name = "RN Quintino Sella"    type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1229 } name = "RN Giovanni Nicotera" type = destroyer model = 2 experience = 15 }
    division = { id = { type = 23500 id = 1230 } name = "RN Bettino Ricasoli"  type = destroyer model = 2 experience = 15 }
	division = { id = { type = 23500 id = 1292 } name = "RN Astore"  type = destroyer model = 2 experience = 15 }
	division = { id = { type = 23500 id = 1293 } name = "RN Spica"  type = destroyer model = 2 experience = 15 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1131 }
    name     = "1a Flottiglia Sommergibili"
    location = 396 #La Spezia/ Genoa
    base     = 396
    division = { id = { type = 23500 id = 1132 } name = "R.Smg. Pietro Calvi" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1133 } name = "R.Smg. Ettore Fieramosca" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1134 } name = "R.Smg. Glauco" type = submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1135 } name = "R.Smg. Otaria" type = submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1136 } name = "R.Smg. Pietro Micca" type = d_08 model = 0 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1137 }
    name     = "3a Flottiglia Sommergibili"
    location = 430 #Palermo
    base     = 430
    division = { id = { type = 23500 id = 1138 } name = "R.Smg. Vettor Pisani" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1270 } name = "R.Smg. Des Geneys" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1139 } name = "R.Smg. Giovanni Bausan" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1140 } name = "R.Smg. Marcantonio Colonna" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1141 } name = "R.Smg. Fratelli Bandiera" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1142 } name = "R.Smg. Luciano Manara" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1143 } name = "R.Smg. Ciro Menotti" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1144 } name = "R.Smg. Santorre Santarosa" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1145 } name = "R.Smg. Pier Capponi" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1146 } name = "R.Smg. Giovanni da Procida" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1147 } name = "R.Smg. Goffredo Mameli" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1148 } name = "R.Smg. Tito Speri" type = submarine model = 1 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1149 }
    name     = "4a Flottiglia Sommergibili"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1150 } name = "R.Smg. Balilla" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1151 } name = "R.Smg. Domenico Millelire" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1152 } name = "R.Smg. Antonio Sciesa" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1153 } name = "R.Smg. Enrico Toti" type = d_08 model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1154 } name = "R.Smg. Luigi Settembrini" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1155 } name = "R.Smg. Ruggiero Settimo" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1156 } name = "R.Smg. Anfitrite" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1157 } name = "R.Smg. Salpa" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1158 } name = "R.Smg. Serpente" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1159 } name = "R.Smg. Ondina" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1187 } name = "R.Smg. Rubino" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1160 } name = "R.Smg. Filippo Corridoni" type = nuclear_submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1188 } name = "R.Smg. Marcantonio Bragadin" type = nuclear_submarine model = 1 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1061 }
    name     = "5a Flottiglia Sommergibili"
    location = 379 #Rhodos
    base     = 379
    division = { id = { type = 23500 id = 1062 } name = "R.Smg. Delfino" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1063 } name = "R.Smg. Narvalo" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1064 } name = "R.Smg. Squalo"  type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1065 } name = "R.Smg. Tricheco" type = submarine model = 1 experience = 5 }
    division = { id = { type = 23500 id = 1066 } name = "R.Smg. Jalea" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1067 } name = "R.Smg. Jantina" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1068 } name = "R.Smg. Ametista" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1069 } name = "R.Smg. Zaffiro" type = nuclear_submarine model = 2 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1070 }
    name     = "6a Flottiglia Sommergibili"
    location = 750 #Tripolis
    base     = 750
    division = { id = { type = 23500 id = 1071 } name = "R.Smg. Sirena" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1072 } name = "R.Smg. Argonauta" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1073 } name = "R.Smg. Fisalia" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1074 } name = "R.Smg. Smeraldo" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1075 } name = "R.Smg. Nereide" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1076 } name = "R.Smg. Diamante" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1077 } name = "R.Smg. Topazio" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1078 } name = "R.Smg. Naiade" type = nuclear_submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1079 } name = "R.Smg. Galatea" type = nuclear_submarine model = 2 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1080 }
    name     = "7a Flottiglia Sommergibili"
    location = 434 #Sardinia
    base     = 434
    division = { id = { type = 23500 id = 1081 } name = "R.Smg. Medusa" type = nuclear_submarine model = 2 experience = 5 }
  }
  
  navalunit =
  { id       = { type = 23500 id = 1082 }
    name     = "8a Flottiglia Sommergibili"
    location = 815 #Massaua
    base     = 815
    division = { id = { type = 23500 id = 1083 } name = "R.Smg. Galileo Ferraris" type = submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1084 } name = "R.Smg. Galileo Galilei" type = submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1085 } name = "R.Smg. Archimede" type = submarine model = 2 experience = 5 }
    division = { id = { type = 23500 id = 1086 } name = "R.Smg. Evangelista Torricelli" type = submarine model = 2 experience = 5 }
  }
  
    navalunit =
  { id       = { type = 23500 id = 1201 }
    name     = "9a Flottiglia Sommergibili"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1202 } name = "R.Smg. H 1" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1203 } name = "R.Smg. H 2" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1204 } name = "R.Smg. H 3" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1205 } name = "R.Smg. H 4" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1206 } name = "R.Smg. H 6" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1207 } name = "R.Smg. H 8" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1208 } name = "R.Smg. X 2" type = nuclear_submarine model = 0 experience = 5 }
    division = { id = { type = 23500 id = 1209 } name = "R.Smg. X 3" type = nuclear_submarine model = 0 experience = 5 }
	division = { id = { type = 23500 id = 1271 } name = "R.Smg. Lazzaro Mocenigo" type = submarine model = 0 experience = 5 strength = 25 } #scrapped april 1937
	division = { id = { type = 23500 id = 1272 } name = "R.Smg. Luigi Galvani" type = submarine model = 0 experience = 5 strength = 35 } #scrapped january 1938
  }
   navalunit =
  { id       = { type = 23500 id = 1231 }
    name     = "3a Squadra di Marina"
    location = 422 #Taranto
    base     = 422
    division = { id = { type = 23500 id = 1232 } name = "RN Calatafimi"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1233 } name = "RN Castelfidardo"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1234 } name = "RN Curtatone"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1235 } name = "RN Monzambano"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1236 } name = "RN Augusto Riboty"  type = d_09 model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1237 } name = "RN Carlo Mirabello"  type = d_09 model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1238 } name = "RN Achille Papa"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1239 } name = "RN Antonio Cantore"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1240 } name = "RN Carlo Montanari"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1241 } name = "RN Marcello Prestinari"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1242 } name = "RN Antonio Cascino"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1243 } name = "RN Antonio Chinotto"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1244 } name = "RN Indomito"  type = destroyer model = 0 strength = 40 experience = 15 }
	division = { id = { type = 23500 id = 1245 } name = "RN Insidioso"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1246 } name = "RN Confienza"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1247 } name = "RN Palestro"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1248 } name = "RN San Martino"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1249 } name = "RN Solferino"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1250 } name = "RN Antonio Mosto"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1251 } name = "RN Francesco Nullo"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1252 } name = "RN Giuseppe Cesare Abba"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1253 } name = "RN Giuseppe Missori"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1254 } name = "RN Ippolito Nievo"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1255 } name = "RN Pilade Bronzetti"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1256 } name = "RN Rosolino Pilo"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1257 } name = "RN Simone Schiaffino"  type = destroyer model = 0 experience = 15 }
	division = { id = { type = 23500 id = 1258 } name = "RN Francesco Stocco"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1259 } name = "RN Giovanni Acerbi"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1260 } name = "RN Giuseppe Sirtori"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1261 } name = "RN Vivenzo Giordano Orsini"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1262 } name = "RN Giuseppe La Masa"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1263 } name = "RN Nicola Fabrizi"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1264 } name = "RN Giacinto Carini"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1265 } name = "RN Angelo Bassini"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1266 } name = "RN Enrico Cosenz"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1267 } name = "RN Giuseppe La Farina"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1268 } name = "RN Giacomo Medici"  type = destroyer model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1275 } name = "RN Impavido"  type = destroyer model = 0 strength = 40 experience = 15 }
	division = { id = { type = 23500 id = 1276 } name = "RN Irrequito"  type = destroyer model = 0 strength = 40 experience = 15 }
	division = { id = { type = 23500 id = 1277 } name = "RN Ardente"  type = destroyer model = 0 strength = 40 experience = 15 }
	division = { id = { type = 23500 id = 1278 } name = "RN Alessandro Poerio"  type = d_09 model = 1 experience = 15 }
	division = { id = { type = 23500 id = 1279 } name = "RN Guglielmo Pepe"  type = d_09 model = 1 experience = 15 }
  }
  navalunit =
  { id       = { type = 23500 id = 1273 }
    name     = "RN Faà di Bruno"
    location = 400 #Venice
    base     = 400
    division = { id = { type = 23500 id = 1274 } name = "RN Faà di Bruno"  type = heavy_cruiser model = 1 experience = 15 }
  }
  
#############################################  
  navaldivision = { dormant = yes id = { type = 23500 id = 1600 } name = "RN Cattaro"                   type = light_cruiser model = 1 strength = 75 }
  navaldivision = { dormant = yes id = { type = 23500 id = 1601 } name = "PN Sebenico"                  type = d_09 model = 3 strength = 75 }
  navaldivision = { dormant = yes id = { type = 23500 id = 1602 } name = "RN Lubiana"                   type = d_09 model = 3 strength = 75 }
  navaldivision = { dormant = yes id = { type = 23500 id = 1603 } name = "RN Premuda"                   type = d_09 model = 3 strength = 75 }
  navaldivision = { dormant = yes id = { type = 23500 id = 1604 } name = "R.Smg. N1 Francesco Rismondo" type = nuclear_submarine model = 1 strength = 65 }
  navaldivision = { dormant = yes id = { type = 23500 id = 1605 } name = "R.Smg. N2 Antonio Bajamonti"  type = nuclear_submarine model = 1 strength = 65 }
#############################################
#Regia Aeronautica
#############################################
#Stärke 1. Jan. 1936:
#Bestätigt:
#4 Jäger-Stormos, 6 Bomber-Stormos, 2 Mabo-Stormos, 1 StuKa-Stormo
#Nicht bestätigt:
#2 Jäger-Stormos, 10 Bomber-Stormos, 1 Mabo-Stormo sowie die Gruppo Autonomo Trasporto des Comando Servizi Aerei Speciali 
#Bestätigt, aber nach 1.1.1936:
#2 Jäger-Stormos: 6° am 5.1.1936, 53° am 5.5.1936  
#1 Bomber-Stormo: 32° am 1.12.1936 
#1 Stuka-Stormo: 50° am 10.6.1936 
#############################################

#############################################
# dormant stormos with max_strength
############################################# 
  
#airdivision = { id = { type = 23500 id = 250 } name = "12° Stormo Bombardamento Terrestre" strength = 20 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 251 } name = "13° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 252 } name = "24° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 213 } name = "16° Stormo Bombardamento Terrestre" strength = 20 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 253 } name = "18° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 254 } name = "25° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 217 } name = "11° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 256 } name = "14° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 257 } name = "15° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 218 } name = "30° Stormo Bombardamento Marittimo " strength = 30 max_strength = 33 type = naval_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 255 } name = "31° Stormo Bombardamento Marittimo " strength = 30 max_strength = 33 type = naval_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 220 } name = "7° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 259 } name = "8° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 260 } name = "9° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 dormant = yes experience = 10 }
#airdivision = { id = { type = 23500 id = 215 } name = "5º Stormo Assalto" strength = 30 max_strength = 33 type = cas model = 0 dormant = yes experience = 10 }

#airunit =
#  { location = 407 #Milano
#    base     = 407
#    id       = { type = 23500 id = 200 }
#    name     = "1a Squadra Aerea"
#    division = { id = { type = 23500 id = 210 } name = "3º Stormo Caccia" strength = 80 type = interceptor model = 0 }
#	division = { id = { type = 23500 id = 250 } name = "12° Stormo Bombardamento Terrestre" strength = 20 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 251 } name = "13° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 252 } name = "24° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#  }    
#  
#airunit =
#  { location = 430 #Palermo
#    base     = 430
#    id       = { type = 23500 id = 201 }
#    name     = "2a Squadra Aerea"
#    division = { id = { type = 23500 id = 212 } name = "1º Stormo Caccia" strength = 80 type = interceptor model = 0 }
#	division = { id = { type = 23500 id = 213 } name = "16° Stormo Bombardamento Terrestre" strength = 20 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 253 } name = "18° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 254 } name = "25° Stormo Bombardamento Terrestre" strength = 10 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#  }  
#
#airunit =
#  { location = 750 #Tripolis
#    base     = 750
#    id       = { type = 23500 id = 203 }
#    name     = "Aeronautica della Libia"
#    division = { id = { type = 23500 id = 216 } name = "2º Stormo Caccia" strength = 80 type = interceptor model = 0 }
#	division = { id = { type = 23500 id = 217 } name = "11° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 256 } name = "14° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 257 } name = "15° Stormo Bombardamento Terrestre" strength = 30 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#  }   
#  
#airunit =
#  { location = 434 #Cagliari
#    base     = 434
#    id       = { type = 23500 id = 204 }
#    name     = "Aeronautica della Sardegna"
#    division = { id = { type = 23500 id = 218 } name = "30° Stormo Bombardamento Marittimo " strength = 30 max_strength = 33 type = naval_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 255 } name = "31° Stormo Bombardamento Marittimo " strength = 30 max_strength = 33 type = naval_bomber model = 0 extra = escort brigade_model = 0 }
#    division = { id = { type = 23500 id = 258 } name = "Gruppo Autonomo Trasporto del C.S.A.S." strength = 30 type = transport_plane model = 0 }
#  }
#
#airunit =
#  { location = 815 #Massaua
#    base     = 815
#    id       = { type = 23500 id = 205 }
#    name     = "Aeronautica AOI"
#    division = { id = { type = 23500 id = 220 } name = "7° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 259 } name = "8° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#	division = { id = { type = 23500 id = 260 } name = "9° Stormo Bombardamento Notturno" strength = 33 max_strength = 33 type = tactical_bomber model = 0 extra = escort brigade_model = 0 }
#  }

##########################################################################################
# Italian air force OOB
##########################################################################################
  
airunit =
  { location = 407 #Milano
    base     = 407
    id       = { type = 23500 id = 200 }
    name     = "1a Squadra Aerea"
    division = { id = { type = 23500 id = 201 } name = "3a Stormo Caccia" strength = 80 type = interceptor model = 0 experience = 10 }
	division = { id = { type = 23500 id = 202 } name = "1a Divisione Bombardieri Terrestre" strength = 90 type = tactical_bomber model = 0 extra = escort brigade_model = 0 experience = 10 }
  }    
  
airunit =
  { location = 430 #Palermo
    base     = 430
    id       = { type = 23500 id = 203 }
    name     = "2a Squadra Aerea"
    division = { id = { type = 23500 id = 204 } name = "1a Stormo Caccia" strength = 80 type = interceptor model = 0 experience = 10 }
	division = { id = { type = 23500 id = 205 } name = "2a Divisione Bombardieri Terrestre" strength = 90 type = tactical_bomber model = 0 extra = escort brigade_model = 0 experience = 10 }
  }    
  
airunit =
  { location = 750 #Tripolis
    base     = 750
    id       = { type = 23500 id = 206 }
    name     = "Aeronautica della Libia"
    division = { id = { type = 23500 id = 207 } name = "2a Stormo Caccia" strength = 80 type = interceptor model = 0 experience = 10 }
	division = { id = { type = 23500 id = 208 } name = "3a Divisione Bombardieri Terrestre" strength = 90 type = tactical_bomber model = 0 extra = escort brigade_model = 0 experience = 10 }
  }  

airunit =
  { location = 815 #Massaua
    base     = 815
    id       = { type = 23500 id = 209 }
    name     = "Aeronautica AOI"
    division = { id = { type = 23500 id = 210 } name = "4a Divisione Bombardieri Notturno" strength = 90 type = tactical_bomber model = 0 extra = escort brigade_model = 0 experience = 10 }
  }  
  
 airunit =
  { location = 419 #Roma
    base     = 419
    id       = { type = 23500 id = 211 }
    name     = "3a Squadra Aerea"
	division = { id = { type = 23500 id = 212 } name = "4a Stormo Caccia"  strength = 80 type = interceptor model = 0 experience = 10 }
	division = { id = { type = 23500 id = 213 } name = "6a Stormo Caccia"  strength = 50 type = interceptor model = 0 experience = 10 }
	division = { id = { type = 23500 id = 217 } name = "5a Stormo Assalto" strength = 30 type = cas         model = 0 experience = 10 }
  }    
  
  airunit =
  { location = 419 #Roma
    base     = 419
    id       = { type = 23500 id = 214 }
    name     = "4a Squadra Aerea"
	division = { id = { type = 23500 id = 215 } name = "Gruppo Autonomo Trasporto del C.S.A.S." strength = 30 type = transport_plane model = 0 }
	division = { id = { type = 23500 id = 216 } name = "30a Divisione Bombardieri Marittimo " strength = 60 type = naval_bomber model = 1 extra = escort brigade_model = 0 }
  }   
  
###########################################################################################
#
###########################################################################################  
  
# elite divisions #
landdivision = { dormant = yes id = { type = 23500 id = 1502 }  name = "1a Divisione Bersaglieri 'Italia'"     type = d_05 model = 1 extra = b_01 brigade_model = 2 experience = 10 }
landdivision = { dormant = yes id = { type = 23500 id = 1503 }  name = "2a Divisione Bersaglieri 'Garibaldi'"  type = d_05 model = 1 extra = b_01 brigade_model = 2 experience = 10 }
landdivision = { dormant = yes id = { type = 23500 id = 1504 }  name = "3a Divisione Bersaglieri 'Goito'"      type = d_05 model = 1 extra = b_01 brigade_model = 2 experience = 10 }
landdivision = { dormant = yes id = { type = 23500 id = 1505 }  name = "4a Divisione Bersaglieri 'La Marmora'" type = d_05 model = 1 extra = b_01 brigade_model = 2 experience = 10 }
# Littorio
landdivision = { dormant = yes id = { type = 23500 id = 1506 }  name = "133a Divisione Corazzata 'Littorio'" type = armor model = 0 experience = 75 strength = 60 }
#
landdivision = { dormant = yes id = { type = 23500 id = 1507 }  name = "6a Divisione Alpina 'Alpi Graie'"    type = d_07  model = 1 strength = 70 }

    province_development = { 
        id = { type = 23500 id = 552 } 
        name = "" 
        location = 411 
        cost = 5.0000 
		date = { 
					year = 1936 
					month = july 
					day = 20 
					hour = 0 
		} 
		size = 1 
		type = ic 
	}  
    province_development = { 
        id = { type = 23500 id = 553 } 
        name = "" 
        location = 419 
        cost = 5.0000 
		date = { 
		            year = 1936 
		            month = july 
		            day = 20 
		            hour = 0 
		} 
        size = 1 
        type = ic 
	}  

convoy_development = {
        id = { type = 23500 id = 1300 }
        cost = 0.1
        size = 99
        type = transports
        date  = {  year = 1964 }
		unitcost = yes
        }	

#brigade_development = {
#        id = { type = 23500 id = 1400 }
#        cost = 0.5
#        size = 15
#        type = armored_car
#		model = 1
#        date  = {  year = 1940 }
#		unitcost = yes
#        }
#		
#brigade_development = {
#        id = { type = 23500 id = 1401 }
#        cost = 0.5
#        size = 15
#        type = armored_car
#		model = 1
#        date  = {  year = 1940 }
#		unitcost = yes
#        }
		
brigade_development = {
        id = { type = 23500 id = 1402 }
        name = "Capital Improved Hull 1936"
		cost = 0.04
        size = 6
        type = naval_improved_hull_l
		model = 0
        date  = {  year = 1938 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 23500 id = 1403 }
        name = "Floatplane 1930"
		cost = 0.02
        size = 20
        type = floatplane
		model = 0
        date  = {  year = 1940 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 23500 id = 1404 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 20
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1941 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 23500 id = 1405 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 20
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1941 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 23500 id = 1406 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 20
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1941 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 23500 id = 1407 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 20
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1941 }
		unitcost = yes
        }

		
  # Warships Under Construction#
  division_development =
  { name  = "RN Eugenio di Savoia"
    type  = light_cruiser
    model = 4
    cost  = 0.2 #2
	new_model = no unitcost = yes
    id    = { type = 23500 id = 500 }
    date  = { year = 1936 month = january day = 16 }
  }
  division_development =
  { name  = "R.Smg. Giuseppe Finzi"
    type  = d_08
    model = 0
    cost  = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 504 }
    date  = { year = 1936 month = october day = 16 }
  }
  division_development =
  { name  = "R.Smg. Enrico Tazzoli"
    type  = d_08
    model = 0
    cost  = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 501 }
    date  = { year = 1936 month = april day = 18 }
  }
  division_development =
  { name   = "RN Duca degli Abruzzi"
    type   = light_cruiser
    model  = 4
    cost   = 0.2 #2
	new_model = no unitcost = yes
    id     = { type = 23500 id = 502 }
    date   = { year = 1937 month = december day = 0 }
  }
  division_development =
  { name   = "RN Giuseppe Garibaldi"
    type   = light_cruiser
    model  = 4
    cost   = 0.2 #2
	new_model = no unitcost = yes
    id     = { type = 23500 id = 503 }
    date   = { year = 1937 month = december day = 0 }
  }
   division_development = # construction way longer than normal, price not fixed => to be corrected later
  { name  = "RN Littorio"
    type  = battleship
    model = 9
    cost  = 0.2 #2 #reduced for AI, human player will get adjusted price on january 2
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1211 }
    date  = { year = 1940 month = june day = 6 }
  }
   division_development = # construction way longer than normal, price not fixed => to be corrected later
  { name  = "RN Vittorio Veneto"
    type  = battleship
    model = 9
    cost  = 0.2 #2 #reduced for AI, human player will get adjusted price on january 2
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1212 }
    date  = { year = 1940 month = april day = 28 }
  }
    division_development =
  { name  = "RN Alfredo Oriani"
    type  = destroyer
    model = 3
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1269 }
    date  = { year = 1937 month = july day = 15 }
  }
    division_development =
  { name  = "RN Canopo"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1280 }
    date  = { year = 1937 month = march day = 1 }
  }  
    division_development =
  { name  = "RN Cassiopea"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1281 }
    date  = { year = 1937 month = april day = 1 }
  }  
    division_development =
  { name  = "RN Centauro"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1282 }
    date  = { year = 1936 month = june day = 1 }
  }  
    division_development =
  { name  = "RN Climene"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1283 }
    date  = { year = 1936 month = april day = 1 }
  }    
    division_development =
  { name  = "RN Aldebaran"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1284 }
    date  = { year = 1936 month = december day = 1 }
  }    
	division_development =
  { name  = "RN Altair"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1285 }
    date  = { year = 1936 month = december day = 1 }
  }
	division_development =
  { name  = "RN Andromeda"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1286 }
    date  = { year = 1936 month = december day = 1 }
  }
	division_development =
  { name  = "RN Antares"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1287 }
    date  = { year = 1936 month = december day = 1 }
  }
	division_development =
  { name  = "RN Perseo"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1288 }
    date  = { year = 1936 month = february day = 1 }
  }
	division_development =
  { name  = "RN Sagittario"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1289 }
    date  = { year = 1936 month = october day = 1 }
  }
division_development =
  { name  = "RN Sirio"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1290 }
    date  = { year = 1936 month = march day = 1 }
  }
	division_development =
  { name  = "RN Vega"
    type  = destroyer
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1291 }
    date  = { year = 1936 month = october day = 1 }
  }
  	division_development =
  { name  = "RN Eritrea"
    type  = d_09
    model = 2
    cost = 0.049 #0.49
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1294 }
    date  = { year = 1937 month = february day = 9 }
  }
  division_development =
  { name  = "R.Smg. Ambra"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1189 }
    date  = { year = 1936 month = august day = 4 }
  }
  division_development =
  { name  = "R.Smg. Berillo"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1190 }
    date  = { year = 1936 month = august day = 5 }
  }
  division_development =
  { name  = "R.Smg. Corallo"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1191 }
    date  = { year = 1936 month = september day = 26 }
  }
  division_development =
  { name  = "R.Smg. Diaspro"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1192 }
    date  = { year = 1936 month = august day = 22 }
  }
  division_development =
  { name  = "R.Smg. Gemma"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1193 }
    date  = { year = 1936 month = august day = 4 }
  }
  division_development =
  { name  = "R.Smg. Iride"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1194 }
    date  = { year = 1936 month = november day = 6 }
  }
  division_development =
  { name  = "R.Smg. Malachite"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1195 }
    date  = { year = 1936 month = november day = 6 }
  }
  division_development =
  { name  = "R.Smg. Onice"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1196 }
    date  = { year = 1936 month = september day = 0 }
  }
  division_development =
  { name  = "R.Smg. Perla"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1197 }
    date  = { year = 1936 month = july day = 8 }
  }
  division_development =
  { name  = "R.Smg. Turchese"
    type  = nuclear_submarine
    model = 2
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1198 }
    date  = { year = 1936 month = september day = 21 }
  }
    division_development =
  { name  = "R.Smg. Argo"
    type  = nuclear_submarine
    model = 3
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1199 }
    date  = { year = 1937 month = august day = 29 }
  }
    division_development =
  { name  = "R.Smg. Velella"
    type  = nuclear_submarine
    model = 3
    cost = 0.04 #0.4
	new_model = no unitcost = yes
    id    = { type = 23500 id = 1200 }
    date  = { year = 1937 month = august day = 29 }
  }
	
	
	
}