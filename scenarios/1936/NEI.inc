#conversion DH, Feb 11 2011, Kane

province = { id = 1641 anti_air = 2 naval_base = { size = 7 current_size = 7 } air_base = { size = 4 current_size = 4 }}#Oosthaven
province = { id = 1647 anti_air = 2 naval_base = { size = 10 current_size = 10 } air_base = { size = 4 current_size = 4 }}#Batavia
province = { id = 1659 anti_air = 2 naval_base = { size = 3 current_size = 3 } air_base = { size = 2 current_size = 2 }}#Manado
province = { id = 1653 anti_air = 2 naval_base = { size = 10 current_size = 10 } air_base = { size = 2 current_size = 2 }}#Soerabaja
province = {  id = 1647 oilpool = 100 supplypool = 500 } # Batavia

country = {
    tag = U19
    
    #puppet = HOL
    control = HOL

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        free_market = 9
        freedom = 10
        professional_army = 5
        defense_lobby = 5
        interventionism = 6
    }
    allowed_divisions = { 
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
		
	capital = 1647
	manpower = 20

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money	=	40

	
    ownedprovinces =      
{
	### Sumatra
	1639 #Bangka=>Bangka Island 
	1642 #Medan
	1640 #Koeta-Radja=>Medan(split)
	1635 #Djambi=>Dumai
	1634 #Pakan Baharoe=>Dumai(split) 
	1637 #Padang 
	1636 #Palembang 
	1641 #Oosthaven
	1638 #Bengkulu=>Oosthaven(split) 	

	### Java
	1647 #Batavia
	1648 #Tjilegon
	1646 #Tjilatjap
	1651 #Bandoeng=>Tjilatjap(split)
	1650 #Semarang
	1649 #Tjirebon=>Semarang
	1654 #Jogjakarta 
	1653 #Soerabaja
	1652 #Rembang=>Soerabaja(split) 
	1655 #Malang 
	1656 #Madura 

	### Flores
	1643 #Bali
	1645 #Waingapoe=>Sumba
	1615 #Flores
	1616 #Koepang=>West Timor
	1619 #Yamdena=>Flores(split)
	1644 #Sumbawa

	### Molukken
	1657 #Makassar 
	1658 #Kendari
	1660 #Paloe 
	1659 #Manado=>Menado
	1620 #Halmahera
	1621 #Buru
	1622 #Ceram

	### Neu Guinea
	1599 #Manoekwari=>Sorong
	1600 #Fak-Fak=>Babo
	1601 #Wakia=>Kokonau
	1618 #Aru=>Biak Islands
	1598 #Birab=>Agats
	1597 #Merauke
	1596 #Hollandia
	1594 #Wamena=>Sarmi
	1595 #Ansoes

	### Borneo
	1633 #Bandjarmasin 
	1631 #Poentianak
	1628 #Bakon=>Semitau 
	1623 #Longmerah=>Mahakam 
	1627 #Tarakan/Samarinda
	1632 #Balikpapan 
	1629 #Singkawang=>Poentianak(split)
	1630 #Sampit=>Poentianak(split)

}
    controlledprovinces = 
{
	### Sumatra
	1639 #Bangka=>Bangka Island 
	1642 #Medan
	1640 #Koeta-Radja=>Medan(split)
	1635 #Djambi=>Dumai
	1634 #Pakan Baharoe=>Dumai(split) 
	1637 #Padang 
	1636 #Palembang 
	1641 #Oosthaven
	1638 #Bengkulu=>Oosthaven(split) 	

	### Java
	1647 #Batavia
	1648 #Tjilegon
	1646 #Tjilatjap
	1651 #Bandoeng=>Tjilatjap(split)
	1650 #Semarang
	1649 #Tjirebon=>Semarang
	1654 #Jogjakarta 
	1653 #Soerabaja
	1652 #Rembang=>Soerabaja(split) 
	1655 #Malang 
	1656 #Madura 

	### Flores
	1643 #Bali
	1645 #Waingapoe=>Sumba
	1615 #Flores
	1616 #Koepang=>West Timor
	1619 #Yamdena=>Flores(split)
	1644 #Sumbawa

	### Molukken
	1657 #Makassar 
	1658 #Kendari
	1660 #Paloe 
	1659 #Manado=>Menado
	1620 #Halmahera
	1621 #Buru
	1622 #Ceram

	### Neu Guinea
	1599 #Manoekwari=>Sorong
	1600 #Fak-Fak=>Babo
	1601 #Wakia=>Kokonau
	1618 #Aru=>Biak Islands
	1598 #Birab=>Agats
	1597 #Merauke
	1596 #Hollandia
	1594 #Wamena=>Sarmi
	1595 #Ansoes

	### Borneo
	1633 #Bandjarmasin 
	1631 #Poentianak
	1628 #Bakon=>Semitau 
	1623 #Longmerah=>Mahakam 
	1627 #Tarakan/Samarinda
	1632 #Balikpapan 
	1629 #Singkawang=>Poentianak(split)
	1630 #Sampit=>Poentianak(split)
}
    nationalprovinces =   
{
	### Sumatra
	1639 #Bangka=>Bangka Island 
	1642 #Medan
	1640 #Koeta-Radja=>Medan(split)
	1635 #Djambi=>Dumai
	1634 #Pakan Baharoe=>Dumai(split) 
	1637 #Padang 
	1636 #Palembang 
	1641 #Oosthaven
	1638 #Bengkulu=>Oosthaven(split) 	

	### Java
	1647 #Batavia
	1648 #Tjilegon
	1646 #Tjilatjap
	1651 #Bandoeng=>Tjilatjap(split)
	1650 #Semarang
	1649 #Tjirebon=>Semarang
	1654 #Jogjakarta 
	1653 #Soerabaja
	1652 #Rembang=>Soerabaja(split) 
	1655 #Malang 
	1656 #Madura 

	### Flores
	1643 #Bali
	1645 #Waingapoe=>Sumba
	1615 #Flores
	1616 #Koepang=>West Timor
	1619 #Yamdena=>Flores(split)
	1644 #Sumbawa

	### Molukken
	1657 #Makassar 
	1658 #Kendari
	1660 #Paloe 
	1659 #Manado=>Menado
	1620 #Halmahera
	1621 #Buru
	1622 #Ceram

	### Neu Guinea
	1599 #Manoekwari=>Sorong
	1600 #Fak-Fak=>Babo
	1601 #Wakia=>Kokonau
	1618 #Aru=>Biak Islands
	1598 #Birab=>Agats
	1597 #Merauke
	1596 #Hollandia
	1594 #Wamena=>Sarmi
	1595 #Ansoes

	### Borneo
	1633 #Bandjarmasin 
	1631 #Poentianak
	1628 #Bakon=>Semitau 
	1623 #Longmerah=>Mahakam 
	1627 #Tarakan/Samarinda
	1632 #Balikpapan 
	1629 #Singkawang=>Poentianak(split)
	1630 #Sampit=>Poentianak(split)
}

diplomacy = {
relation = { tag = HOL value = 150 }
relation = { tag = BEL value = 150 }
relation = { tag = CAN value = 80 }
relation = { tag = DEN value = 100 }
relation = { tag = ENG value = 125 }
relation = { tag = FIN value = 100 }
relation = { tag = FRA value = 75 }
relation = { tag = GER value = 0 }
relation = { tag = IRE value = 75 }
relation = { tag = ITA value = -20 }
relation = { tag = JAP value = -50 }
relation = { tag = LUX value = 150 }
relation = { tag = MEX value = 25 }
relation = { tag = NOR value = 100 }
relation = { tag = SWE value = 100 }
relation = { tag = USA value = 70 }
}
  SpyInfo                = { country = "U19" NumberOfSpies = 4 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

5010 # Agriculture 
5080 5090  # Construction
5190 5200 # Imp. oil conversion
5470 # Nukes faculty

1190 # GW Cavalry

1010 1110 # Infantry Division

6400 6410 # Light Inf

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010 3020 3030 # Prewar Escort, DD and CL
3040 3050 3060 # Escort 1935, DD and CL 1936
3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA up to 1914
3370 3400 # BB up to Dreadnought
3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
3800 # Prewar TP

	}

	transports = 250
	escorts = 12

landunit = {
	id = { type = 18500 id = 213 }
	location = 1647 #batavia
	name = "1de Militaire Afdeling"
		division = { id = { type = 18500 id = 214 } name = "Ie Divisie"	type = d_02 model = 0 strength  = 65 extra = light_armor_brigade }
	}

landunit = {
	id = { type = 18500 id = 225 }
	location = 1643 #Bali
	name = "3de Militaire Afdeling"
		division = { id = { type = 18500 id = 215 } name = "IIIe Divisie" type = d_02 model = 0 strength  = 75 }
	}

landunit = {
	id = { type = 18500 id = 231 }
	location = 1653 #Soerabaja
	name = "Veiligheitsbezetting Soerabaja"
		division = { id = { type = 18500 id = 232 } name = "VBS" type = garrison model = 0 strength  = 25 }
	}
	
landunit = {
	id = { type = 18500 id = 216 }
	location = 1646 #Tjilatjap
	name = "2de Militaire Afdeling"
		division = { id = { type = 18500 id = 217 } name = "IIe Divisie"       type = d_02    model = 0 strength  = 75 }
		division = { id = { type = 18500 id = 230 } name = "Tjilatjap Brigade" type = militia model = 0 strength  = 70 }
	}
	
navalunit = {
	id = { type = 18500 id = 218 }
	location = 1653 #Soerebaja
	base = 1653
	name = "Onderzeese Vloot"	
		division = { id = { type = 18500 id = 229 } name = "HrMs K II" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 227 } name = "HrMs K V" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 228 } name = "HrMs K VI" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 219 } name = "HrMs K VII" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 221 } name = "HrMs K VIII" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 220 } name = "HrMs K IX" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 226 } name = "HrMs K X" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 222 } name = "HrMs K XI" type = nuclear_submarine model = 2 }	
		division = { id = { type = 18500 id = 223 } name = "HrMs K XII" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 224 } name = "HrMs K XIII" type = nuclear_submarine model = 2 }
	}
	
} # End File
