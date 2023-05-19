# geändert Zergel, 09.11.2010, Anpassung Province ID an DH

 ##################### 
 # Country main data # 
 ##################### 

country = 
{
	tag = AFG
	
	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
	date = { year = 0 month = january day = 0 }
        democratic = 2
        political_left = 3
        free_market = 7
        freedom = 6
        professional_army = 2
        defense_lobby = 4
        interventionism = 1
	}
allowed_divisions = 
{ 
        militia = yes 
        cavalry = yes 
        bergsjaeger = yes
} 

	#inventions = { 2700061 2700063 2700065 }

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	manpower = 20
	capital = 	2171

	
    ownedprovinces =      
{
 	2171 #Kabul
 	2169 #Kandahar
 	2172 #Herat 
 	2168 #Kondoz->Kabul
 	2170 #Jalalabad->Kabul
 	2173 #Wahkan->Feyzabad
}
    controlledprovinces = 
{
 	2171 #Kabul
 	2169 #Kandahar
 	2172 #Herat 
 	2168 #Kondoz->Kabul
 	2170 #Jalalabad->Kabul
 	2173 #Wahkan->Feyzabad
}
    nationalprovinces =   
{
 	2171 #Kabul
 	2169 #Kandahar
 	2172 #Herat 
 	2168 #Kondoz->Kabul
 	2170 #Jalalabad->Kabul
 	2173 #Wahkan->Feyzabad
}

diplomacy = 
{
relation = { tag = ENG value = -75 }
relation = { tag = ITA value = 50 }
relation = { tag = PER value = 25 }
relation = { tag = SAU value = 50 }
relation = { tag = SOV value = 0 }
relation = { tag = TUR value = 50 }
}
SpyInfo                = { country = "AFG" NumberOfSpies = 5 }

	# ROTW Minor Tech '36

	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################


2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare
	}

###################
# AFGHANISTAN OOB #
###################

landunit = {
	id = { type = 10000 id = 3000 }
	location = 2171
	name = "Royal Afghan Army"
		division = { id = { type = 10000 id = 3001 } name = "Royal Guard Division"   strength = 100 type = militia model = 0 }
		division = { id = { type = 10000 id = 3002 } name = "Faizabad Division"      strength = 100 type = militia model = 0 }
		division = { id = { type = 10000 id = 3003 } name = "Ghazni Division"        strength = 100 type = militia model = 0 }
		division = { id = { type = 10000 id = 3010 } name = "Mazare-Sherif Division" strength = 100 type = militia model = 0 }
	    division = { id = { type = 10000 id = 3006 } name = "Royal Cavalry"          strength = 10  type = cavalry model = 0 }
	}

landunit = {
 id = { type = 10000 id = 3004 }
 location = 2171
 name = "Herat Army"
		division = { id = { type = 10000 id = 3005 } name = "Herat Division"         strength = 100 type = militia model = 0 }
	}

landunit = {
 id = { type = 10000 id = 3007 }
 location = 2169 
 name = "Kandahar Army"
		division = { id = { type = 10000 id = 3008 } name = "Jalalabad Division"     strength = 100 type = militia model = 0 }
		division = { id = { type = 10000 id = 3009 } name = "Kandahar Division"      strength = 100 type = militia model = 0 }
	}

} # End File
