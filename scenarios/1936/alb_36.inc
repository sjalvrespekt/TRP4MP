 ############################## 
 # Country definition for ALB # 
 ############################## 
  
 province = 
 {
  id         = 359 
  anti_air   = 1 
  air_base   = { size =  2 current_size =  2 }             
 }             # Tirana
 
 province = 
 {
  id         = 362 
  anti_air   = 1 
  naval_base = { size =  6 current_size =  6 } 
 }             # Valona/Vlore 
 
  
 ##################### 
 # Country main data # 
 ##################### 
  
country =  
{ 
	tag = ALB 
        manpower               = 20

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = { 
	date              = { year = 0 month = january day = 0 } 
     	democratic        = 3 
     	political_left    = 4 
     	free_market       = 7 
     	freedom           = 5 
     	professional_army = 5 
     	defense_lobby     = 4 
     	interventionism   = 1 
   	} 
allowed_divisions = 
{ 
       	militia = yes 
		cavalry = yes
} 

   	# Resource Reserves 
   	energy                 = 1000
   	metal                  = 1000
   	rare_materials         = 500
   	oil                    = 500 
   	supplies               = 500 
   	money                  = 10 
   	
	transports = 10
	escorts = 6
	
   	capital                = 359 

   nationalprovinces      = 
{  	359 #Tirane
	362 #Vlore
	361 #Shkoder
	360 #Korce
	329 #Pristina
	334 #Tetovo
} 
   ownedprovinces         = 
{  	359 #Tirane
	362 #Vlore
	361 #Shkoder
	360 #Korce
} 
   controlledprovinces    = 
{  	359 #Tirane
	362 #Vlore
	361 #Shkoder
	360 #Korce
} 
   
   diplomacy = 
   {  
      relation = { tag = ITA value = 100 } 
   }

SpyInfo = { country = "ALB" NumberOfSpies = 3 } 
      
 ####################### 
 # technologie for ALB # 
 #######################
   
 
   
   techapps = {  
               4010 # Single Engined 1929
			   
			   9010 9030 # Aerial warfare, basic doctrines for inland nations

               2800 # Basic Armoured Car

               2290 2300 # GW artillery

               1190 # GW Cavalry

               1400 1460 # Guerilla Infantry Division

               6500 # Guerilla Warfare

               2450 2460 # Early Static AA

               2510 # Basic AA

               5080 #Basic Construction Engineering
			   
			   3010 # Escorts prewar
			  }

}  

   
   
 