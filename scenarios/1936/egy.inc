#conversion DH, Feb 13 2011, Kane
#Alexandria
province = {
	id = 789 #Alexandria
	anti_air = 3
	air_base = {
		size = 7
		current_size = 7
		}
	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = { id = 791  anti_air = 2 } #Bur Said
province = { id = 900  anti_air = 2 } #Suez
province = { id = 787  anti_air = 2 } #Cairo

country = {
    tag = EGY
    puppet = ENG
	control = ENG
	capital = 787

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 4
        professional_army = 1
        defense_lobby = 5
        interventionism = 1
    }
    allowed_divisions = { 
        militia = yes 
        cavalry = yes 
	} 
	
	#inventions = { 2700061 2700065 }

	manpower = 50

	# Resource Reserves
	energy	 =	100   
	metal	= 100		
	rare_materials =	50	
	oil =	500	
	supplies =	500
	money = 7
	

	ownedprovinces =      
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
}
	controlledprovinces = 
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
}

	nationalprovinces =
{
  	795 #Aswan#
	794 #Asyut#
	793 #Minian#
 	798 #El Kharga#
 	802 #El Qasr#
	801 #El Farafra#
	792 #El Faiyum#
	788 #Hakim#
	787 #Kairo#   
	800 #Bir Nahid#
	799 #Moghara#
	779 #Siwah#
	789 #Alexandria#
	783 #El Alamein#
	784 #Fuqa#
	785 #Matruh#
	780 #Sidi Barrani#
	781 #As Sollum#
	778 #Bir Fuad#
	782 #Bir Baylih#
	791 #Bur Said#
	786 #Dimyat#
	900 #Suez#
	796 #El Ghardaqah#
	797 #El Uqsur# 
	790 #Tanta#
	}


diplomacy = {
relation = { tag = AFG value = -75  }
relation = { tag = ARG value = 75 }
relation = { tag = AST value = 200  }
relation = { tag = AUS value = 75  }
relation = { tag = BEL value = 150 }
relation = { tag = BHU value = 200 }
relation = { tag = BUL value = 20 }
relation = { tag = CAN value = 200 }
relation = { tag = CUB value = 30 }
relation = { tag = CZE value = 125 }
relation = { tag = DEN value = 100 }
relation = { tag = ENG value = 200 access = yes }
relation = { tag = ETH value = 50 }
relation = { tag = FIN value = 85 }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = GRE value = 50  }
relation = { tag = GUA value = 50 }
relation = { tag = HOL value = 125 }
relation = { tag = HUN value = -50 }
relation = { tag = IRE value = 25   }
relation = { tag = IRQ value = 100 }
relation = { tag = ITA value = -50 }
relation = { tag = MEX value = 50 }
relation = { tag = NEP value = 200 }
relation = { tag = NOR value = 90   }
relation = { tag = NZL value = 200 }
relation = { tag = OMN value = 150  }
relation = { tag = PER value = 25  }
relation = { tag = POL value = 50 }
relation = { tag = POR value = 100 }
relation = { tag = ROM value = 50 }
relation = { tag = SAF value = 200  }
relation = { tag = SAU value = 100  }
relation = { tag = SCH value = 50   }
relation = { tag = SIA value = 70 }
relation = { tag = SOV value = -25 }
relation = { tag = SWE value = 80  }
relation = { tag = TUR value = 75  }
relation = { tag = USA value = 150 }
relation = { tag = VEN value = -10 }
relation = { tag = YEM value = 150  }
}
  SpyInfo                = { country = "EGY" NumberOfSpies = 3 }
	# Commonwealth Tech '36
	deactivate = { }

	techapps = {
# UK 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int CAS 1930

4290 4300 # double Engined 1929, tactical


2800 # Basic Armoured Car

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1400 # Guerilla Infantry Division

1190 1200 1210 # Semi-moto Cavalry
2400 # AT
1310 # Engineers
5010 # Agriculture
5050 # Basic Machine Tools
5080 5090 # Construction (up to the forts)
5190  #  Oil Refining
5310 5320 # Basic CT machine

6500 # Guerilla doc

#Naval doctrines
8070 8130 8180 8760

#Naval Techs

3010 3020 # Prewar Escort, DD
3800 # Prewar TP
	}
	
landunit = {
	id = { type = 12700 id = 8000 }
	name = "Egyptian Army"
	location = 787
		division = { id = { type = 12700 id = 8001 } name = "Royal Guards"      type = cavalry strength = 10  model = 1 }
		division = { id = { type = 12700 id = 8002 } name = "Egyptian Division" type = d_02    strength = 100 model = 0 }
	}

#navalunit = {
#	location = 789
#	base = 789
#	name = "Royal Egypt Navy"
#	id = { type = 12700 id = 8002 }
#		division = { id = { type = 12700 id = 8003 } name = "El Amir Farouq" type = d_09 model = 0 }
#		division = { id = { type = 12700 id = 8004 } name = "Sollum" type = d_09 model = 0 }
#	}
	
	transports = 10
	escorts = 4


} # End File




