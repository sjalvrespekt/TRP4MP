 ############################## 
 # Country definition for U03 # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 

province = { id = 1247 air_base = { size = 3 current_size = 3 }} #Beijing
 
 country = 
 { 
	tag                    = U03
	regular_id             = CHI
	puppet                 = U00
	
	energy                 = 5
	metal                  = 5
	rare_materials         = 5
	oil                    = 5
	supplies               = 100 
	money                  = 5
	manpower               = 1
	dissent                = 0
	
	capital                = 1247 # Beijing
	
	transports = 10

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 5
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 3
		defense_lobby = 8
		interventionism = 8
    }
	
   headofstate            = {  type = 9 id = 1185001  } 
   headofgovernment       = {  type = 9 id = 1185002  } 
   foreignminister        = {  type = 9 id = 1185003  } 
   armamentminister       = {  type = 9 id = 1185004 } 
   ministerofsecurity     = {  type = 9 id = 1185005 } 
   ministerofintelligence = {  type = 9 id = 1185006 } 
   chiefofstaff           = {  type = 9 id = 1185007 } 
   chiefofarmy            = {  type = 9 id = 1185008 } 	

   nationalprovinces      = { 1247 1241 1245 } 
   ownedprovinces         = { 1247 1241 1245 } 
   controlledprovinces    = { 1247 1241 1245 }
   
   diplomacy = 
				{  
					relation = {  tag = CHI value = 50 } 
					relation = {  tag = CGX value = 50  } 
					relation = {  tag = CXB value = 50  } 
					relation = {  tag = CYN value = 50  } 
					relation = {  tag = JAP value = 70 }
					relation = {  tag = U00 value = 70 }
					relation = {  tag = CHC value = -75  } 
				} 
   SpyInfo = {  country = "U03" NumberOfSpies = 2  }    
   
	
   allowed_divisions = { 
							militia = yes 
							garrison = yes 
						} 
						
	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930


2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}
	
deactivate = { }

 landunit = {
	id = { type = 11854 id = 1 }
	name = "East Hebei Army" #
	location = 1247 	    
	    division = { id = { type = 11854 id = 2 } name = "1st Corps 'Tungchow'" type = militia model = 0 strength = 50 } 
		division = { id = { type = 11854 id = 3 } name = "2nd Corps 'Tsunhua'" type = militia model = 0 strength = 50 } 
		division = { id = { type = 11854 id = 4 } name = "3rd Corps 'Tungchow'" type = militia model = 0 strength = 50 } 
		division = { id = { type = 11854 id = 5 } name = "4th Corps 'Tsunhua'" type = militia model = 0 strength = 50 } 
		division = { id = { type = 11854 id = 6 } name = "Training Corps 'Tungchow'" type = militia model = 0 strength = 25 } 
	}	
}
  
 