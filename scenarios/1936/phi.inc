# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = { id = 1569 landfort = 1 } #Olongapo=>Bataan
province = { id = 1565 landfort = 1 } #Manila

province = {
	id = 1565
	anti_air = 2
	naval_base = {
		size = 8
		current_size = 8
	}
	air_base = {
		size = 1
		current_size = 1
	}
}
#Clark and Bataan
province = {
	id = 1566 
	anti_air = 4
	air_base = {
		size = 5
		current_size = 5
		}
#	Naval_base = {
#		size = 2
#		current_size = 2
#		}
}


country = {
	tag = PHI

	control = USA
	puppet = USA
	# Resource Reserves
	energy	=	200   metal	=	200	rare_materials =	200	oil =	200	supplies =	500
	money = 10
	manpower = 5
	transports = 50

	capital = 1565

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
        democratic = 7
        political_left = 6
        freedom = 4
        free_market = 5
        professional_army = 1
        defense_lobby = 3
        interventionism = 1
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }
		
	ownedprovinces =      {
		1567 #Baguio=>Lingay Gulf
 		1570 #Tuguegarao=>Apari
 		1569 #Olongapo=>Bataan
 		1566 #Cabanatuan=>ClarkField
 		1565 #Manila/Lamon Bay
 		1568 #Legazpi=>Legaspi
 		1571 #Mindoro
 		1576 #Panay
 		1575 #Samar
 		1573 #Leyte
 		1574 #Bacolod=>Negros
 		1580 #Zamboanga
 		1578 #Cagayan de Oro=>Cagayan
 		1579 #Dabaw=>Davao
 		1572 #Palawan
 		1577 #Jolo
	}
	controlledprovinces = {
		1567 #Baguio=>Lingay Gulf
		1570 #Tuguegarao=>Apari
		1569 #Olongapo=>Bataan
		1566 #Cabanatuan=>ClarkField
		1565 #Manila/Lamon Bay
		1568 #Legazpi=>Legaspi
		1571 #Mindoro
		1576 #Panay
		1575 #Samar
		1573 #Leyte
		1574 #Bacolod=>Negros
		1580 #Zamboanga
		1578 #Cagayan de Oro=>Cagayan
		1579 #Dabaw=>Davao
		1572 #Palawan
		1577 #Jolo
	}
	nationalprovinces =   {
		1567 #Baguio=>Lingay Gulf
		1570 #Tuguegarao=>Apari
		1569 #Olongapo=>Bataan
		1566 #Cabanatuan=>ClarkField
		1565 #Manila/Lamon Bay
		1568 #Legazpi=>Legaspi
		1571 #Mindoro
		1576 #Panay
		1575 #Samar
		1573 #Leyte
		1574 #Bacolod=>Negros
		1580 #Zamboanga
		1578 #Cagayan de Oro=>Cagayan
		1579 #Dabaw=>Davao
		1572 #Palawan
		1577 #Jolo
	}

diplomacy = {
relation = { tag = AST value = 40 }
# relation = { tag = CHI value = 5 }
relation = { tag = JAP value = 0 }
relation = { tag = LIB value = 200 }
relation = { tag = NZL value = 25 }
relation = { tag = USA value = 200 }
}



  SpyInfo                = { country = "PHI" NumberOfSpies = 1 }

	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2290 # GW light artillery

5080 5090 # Construction 

1190 # GW Cavalry

1010 # Infantry Division

6010 6020 # US firepower doc

3010 #prewar Escorts
	}

landunit = {
	id = { type = 11804 id = 1 }
	location = 1565
	name = "Philippine Commonwealth Army"
		division = { id = { type = 11804 id = 2 } name = "1st Philippine Division" type = d_02     strength = 50 max_strength = 75 }
		division = { id = { type = 11804 id = 3 } name = "2nd Philippine Division" type = d_02     strength = 50 max_strength = 75 }
		division = { id = { type = 11804 id = 4 } name = "Philippine Constabulary" type = garrison strength = 50 }   
	}
	
#########################################################
# amry mobilisation 
#########################################################
### North Luzon Force
landdivision = { dormant = yes id = { type = 11804 id = 10 } name = "11th (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 11 } name = "21st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 12 } name = "31st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
### South Luzon Force
landdivision = { dormant = yes id = { type = 11804 id = 13 } name = "41st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 14 } name = "51st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 15 } name = "71st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
### Visayan-Mindanao Force 
landdivision = { dormant = yes id = { type = 11804 id = 16 } name = "61st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 17 } name = "81st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }
landdivision = { dormant = yes id = { type = 11804 id = 18 } name = "101st (PA) Reserve Division" type = militia model = 1 strength = 65 max_strength = 80 } 
### Reserve
landdivision = { dormant = yes id = { type = 11804 id = 19 } name = "91st (PA) Reserve Division"  type = militia model = 1 strength = 65 max_strength = 80 }

} # End File