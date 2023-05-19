# geändert Zergel, 20.10.2010, Anpassung Province ID an DH

province = {
	id = 995
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 4
		current_size = 4
	}
}

province = {
	id = 476
	anti_air = 2
	naval_base = {
		size = 10
		current_size = 10
	}
	air_base = {
		size = 10
		current_size = 10
	}
}

province = {
	id = 1372
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 892 
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 855
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 1617 
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 992 
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 912
	anti_air = 2
	naval_base = {
		size = 1
		current_size = 1
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 893 
	naval_base = {
		size = 1
		current_size = 1
	}
	air_base = {
		size = 1
		current_size = 1
	}
}	

province = {
	id = 990
	anti_air = 2
	naval_base = {
		size = 3
		current_size = 3
	}
	air_base = {
		size = 1
		current_size = 1
	}
}

province = {
	id = 1513
	naval_base = {
		size = 1
		current_size = 1
	}
}	

province = { id = 481   anti_air = 1 } #Porto
province = { id = 476   anti_air = 2 } #Lissabon

province = {  id = 892 oilpool = 1 supplypool = 10 } # Lobito
province = {  id = 1617 oilpool = 1 supplypool = 10 } # Dili

country = {
    tag = POR


	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 15

	capital = 476
	manpower = 20

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 3
        political_left = 4
        freedom = 4
        free_market = 5
        professional_army = 4
        defense_lobby = 5
        interventionism = 3
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 

	#inventions = { 2700061 2700065 }

	
    ownedprovinces =      {
	481 #Porto=>Oporto
	479 #Coimbra=>Guarda
	482 #Covilha=>Guarda
 	476 #Lisbon
	477 #Setubal=>Evora
 	480 #Evora
 	478 #Beja=>Faro

		995 #Azores
		992 #Cabo Verde=>Cap Verde Islands
		994 #Madeira
		912 #Sao Tomé
		
		#Angola
		895 #Luando=>Loanda
		890 #Henrique de Cavalho=>Vila Henrique de Cavalho
		892 #Lobito=>Benguella
		887 #Luena=>Nova Lisboa
		888 #Lubango=>Mocamedes
		891 #Menongue=>Vila Pereira d´Eca
		963 #Bissau

		#Mocambique
		855 #Lourenco Marques
		856 #Maxixe=>Inhambane  
		857 #Beira
		858 #Ulonge=>Tete
		854 #Nampula=>Quelimane 
		853 #Porto Amelia=>Vila Cabral 

		1617 #Dili=>East Timor
		1372 #Macao
		893 # Cabinda
		1513 # Colony in India
	 }
    controlledprovinces = {
	481 #Porto=>Oporto
	479 #Coimbra=>Guarda
	482 #Covilha=>Guarda
 	476 #Lisbon
	477 #Setubal=>Evora
 	480 #Evora
 	478 #Beja=>Faro
 
		995 #Azores
		992 #Cabo Verde=>Cap Verde Islands
		994 #Madeira
		912 #Sao Tomé
		
		#Angola
		895 #Luando=>Loanda
		890 #Henrique de Cavalho=>Vila Henrique de Cavalho
		892 #Lobito=>Benguella
		887 #Luena=>Nova Lisboa
		888 #Lubango=>Mocamedes
		891 #Menongue=>Vila Pereira d´Eca
		963 #Bissau

		#Mocambique
		855 #Lourenco Marques
		856 #Maxixe=>Inhambane  
		857 #Beira
		858 #Ulonge=>Tete
		854 #Nampula=>Quelimane 
		853 #Porto Amelia=>Vila Cabral 

		1617 #Dili=>East Timor
		1372 #Macao
		893 # Cabinda
		1513 # Colony in India
	  }
	nationalprovinces =   {
	481 #Porto=>Oporto
	479 #Coimbra=>Guarda
	482 #Covilha=>Guarda
 	476 #Lisbon
	477 #Setubal=>Evora
 	480 #Evora
 	478 #Beja=>Faro
 
		995 #Azores
	}

diplomacy = {
relation = { tag = BEL value = -20 }
relation = { tag = BRA value = 75 }
relation = { tag = ENG value = 100 }
relation = { tag = FIN value = 50 }
relation = { tag = GER value = 75 }
relation = { tag = IRE value = 25 }
relation = { tag = ITA value = 65 }
relation = { tag = SAF value = 125 }
relation = { tag = SPR value = -50 }
}
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }
	# Western Minor Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930

4290 4300 4310 4320 # double Engined 1929, tactical, naval, escort brigade 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # Great War Division

1190 # GW Cavalry

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic oil conversion

6100 6110 6120 # Firepower doc

#Naval doctrines
8070 8130 8760

#Naval Techs
3010	3040	3070 # Escorts Washington
3020	3050	3080 # DD Washington
3030 # CL 1900
3700 15080 # SS 1930
3800 # Prewar TP

	}
	
#### home army ~ 27ooo soldiers ####

landunit = {
	id = { type = 19600 id = 1020 }
	location = 481 #Porto
	name = "Regiao Militar no.1"
		division = { id = { type = 19600 id = 1021 } name = "Divisao no.1" type = d_02 model = 0 strength  = 50 }
	}
	
landunit = {
	id = { type = 19600 id = 1022 }
	location = 479 #Coimbra
	name = "Regiao Militar no.2"
		division = { id = { type = 19600 id = 1023 } name = "Divisao no.2" type = d_02 model = 0 strength  = 50 }
	}
	
landunit = {
	id = { type = 19600 id = 1024 }
	location = 482 #Tomar
	name = "Regiao Militar no.3"
		division = { id = { type = 19600 id = 1025 } name = "Divisao no.3" type = d_02 model = 0 strength  = 50 }
	}
	
landunit = {
	id = { type = 19600 id = 1026 }
	location = 480 #Evora
	name = "Regiao Militar no.4"
		division = { id = { type = 19600 id = 1027 } name = "Divisao no.4" type = d_02 model = 0 strength  = 50 }
	}
	
landunit = {
	id = { type = 19600 id = 1028 }
	location = 476 #Porto
	name = " Exército Português"
		division = { id = { type = 19600 id = 1029 } name = "Exército Português GC"     type = hq      model = 0 }
		division = { id = { type = 19600 id = 1030 } name = "Brigada de cavalaria no.1" type = cavalry model = 1 strength = 25 } #~3500 soldiers
		division = { id = { type = 19600 id = 1031 } name = "Brigada de cavalaria no.2" type = cavalry model = 1 strength = 25 } #~3500 soldiers
	}	

#### colonial army ####	
	
landunit = {
	id = { type = 19600 id = 1000 }
	location = 1513
	name = "Regiao Militar India"
		division = { id = { type = 19600 id = 1001 } name = "Batalhão de 'India'" type = militia model = 0 strength  = 25 }
	}
# Most of the companies were formed out of native soldiers under port. officers. Total ~1400 men
	
	
landunit = {
	id = { type = 19600 id = 1002 }
	location = 855
	name = "Regiao Militar Mozambique"
		division = { id = { type = 19600 id = 1003 } name = "Batalhão de 'Mozambique'" type = militia model = 0 strength  = 45 }
	}
# Most of the companies were formed out of native soldiers under port. officers. Total ~2600 men
		
landunit = {
	id = { type = 19600 id = 1004 }
	location = 892
	name = "Regiao Militar Angola"
		division = { id = { type = 19600 id = 1005 } name = "Batalhão de 'Angola'" type = militia model = 0 strength  = 75 }
	}
# Most of the companies were formed out of native soldiers under port. officers. Total ~4500 men	
		
landunit = {
	id = { type = 19600 id = 1006 }
	location = 1617
	name = "Regiao Militar Timor"
		division = { id = { type = 19600 id = 1007 } name = "Batalhão de 'Timor'" type = militia model = 0 strength  = 10 }
	}
# Timor was protected by 350 soldiers + local native police

#### AIR FORCE ####

airunit = {
	id = { type = 19600 id = 1070 }
	name = "Aéreo de Portugal"
	location = 476 #Lissabon
	base = 476
		division = { id = { type = 19600 id = 1071 } name = "Brigada de Bombardeiro Tático" type = tactical_bomber model = 0 strength  = 20 }
		division = { id = { type = 19600 id = 1072 } name = "Brigada de Caça"               type = multi_role      model = 0 strength  = 40 }
	}

##### NAVY #####

navalunit = {
	id = { type = 19600 id = 1050 }
	location = 476
	base = 476
	name = "Transporte de Navio de Portugal"
		division = { id = { type = 19600 id = 1051 } name = "Ganda" type = transport model = 0 }
	}

navalunit = {
	id = { type = 19600 id = 1052 }
	location = 963
	base = 476
	name = "Transporte de Navio de Colonias"
		division = { id = { type = 19600 id = 1053 } name = "Cassequel" type = transport model = 0 }
		division = { id = { type = 19600 id = 1054 } name = "Tamega" type = destroyer model = 0 }
	}
	
navalunit = {
	id = { type = 19600 id = 9302 }
	name = "Marinha de Portugal"
	location = 476
	base = 476
		division = { id = { type = 19600 id = 9303 } name = "Vouga" type = destroyer model = 2 }
		division = { id = { type = 19600 id = 9310 } name = "Lima" type = destroyer model = 2 }
		division = { id = { type = 19600 id = 9309 } name = "Dão" type = destroyer model = 2 }
		division = { id = { type = 19600 id = 9308 } name = "Tejo" type = destroyer model = 2 }
		division = { id = { type = 19600 id = 9311 } name = "Douro" type = destroyer model = 2 }
		division = { id = { type = 19600 id = 9312 } name = "Afonso du Albuquerque" type = d_09 model = 2 }
		division = { id = { type = 19600 id = 9313 } name = "Bartolomeu Diaz" type = d_09 model = 2 }
		division = { id = { type = 19600 id = 9314 } name = "Goncalo Velho" type = d_09 model = 0 }
		division = { id = { type = 19600 id = 9315 } name = "Goncalves Zarco" type = d_09 model = 0 }
		division = { id = { type = 19600 id = 9316 } name = "Carvalho Araujo" type = d_09 model = 0 }
		division = { id = { type = 19600 id = 9317 } name = "Republica" type = d_09 model = 0 }
		division = { id = { type = 19600 id = 9318 } name = "Pedro Nunes" type = d_09 model = 0 }
		division = { id = { type = 19600 id = 9319 } name = "Guadiana" type = destroyer model = 0 strength = 20 }
	}
	
navalunit = {
	id = { type = 19600 id = 9307 }
	name = "Flotilha submarino"
	location = 476
	base = 476
		division = { id = { type = 19600 id = 9304 } name = "Delfim" type = submarine model = 1 }
		division = { id = { type = 19600 id = 9305 } name = "Espadarte" type = submarine model = 1 }
		division = { id = { type = 19600 id = 9306 } name = "Golfinho" type = submarine model = 1 }
	}

transports = 200
escorts = 21

#### paramilitia unit of president Salazar - the "portguese SA"
#### the legion was transfered into the army during the cold war
landdivision = { dormant = yes id = { type = 19600 id = 1099 } name = "Legiao Portuguesa" type = militia model = 1 strength = 75 }

division_development = { 
name = "Joao de Lisboa" 
type = d_09
model = 0
cost = 0.05 #0.5
new_model = no unitcost = yes
id = { type = 19600 id = 9320 } 
date = { year = 1937 month = february day = 0 } # commissioned somewhen in 1937
} 

} # End File
