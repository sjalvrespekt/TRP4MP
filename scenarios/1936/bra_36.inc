province = {
	id = 2059 #Sao Paolo
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	naval_base = {
		size = 6
		current_size = 6
		}
}

province = {
	id = 2075 #Rio De Janeiro
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
	naval_base = {
		size = 6
		current_size = 6
		}
}

province = {
	id = 2058 #Porto Allegre
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}
	naval_base = {
		size = 8
		current_size = 8
		}
}

province = { id = 2067   anti_air = 2 } #Belo Horizonte
province = { id = 2057   anti_air = 1 } #

# Brazil

country = {
    tag = BRA

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 6
        political_left = 9
        free_market = 8
        freedom = 7
        professional_army = 5
        defense_lobby = 6
        interventionism = 3
    }
    allowed_divisions = { 
        infantry = yes 
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
	money = 20

	manpower = 20
	
	transports = 25
	escorts = 7


	capital = 2075

   nationalprovinces      = 
{  
	2058 #Porto Allegre
	2057 #Curitiba
	2060 #Campo Grande
	2061 #Cuiaba
	2004 #Maraba=>Maraba/Marajo/Santarem(merge)
	2003 #Tefe
	2002 #Rio Branco
	2001 #Manacapuru=>Solimoes
	2005 #Manaus=>Manaus/Boa Vista(merge)
	2062 #Porto Velho
	2071 #Recife
	2066 #Barreiras=>Goias(split)
	2065 #Teresina=>Fortaleza(split)
	2068 #Belem
	2069 #Sao Luis=>Belem(split)
	2067 #Goiania=>Goias
	2076 #Belo Horizonte=>Campinas
	2059 #Sao Paolo=>Sao Paolo/Campinas(merge)
	2075 #Rio De Janeiro	
	2074 #Vitoria
	2073 #Salvador
	2072 #Fortaleza
	2070 #Natal
	2006 #Macapa
} 
   ownedprovinces         = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006  } 
   controlledprovinces    = {  2058 2057 2060 2061 2004 2003 2002 2001 2005 2062 2071 2066 2065 2068 2069 2067 2076 2059 2075 2074 2073 2072 2070 2006  } 	

diplomacy = {
	relation = { tag = ARG value = -10 }
	relation = { tag = BOL value = 10 }
	relation = { tag = CHL value = 10 }
	relation = { tag = COL value = 10 }
	relation = { tag = ECU value = 10 }
	relation = { tag = GER value = 50 }
	relation = { tag = IRE value = 20 }
	relation = { tag = PAR value = 10 }
	relation = { tag = POR value = 75 }
	relation = { tag = PRU value = 10 }
	relation = { tag = SOV value = -50 }
	relation = { tag = URU value = 125 }
	relation = { tag = USA value = 120 }
	relation = { tag = VEN value = 10 }
}
  SpyInfo                = { country = "BRA" NumberOfSpies = 6 }
	# Semi-Major Tech '36
	deactivate = { }

	techapps = {
# Group C 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4290 # double Engined 1929

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

2550 # GW tank
2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

1010 # GW infantry

1190 # GW Cavalry

1110 # Early Mountain

5010 # Modern Agriculture
5080 5090 # Construction 
5190 # Basic Oil Refining

6100 6110 # firepower doc

# Naval Techs
# Escorts up to WW1
3010	3040
3020	3050
3030 15250 # pre-WW1 CL

3350 3390 3430 # Capital Design up to 1914
3360 # Coastal BB (CA 0)
3380 3410 3420 # BB up to 1914

3700 15080 # SS 1930
3800 # Prewar TP

#Naval doctrines
8070 8130 8180 8760


	}

#############################################
# army datas by Lord Rommel                 #
# basing on datas of the League of Nations  #
# 11.6.2012                                 #
#############################################

landunit = {
	id = { type = 18000 id = 3005 }
	name = "1o Exército do Brasil"
	location = 2075 #Rio De Janeiro
		division = { id = { type = 18000 id = 3006 } name = "I Divisão de Infantaria" strength = 50 type = infantry model = 0 }
		division = { id = { type = 18000 id = 3007 } name = "I Divisão de Cavalaria" type = cavalry model = 0 }
	}
	
landunit = {
	id = { type = 18000 id = 3008 }
	name = "2o Exército do Brasil"
	location = 2059 #Rio De Janeiro
		division = { id = { type = 18000 id = 3009 } name = "II Divisão de Infantaria" strength = 50 type = infantry model = 0 }
		division = { id = { type = 18000 id = 3010 } name = "II Divisão de Cavalaria" type = cavalry model = 0 }
	}
	
landunit = {
	id = { type = 18000 id = 3011 }
	name = "3o Exército do Brasil"
	location = 2058 #Porto Alegre
		division = { id = { type = 18000 id = 3012 } name = "III Divisão de Infantaria" strength = 50 type = infantry model = 0 }
		division = { id = { type = 18000 id = 3013 } name = "III Divisão de Cavalaria" type = cavalry model = 0 }
	}
	
landunit = {
	id = { type = 18000 id = 3014 }
	name = "4o Exército do Brasil"
	location = 2076 #Minas Geraes
		division = { id = { type = 18000 id = 3015 } name = "IV Divisão de Infantaria" strength = 40 type = infantry model = 0 }
	}
	
landunit = {
	id = { type = 18000 id = 3016 }
	name = "5o Exército do Brasil"
	location = 2065 #Beleme/Recifel
		division = { id = { type = 18000 id = 3017 } name = "V Divisão de Infantaria" strength = 40 type = infantry model = 0 }
	}
	
########AIRFROCE	

airunit = {
	id = { type = 18000 id = 2001 }
	name = "Aereo do Brésil"
	location = 2075 #Rio De Janeiro
	base = 2075 #Rio De Janeiro
		division = { id = { type = 18000 id = 2002 } name = "1. Grupo de Caças" strength = 20 type = interceptor model = 0 }
	}

#######NAVY
	
navalunit = {
	id = { type = 18000 id = 1001 }
	location = 2075 #Rio De Janeiro
	base = 2075 #Rio De Janeiro
	name = "Navais do Transporte"
		division = { id = { type = 18000 id = 1002 } name = "Arabutan" type = transport model = 0 }
		division = { id = { type = 18000 id = 1003 } name = "Brasiloide" type = transport model = 0 }
	}

navalunit = { 
	id = { type = 18000 id = 1009 } 
	location = 2058 #Porto Allegre 
	base = 2058 #Porto Allegre
	name = "Marinha do Brasil" 
		division = { id = { type = 18000 id = 1010 } name = "NRB São Paulo" type = battleship model = 1 strength = 30 } #badly damaged, wasn't refitted like its sistership
		division = { id = { type = 18000 id = 1011 } name = "NRB Minas Geraes" type = battleship model = 1 extra = naval_anti_air_l strength = 30 } #strength reduced to simulate refits going on until 1938
		division = { id = { type = 18000 id = 1012 } name = "NRB Bahia" type = light_cruiser model = 1 }
		division = { id = { type = 18000 id = 1013 } name = "NRB Rio Grande do Sul" type = light_cruiser model = 1 }
		division = { id = { type = 18000 id = 1014 } name = "NRB Maranhao" type = destroyer model = 1 }
		division = { id = { type = 18000 id = 1017 } name = "NRB Piauhy" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1018 } name = "NRB Mato Grosso" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1019 } name = "NRB Rio Grande do Norte" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1020 } name = "NRB Paraiba" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1021 } name = "NRB Alagoas" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1022 } name = "NRB Santa Catharina" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1023 } name = "NRB Sergipe" type = destroyer model = 0 }
		division = { id = { type = 18000 id = 1024 } name = "NRB Humaytá" type = d_08 model = 0 } # Hochseeboot Enrico Toti class
	}

} # End File