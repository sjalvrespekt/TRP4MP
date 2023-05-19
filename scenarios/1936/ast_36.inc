 
 ############################## 
 # Country definition for AST # 
 ############################## 
  
 province = 
 {  id         = 1726 
   naval_base = {  size =  7 current_size =  7  } 
   air_base   = {  size =  2 current_size =  2  } 
   anti_air   = 2 
  }              # Rabaul 
  
 province = 
 {  id       = 1604 
   air_base = {  size =  1 current_size =  1  } 
   anti_air = 1 
  }            # Lae 
  
 province = 
 {  id         = 1607 
   naval_base = {  size =  4 current_size =  4  } 
   air_base   = {  size =  2 current_size =  2  } 
   anti_air   = 1  
  }              # Port Moresby 
  
 province = 
 {  id         = 1697 
   anti_air   = 5
   naval_base = {  size =  10 current_size =  10  } 
   air_base   = {  size =  10 current_size =  10  } 
  }              # Darwin 
  
 province = 
 {  id          = 1690
   anti_air    = 3 
   naval_base  = {  size =  10 current_size =  10  } 
   air_base    = {  size =  10 current_size =  10  } 
   coastalfort = 1 
  }               # Perth 
  
 province = {  id =  1713 anti_air = 1  
  }               # Port Augusta 
  
 province = 
 {  id          = 1704 
   coastalfort = 1
   anti_air    = 3 
   naval_base  = {  size =  10 current_size =  10  } 
   air_base    = {  size =  10 current_size =  10  } 
  }               # Brisbane 
  
 province = {  id =  1706 anti_air = 3  
  }               # Wentworth 
  
 province = 
 {  id          = 1705
   anti_air    = 4 
   naval_base  = {  size =  10 current_size =  10  } 
   air_base    = {  size =  10 current_size =  10  } 
   coastalfort = 2 
  }               # Sydney 
  
 province = 
 {  id =  1708
   coastalfort = 1 
   anti_air = 3 
   naval_base  = {  size =  8 current_size =  8  } 
   air_base    = {  size =  6 current_size =  6  } 
  }               # Melbourne 
  
 province = {  id =  1712 anti_air = 2 naval_base  = {  size =  4 current_size =  4  }
  }               # Adelaide 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag = AST 
    
   # Resource Reserves 
   energy                 = 1000
   metal                  = 1000
   rare_materials         = 500
   oil                    = 500 
   supplies               = 500 
   money                  = 20 
   manpower               = 20
   capital                = 1707 
    
   transports             = 200
#   escorts                = 1 # all AST ships of 1936 in OOB
   
   ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 10 
     political_left    = 1 
     free_market       = 8 
     freedom           = 10 
     professional_army = 5
     defense_lobby     = 5
     interventionism   = 6 
    } 
	
	allowed_divisions = { 
        infantry = yes 
		cavalry = yes
	} 
	
	dormant_teams = { 529 } #Jungle Division tech team
	
   nationalprovinces 
   = 
{  	1697 #Darwin
	1716 #Alice Springs
	1698 #Broome
	1695 #Port Hedland
	1688 #Carnarvon
	1692 #Geraldton
	1689 #Northam
	1690 #Perth
	1694 #Collie
	1691 #Albany
	1703 #Newcastle
	1693 #Kalgoorlie
	1711 #Port Lincoln 
   	1712 #Adelaide
	1715 #Port Augusta
	1704 #Brisbane
	1705 #Sydney
	1706 #Wollongong
	1717 #Waggawagga
	1707 #Canberra
	1710 #Hobart
	1708 #Melbourne
	1709 #Geelong
	1713 #Robe
	1701 #Cairns
	1699 #Townsville
	1714 #Mount Isa
   	1700 #Rockhampton
	1702 #Toowoomba
	1696 #Katherine
} 
   ownedprovinces         
   = 
{  	1697 #Darwin
	1716 #Alice Springs
	1698 #Broome
	1695 #Port Hedland
	1688 #Carnarvon
	1692 #Geraldton
	1689 #Northam
	1690 #Perth
	1694 #Collie
	1691 #Albany
	1703 #Newcastle
	1693 #Kalgoorlie
	1711 #Port Lincoln 
   	1712 #Adelaide
	1715 #Port Augusta
	1704 #Brisbane
	1705 #Sydney
	1706 #Wollongong
	1717 #Waggawagga
	1707 #Canberra
	1710 #Hobart
	1708 #Melbourne
	1709 #Geelong
	1713 #Robe
	1701 #Cairns
	1699 #Townsville
	1714 #Mount Isa
   	1700 #Rockhampton
	1702 #Toowoomba
	1696 #Katherine
	1724 #Manus
	1725 #Kavieng
	1726 #Rabaul
	1727 #Kimbe
	1605 #Wewak
	1587 #Bougainville
	1602 #Lae
	1234 #Buna
	1603 #Mount Hagen
	1604 # Popondetta
	1606 #Dare
   	1607 #Port Moresby
	1610 #Mendi
	1608 #Kiunga
	1609 #Kerema
} 
   controlledprovinces    
   = 
{  	1697 #Darwin#
	1716 #Alice Springs#
	1698 #Broome#
	1695 #Port Hedland#
	1688 #Carnarvon#
	1692 #Geraldton#
	1689 #Northam#
	1690 #Perth#
	1694 #Collie#
	1691 #Albany#
	1703 #Newcastle#
	1693 #Kalgoorlie#
	1711 #Port Lincoln# 
   	1712 #Adelaide#
	1715 #Port Augusta#
	1704 #Brisbane#
	1705 #Sydney#
	1706 #Wollongong#
	1717 #Waggawagga#
	1707 #Canberra#
	1710 #Hobart#
	1708 #Melbourne#
	1709 #Geelong#
	1713 #Robe#
	1701 #Cairns#
	1699 #Townsville#
	1714 #Mount Isa#
   	1700 #Rockhampton#
	1702 #Toowoomba#
	1696 #Katherine#
	1724 #Manus#
	1725 #Kavieng#
	1726 #Rabaul#
	1727 #Kimbe#
	1605 #Wewak#
	1587 #Bougainville#
	1602 #Lae#
	1234 #Buna#
	1603 #Mount Hagen#
	1604 #Popondetta#
	1606 #Dare#
   	1607 #Port Moresby#
	1610 #Mendi#
	1608 #Kiunga#
	1609 #Kerema#
} 
   
   diplomacy = 
   {  
	relation = { tag = BEL value = 75 }
	relation = { tag = BHU value = 200 }
	relation = { tag = CAN value = 200 access = yes }
	relation = { tag = ENG value = 200 access = yes }
	relation = { tag = FIN value = 65 }
	relation = { tag = FRA value = 150 }
	relation = { tag = GER value = 0 }
	relation = { tag = IRE value = 75 }
	relation = { tag = IRQ value = 100 }
	relation = { tag = ITA value = 0 }
	relation = { tag = NEP value = 200 }
	relation = { tag = NZL value = 200 access = yes }
	relation = { tag = OMN value = 150 }
	relation = { tag = PHI value = 40 }
	relation = { tag = SAF value = 200 access = yes }
	relation = { tag = USA value = 125 }
	relation = { tag = YEM value = 0 } #150
    } 
   SpyInfo = {  country = "AST" NumberOfSpies = 6  } 
   
 ########################
 # technologies for AST # 
 ########################
 
   deactivate = { }
   
   techapps  = { 
                4010 4020 4040 # Single Engined 1929, Int, CAS 1930
				  
                4290 4300 4310 # double Engined 1929, tactical, naval bomber

                2800 # Basic Armoured Car

                2550 # GW tank 

                2290 2300 # GW artillery

                2450 2460 # Early Static AA

                2510 # Basic AA
				
				17000 # 1936 rocket artillery/mortars

                1010 1020 # Early infantry
				
				1310 # Early logistics

                1190 1200 1210 # Semi-moto Cavalry

                5010 # Agriculture 
				
                5080 5090 # Construction 
				
                5190 # Basic Oil Refining
				
                5310 5320 # Basic CT machine

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
				
                3800 # TP 
				
				15090 # WW1 carrier design
 } 
 
 blueprints = { 1150 } # Marines 1937
 
 #########################################
 # Royal australian army by Lord Rommel  # 
 #########################################

landunit = {
 	id = { type = 30001 id = 301 }
 	name = "Military District Brisbane"
 	location = 1704	
 		division = { id = { type = 30001 id = 302 } name = "5th Division" strength = 25 type = marine model = 0 locked = yes }	
    }

landunit = {
 	id = { type = 30001 id = 303 }
 	name = "2nd Military District"
 	location = 1705
	    division = { id = { type = 30001 id = 314 } name = "Royal Australian Army"      type = hq       model = 0 experience = 20 }
		division = { id = { type = 30001 id = 304 } name = "1st Division" strength = 30 type = garrison model = 0 }
		division = { id = { type = 30001 id = 305 } name = "2nd Division" strength = 30 type = garrison model = 0 }
		division = { id = { type = 30001 id = 306 } name = "1st Cavalry Division"  strength = 10 type = cavalry model = 1 }
	}

landunit = {
 	id = { type = 30001 id = 307 }
 	name = "3rd Division"
 	location = 1707
 		division = { id = { type = 30001 id = 308 } name = "3rd Division" strength = 25 type = marine model = 0 locked = yes }
	}
	
landunit = {
 	id = { type = 30001 id = 309 }
 	name = "3rd Military District"
 	location = 1707	
		division = { id = { type = 30001 id = 310 } name = "4th Division" strength = 30 type = garrison model = 0 }
		division = { id = { type = 30001 id = 311 } name = "2nd Cavalry Division"  strength = 10 type = cavalry model = 1 }
	}
	
#########################################
# Citizens Forces
#########################################
	
landdivision = { dormant = yes id = { type = 30001 id = 315 } name = "10th Division"    type = d_02    model = 2 }
landdivision = { dormant = yes id = { type = 30001 id = 316 } name = "11th Division"    type = d_02    model = 2 }
landdivision = { dormant = yes id = { type = 30001 id = 317 } name = "12th Division"    type = d_02    model = 2 }	
	
#########################################
# Royal australian airforce  
#########################################
	
airunit = {
 	location = 1704
	base = 1704
	id = { type = 10500 id = 311 }
	name = "Point Cook Training Establishment"
		division = { id = { type = 10500 id = 312 } name = "No.1 RAAF Naval Bomber Wing" type = naval_bomber model = 0 }
		division = { id = { type = 10500 id = 313 } name = "No.2 RAAF Naval Bomber Wing" type = naval_bomber model = 0 }	
	}
	
#########################################
# Royal australian navy  
#########################################

navalunit = {
	id = { type = 10500 id = 25 }
	name = "HM Australian Fleet"
	location = 1705 #Sydney
	base = 1705
		division = { id = { type = 10500 id = 26 } name = "HMAS Australia" type = heavy_cruiser model = 4 }
		division = { id = { type = 10500 id = 27 } name = "HMAS Canberra" type = heavy_cruiser model = 4 }
		division = { id = { type = 10500 id = 28 } name = "HMAS Sydney" type = light_cruiser model = 3 }
		division = { id = { type = 10500 id = 100 } name = "HMAS Stuart" type = d_09 model = 1 }
		division = { id = { type = 10500 id = 101 } name = "HMAS Vampire" type = destroyer model = 1 }
		division = { id = { type = 10500 id = 102 } name = "HMAS Vendetta " type = destroyer model = 1 }	
		division = { id = { type = 10500 id = 103 } name = "HMAS Voyager" type = destroyer model = 1 }
		division = { id = { type = 10500 id = 104 } name = "HMAS Waterhen " type = destroyer model = 1 }
	}

#navalunit = {
#	id = { type = 10500 id = 30 }
#	name = "Transport Flotilla"
#	location = 1705
#	base = 1705
#		division = { id = { type = 10500 id = 31 } name = "HMAS Kanimbla Flotilla" type = transport model = 0 }
#	}

navalunit = {
	id = { type = 10500 id = 32 }
	name = "HM Australian Reserve Fleet"
	location = 1705
	base = 1705
		division = { id = { type = 10500 id = 48 } name = "HMAS Albatross" type = escort_carrier model = 0 } # sold to GB later
		division = { id = { type = 10500 id = 33 } name = "HMAS Adelaide" type = light_cruiser model = 2 }
		division = { id = { type = 10500 id = 43 } name = "HMAS Stalwart" type = destroyer model = 1 strength = 40 } # wrecked 1937
		division = { id = { type = 10500 id = 44 } name = "HMAS Success" type = destroyer model = 1 strength = 40 } # wrecked 1937
		division = { id = { type = 10500 id = 45 } name = "HMAS Swordsman" type = destroyer model = 1 strength = 40 } # wrecked 1937
		division = { id = { type = 10500 id = 46 } name = "HMAS Tasmania" type = destroyer model = 1 strength = 40 } # wrecked 1937
		division = { id = { type = 10500 id = 47 } name = "HMAS Tattoo" type = destroyer model = 1 strength = 40 } # wrecked 1937
		}

navalunit = {
	id = { type = 10500 id = 35 }
	name = "HMAS Kanimbla Flotilla"
	location = 1705
	base = 1705
	division = { id = { type = 10500 id = 36 } name = "M/S Rona" type = transport model = 0 }
	division = { id = { type = 10500 id = 37 } name = "M/S Salamaua" type = transport model = 0 }
	division = { id = { type = 10500 id = 38 } name = "M/S William Macarthur" type = transport model = 0 }
	division = { id = { type = 10500 id = 39 } name = "M/S Iron Warrior" type = transport model = 0 }
	division = { id = { type = 10500 id = 40 } name = "M/S Iron Baron" type = transport model = 0 }
	division = { id = { type = 10500 id = 41 } name = "M/S Iron Master" type = transport model = 0 }
	division = { id = { type = 10500 id = 42 } name = "M/S Iron Knob" type = transport model = 0 }
	} 
	
   # Note on Warships Under Construction or Refit# 
   # HMAS Adelaide was refitted by 1939. 
   # Adelaide had a max speed of only 24 knots. 

convoy_development = {
        id = { type = 10500 id = 200 }
        cost = 0.1
        size = 99
        type = transports
        date  = {  year = 1964 }
		unitcost = yes
        }

   
  } 
 