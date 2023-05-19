#conversion, Feb 11 2011, Kane
#rearranged unit-ID's, May 1 2011, Kane
province = {
	id = 122 #Amsterdam
	anti_air = 2
	air_base = {
		size = 10
		current_size = 10
		}
	naval_base = {
		size = 3
		current_size = 3
		}
	}

province = {
	id = 125 #Rotterdam
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 1762 #Netherlands Antilles
	naval_base = {
		size = 1
		current_size = 1
		}
	}

province = { id = 118   anti_air = 2 } #Eindhoven

province = { id = 122 landfort = 2 } #Fortress Holland
province = { id = 125 landfort = 1 } #Fortress Holland

country = {
    tag = HOL

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
        cavalry = yes 
		marine = yes
		d_02 = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
		
	capital = 122
	manpower = 124

	# Resource Reserves
	energy	=	1000   
	metal	= 1000		
	rare_materials =	500	
	oil =	500	
	supplies =	500
	money	=	40

	
   nationalprovinces      = 
{  
	125 #Rotterdam
	122 #Amsterdam
	123 #Middelburg=>Rotterdam(split)
	118 #Eindhoven
	119 #Arnheim=>Utrecht/Arnheim(merge)
	124 #Groningen=>Groningen/Leeuwarden(merge)
	120 #Nijmegen=>Eindhoven(split)
	121 #Maastricht=>Eindhoven(split)
} 
   ownedprovinces         = 
{  
	125 #Rotterdam
	122 #Amsterdam
	123 #Middelburg=>Rotterdam(split)
	118 #Eindhoven
	119 #Arnheim=>Utrecht/Arnheim(merge)
	124 #Groningen=>Groningen/Leeuwarden(merge)
	1762 #Netherlands Antilles=>Curacao
	1999 #Paramaribo
	120 #Nijmegen=>Eindhoven(split)
	121 #Maastricht=>Eindhoven(split)
	1761 #Saba
} 

   controlledprovinces    = {  125 122 123 118 119 124 1762 1999 120 121 1761 }
 
	claimedprovinces = {    1594 1595 1596 1597 1598 1599 1600 1601 1615 1616 1618 1619 1620 1621 1622 1623 1627 1628 1629
	                        1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1644 1645 1646 1647 1648 1649
	                        1650 1651 1652 1653 1654 1655 1656 1657 1658 1659 1660 #Netherland East Indies
							1761 1762 1999 #Netherland Antilles + Guyana (Suriname) 

						}

diplomacy = {
relation = { tag = U19 value = 150 }
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
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4050 # Single Engined 1936

4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930
4330 # double Engined 1396

9010 9020 9030 # Aerial warfare, basic doctrines

#############################

2800 # Basic Armoured Car

2550 # GW tank 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 1020 1150 # infantry 36' & Marines

1310 # Early logistics

1190 # GW Cavalry

5010 # Agriculture 
5080 5090  # Construction
5190 5200 # Imp. oil conversion
5470 # Nukes faculty

6100 6110 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8180 8760

#Naval Techs
3010	3040	3070 # Escorts up to Washington
3020	3050	3080 # DD up to Washington
3030 15250	3060	3090 # CL up to Washington

3350 3390 3430 # Capital Design up to 1914
3360 3440 # CA up to 1914
3370 3400 # BB up to Dreadnought
3700 15080 3760 # Prewar SS, SS 1930 & SS 1936
3800 # Prewar TP

	}

	transports = 250
	escorts = 12

#############################################
# Koninklijke Landmacht by Lord Rommel
#############################################
# Dutch army had 48 regiments in 1936. A division had 6 regiments 
# with 10.ooo soldiers. The frist part (24 regiments) were combatready
# the rest could be mobilsed in 3 days. In 1939 the divisional structruce
# was changed to triangular regiment formations. Regiments had 2600 soldiers.
#############################################	
	
landunit = {
	id = { type = 18500 id = 1 }
	location = 122 #Den Haag
	name = "I Legerkorps" #1 & 3 division
		division = { id = { type = 18500 id = 2 } name = "1e Divisie"      type = d_02 model = 1 strength = 40 }
		division = { id = { type = 18500 id = 3 } name = "3e Divisie"      type = d_02 model = 1 strength = 40 }
	}
	
landunit = {
	id = { type = 18500 id = 4 }
	location = 119 #Arnhem
	name = "II Legerkorps" #2 & 4 division
		division = { id = { type = 18500 id = 5 } name = "2e Divisie"      type = d_02 model = 1 strength = 40 }
		division = { id = { type = 18500 id = 6 } name = "4e Divisie"      type = d_02 model = 1 strength = 40 }
	}
		
landunit = {
	id = { type = 18500 id = 7 }
	location = 118 #Breda
	name = "III Legerkorps" #5 & 6 division
		division = { id = { type = 18500 id = 8 } name = "5e Divisie"      type = d_02 model = 0 strength = 20 }
		division = { id = { type = 18500 id = 9 } name = "6e Divisie"      type = d_02 model = 0 strength = 20 }
    }
		
landunit = {
	id = { type = 18500 id = 10 }
	location = 119 #Amersfoort
	name = "IV Legerkorps" #7 & 8 division
		division = { id = { type = 18500 id = 11 } name = "7e Divisie"      type = d_02 model = 0 strength = 20 }
		division = { id = { type = 18500 id = 12 } name = "8e Divisie"      type = d_02 model = 0 strength = 20 }
	}

landunit = {
	id = { type = 18500 id = 17 }
	location = 122 #Amsterdam
	name = "Lichte Korps"
		division = { id = { type = 18500 id = 18 } name = "Lichte Divisie" type = cavalry model = 0 strength = 3 extra = armored_car }
    }
	
landunit = {
	id = { type = 18500 id = 15 }
	location = 125 #Rotterdam
	name = "Korps Mariniers"
		division = { id = { type = 18500 id = 16 } name = "Korps Mariniers" type = marine model = 0 strength = 10 locked = yes }
    }	

#############################################	
landdivision = { dormant = yes id = { type = 18500 id = 13 } name = "Mariniersbrigade"        type = marine    model = 2 experience = 35 strength = 10 }
landdivision = { dormant = yes id = { type = 18500 id = 14 } name = "Brigade 'Prinses Irene'" type = motorized model = 2                 strength = 20 }
#############################################
# Koninklijke Luchtmacht
#############################################

airunit = {
	location = 122
	base = 122
	id = { type = 18500 id = 100 }
	name = "1e Vechters Groep"
		division = { id = { type = 18500 id = 101 } name = "1e Vechters Eskader" type = interceptor model = 0 strength = 35 }
		division = { id = { type = 18500 id = 104 } name = "2e Vechters Eskader" type = d_01        model = 1 strength = 5  }
	}

airunit = {
	location = 122
	base = 122
	id = { type = 18500 id = 102 }
	name = "1e Bommenwerpers Groep"
		division = { id = { type = 18500 id = 103 } name = "1e Bommenwerpers Eskader" type = tactical_bomber model = 0 strength = 25 }
	}		
	
#############################################
# Koninklijke Marine
#############################################

navalunit = {
	id = { type = 18500 id = 99 }
	location = 125
	base = 125
	name = "Koninklijke Vloot"
		division = { id = { type = 18500 id = 56 } name = "HrMs Soerabaja" type = heavy_cruiser model = 2 }
		division = { id = { type = 18500 id = 80 } name = "HrMs De Ruyter" type = light_cruiser model = 3 }
		division = { id = { type = 18500 id = 81 } name = "HrMs Java" type = light_cruiser model = 2 }
		division = { id = { type = 18500 id = 20 } name = "HrMs Sumatra" type = light_cruiser model = 2 }
		division = { id = { type = 18500 id = 21 } name = "HrMs Evertsen" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 22 } name = "HrMs Kortenaer" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 23 } name = "HrMs Piet Hein" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 24 } name = "HrMs Van Ghent" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 25 } name = "HrMs Banckert" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 26 } name = "HrMs Van Galen" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 27 } name = "HrMs Van Nes" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 28 } name = "HrMs Witte de With" type = destroyer model = 2 }
		division = { id = { type = 18500 id = 29 } name = "HrMs Flores" type = d_09 model = 0 }
		division = { id = { type = 18500 id = 41 } name = "HrMs Soemba" type = d_09 model = 0 }
		division = { id = { type = 18500 id = 42 } name = "HrMs Johan Maurits van Nassau" type = d_09 model = 2 }
	}
			
navalunit = {
	id = { type = 18500 id = 30 }
	location = 125
	base = 125
	name = "Onderzeese Kustvloot"
		division = { id = { type = 18500 id = 61 } name = "HrMs O 6" type = nuclear_submarine model = 0 }
		division = { id = { type = 18500 id = 62 } name = "HrMs O 7" type = nuclear_submarine model = 0 }
		division = { id = { type = 18500 id = 63 } name = "HrMs O 8" type = nuclear_submarine model = 0 }
		division = { id = { type = 18500 id = 31 } name = "HrMs O 9" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 32 } name = "HrMs O 10" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 33 } name = "HrMs O 11" type = nuclear_submarine model = 1 }
		division = { id = { type = 18500 id = 34 } name = "HrMs O 12" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 35 } name = "HrMs O 13" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 36 } name = "HrMs O 14" type = nuclear_submarine model = 2 }
		division = { id = { type = 18500 id = 64 } name = "HrMs O 15" type = nuclear_submarine model = 2 }
	}
	
navalunit = {
	id = { type = 18500 id = 68 }
	location = 125
	base = 125
	name = "Onderzeese Vloot"
		division = { id = { type = 18500 id = 37 } name = "HrMs K XIV" type = submarine model = 1 }
		division = { id = { type = 18500 id = 39 } name = "HrMs K XV" type = submarine model = 1 }
		division = { id = { type = 18500 id = 40 } name = "HrMs K XVI" type = submarine model = 1 }
		division = { id = { type = 18500 id = 59 } name = "HrMs K XVII" type = submarine model = 1 }
		division = { id = { type = 18500 id = 60 } name = "HrMs K XVIII" type = submarine model = 1 }
	}
		
navalunit = {
	id = { type = 18500 id = 50 }
	location = 122
	base = 122
	name = "1e Transport Smaldeel"
		division = { id = { type = 18500 id = 51 } name = "HrMs Dempo" type = transport model = 0 }
		division = { id = { type = 18500 id = 52 } name = "HrMs Nieuw Zeeland" type = transport model = 0 }
		division = { id = { type = 18500 id = 53 } name = "HrMs Amstelland" type = transport model = 0 }
		division = { id = { type = 18500 id = 54 } name = "HrMs Abbekerk" type = transport model = 0 }
	}
	
navalunit = {
	id = { type = 18500 id = 65 }
	location = 125
	base = 125
	name = "Reserve Vloot"
		division = { id = { type = 18500 id = 66 } name = "HrMs Jacob van Heemskerck" type = heavy_cruiser model = 0 strength = 50 }
		division = { id = { type = 18500 id = 67 } name = "HrMs Hertog Hendrik" type = heavy_cruiser model = 0 strength = 5 }
		division = { id = { type = 18500 id = 69 } name = "HrMs Gelderland" type = light_cruiser model = 0 strength = 75 }
	}
	
	
#########################################################
# Koninklijke Landmacht after the Liberation
#########################################################
landdivision = { dormant = yes id = { type = 18500 id = 200 } name = "1e '7 December' Divisie"   type = infantry   strength = 15 model = 4 } #sometimes called C-Divisie
landdivision = { dormant = yes id = { type = 18500 id = 201 } name = "2e 'Palmboom' Divisie"     type = infantry   strength = 15 model = 4 } #perhaps called B-Divisie
landdivision = { dormant = yes id = { type = 18500 id = 202 } name = "3e 'Drietand' Divisie"     type = infantry   strength = 15 model = 4 }
landdivision = { dormant = yes id = { type = 18500 id = 203 } name = "4e 'Klaverblad' Divisie"   type = armor      strength = 15 model = 5 }
landdivision = { dormant = yes id = { type = 18500 id = 204 } name = "5e 'Kastanjeblad' Divisie" type = mechanized strength = 15 model = 2 }
##### Unit development ##################################

division_development = {
	name = "HrMs O 16"
	type = submarine
	model = 1
	cost = 0.01 #0.1
	new_model = no unitcost = yes
	id = { type = 18500 id = 55 }
	date = { year = 1936 month = october day = 25 }
	}

division_development = {
	name = "HrMs Tromp"
	type = light_cruiser
	model = 2
	cost = 0.01 #0.1
	new_model = no unitcost = yes
	id = { type = 18500 id = 57 }
	date = { year = 1938 month = august day = 18 }
	}

division_development = {
	name = "HrMs Jacob van Heemskerck"
	type = light_cruiser
	model = 2
	cost = 0.01 #0.1
	new_model = no unitcost = yes
	id = { type = 18500 id = 58 }
	date = { year = 1939 month = september day = 16 }
	}

} # End File