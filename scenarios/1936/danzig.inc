 
 ################################################## 
 # Country definition for U04 Free City of Danzig # 
 ##################################################
  
 ##################### 
 # Country main data # 
 ##################### 
 province = 
 {  id         = 181 
   anti_air   = 2 
   naval_base = {  size =  6 current_size =  6  } 
   air_base   = {  size =  4 current_size =  4  } 
  }              # Danzig 
  
 country = 
 {  tag                    = U04 
	puppet = POL
	regular_id = GER
   capital                = 181 
     # Resource Reserves 
   energy                 = 100 
   metal                  = 100 
   rare_materials         = 50 
   oil                    = 50 
   supplies               = 100 
   money                  = 50 
   manpower               = 0
      
   transports             = 10 
   escorts                = 0  
   diplomacy = 
   {   
   relation = {  tag = GER value = 80 access = no }  
   relation = {  tag = POL value = 80 }
   relation = {  tag = ENG value = 80 }
   relation = {  tag = FRA value = 80 }   
    } 
   SpyInfo                = {  country = "U06" NumberOfSpies = 3  } 
  
    
   nationalprovinces      = {  181  } 
   ownedprovinces         = {  181  } 
   controlledprovinces    = {  181  } 
   
	#inventions = { 2700061 2700062 2700063 2700064 2700065 2700066 2700067 2700000 } # Danzig shall build garrisons only => other units are never to be allowed
   
  # U04 1936 techs 
   # ###################### 
   techapps               = { 
#
#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
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
3010 3020 # Prewar Escort, DD 
3700 # SS 1936
3800 # Prewar TP

2310
} 
 #inventions = { }  
   ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 3 
     free_market       = 8 
     freedom           = 10 
     professional_army = 1 
     defense_lobby     = 3 
     interventionism   = 2 
    } 
  
   headofstate            = {  type = 9 id = 845001  } 
   headofgovernment       = {  type = 9 id = 845002  } 
   foreignminister        = {  type = 9 id = 845003  } 
   armamentminister       = {  type = 9 id = 845004  } 
   ministerofsecurity     = {  type = 9 id = 845005  } 
   ministerofintelligence = {  type = 9 id = 845006  } 
   chiefofstaff           = {  type = 9 id = 845007  } 
   chiefofarmy            = {  type = 9 id = 845008  } 
   chiefofnavy            = {  type = 9 id = 845009  } 
   chiefofair             = {  type = 9 id = 845010  } 
   
   landdivision = { dormant = yes id = { type = 14500 id = 410000 }  name = "Heimwehr Danzig"   type = garrison model = 1 max_strength = 20 strength = 20 }
   
  }