
 ############################## 
 # Country definition for GER # 
 ############################## 
  
 #Westwall# 
 province = { id = 126 landfort = 2 } # Aachen
 province = { id = 129 landfort = 2 } # Koblenz
 province = { id = 128 landfort = 2 } # Trier
 province = { id = 130 landfort = 2 } # Mainz 
 province = { id = 132 landfort = 2 } # Freiburg 
 province = { id = 127 landfort = 2 anti_air = 2 } # Saarbrücken 
 
 #Ostwall#
 province = { id = 158 landfort = 2 }              # Stettin    - Pommernstellung
 province = { id = 159 landfort = 3 anti_air = 1 } # Messeritz  - Festungsfront Oder-Warthe-Bogen
 province = { id = 165 landfort = 1 }              # Liegnitz   - Oderstellung
 province = { id = 167 landfort = 1 }              # Breslau    - Oderstellung
 province = { id = 185 landfort = 1 }              # Allenstein - Ostpreußenstellung
 
 province = { id = 162 naval_base = { size = 1 current_size = 1 } } # Stralsund
 province = { id = 158 naval_base = { size = 3 current_size = 3 } } # Stettin
 province = { id = 148 naval_base = { size = 4 current_size = 4 } } # Bremen
 province = { id = 142 anti_air = 2 air_base = { size = 3 current_size = 3 } } # Düsseldorf
 province = { id = 131 anti_air = 2 air_base = { size = 3 current_size = 3 } } # Köln
 province = { id = 145 anti_air = 3 } # Essen 
 province = { id = 147 anti_air = 2 air_base = { size = 4 current_size = 4 } naval_base = { size =  7 current_size = 7 }} # Wilhelmshaven
 province = { id = 137 anti_air = 2 air_base = { size = 10 current_size = 10 } } # Kassel 
 province = { id = 154 anti_air = 2 naval_base = { size = 5 current_size = 5 } } # Hamburg 
 province = { id = 151 anti_air = 2 naval_base = { size = 1 current_size = 1 } } # Lübeck 
 province = { id = 152 anti_air = 1 air_base = { size = 4 current_size = 4 } naval_base = { size = 10 current_size = 10 } } # Kiel 
 province = { id = 153 anti_air = 2 air_base = { size = 4 current_size = 4 } naval_base = { size = 2 current_size = 2 } } # Rostock 
 province = { id = 169 anti_air = 2 } # Magdeburg 
 province = { id = 163 anti_air = 2 air_base = { size = 10 current_size = 10 } } # Berlin 
 province = { id = 183 supplypool = 100 } # Elbing 
 province = { id = 170 anti_air = 1 } # Leipzig 
 province = { id = 177 anti_air = 1 } # Nuremberg 
 province = { id = 138 anti_air = 3 air_base = { size = 4 current_size = 4 } } # Frankfurt-am-Main 
 province = { id = 134 anti_air = 2 air_base = { size = 4 current_size = 4 } } # Stuttgart 
 province = { id = 179 anti_air = 2 air_base = { size = 10 current_size = 10 } } # Munich 
 province = { id = 167 anti_air = 2 air_base = { size = 10 current_size = 10 } } # Breslau 
 province = { id = 184 landfort = 4 anti_air = 4 air_base = { size = 10 current_size = 10 } naval_base = { size = 2 current_size = 2 } } # Königsberg 

 province = { id = 183 naval_base = { size = 1 current_size = 1 } } # Elbing (AI always wants to stack transports there, making them unusable)
 province = { id = 182 naval_base = { size = 1 current_size = 1 } } # Tilsit (AI always wants to stack transports there, making them unusable)
 
 # Fliegerhorste/Airports
 province = { id = 171 air_base = { size = 1 current_size = 1 } } # Erfurt
 province = { id = 146 air_base = { size = 1 current_size = 1 } } # Hannover 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag = GER 
       
   capital                = 163 #Berlin
   manpower               = 46 # +26 for reworked OOB
   
   transports             = 765 #775 in total, 10 used for convoy; rather large merchant fleet rebuilt in the 1920s, even bigger than Italy's
   escorts                = 37 #41 in total, 4 used for convoy
   dissent                = 12 #20
   
   # Resource Reserves 
   energy                 = 600
   metal                  = 1000
   rare_materials         = 500
   oil                    = 900 
   supplies               = 500 
   money                  = 100 
   
   diplomacy = {
         relation = { tag = ARG value = 75 }
         relation = { tag = AST value = 0 }
         relation = { tag = AUS value = 100 guaranteed = { day = 29 month = december year = 1932 } }
         relation = { tag = BEL value = 20 }
         relation = { tag = BHU value = 0 }
         relation = { tag = BOL value = 15 }
         relation = { tag = BRA value = 50 }
         relation = { tag = BUL value = 25 guaranteed = { day = 29 month = december year = 1935 } }
         relation = { tag = CAN value = 0 }
         relation = { tag = CHL value = 50 }
         relation = { tag = COL value = -20 }
         relation = { tag = CZE value = -25 guaranteed = { day = 29 month = december year = 1932 } }
         relation = { tag = ENG value = 0 }
         relation = { tag = DEN value = 25 guaranteed = { day = 29 month = december year = 1932 } }
         relation = { tag = EST value = 10 }
         relation = { tag = FIN value = 25 guaranteed = { day = 22 month = august year = 1934 }}
         relation = { tag = FRA value = -35 }
         relation = { tag = GRE value = 15 }
         relation = { tag = HOL value = 0 }
         relation = { tag = HUN value = 100 }
         relation = { tag = IRE value = 15 }
         relation = { tag = IRQ value = 25 }
         relation = { tag = ITA value = 50 guaranteed = { day = 29 month = december year = 1935 } }
         relation = { tag = JAP value = 20 }
         relation = { tag = LAT value = 10 }
         relation = { tag = LIT value = 10 }
         relation = { tag = LUX value = -50 }
         relation = { tag = MAN value = 20 }
         #relation = { tag = MEN value = 20 }
         relation = { tag = NEP value = 0 }
         relation = { tag = NZL value = 0 }
         relation = { tag = POL value = -10 guaranteed = { day = 29 month = december year = 1932 } }
         relation = { tag = POR value = 75 }
         relation = { tag = ROM value = 50 guaranteed = { day = 29 month = december year = 1935 } }
         relation = { tag = SAF value = 0 }
         relation = { tag = SCH value = 50 guaranteed = { day = 16 month = may year = 1935 }  }
         relation = { tag = SOV value = 0 }
         relation = { tag = SPR value = -50 }
         relation = { tag = SWE value = 50 guaranteed = { day = 29 month = december year = 1935 } }
         relation = { tag = TUR value = 10 guaranteed = { day = 29 month = december year = 1935 } }
         relation = { tag = USA value = -10 }
         relation = { tag = YUG value = 50 guaranteed = { day = 29 month = december year = 1932 } }
}
   ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = 
   { date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 5 
     defense_lobby     = 6 
     interventionism   = 6
   }
   
	headofstate            = { type = 9 id = 1 }
	headofgovernment       = { type = 9 id = 41 }
	foreignminister        = { type = 9 id = 3 }
	armamentminister       = { type = 9 id = 4 }
	ministerofsecurity     = { type = 9 id = 5 }
	ministerofintelligence = { type = 9 id = 6 }
	chiefofstaff           = { type = 9 id = 180 }
	chiefofarmy            = { type = 9 id = 8 }
	chiefofnavy            = { type = 9 id = 9 }
	chiefofair             = { type = 9 id = 10 }
	
	allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
		motorized = yes
	} 
		
	#inventions = { 2700061 2700063 2700065 }
	
   SpyInfo = {  country = "GER" NumberOfSpies = 9  } 
   
   peacetime_ic_mod = 0.9
   
   nationalprovinces = {  
#Ostpreußen
   182 #Tilsit#
   183 #Elbing#
   184 #Königsberg#
   185 #Allenstein#
#Reich   
   126 #Aachen#
   129 #Koblenz#
   131 #Köln#
   128 #Trier#
   127 #Saarbrücken#
   130 #Mainz#
   143 #Neuwied#
   142 #Duesseldorf#
   145 #Essen#
   141 #Muenster#
   147 #Wilhelmshaven#
   144 #Bielefeld#
   137 #Kassel#
   138 #Frankfurt/Main#
   139 #Darmstadt#
   136 #Karlsruhe#
   132 #Freiburg#
   133 #Konstanz#
   135 #Tubingen#
   134 #Stuttgart#
   180 #Würzburg#
   140 #Fulda#
   148 #Bremen#
   150 #Flensburg#
   151 #Lübeck#
   152 #Kiel#
   154 #Hamburg#
   149 #Lüneburg#
   146 #Hannover#
   171 #Erfurt#
   177 #Nürnberg#
   178 #Augsburg#
   176 #Landshut#
   179 #München#
   175 #Regensburg#
   174 #Bayreuth#
   169 #Magdeburg#
   153 #Rostock#
   156 #Neuruppin#
   157 #Potsdam#
   163 #Berlin#
   170 #Leipzig#
   173 #Dresden#
   172 #Cottbus#
   160 #Frankfurt/Oder#
   162 #Stralsund#
   #Posen,Schlesien,Westpreußen
   158 #Stettin#
   159 #Meseritz#
   165 #Liegnitz#
   166 #Waldenburg#
   167 #Breslau#
   168 #Gleiwitz#
   164 #Oppeln#
   155 #Stolpe#
   161 #Deutsch-Krone#
   #Elsaß-Lothringen  
#   104 #Metz
#   107 #Strasbourg
#   105 #Colmar
   #Luxembourg
#   109 #Luxembourg#
   #Schleswig 
#   216 #Abenra
   #Danzig
   181 #Danzig
   #Memel
#   261 #Klaipeda
   #Westpreußen
#   225 #Bydgoszcz
#   224 #Poznan
   #Schweiz
#   392 #Bern
#   389 #Zürich
   #Polen/Schlesien
#   221 #Katowice
   #Eupen-Malmedy
#   110 #Eupen
   #Austria 
#   189 #Innsbruck
#   191 #Klagenfurt
#   192 #Salzburg
#   190 #Graz
#   195 #Wien
#   194 #Hollabrun
#   186 #Freistadt
#   187 #Linz
#   193 #Sankt Poelten
#   188 #Eisenstadt
   #Poland 
#   226 #Gdynia
#   230 #Plock
#   222 #Torun
   } 
   ownedprovinces = { 
   #Ostpreußen
   182 #Tilsit
   183 #Elbing
   184 #Königsberg
   185 #Allenstein
   #Reich   
   126 #Aachen
   129 #Koblenz
   131 #Köln
   128 #Trier
   127 #Saarbrücken
   130 #Mainz
   143 #Neuwied
   142 #Düsseldorf
   145 #Essen
   141 #Münster
   147 #Wilhelmshaven
   144 #Bielefeld
   137 #Kassel
   138 #Frankfurt/Main
   139 #Darmstadt
   136 #Karlsruhe
   132 #Freiburg
   133 #Konstanz
   135 #Tübingen
   134 #Stuttgart
   180 #Würzburg
   140 #Fulda
   148 #Bremen
   150 #Flensburg
   151 #Lübeck
   152 #Kiel
   154 #Hamburg
   149 #Lüneburg
   146 #Hannover
   171 #Erfurt
   177 #Nürnberg
   178 #Augsburg
   176 #Landshut
   179 #München
   175 #Regensburg
   174 #Bayreuth
   169 #Magdeburg
   153 #Rostock
   156 #Neuruppin
   157 #Potsdam
   163 #Berlin
   170 #Leipzig
   173 #Dresden
   172 #Cottbus
   160 #Frankfurt/Oder
   162 #Stralsund
   #Posen,Schlesien,Westpreußen
   158 #Stettin
   159 #Meseritz
   165 #Liegnitz
   166 #Waldenburg
   167 #Breslau
   168 #Gleiwitz
   164 #Oppeln
   155 #Stolpe
   161 #Deutsch-Krone
   } 
   controlledprovinces = {
   #Ostpreußen
   182 #Tilsit
   183 #Elbing
   184 #Königsberg
   185 #Allenstein
   #Reich   
   126 #Aachen
   129 #Koblenz
   131 #Köln
   128 #Trier
   127 #Saarbrücken
   130 #Mainz
   143 #Neuwied
   142 #Düsseldorf
   145 #Essen
   141 #Münster
   147 #Wilhelmshaven
   144 #Bielefeld
   137 #Kassel
   138 #Frankfurt/Main
   139 #Darmstadt
   136 #Karlsruhe
   132 #Freiburg
   133 #Konstanz
   135 #Tübingen
   134 #Stuttgart
   180 #Würzburg
   140 #Fulda
   148 #Bremen
   150 #Flensburg
   151 #Lübeck
   152 #Kiel
   154 #Hamburg
   149 #Lüneburg
   146 #Hannover
   171 #Erfurt
   177 #Nürnberg
   178 #Augsburg
   176 #Landshut
   179 #München
   175 #Regensburg
   174 #Bayreuth
   169 #Magdeburg
   153 #Rostock
   156 #Neuruppin
   157 #Potsdam
   163 #Berlin
   170 #Leipzig
   173 #Dresden
   172 #Cottbus
   160 #Frankfurt/Oder
   162 #Stralsund
   #Posen,Schlesien,Westpreußen
   158 #Stettin
   159 #Meseritz
   165 #Liegnitz
   166 #Waldenburg
   167 #Breslau
   168 #Gleiwitz
   164 #Oppeln
   155 #Stolpe
   161 #Deutsch-Krone
   } 


 ##################### 
 # technologie datas # 
 ##################### 
 
  deactivate = { 3470 }
  blueprints = { 13080 3810 3220 3230 } # Improved Synthetic Oil Plant; TP 1936 (units in OOB); Carrierdesign 1936 + CV 1937 (Graf Zeppelin laid down in december 36)
  
  techapps = {
   4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
   4050 # Single Engined 1936

   4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930
   4330 # double Engined 1396

   9010 9020 9030 # Aerial warfare, basic doctrines

   2800 2810 # Basic Armoured Car

   2010 2550 2560 2630 # Tanks

   2290 2300 # GW artillery
   2400
   2450 2460 # Early Static AA

   2510 # Basic AA
   
   17000 # 1936 rocket artillery/mortars

   1010 1020 # Early infantry

   1190 1200 1210 # Semi-moto Cavalry
   
   10110 # motorized Inf 1937
   11750 # 1937 mech inf

   1110 # Early Mountain

   1310 # Rear area supplydump

   5010 # Agriculture 
   5080 5090 # Construction (up to advanced)
   5190 # Basic Oil Refining
   5310 #Maths
   5470 5480 5490 # Nukes faculty
   5550 ##rocket

   6300

   #Naval doctrines
   8070 8130 8180 8240 8610 8660 8760

	# Escorts up to pre-WW2
	3010	3040	3070	3100
	3020	3050	3080	3110
	3030 15250	3060	3090 # CL just up to Washington

   3350	3390 3430 3480 3510 15100 # Capital Design up to 1935
   3360	3440 3490 3520 3540 # CA up to 1936
   3370	3400 3450 3460 # BC up to 1918
   3380	3410 3420 3470 3500	3530 3550 # BB up to 1936
   15090 16030 3190 3200 # Prewar Carrier, CV 1930
   3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
   3800 # Prewar TP
   3850 # Torpedoes 36
   
   13070 # Basic Synthetic Oil Plant
   
   12000 # StuG Doctrine
   
  }
  
   #dormant_leaders = { 292 542 545 543 545 548 546 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 579 } 
   dormant_teams    = { 33 34 38 39 41 30 } #German carrier teams + additional tank team + Mölders 
   dormant_leaders  = { 579 } #Vlassov
   
 ##################### 
 # army datas        # 
 #####################     
  
navalunit = {
	name = "Hochseeflotte"
	id = { type = 14500 id = 100 }
	location = 147 #Wilhelmshaven
	base = 147
		division = { id = { type = 14500 id = 1 } name = "Deutschland" type = heavy_cruiser model = 6 experience = 20 }
		division = { id = { type = 14500 id = 2 } name = "Admiral Scheer" type = heavy_cruiser model = 6 experience = 20 }
		division = { id = { type = 14500 id = 3 } name = "Nürnberg" type = light_cruiser model = 3 experience = 20 }
		division = { id = { type = 14500 id = 4 } name = "Leipzig" type = light_cruiser model = 3 experience = 20 }
		division = { id = { type = 14500 id = 5 } name = "Königsberg" type = light_cruiser model = 3 experience = 20 }
		division = { id = { type = 14500 id = 6 } name = "Karlsruhe" type = light_cruiser model = 3 experience = 20 }
		division = { id = { type = 14500 id = 7 } name = "Köln" type = light_cruiser model = 3 experience = 20 }
		division = { id = { type = 14500 id = 8 } name = "Emden" type = light_cruiser model = 2 experience = 20 }
		}

navalunit = {
	name = "U-Bootschulflottille"
	id = { type = 14500 id = 101 }
	location = 152 #Kiel
	base = 152
		division = { id = { type = 14500 id = 1002 } name = "U-1" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1003 } name = "U-2" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1004 } name = "U-3" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1005 } name = "U-4" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1006 } name = "U-5" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1007 } name = "U-6" type = nuclear_submarine model = 1 experience = 20 }
		division = { id = { type = 14500 id = 1008 } name = "U-7" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1010 } name = "U-8" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1013 } name = "U-11" type = nuclear_submarine model = 2 experience = 20 }
	}
	
navalunit = {
	name = "1. U-Bootflottille Weddigen"
	id = { type = 14500 id = 102 }
	location = 152 #Kiel
	base = 152

		division = { id = { type = 14500 id = 1011 } name = "U-9" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1012 } name = "U-10" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1014 } name = "U-12" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1015 } name = "U-13" type = nuclear_submarine model = 2 experience = 20 }
		division = { id = { type = 14500 id = 1021 } name = "U-17" type = nuclear_submarine model = 2 experience = 20 }
	}

navalunit = {
	name = "Baltische Flotte"
	id = { type = 14500 id = 103 }
	location = 151 #Lübeck
	base = 151
		division = { id = { type = 14500 id = 9 } name = "Schleswig-Holstein" type = battleship model = 0 extra = naval_anti_air_l strength = 90 experience = 20 } # strength reduced to simulate modernization until may 7 1936
		division = { id = { type = 14500 id = 10 } name = "Schlesien" type = battleship model = 0 experience = 20 }
		division = { id = { type = 14500 id = 535 } name = "Albatros" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 536 } name = "Falke" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 537 } name = "Greif" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 538 } name = "Iltis" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 539 } name = "Jaguar" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 540 } name = "Kondor" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 541 } name = "Leopard" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 542 } name = "Luchs" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 543 } name = "Möwe" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 544 } name = "Seeadler" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 545 } name = "Tiger" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 546 } name = "Wolf" type = destroyer model = 1 experience = 20 }
		division = { id = { type = 14500 id = 547 } name = "Bremse" type = d_09 model = 1 experience = 20 } #artillery training ship & minelayer
		division = { id = { type = 14500 id = 548 } name = "Grille" type = d_09 model = 2 experience = 20 } #Aviso & command ship
		}
		
navalunit = {
	name = "Transportflotte"
	id = { type = 14500 id = 560 }
	location = 148 #Bremen
	base = 148	
	division = { id = { type = 14500 id = 561 } name = "D. Bremen" type = transport model = 1 }
	division = { id = { type = 14500 id = 562 } name = "D. Europa" type = transport model = 1 }
	division = { id = { type = 14500 id = 563 } name = "D. Berlin" type = transport model = 0 }
	}
########### Deutsche Wehrmacht (Stand 1. Jan 36': 24 InfDiv., 1. KavDiv., 3 PzDiv.) ########## 
		
landunit = {
	location = 163 #Berlin
	name = "Oberkommando Heer"
    id = { type = 14500 id = 104 }
		division = { id = { type = 14500 id = 20 } name = "OKH" type = hq model = 0 }
	}
	
landunit = {
	location = 184 #Königsberg 
	name = "Wehrkreis I"
	id = { type = 14500 id = 105 }
		division = { id = { type = 14500 id = 21 } name = "1. Infanterie-Division"  type = infantry model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #Königsberg
		division = { id = { type = 14500 id = 22 } name = "11. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 extra = anti_tank brigade_model = 0 } #Allenstein
		division = { id = { type = 14500 id = 23 } name = "21. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Elbing
	}

landunit = {
	location = 158 #Stettin 
	name = "Wehrkreis II"
	id = { type = 14500 id = 106 }
		division = { id = { type = 14500 id = 24 } name = "2. Infanterie-Division"  type = infantry model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #Stettin
		division = { id = { type = 14500 id = 25 } name = "12. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 extra = anti_tank brigade_model = 0 } #Schwerin
	}
	
landunit = {
	location = 157 #Potsdam 
	name = "Wehrkreis III"
	id = { type = 14500 id = 107 }
		division = { id = { type = 14500 id = 26 } name = "3. Infanterie-Division"  type = infantry model = 1 strength  = 50  experience = 20 extra = artillery brigade_model = 1 } #Frankfurt/Oder
		division = { id = { type = 14500 id = 27 } name = "18. Infanterie-Division" type = infantry model = 1 strength  = 50  experience = 20 extra = anti_tank brigade_model = 0 } #Liegnitz
	    division = { id = { type = 14500 id = 28 } name = "23. Infanterie-Division" type = infantry model = 1 strength  = 50  experience = 20 } #Potsdam
		division = { id = { type = 14500 id = 29 } name = "3. Panzer-Division"      type = armor    model = 0 strength  = 100 experience = 20 } #Wünsdorf
	}
	
landunit = {
	location = 173 #Dresden
	name = "Wehrkreis IV"
	id = { type = 14500 id = 108 }
		division = { id = { type = 14500 id = 30 } name = "4. Infanterie-Division"  type = infantry model = 1 strength  = 50 experience = 20 extra = rocket_artillery brigade_model = 0 } #Dresden - Nebel-Abteilung 1
		division = { id = { type = 14500 id = 31 } name = "13. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Magdeburg
		division = { id = { type = 14500 id = 32 } name = "14. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Leipzig
	    division = { id = { type = 14500 id = 33 } name = "24. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Chemnitz
	}	

landunit = {
	location = 134 #Stuttgart
	name = "Wehrkreis V"
	id = { type = 14500 id = 109 }
		division = { id = { type = 14500 id = 34 } name = "5. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #Ulm
		division = { id = { type = 14500 id = 35 } name = "9. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Gießen
	}
	
landunit = {
	location = 144 #Bielefeld 
	name = "Wehrkreis VI"
	id = { type = 14500 id = 110 }
		division = { id = { type = 14500 id = 36 } name = "6. Infanterie-Division"  type = infantry model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #Bielefeld
		division = { id = { type = 14500 id = 37 } name = "16. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Münster
		division = { id = { type = 14500 id = 38 } name = "19. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Hannover
		division = { id = { type = 14500 id = 39 } name = "22. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 } #Bremen
    }
	
landunit = {
	location = 179 #München 
	name = "Wehrkreis VII"
	id = { type = 14500 id = 111 }
		division = { id = { type = 14500 id = 40 } name = "7. Infanterie-Division"   type = infantry    model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #München
		division = { id = { type = 14500 id = 41 } name = "10. Infanterie-Division"  type = infantry    model = 1 strength  = 50 experience = 20 } #Regensburg
		division = { id = { type = 14500 id = 42 } name = "15. Infanterie-Division"  type = infantry    model = 1 strength  = 50 experience = 20 } #Würzburg
		division = { id = { type = 14500 id = 43 } name = "17. Infanterie-Division"  type = infantry    model = 1 strength  = 50 experience = 20 } #Nürnberg
		division = { id = { type = 14500 id = 51 } name = "1. Gebirgs-Division"      type = bergsjaeger model = 0 strength  = 75 experience = 35 } #München - als 1. Gebirgs-Brigade, die nach Anschluss einfach von Brigade in Division umbenannt wurde
	}
	
landunit = {
	location = 164 #Oppeln 
	name = "Wehrkreis III"
	id = { type = 14500 id = 112 }
		division = { id = { type = 14500 id = 44 } name = "8. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 extra = artillery brigade_model = 1 } #Oppeln
	}
	
landunit = {
	location = 154 #Hamburg
	name = "Wehrkreis X"
	id = { type = 14500 id = 113 }
		division = { id = { type = 14500 id = 45 } name = "20. Infanterie-Division" type = infantry model = 1 strength  = 50 experience = 20 extra = rocket_artillery brigade_model = 0 } #Hamburg - Nebel-Abteilung 2
	}
	
landunit = {
	location = 160 #Frankfurt/oder
	name = "Gruppenkommando 1"
	id = { type = 14500 id = 114 }
		division = { id = { type = 14500 id = 46 } name = "1. Kavallerie-Division" type = cavalry model = 1 strength  = 100 experience = 20 } #Frankfurt/Oder
	}


landunit = {
	location = 171 #Erfurt
	name = "Wehrkreis IX"
	id = { type = 14500 id = 115 }
		division = { id = { type = 14500 id = 47 } name = "1. Panzer-Division" type = armor model = 0 strength  = 100 experience = 20 } #Weimar
	}	
	
landunit = {
	location = 180 #Würzburg
	name = "Wehrkreis XIII"
	id = { type = 14500 id = 116 }
		division = { id = { type = 14500 id = 48 } name = "2. Panzer-Division" type = armor model = 0 strength  = 100 experience = 20 } #Würzburg
	}
	
landunit = {
	location = 152 #Kiel
	name = "Kanalwach-Kommando Kiel"
	id = { type = 14500 id = 49 }
		division = { id = { type = 14500 id = 50 } name = "Kanalwach-Abteilung" type = garrison model = 0 experience = 20 extra = anti_air locked = yes } #Kiel Canal blocking force
	}


######## Luftwaffe (Stand 1. Jan: 5 Jäger, 1 StuKa, 6 Bomber)##############
	
airunit = { 
	location = 163 #Berlin 
	id = { type = 14500 id = 117 } 
	name = "Luftgau Berlin"
	base = 163
		division = { id = { type = 14500 id = 81 } name = "Stukageschwader 162 'Immelmann'"   type = cas         model = 0 strength  = 50 experience = 25 } #Schwerin
	    division = { id = { type = 14500 id = 94 } name = "JG 2 'Richthofen'"                 type = interceptor model = 0 strength  = 75 experience = 50 } #Döberitz
		division = { id = { type = 14500 id = 97 } name = "Jagdgeschwader 26"                 type = interceptor model = 0 strength  = 25 experience = 50 } #Döberitz Erstaufstellung als JG 132
		division = { id = { type = 14500 id = 98 } name = "ZG 26 'Horst Wessel'"              type = d_01        model = 0 strength  = 45 experience = 75 } #Döberitz Erstaufstellung Jagdgeschwader 134 "Horst Wessel"
	}
	
airunit = { 
	location = 134 #Stuttgart 
	id = { type = 14500 id = 118 } 
	name = "Luftflotte I"
	base = 134
		division = { id = { type = 14500 id = 83 } name = "KG 55 'Greif'"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Ansbach
	}

airunit = { 
	location = 147 #Wilhelmshaven 
	id = { type = 14500 id = 119 } 
	name = "I. Fliegerkorps"
	base = 147
		division = { id = { type = 14500 id = 85 } name = "JG 54 'Grünherz'"   type = interceptor model = 0 strength  = 75 experience = 45 } #Jever
	}	
		
airunit = { 
	location = 146 #Hannover 
	id = { type = 14500 id = 120 } 
	name = "Luftflotte II"
	base = 146
		division = { id = { type = 14500 id = 87 } name = "KG 27 'Boelcke'"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Hannover
	}

airunit = { 
	location = 153 #Rostock
	id = { type = 14500 id = 121 } 
	name = "Luftflotte III"
	base = 153
		division = { id = { type = 14500 id = 89 } name = "KG 1 'Hindenburg'"  type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Greifswald
		division = { id = { type = 14500 id = 95 } name = "Lehrgeschwader 1"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Greifswald - Lehrverband für taktische Bomberunterstützung. Flog Kriegseinsätze.
	}

airunit = { 
	location = 171 #Erfurt
	id = { type = 14500 id = 123 } 
	name = "Luftflotte IV"
	base = 171
	    division = { id = { type = 14500 id = 91 } name = "KG 2 'Holzhammer'"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Merseburg
		division = { id = { type = 14500 id = 92 } name = "KG 4 'General Wever'"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength  = 50 experience = 70 } #Gotha
	    division = { id = { type = 14500 id = 93 } name = "JG 3 'Udet'"   type = interceptor model = 0 strength  = 75 experience = 45 } #Bernburg 
	}
	
# dormant SS divisions #
landdivision = { dormant = yes id = { type = 14500 id = 201 }  name = "1. SS-Panz. Div. 'LSSAH'"                                  type = light_armor model = 3 extra = super_heavy_armor brigade_model = 2 experience = 10 } # 22000
landdivision = { dormant = yes id = { type = 14500 id = 202 }  name = "2. SS-Panz. Div. 'Das Reich'"                              type = light_armor model = 2 extra = super_heavy_armor brigade_model = 1 experience = 10 } # 
landdivision = { dormant = yes id = { type = 14500 id = 203 }  name = "3. SS-Panz. Div. 'Totenkopf'"                              type = light_armor model = 2 extra = super_heavy_armor brigade_model = 1 experience = 10 } # 14000
landdivision = { dormant = yes id = { type = 14500 id = 204 }  name = "4. SS-Polizei-PzGren. Div."                  strength = 35 type = d_06        model = 1 extra = sp_artillery brigade_model = 1 } # 9000
landdivision = { dormant = yes id = { type = 14500 id = 205 }  name = "5. SS-Panz. Div. 'Wiking'"                                 type = light_armor model = 3 extra = super_heavy_armor experience = 10 brigade_model = 2 } # 14800
landdivision = { dormant = yes id = { type = 14500 id = 206 }  name = "6. SS-Geb. Div. 'Nord'"                                    type = d_07        model = 1 extra = engineer experience = 10 brigade_model = 1 } # 15000
landdivision = { dormant = yes id = { type = 14500 id = 207 }  name = "7. SS-Freiw. Geb. Div. 'Prinz Eugen'"                      type = d_07        model = 1 extra = artillery experience = 10 brigade_model = 4 } # 20000
landdivision = { dormant = yes id = { type = 14500 id = 208 }  name = "8. SS-Kav. Div. 'Florian Geyer'"                           type = d_04        model = 5 extra = b_01 brigade_model = 2 } # 13000
landdivision = { dormant = yes id = { type = 14500 id = 209 }  name = "9. SS-Panz. Div. 'Hohenstaufen'"                           type = light_armor model = 4 extra = sp_artillery experience = 10 brigade_model = 1 } # 19000
landdivision = { dormant = yes id = { type = 14500 id = 210 }  name = "10. SS-Panz. Div. 'Frundsberg'"                            type = light_armor model = 4 extra = sp_artillery experience = 10 brigade_model = 1 } # 15000
landdivision = { dormant = yes id = { type = 14500 id = 211 }  name = "11. SS-Freiw. PzGren. Div. 'Nordland'"       strength = 53 type = d_06        model = 2 extra = sp_artillery brigade_model = 1 } # 9000
landdivision = { dormant = yes id = { type = 14500 id = 212 }  name = "12. SS-Panz. Div. 'Hitlerjugend'"                          type = light_armor model = 4 extra = super_heavy_armor brigade_model = 3 experience = 10 } # 19500
landdivision = { dormant = yes id = { type = 14500 id = 213 }  name = "13. Waffen-Geb. Div. der SS 'Handschar'"                   type = d_07        model = 2 extra = anti_tank brigade_model = 2 } # 12700
landdivision = { dormant = yes id = { type = 14500 id = 214 }  name = "14. Waffen-Gr. Div. der SS 'Galicia'"                      type = d_03        model = 2 extra = artillery brigade_model = 4 } # 22000
landdivision = { dormant = yes id = { type = 14500 id = 215 }  name = "15. Waffen-Gr. Div. der SS (lett. Nr.1)"     strength = 88 type = d_03        model = 2 extra = artillery brigade_model = 4 } # 16800
landdivision = { dormant = yes id = { type = 14500 id = 216 }  name = "16. SS-PzGren. Div. 'Reichsführer SS'"       strength = 20 type = d_06        model = 2 extra = sp_artillery brigade_model = 1 } # Brigadenstärke
landdivision = { dormant = yes id = { type = 14500 id = 217 }  name = "17. SS-PzGren. Div. 'Götz von Berlichingen'" strength = 5  type = d_06        model = 2 extra = sp_artillery experience = 10 brigade_model = 1 } # 3500
landdivision = { dormant = yes id = { type = 14500 id = 218 }  name = "18. SS-Freiw.PzGren. Div. 'Horst Wessel'"    strength = 20 type = d_06        model = 1 extra = sp_artillery brigade_model = 1 } # Brigadenstärke
landdivision = { dormant = yes id = { type = 14500 id = 219 }  name = "19. Waffen-Gr. Div. der SS (lett. Nr.2)"     strength = 50 type = d_03        model = 2 extra = artillery brigade_model = 4 } # 10000
landdivision = { dormant = yes id = { type = 14500 id = 220 }  name = "20. Waffen-Gr. Div. der SS (estn. Nr.1)"     strength = 78 type = d_03        model = 2 extra = anti_tank brigade_model = 2 } # 15500
landdivision = { dormant = yes id = { type = 14500 id = 221 }  name = "21. Waffen-Geb. Div. der SS 'Skanderbeg'"    strength = 39 type = d_07        model = 2 extra = artillery brigade_model = 4 } # 5000
landdivision = { dormant = yes id = { type = 14500 id = 222 }  name = "22. SS-Freiw. Kav. Div. 'Maria Theresa'"     strength = 45 type = d_04        model = 5 extra = b_01 brigade_model = 2 } # 8000
landdivision = { dormant = yes id = { type = 14500 id = 223 }  name = "23. SS-Freiw. PzGren. Div. 'Nederland'"      strength = 30 type = d_06        model = 2 extra = sp_artillery brigade_model = 1 } # 6000
landdivision = { dormant = yes id = { type = 14500 id = 224 }  name = "24. Waffen-Geb. Div. der SS 'Karstjager'"    strength = 5  type = d_07        model = 2 extra = engineer brigade_model = 1 } # 3000
landdivision = { dormant = yes id = { type = 14500 id = 225 }  name = "25. Waffen-Gr. Div. der SS 'Hunyadi'"        strength = 75 type = d_03        model = 2 extra = anti_tank brigade_model = 2 } # 15000
landdivision = { dormant = yes id = { type = 14500 id = 226 }  name = "26. Waffen-Gr. Div. der SS (unga. Nr.2)"     strength = 65 type = d_03        model = 2 extra = artillery brigade_model = 4 } # 13000
landdivision = { dormant = yes id = { type = 14500 id = 227 }  name = "27. SS-Freiw. Gr. Div. 'Langemarck'"         strength = 35 type = d_03        model = 2 extra = anti_tank brigade_model = 2 } # 7000
landdivision = { dormant = yes id = { type = 14500 id = 228 }  name = "28. SS-Freiw. PzGren. Div. 'Wallonien'"      strength = 5  type = d_06        model = 2 extra = super_heavy_armor brigade_model = 2 } # 4000
landdivision = { dormant = yes id = { type = 14500 id = 573 }  name = "29. Waffen-Gr. Div. der SS (ital. Nr.1)"     strength = 15 type = d_03        model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 255 }  name = "30. Waffen-Gr. Div. der SS"                  strength = 25 type = d_03        model = 4 extra = artillery brigade_model = 4 } # 4400
landdivision = { dormant = yes id = { type = 14500 id = 231 }  name = "31. SS-Freiwilligen-Grenadier-Division"      strength = 40 type = d_03        model = 3 extra = anti_tank brigade_model = 2 } # 11000 
landdivision = { dormant = yes id = { type = 14500 id = 232 }  name = "32. SS-Freiw.Gr. Div. '30. Januar'"          strength = 5  type = d_03        model = 3 extra = artillery brigade_model = 4 } # 2000
landdivision = { dormant = yes id = { type = 14500 id = 233 }  name = "33. Waffen-Gr. Div. der SS 'Charlemagne'"    strength = 22 type = d_03        model = 3 extra = anti_tank brigade_model = 2 } # 7340 
landdivision = { dormant = yes id = { type = 14500 id = 234 }  name = "34. SS-Gr. Div. 'Landstorm Nederland'"       strength = 20 type = d_03        model = 3 extra = engineer } # 7000 
landdivision = { dormant = yes id = { type = 14500 id = 235 }  name = "35. SS und Polizei-Gr. Div."                 strength = 10 type = d_03        model = 3 extra = artillery brigade_model = 4 } # 5000
landdivision = { dormant = yes id = { type = 14500 id = 236 }  name = "36. Waffen-Gr. Div. der SS"                  strength = 15 type = d_03        model = 3 extra = engineer brigade_model = 1 } # 6000
landdivision = { dormant = yes id = { type = 14500 id = 237 }  name = "37. SS-Freiwilligen-Kavallerie-Division"     strength = 5  type = d_04        model = 5 extra = b_01 brigade_model = 3 } # 1000 
landdivision = { dormant = yes id = { type = 14500 id = 238 }  name = "38. SS-Gr. Div. 'Nibelungen'"                strength = 5  type = d_03        model = 3 extra = artillery  brigade_model = 4 } # 1000

#landdivision = { dormant = yes id = { type = 14500 id = 565 }  name = "23. Waffen-Geb. Div. der SS 'Kama'" strength = 15 type = d_07 model = 2 extra = engineer experience = 10 brigade_model = 2 }
#landdivision = { dormant = yes id = { type = 14500 id = 229 }  name = "29. Waffen-Gr. Div. der SS (russ. Nr.1)" strength = 75 type = d_03 model = 2 extra = anti_tank brigade_model = 2 } # 15000
#landdivision = { dormant = yes id = { type = 14500 id = 230 }  name = "30. Waffen-Gr. Div. der SS (russ. Nr.2)" strength = 8 type = d_03 model = 3 extra = artillery brigade_model = 4 } # 4500
#landdivision = { dormant = yes id = { type = 14500 id = 244 }  name = "44. SS-PzGr.Div. 'Wallenstein'" strength =  type = d_06 model = } #

#landdivision = { dormant = yes id = { type = 14500 id = 239 }  name = "39.Geb. Div. der SS 'Andreas Höfer'" strength =  type = d_07 model = } #fictional - no historical information
#landdivision = { dormant = yes id = { type = 14500 id = 240 }  name = "40.SS-Freiw.PzGr.Div. 'Feldherrnhalle'" strength =  type = d_06 model = } #fictional - Feldherrnhalle units were part of the SA
#landdivision = { dormant = yes id = { type = 14500 id = 241 }  name = "41.Waffen-Gr.Div. der SS 'Kalevala'" strength =  type = d_03 model = } #fictional - no finnish units in the wehrmacht in 1945
#landdivision = { dormant = yes id = { type = 14500 id = 242 }  name = "42.Waffen-Gr.Div. der SS 'Niederschsen'" strength =  type = d_03 model = } #was planed in 44. Personal was used for a different SS unit. Niedersachen was never realised.
#landdivision = { dormant = yes id = { type = 14500 id = 243 }  name = "43.Waffen-Gr.Div. der SS 'Reichsmarschall'" strength =  type = d_03 model = } #Was not integrated into the SS. The division formed the core elements of the Hermann Göring divisions of the Luftwaffe.
#landdivision = { dormant = yes id = { type = 14500 id = 245 }  name = "45.SS-Div. 'Waräger'" strength =  type = d_03 model = } #fictional - no historical information

# SS emergancy units 
#landdivision = { dormant = yes id = { type = 14500 id = 252 }  name = "SS-Division 'Wallenstein'" strength =  type =  model = } #Mot SS Inf with large StuG support. Emergancy unit formed form SS-Schools in Böhmen and Mähren. Parts were already informed and organised.
#SS-Freiwilligenkorps „Böhmen“ with 3 "Brigades"
#SS-Brigade 'Trabandt', SS-Brigade 'Böhmen' and SS-Brigade 'Mähren' ~3.500 soldiers

# SA division of the SA-PzKorps Feldherrnhalle with own Tiger unit and strong spg artillery support
landdivision = { dormant = yes id = { type = 14500 id = 253 }  name = "Pz-Division Feldherrnhalle 1" type = light_armor model = 6 extra = super_heavy_armor brigade_model = 4 experience = 50 strength = 65 } #KstN perhaps based on PzDiv 45'
landdivision = { dormant = yes id = { type = 14500 id = 254 }  name = "Pz-Division Feldherrnhalle 2" type = light_armor model = 6 extra = sp_artillery      brigade_model = 5 experience = 50 strength = 65 } #KstN perhaps based on PzDiv 45'

# Elite Division Heer #
landdivision = { dormant = yes id = { type = 14500 id = 249 }  name = "PzGren.Div. 'Großdeutschland'" type = light_armor model = 4 extra = super_heavy_armor  brigade_model = 3 experience = 50 } #
landdivision = { dormant = yes id = { type = 14500 id = 250 }  name = "Panzer-Lehr-Division"          type = light_armor model = 5 extra = tank_destroyer     brigade_model = 5 experience = 50 } # 
landdivision = { dormant = yes id = { type = 14500 id = 251 }  name = "Division Brandenburg"          type = paratrooper model = 2 experience = 75 } #

#Finnish expeditionary forces after returning to GER
#unharmed
landdivision = { dormant = yes id = { type = 14500 id = 300 }  name = "169. Infanterie-Division"   type = infantry model = 2 extra = b_01 experience = 10 brigade_model = 2 }
landdivision = { dormant = yes id = { type = 14500 id = 301 }  name = "163. Infanterie-Division"   type = infantry model = 2 extra = artillery experience = 10 brigade_model = 4 }	
landdivision = { dormant = yes id = { type = 14500 id = 302 }  name = "6. SS-Gebirgs-Division 'Nord'"   type = d_07 model = 1 extra = artillery experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 303 }  name = "2. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 304 }  name = "3. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 305 }  name = "7. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 306 }  name = "AOK Lappland"   type = garrison model = 2 extra = anti_air experience = 10 brigade_model = 3 }
#badly harmed
landdivision = { dormant = yes id = { type = 14500 id = 307 }  name = "169. Infanterie-Division"   type = infantry model = 2 extra = b_01 strength = 70 experience = 10 brigade_model = 2 }
landdivision = { dormant = yes id = { type = 14500 id = 308 }  name = "163. Infanterie-Division"   type = infantry model = 2 extra = artillery strength = 70 experience = 10 brigade_model = 4 }	
landdivision = { dormant = yes id = { type = 14500 id = 309 }  name = "6. SS-Gebirgs-Division 'Nord'"   type = d_07 model = 1 extra = artillery strength = 70 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 310 }  name = "2. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 70 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 311 }  name = "3. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 70 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 312 }  name = "7. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 70 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 313 }  name = "AOK Lappland"   type = garrison model = 2 extra = anti_air strength = 70 experience = 10 brigade_model = 3 }
#slightly harmed
landdivision = { dormant = yes id = { type = 14500 id = 314 }  name = "169. Infanterie-Division"   type = infantry model = 2 extra = b_01 strength = 85 experience = 10 brigade_model = 2 }
landdivision = { dormant = yes id = { type = 14500 id = 315 }  name = "163. Infanterie-Division"   type = infantry model = 2 extra = artillery strength = 85 experience = 10 brigade_model = 4 }	
landdivision = { dormant = yes id = { type = 14500 id = 316 }  name = "6. SS-Gebirgs-Division 'Nord'"   type = d_07 model = 1 extra = artillery strength = 85 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 317 }  name = "2. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 85 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 318 }  name = "3. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 85 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 319 }  name = "7. Gebirgs-Division"   type = bergsjaeger model = 1 extra = artillery strength = 85 experience = 10 brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 320 }  name = "AOK Lappland"   type = garrison model = 2 extra = anti_air strength = 85 experience = 10 brigade_model = 3 }

# Event Units #
landdivision = { dormant = yes id = { type = 14500 id = 326 } name = "250. Infanterie-Division (spanische)"  type = infantry    model = 2 strength = 100 extra = artillery brigade_model = 3 }
landdivision = { dormant = yes id = { type = 14500 id = 321 } name = "369. Infanterie-Division (kroatische)" type = infantry    model = 3 strength = 85  extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 322 } name = "373. Infanterie-Division (kroatische)" type = bergsjaeger model = 2 strength = 85  extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 323 } name = "392. Infanterie-Division (kroatische)" type = infantry    model = 3 strength = 85  extra = artillery brigade_model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 324 } name = "1. Kosaken-Kavallerie-Division"        type = cavalry     model = 4 }
landdivision = { dormant = yes id = { type = 14500 id = 325 } name = "2. Kosaken-Kavallerie-Division"        type = cavalry     model = 4 }
# ID 3136110 #
landdivision = { dormant = yes id = { type = 14500 id = 350 } name = "600. Infanterie-Division (russisch)"  type = infantry    model = 2 strength = 100 extra = artillery brigade_model = 3 }
landdivision = { dormant = yes id = { type = 14500 id = 351 } name = "650. Infanterie-Division (russisch)"  type = infantry    model = 2 strength = 70  extra = artillery brigade_model = 1 }
landdivision = { dormant = yes id = { type = 14500 id = 352 } name = "700. Infanterie-Division (russisch)"  type = infantry    model = 2 strength = 10  }

# Volkssturm Event ID 3136080 #
landdivision = { dormant = yes id = { type = 14500 id = 370 } name = "1. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 371 } name = "2. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 372 } name = "3. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 373 } name = "4. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 374 } name = "5. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 375 } name = "6. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 376 } name = "7. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 377 } name = "8. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 378 } name = "9. Volkssturm-Division"   type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 379 } name = "10. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 380 } name = "11. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 381 } name = "12. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 382 } name = "13. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 383 } name = "14. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 384 } name = "15. Volkssturm-Division"  type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 385 } name = "1. Hitlerjugend-Division" type = militia     model = 4 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 386 } name = "2. Hitlerjugend-Division" type = militia     model = 4 strength = 100 }

# Volkswagen MotInf ID 3136133 #
landdivision = { dormant = yes id = { type = 14500 id = 387 } name = "1. Infanterie-Division (mot)" type = motorized model = 1 strength = 100 extra = tank_destroyer brigade_model = 0 }
landdivision = { dormant = yes id = { type = 14500 id = 388 } name = "2. Infanterie-Division (mot)" type = motorized model = 1 strength = 100 extra = tank_destroyer brigade_model = 0 }

# Fall Anton coastal garrisons 
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 389 } name = "Küstenschutzgruppe Perpignan" type = garrison model = 3 strength = 100 extra = police }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 390 } name = "Küstenschutzgruppe Beziers" type = garrison model = 3 strength = 100 extra = police }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 391 } name = "Küstenschutzgruppe Montpellier" type = garrison model = 3 strength = 100 extra = police }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 392 } name = "Küstenschutzgruppe Marseille" type = garrison model = 3 strength = 100 extra = police }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 393 } name = "Küstenschutzgruppe Toulon" type = garrison model = 3 strength = 100 extra = police }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 394 } name = "Küstenschutzgruppe Nizza" type = garrison model = 3 strength = 100 extra = police }

# Schleuderschiffe
navaldivision = { dormant = yes id = { type = 14500 id = 395 } name = "Westfalen" type = escort_carrier model = 0 strength = 100 }
navaldivision = { dormant = yes id = { type = 14500 id = 396 } name = "Schwabenland" type = escort_carrier model = 1 strength = 100 }
navaldivision = { dormant = yes id = { type = 14500 id = 397 } name = "Friesenland" type = escort_carrier model = 1 strength = 100 }
#navaldivision = { dormant = yes id = { type = 14500 id = 398 } name = "Ostmark" type = escort_carrier model = 0 strength = 100 }

# SMS Hannover
navaldivision = { dormant = yes id = { type = 14500 id = 399 } name = "Hannover" type = battleship model = 0 strength = 75 } #should be rebuilt as target ship after 1935, but never was

# Operation Safari
navaldivision = { dormant = yes id = { type = 14500 id = 600 } name = "Nordland"          type = heavy_cruiser model = 2 }
navaldivision = { dormant = yes id = { type = 14500 id = 601 } name = "Adler"             type = heavy_cruiser model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 602 } name = "UA Galathea"       type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 603 } name = "UA Rota"           type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 604 } name = "UA Ran"            type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 605 } name = "UA Triton"         type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 606 } name = "UA Bellona"        type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 607 } name = "UA Flora"          type = nuclear_submarine model = 0 }
navaldivision = { dormant = yes id = { type = 14500 id = 608 } name = "UA Daphne"         type = nuclear_submarine model = 1 }
navaldivision = { dormant = yes id = { type = 14500 id = 609 } name = "UA Dryaden"        type = nuclear_submarine model = 1 }

# Erprobungskommando Rechlin
airdivision   = { dormant = yes id = { type = 14500 id = 430 } name = "Nachtjagdgeschwader 1" type = multi_role model = 2 experience = 25  strength = 50  }
airdivision   = { dormant = yes id = { type = 14500 id = 431 } name = "Nachtjagdgeschwader 2" type = multi_role model = 2 experience = 25  strength = 25  }
airdivision   = { dormant = yes id = { type = 14500 id = 405 } name = "Jagdgeschwader 7"      type = multi_role model = 5 experience = 100 strength = 35  }

# Bundesheer & Bundesluftwaffe
landdivision = { dormant = yes id = { type = 14500 id = 410 } name = "44. Infanterie-Division"      type = infantry        model = 1 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 411 } name = "45. Infanterie-Division"      type = infantry        model = 1 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 412 } name = "2. Gebirgs-Division"          type = bergsjaeger     model = 0 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 413 } name = "3. Gebirgs-Division"          type = bergsjaeger     model = 0 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 414 } name = "4. leichte (Panzer-)Division" type = mechanized      model = 0 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 415 } name = "4. Panzer-Division"           type = armor           model = 0 strength = 5   }
airdivision  = { dormant = yes id = { type = 14500 id = 416 } name = "Jagdgeschwader 138"           type = interceptor     model = 0 strength = 60  }
airdivision  = { dormant = yes id = { type = 14500 id = 417 } name = "Kampfgeschwader 76"           type = tactical_bomber model = 0 strength = 10  }
  
# Sudetenverbände
landdivision = { dormant = yes id = { type = 14500 id = 418 } name = "46. Infanterie-Division"  type = infantry model = 1 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 419 } name = "5. Panzer-Division"       type = armor    model = 0 strength = 5   }

# Gepanzerte Reserve
landdivision = { dormant = yes id = { type = 14500 id = 420 } name = "1. leichte (Panzer-)Division" type = mechanized  model = 0 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 421 } name = "2. leichte (Panzer-)Division" type = mechanized  model = 0 strength = 100 }
landdivision = { dormant = yes id = { type = 14500 id = 422 } name = "3. leichte (Panzer-)Division" type = mechanized  model = 0 strength = 100 }

# Warsaw uprising - german "prize"
landdivision = { dormant = yes id = { type = 14500 id = 423 } name = "SS-Sturmbrigade R.O.N.A."   type = d_05 model = 3 strength = 20 extra = sp_rct_artillery brigade_model = 4 }

# Gneisenau alert units
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 424 } name = "Division Bärewalde"          type = d_02 model = 3 extra = anti_air brigade_model = 4 }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 425 } name = "Division Denecke"            type = d_02 model = 3 }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 426 } name = "Division Pommernland"        type = d_02 model = 3 extra = rocket_artillery brigade_model = 4 }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 427 } name = "Division Märkisch-Friedland" type = d_02 model = 3 }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 428 } name = "Division Matterstock"        type = d_02 model = 3 }
landdivision = { dormant = yes locked = yes id = { type = 14500 id = 429 } name = "Division Raegner"            type = d_02 model = 3 }

#Lufthansa
airdivision   = { dormant = yes id = { type = 14500 id = 432 } name = "Kampfgeschwader z.b.V. 172" type = transport_plane model = 0 experience = 50 strength = 100  }

# 78. Sturm-Division
landdivision = { dormant = yes id = { type = 14500 id = 433 } name = "78. Sturm-Division" type = d_03 model = 3 extra = b_01 brigade_model = 3 experience = 50 }

# KKK
landdivision = { dormant = yes id = { type = 14500 id = 434 } name = "Kalmückisches Kavalleriekorps" type = cavalry model = 2 strength = 25 experience = 25 }

#####under developement#####

#brigade_development = {
#        id = { type = 14500 id = 1400 }
#        cost = 0.25
#        size = 15
#        type = engineer
#		model = 0
#        date  = {  year = 1939 }
#		unitcost = yes
#        }
		
brigade_development = {
        id = { type = 14500 id = 1401 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 15
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1939 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 14500 id = 1402 }
        name = "Torpedoes 1936"
		cost = 0.05
        size = 15
        type = naval_torpedoes_s
		model = 0
        date  = {  year = 1939 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 14500 id = 1403 }
        name = "Capital Improved Hull 1936"
		cost = 0.04
        size = 4
        type = naval_improved_hull_l
		model = 0
        date  = {  year = 1938 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 14500 id = 1404 }
        name = "Improved Hull 1936"
		cost = 0.2
        size = 5
        type = naval_improved_hull_s
		model = 0
        date  = {  year = 1937 }
		unitcost = yes
        }
		
brigade_development = {
        id = { type = 14500 id = 1405 }
        name = "Floatplane 1930"
		cost = 0.02
        size = 5
        type = floatplane
		model = 0
        date  = {  year = 1937 }
		unitcost = yes
        }


division_development = {
	name = "Gneisenau"
	type = battleship
	model = 5
	cost = 0.4 #4
	new_model = no unitcost = yes
	id = { type = 14500 id = 500 }
	date = { year = 1938 month = may day = 20 }
	}

division_development = {
	name = "Scharnhorst"
	type = battleship
	model = 5
	cost = 0.4 #4
	new_model = no unitcost = yes
	id = { type = 14500 id = 501 }
	date = { year = 1939 month = january day = 6 }
	}
	
division_development = {
	name = "Admiral Graf Spee"
	type = heavy_cruiser
	model = 6
	cost = 0.3 #3
	new_model = no unitcost = yes
    id = { type = 14500 id = 502 } 
	date = { year = 1936 month = january day = 6 }
	}
	
division_development = {
	name = "Blücher"
	type = heavy_cruiser
	model = 7
	cost = 0.3 #3
	new_model = no unitcost = yes
    id = { type = 14500 id = 572 } 
	date = { year = 1939 month = april day = 4 }
	}
	
division_development = {
	name = "Admiral Hipper"
	type = heavy_cruiser
	model = 7
	cost = 0.3 #3
	new_model = no unitcost = yes
    id = { type = 14500 id = 533 } 
	date = { year = 1939 month = september day = 20 }
	}
	
division_development = { #artillery training ship & minelayer
	name = "Brummer"
    type = d_09
    model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
        id = { type = 14500 id = 549 } 
	date = { year = 1936 month = february day = 0 }
	}

division_development = {
	name = "Z-1 Leberecht Maaß"
    type = d_09 
    model = 4
	cost = 0.04 #0.4
	new_model = no unitcost = yes
        id = { type = 14500 id = 503 } 
	date = { year = 1937 month = january day = 13 }
	}

division_development = {
	name = "Z-2 Georg Thiele"
    type = d_09 
    model = 4
	cost = 0.04 #0.4
	new_model = no unitcost = yes
        id = { type = 14500 id = 504 } 
	date = { year = 1937 month = february day = 26 }
	}

division_development = {
	name = "Z-3 Richard Beitzen"
    type = d_09 
    model = 4
	cost = 0.04 #0.4
	new_model = no unitcost = yes
        id = { type = 14500 id = 505 } 
	date = { year = 1937 month = april day = 7 }
	}

division_development = {
	name = "Z-4 Max Schultz"
    type = d_09 
    model = 4
	cost = 0.04 #0.4
	new_model = no unitcost = yes
        id = { type = 14500 id = 506 } 
	date = { year = 1937 month = may day = 12 }
	}

division_development = {
	name = "Z-5 Paul Jacobi"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 507 } 
	date = { year = 1937 month = june day = 28 }
	}

division_development = {
	name = "Z-6 Theodor Riedel"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 508 } 
	date = { year = 1937 month = july day = 0 }
	}

division_development = {
	name = "Z-7 Hermann Schoemann"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 509 } 
	date = { year = 1937 month = september day = 8 }
	}

division_development = {
	name = "Z-8 Bruno Heinemann"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 510 } 
	date = { year = 1938 month = january day = 7 }
	}

division_development = {
	name = "Z-9 Wolfgang Zenker"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 511 } 
	date = { year = 1938 month = july day = 0 }
	}

division_development = {
	name = "Z-10 Hans Lody"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 512 } 
	date = { year = 1938 month = september day = 12 }
	}

division_development = {
	name = "Z-11 Bernd von Arnim"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 513 } 
	date = { year = 1938 month = december day = 5 }
	}

division_development = {
	name = "Z-12 Erich Giese"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 514 } 
	date = { year = 1939 month = march day = 3 }
	}

division_development = {
	name = "Z-13 Erich Koellner"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 515 } 
	date = { year = 1939 month = august day = 27 }
	}

division_development = {
	name = "Z-14 Friedrich Ihn"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 516 } 
	date = { year = 1938 month = april day = 5 }
	}

division_development = {
	name = "Z-15 Erich Steinbrink"
    type = d_09 
    model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 517 } 
	date = { year = 1938 month = may day = 29 }
	}

division_development = {
	name = "Z-16 Friedrich Eckoldt"
        type = d_09 
        model = 4 
	cost = 0.06 #0.6
	new_model = no unitcost = yes
        id = { type = 14500 id = 518 } 
	date = { year = 1938 month = july day = 27 }
	}

division_development = {
	name = "U-18"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 564 }
	date = { year = 1936 month = January day = 3 }
	}

division_development = {
	name = "U-19"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 565 }
	date = { year = 1936 month = january day = 15 }
	}

division_development = {
	name = "U-14"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 566 }
	date = { year = 1936 month = january day = 17 }
	}

division_development = {
	name = "U-20"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 567 }
	date = { year = 1936 month = february day = 0 }
	}

division_development = {
	name = "U-15"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 568 }
	date = { year = 1936 month = march day = 6 }
	}

division_development = {
	name = "U-16"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 569 }
	date = { year = 1936 month = may day = 15 }
	}

division_development = {
	name = "U-33"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 570 }
	date = { year = 1936 month = july day = 26 }
	}

division_development = {
	name = "U-21"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 519 }
	date = { year = 1936 month = august day = 2 }
	}

division_development = {
	name = "U-27"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 520 }
	date = { year = 1936 month = august day = 11 }
	}

division_development = {
	name = "U-22"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 521 }
	date = { year = 1936 month = august day = 19 }
	}

division_development = {
	name = "U-28"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 522 }
	date = { year = 1936 month = september day = 11 }
	}

division_development = {
	name = "U-34"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 523 }
	date = { year = 1936 month = september day = 11 }
	}

division_development = {
	name = "U-23"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 524 }
	date = { year = 1936 month = september day = 23 }
	}

division_development = {
	name = "U-24"
	type = nuclear_submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 525 }
	date = { year = 1936 month = october day = 7 }
	}

division_development = {
	name = "U-30"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 526 }
	date = { year = 1936 month = october day = 7 }
	}

division_development = {
	name = "U-35"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 527 }
	date = { year = 1936 month = november day = 2 }
	}

division_development = {
	name = "U-29"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 528 }
	date = { year = 1936 month = november day = 15 }
	}

division_development = {
	name = "U-36"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 529 }
	date = { year = 1936 month = december day = 15 }
	}

division_development = {
	name = "U-31"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 530 }
	date = { year = 1936 month = december day = 27 }
	}

division_development = {
	name = "U-32"
	type = submarine
	model = 2
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 531 }
	date = { year = 1937 month = april day = 4 }
	}
	
division_development = {
	name = "U-25"
	type = submarine
	model = 1
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 571 }
	date = { year = 1936 month = april day = 6 }
	}

division_development = {
	name = "U-26"
	type = submarine
	model = 1
	cost = 0.04 #0.4
	new_model = no unitcost = yes
	id = { type = 14500 id = 534 }
	date = { year = 1936 month = may day = 11 }
	}

	convoy = {
        id = { type = 14500 id = 532 }
        transports = 10
        escorts = 4
        rare_materials = no
        energy = no
        metal = no
        oil = yes
        supplies = yes
        path = { 301 2477 2476 304 }
  }

} # End File