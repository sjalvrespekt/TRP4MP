#conversion DH, Feb 10 2011, Kane
province = {
	id = 2137 #St.John's
	anti_air = 2
	air_base = {
		size = 6
		current_size = 6
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 2117 #Quebec
	anti_air = 4
	air_base = {
		size = 6
		current_size = 6
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 2130 #Saint John
	anti_air = 2
	air_base = {
		size = 6
		current_size = 6
		}

	naval_base = {
		size = 4
		current_size = 4
		}
	}

province = {
	id = 2089 #Vancouver
	anti_air = 3
	air_base = {
		size = 10
		current_size = 10
		}

	naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 2132 #Halifax
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}
		naval_base = {
		size = 10
		current_size = 10
		}
	}

province = {
	id = 2108 #Ottawa
	anti_air = 3
	air_base = {
		size = 4
		current_size = 4
		}

	}

province = {
	id = 2119 #Montreal
	anti_air = 2
	air_base = {
		size = 4
		current_size = 4
		}

	}

province = {
	id = 2106 #Winnipeg
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}

	}

province = {
	id = 2104 #Calgary
	anti_air = 1
	air_base = {
		size = 4
		current_size = 4
		}

	}


province = { id = 2111  anti_air = 1 } #Toronto

country = {
    tag = CAN

    ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
        date = { year = 0 month = january day = 0 }
        democratic = 10
        political_left = 2
        free_market = 10
        freedom = 10
        professional_army = 6
        defense_lobby = 7
        interventionism = 8
    }
	
	allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 
	
	#inventions = { 2700061 2700063 2700065 2700064 }
	
	peacetime_ic_mod = 0.4
	# Resource Reserves
	energy	=	1000   metal	= 1000		rare_materials =	500	oil =	500	supplies =	500
	money = 20

	manpower = 20

	capital = 2108

	nationalprovinces      = 
{  
	2089 #Vancouver
	2092 #Jasper
	2090 #Victoria
	2093 #Telegraph Creek=>Prince George(split)
	2095 #Fort Simpson
	2103 #Edmonton
	2104 #Calgary
	2105 #Grande Prairie=>Fort McMurray
	2102 #Prince Albert
	2099 #Fort Resolution
	2091 #Prince George
	2096 #Yellowknife
	2097 #Rankin Inlet=>Repulse Bay
	2098 #Lake Harbor=>Baffin Island
	2094 #Whitehorse
	2100 #Saskatoon
	2101 #Regina
	2106 #Winnipeg
	2107 #Flin Flon=>Rankin Inlet
	2115 #Fort Severn
	2108 #Ottawa=>Kingston
	2109 #Hamilton=>Windsor
     	2110 #Fort William
	2129 #Sault Ste Marie
	2113 #Pembroke=>Ottawa
	2114 #Sudbury=>Ottawa(split)
	2148 #Prince Rupert=>Vancouver(split)
	2149 #Queen Charlotte=>Vancouver(split)
	2112 #Cochrane=>Fort Severn(split)
	2127 #Roberval=>Quebec(split)
	2130 #Saint John
	2111 #Toronto
	2116 #Fort Rupert=>Radisson(split)
	2123 #Fort George=>Radisson
	2122 #Fort Chimo=>Radisson(split)
	2121 #Chicoutimi=>Sept-Iles(split)
	2120 #Sept Iles
	2125 #val d'Or
	2124 #Rimouski=>Riviere-du-Loup(split)
	2117 #Quebec
	2118 #Sherbrooke
	2119 #Montreal
	2128 #Fredericton=>Saint John(split)
	# 2135 #Saint-Pierre=>Newfoundland(split)
	# 2136 #Goose Bay=>Labrador(split)
	# 2138 #Nain=>Labrador
	# 2137 #St.John's=>Newfoundland
	2132 #Halifax
	2131 #Moncton
	2134 #Glace Bay=>Cape Breton
	2126 #Trois Rivieres=>Riviere-du-Loup
	2133 #Charlottetown=>Cape Breton(split)
}
   ownedprovinces         = {  2090  2089 2092  2105 2102 2099 2093 2091 2095  2094  2096    2103  2104  2101  2100    2097 2098  2107 2115  2106  2110  2129 2113 2114 2148 2149 2112 2127 2130 2108  2111  2109   2119    2117  2116 2123 2122 2121 2120 2125 2124  2128  2132 2131 2134 2126  2133  2118   } 

   controlledprovinces    = {  2090  2089 2092  2105 2102 2099 2093 2091 2095  2094  2096    2103  2104  2101  2100   2097 2098   2107 2115   2106  2110  2129 2113 2114 2148 2149 2112 2127 2130  
                              2108  2111  2109  2119   2117  2116 2123 2122 2121 2120 2125 2124  2128  2132 2131 2134 2126  2133  2118 
                             } 


diplomacy = {
relation = { tag = AST value = 200 access = yes }
relation = { tag = BEL value = 150 }
relation = { tag = BHU value = 200 }
relation = { tag = ENG value = 200 access = yes }
relation = { tag = FRA value = 150 }
relation = { tag = GER value = 0 }
relation = { tag = HOL value = 80 }
relation = { tag = IRE value = 75 }
relation = { tag = IRQ value = 100 }
relation = { tag = ITA value = 0 }
relation = { tag = NEP value = 200 }
relation = { tag = NZL value = 200 access = yes}
relation = { tag = OMN value = 150 }
relation = { tag = SAF value = 200 access = yes }
relation = { tag = USA value = 175 }
relation = { tag = YEM value = 0 } #150
}

  SpyInfo                = { country = "CAN" NumberOfSpies = 6 }


# Commonwealth Tech '36
	deactivate = { }

	techapps = {
# UK 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int, CAS 1930
4050 # Single Engined 1936

4290 4300 # double Engined 1929, tactical 1930

#############################

2800 # Basic Armoured Car

2550 # GW tank 

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

17000 # 1936 rocket artillery/mortars

1010 1020 # Early infantry

1190 1200 1210 # Semi-moto Cavalry

1110 # Early Mountain

1310 # Early logistics

#1150 # Early Marine

5010 # Agriculture 
5080 5090  # Construction 
5190 # Basic Oil Refining
5310 # CT machine

6100 6110 6120 # Trench Warfare doctrine (land)

#Naval doctrines
8070 8130 8180 8760

9010 9020 9030 # Aerial warfare, basic doctrines

#Naval Techs
# Escorts up to pre-WW2
3010	3040	3070	3100
3020	3050	3080 # DD just up to Washington!
3030 15250	3060	3090	3120

3350 3390 3430 3480 3510 # Capital Design up to 1930
3360 3440 3490 # CA up to 1925
3370 3400 3450 3460 # BC up to 1918
3380 3410 3420 3470	3500 # BB up to 1925
3800 # Prewar TP
	}



#################################################################
# Royal canadian army by Lord Rommel
#################################################################
# Army troops were formed by the beginning
# of the war.
#################################################################

landunit = {
 	id = { type = 30053 id = 1 }
 	name = "Royal Canadian Army"
 	location = 2111 #Toronto
	    division = { id = { type = 30053 id = 2 } name = "Royal Canadian Army"          experience = 20 type = hq       model = 0 }
		division = { id = { type = 30053 id = 3 } name = "Canadian Active Service Forces" strength = 10 type = garrison model = 0 }
	}
	
#################################################################
# Royal canadian navy
#################################################################
          	
navalunit = {
	id = { type = 30053 id = 500 }
	location = 2132 #Halifax
	base = 2132 #Halifax
	name = "'Empress of Britain' Flotilla"
		division = { id = { type = 30053 id = 501 } name = "M/S Troisdoc" type = transport model = 0 }
		division = { id = { type = 30053 id = 502 } name = "M/S Mona Marie" type = transport model = 0 }
		division = { id = { type = 30053 id = 503 } name = "M/S Bic Island" type = transport model = 0 }
		division = { id = { type = 30053 id = 504 } name = "M/S Salt Lake Park" type = transport model = 0 }
		division = { id = { type = 30053 id = 505 } name = "M/S Chr. J. Kampmann" type = transport model = 0 }
		division = { id = { type = 30053 id = 506 } name = "M/S Fort Bellingham" type = transport model = 0 }
	}

navalunit = {
	id = { type = 30053 id = 7 }
	name = "Royal Canadian Navy"
	location = 2132 #Halifax
	base = 2132 #Halifax
		division = { id = { type = 30053 id = 508 } name = "HMCS Saguenay" type = destroyer model = 2 }
		division = { id = { type = 30053 id = 507 } name = "HMCS Skeena" type = destroyer model = 2 }
		division = { id = { type = 30053 id = 509 } name = "HMCS Champlain" type = destroyer model = 1 strength = 30 }
		division = { id = { type = 30053 id = 510 } name = "HMCS Vancouver" type = destroyer model = 1 strength = 30 }
	}

transports = 100
escorts = 6

###############################################
# dormant destroyers for bases
###############################################

navaldivision = { id = { type = 30053 id = 511 } name = "HMCS St. Francis" type = destroyer model = 1 strength = 70 dormant = yes } # USS Bancroft
navaldivision = { id = { type = 30053 id = 512 } name = "HMCS St. Croix" type = destroyer model = 1 strength = 70 dormant = yes } # USS McCook
navaldivision = { id = { type = 30053 id = 513 } name = "HMCS Hamilton" type = destroyer model = 1 strength = 70 dormant = yes } # USS Kalk
navaldivision = { id = { type = 30053 id = 514 } name = "HMCS Annapolis" type = destroyer model = 1 strength = 70 dormant = yes } # USS MacKenzie
navaldivision = { id = { type = 30053 id = 515 } name = "HMCS Niagara" type = destroyer model = 1 strength = 70 dormant = yes } # USS Thatcher
navaldivision = { id = { type = 30053 id = 516 } name = "HMCS St. Clair" type = destroyer model = 1 strength = 70 dormant = yes } # USS Williams

convoy_development = {
        id = { type = 30053 id = 600 }
        cost = 0.1
        size = 99
        type = transports
        date  = {  year = 1964 }
		unitcost = yes
        }

} # End File