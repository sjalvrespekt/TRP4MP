# Auf DH konvertiert, Rommel, 23.01.2011 
 ############################## 
 # Country definition for AUS # 
 ############################## 
  
 province = 
 {  id = 189 
    anti_air = 2 
    air_base = { size = 4 current_size = 4 } 
  }            # Innsbruck 
 province = 
 {  id = 191 
    anti_air = 1  
  }            # Klagenfurt 
  
 province = 
 {  id       = 195 
    anti_air = 4 
    air_base = { size = 10 current_size = 10 } 
  }            # Vienna 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag = AUS 
   # HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex. 
   # Unwanted side-effect: Will never accept peace with Germany. 
   regular_id   = GER 
   intrinsic_gov_type     = social_liberal 
   capital                = 195 
   
   # Resource Reserves    
   energy                 = 1140
   metal                  = 570
   rare_materials         = 285
   oil                    = 500 
   supplies               = 500 
   money                  = 10 
   manpower               = 10
   escorts = 1 # river gunboat
      
   diplomacy = 
   { 
    relation = { tag = ENG value = 75 }
	relation = { tag = FIN value = 55 }
	relation = { tag = FRA value = -10 }
	relation = { tag = GER value = 100 }
	relation = { tag = HUN value = 100 guaranteed = { day = 17 month = march year = 1934 } }
	relation = { tag = IRE value = 10 }
	relation = { tag = ITA value = 125 }
	relation = { tag = SCH value = 50 }
   } 
   
   SpyInfo                = {  country = "AUS" NumberOfSpies = 6  } 
   
   nationalprovinces      = 
{	189 # Innsbruck 
	190 # Graz 
	191 # Klagenfurt
	192 # Salzburg
	195 # Wien
	194 # Hollabrun 
	186 # Freistadt
	187 # Linz
	193 # Sankt Poelten
	188 # Eisenstadt
	402 # Bolzano 
} 
   ownedprovinces         = 
{	189 # Innsbruck 
	190 # Graz 
	191 # Klagenfurt
	192 # Salzburg
	195 # Wien
	194 # Hollabrun 
	186 # Freistadt
	187 # Linz
	193 # Sankt Poelten
	188 # Eisenstadt
} 
   controlledprovinces    = 
{	189 # Innsbruck 
	190 # Graz 
	191 # Klagenfurt
	192 # Salzburg
	195 # Wien
	194 # Hollabrun 
	186 # Freistadt
	187 # Linz
	193 # Sankt Poelten
	188 # Eisenstadt
}  
   
   ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 1 
     free_market       = 8 
     freedom           = 7 
     professional_army = 5 
     defense_lobby     = 5 
     interventionism   = 5
    } 
	
 ##################### 
 # technology   data # 
 #####################
 
   techapps = {  
                4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
				 
                4050 # Single Engined 1936

                4290 4300 4310 # double Engined 1929, tactical, naval
				
                4330 # double Enginged 1396

                2800 # Basic Armoured Car

                2550 # Tanks

                2290 2300 # GW artillery

                2450 2460 # Early Static AA

                2510 # Basic AA

                1010 # GW infantry

                1190 # GW Cavalry

                1110 # Early Mountain
                
				1310 # Engineers

                5010 # Agriculture 
                
				5080 5090 # Construction (up to the forts)
                
				5190 # Basic Oil Refining

                6100 6110 6120 # Trench Warfare doctrine (land)
				
				10110 # motorized Inf 1937
				
				9010 9020 9030 # Aerial warfare, basic doctrines
				
				#Naval Techs; Escorts up to WW1
				3010	3040
				3020	3050
				3030 15250
				
				3350 3390 3430 # Capital Design up to 1914
				3360 # Coastal BB (CA 0)
				3370 # AC (BC 0)
				3380 3410 3420 # BB up to 1914

				3700 # Prewar SS
				3800 # Prewar TP

} 
blueprints = { 11750 } #MechInf 37'
	
 ##################### 
 # army data         # 
 #####################	
	
   landunit = 
   {  id       = {  type = 14000 id = 9000  } 
     location = 195 #Wien
     name     = "I. Korps" 
     Division = { id = { type = 14000 id = 1706 } name = "Generalstab des Bundesheeres"   type = hq         model = 0 strength = 80 } 
     Division = { id = { type = 14000 id = 9001 } name = "Schnelle Division"              type = mechanized model = 0 strength = 50 } #were used to for the 4. leichte Division of the Wehrmacht
     Division = { id = { type = 14000 id = 9002 } name = "1. Division 'Burgenland'"       type = d_02       model = 0 strength = 60 extra = artillery brigade_model = 0 } 
     Division = { id = { type = 14000 id = 9003 } name = "2. Division 'Wien'"             type = d_02       model = 0 strength = 60 extra = artillery brigade_model = 0 } 
     Division = { id = { type = 14000 id = 9004 } name = "3. Division 'Niederösterreich'" type = d_02       model = 0 strength = 60 extra = artillery brigade_model = 0 } 
    } 
	
   landunit = 
   {  id       = {  type = 14000 id = 9005  } 
     location = 187 #Linz
     name     = "II. Korps" 
     Division = { id = { type = 14000 id = 9006 } name = "4. Division 'Oberösterreich'" type = d_02 strength = 60 model = 0 extra = artillery brigade_model = 0 } 
	 } 
	 
   landunit = 
   {  id       = {  type = 14000 id = 9007  } 
     location = 190 #Graz
     name     = "III. Korps" 
     Division = { id = { type = 14000 id = 9009 } name = "5. Division 'Steiermark'" type = bergsjaeger strength = 50 model = 0 extra = artillery brigade_model = 0 } 
    } 
	
   landunit = 
   {  id       = {  type = 14000 id = 9008  } 
     location = 189 #Innsbruck
     name     = "IV. Korps" 
     Division = { id = { type = 14000 id = 9011 } name = "6. Division 'Kärnten'"    type = bergsjaeger strength = 50 model = 0  extra = artillery brigade_model = 0 } 
    } 
	
   landunit = 
   {  id       = {  type = 14000 id = 9012  } 
     location = 191 #Klagenfurt
     name     = "V. Korps" 
     Division = { id = { type = 14000 id = 9013 } name = "7. Division"              type = bergsjaeger strength = 50 model = 0 extra = engineer brigade_model = 0 } 
    } 
	
   landunit = 
   {  id       = {  type = 14000 id = 9020  } 
     location = 192 # Salzburg
     name     = "8. Brigade" 
     Division = { id = { type = 14000 id = 9021 } name = "8. Brigade" type = d_02 model = 0 strength = 30 } 
    } 
	
	# Luftwaffe österreichisches Bundesheer #
	airunit = { 
	location = 195 #Wien 
	id = { type = 14000 id = 9014 } 
	name = "I./Fliegerregiment Nr. 1"
	base = 195
		division = { id = { type = 14000 id = 9015 } name = "1./ 2. Bomberstaffel"   type = tactical_bomber model = 0 extra = escort brigade_model = 0 strength = 30 }
	}
	
	airunit = { 
	location = 195 #Wien 
	id = { type = 14000 id = 9016 } 
	name = "II./Fliegerregiment Nr. 1"
	base = 195	
		division = { id = { type = 14000 id = 9017 } name = "1./2./3. Jagdstaffel"   type = interceptor model = 0 strength = 30 }
	}
	
	airunit = { 
	location = 195 #Wien 
	id = { type = 14000 id = 9018 } 
	name = "Fliegerregiment Nr. 2"
	base = 195	
		division = { id = { type = 14000 id = 9019 } name = "4./5./6. Jagdstaffel"   type = interceptor model = 0 strength = 30 }
	}
  } 
 