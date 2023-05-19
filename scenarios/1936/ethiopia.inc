#converted to DH, 2011, March 4th, Kane
  country = {
	tag = ETH

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        free_market = 7
        freedom = 3
        professional_army = 5
        defense_lobby = 8
        interventionism = 2
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }
	
	#ground_def_eff = 0.5

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money = 10

	capital = 825 #Addis Abeba
	manpower = 20
	
   nationalprovinces      = 
{  
	820 #Dessie
	819 #Tendaho=>Denakil
	821 #Adigrat=>Adwa
	822 #Debre Marcos
	823 #Gonder
	818 #Dire Dawa
	829 #Jimma
	825 #Addis Abeba
	830 #Arba Minch=>Jima(split)
	826 #Goba
	831 #Awasa
	828 #Harer
	827 #Gode
	815 #Massawa
	816 #Assab
	817 #Asmara
	824 #Asosa=>Gambala
} 
   ownedprovinces         = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 
   controlledprovinces    = {  820 819 821 822 823 818 829 825 830 826 831 828 827 824  } 

diplomacy = {
relation = { tag = ENG value = 50 }
relation = { tag = FRA value = 25 }
relation = { tag = IRE value = 100 }
relation = { tag = ITA value = -200 }
relation = { tag = JAP value = 35 }
}
  SpyInfo                = { country = "ETH" NumberOfSpies = 3 }
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

# 4010 # GW fighter

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 # Guerilla Infantry Division

6500 6510 # Guerilla Warfare

2510 # basic AA brigade
	}

###################army

landunit = {
	id = { type = 31000 id = 1 }
	location = 825 #Addis Abeba
	name = "Northern Front"
		division = { id = { type = 31000 id = 2 } name = "Imperial Bodyguard"  type = militia model = 0 strength = 10 }
		division = { id = { type = 31000 id = 3 } name = "Welega-Ardjo Sefari" type = d_02    model = 0 extra = anti_air }
	}
	
landunit = {
	id = { type = 31000 id = 4 }
	location = 822 #Debre Marcos
	name = "Army of the Left"
		division = { id = { type = 31000 id = 5 } name = "Gojjam Sefari"         type = d_02        model = 0 }
		division = { id = { type = 31000 id = 6 } name = "Wolqayt/Semien Sefari" type = bergsjaeger model = 0 }
	}
	
landunit = {
	id = { type = 31000 id = 7 }
	location = 831 #Awasa
	name = "Army of the Center"
		division = { id = { type = 31000 id = 8 }  name = "Amino Sefari"    type = militia model = 0 }
		division = { id = { type = 31000 id = 9 }  name = "Gubba Sefari"    type = militia model = 0 }
		division = { id = { type = 31000 id = 10 } name = "Gurage Sefari"   type = militia model = 0 }
		division = { id = { type = 31000 id = 11 } name = "Jimma Sefari"    type = militia model = 0 }
		division = { id = { type = 31000 id = 12 } name = "Mui Sefari"      type = militia model = 0 }
		division = { id = { type = 31000 id = 13 } name = "Om Hajer Sefari" type = militia model = 0 }
		division = { id = { type = 31000 id = 14 } name = "Sela Sefari"     type = militia model = 0 }
		division = { id = { type = 31000 id = 15 } name = "Sodo Sefari"     type = militia model = 0 }
		division = { id = { type = 31000 id = 16 } name = "Welega Sefari"   type = militia model = 0 }
	}
	
landunit = {
	id = { type = 31000 id = 17 }
	location = 823 #Gonder
	name = "Army of the Right"
		division = { id = { type = 31000 id = 18 } name = "Begemder Sefari"     type = infantry model = 0 }
		division = { id = { type = 31000 id = 19 } name = "Tigray Sefari"       type = d_02     model = 0 }
		division = { id = { type = 31000 id = 20 } name = "Wag Sefari"          type = d_02     model = 0 }
		division = { id = { type = 31000 id = 21 } name = "Lasta Sefari"        type = militia  model = 0 }
		division = { id = { type = 31000 id = 22 } name = "Yejju Sefari"        type = militia  model = 0 }
	}		

landunit = {
	id = { type = 31000 id = 23 }
	location = 827 #Gode
	name = "Southern Front"
		division = { id = { type = 31000 id = 24 } name = "Illubabor Sefari" type = d_02    model = 0 }
		division = { id = { type = 31000 id = 25 } name = "Ogaden Sefari"    type = militia model = 0 }
		division = { id = { type = 31000 id = 26 } name = "Gemu Gofa Sefari" type = militia model = 0 }
		division = { id = { type = 31000 id = 27 } name = "Arusi Sefari"     type = militia model = 0 }
		division = { id = { type = 31000 id = 28 } name = "Kula Sefari"      type = militia model = 0 }
		division = { id = { type = 31000 id = 29 } name = "Bale Sefari"      type = militia model = 0 }
		division = { id = { type = 31000 id = 30 } name = "Sidamo Sefari"    type = d_02    model = 0 extra = anti_air }
	}

} # End File

