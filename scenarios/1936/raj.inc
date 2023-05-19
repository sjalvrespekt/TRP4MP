############################## 
# 2011-03-24 Britisches Raj Für Darkest Hour
# @ Dendro & Lord Rommel & DerStudti
############################## 
# Installations
#################

province = { id = 1415 anti_air = 3 air_base = { size = 4 current_size = 4 } naval_base = { size = 10 current_size = 10 }} #Rangoon
province = { id = 1533 anti_air = 1 air_base = { size = 8 current_size = 8 } naval_base = { size = 8 current_size = 8 }} #Karachi
province = { id = 1459 anti_air = 2 air_base = { size = 4 current_size = 4 }} #Delhi
province = { id = 1481 anti_air = 1 air_base = { size = 4 current_size = 4 }} #Indore
province = { id = 1497 anti_air = 1 air_base = { size = 4 current_size = 4 }} #Kochi
province = { id = 1447 anti_air = 2 air_base = { size = 4 current_size = 4 } naval_base = { size = 3 current_size = 3 } } #Calcutta
province = { id = 1410 anti_air = 1 air_base = { size = 4 current_size = 4 }} #Manta Le

##################### 
# Country main data # 
##################### 
  
 country = 
{ tag = U02
   puppet = ENG
   control = ENG
  # peacetime_ic_mod = 0.5
   industrial_modifier = 0.2

# Resource Reserves 
	energy                 = 1000
	metal                  = 1000
	rare_materials         = 500
	oil                    = 500 
	supplies               = 500 
	money                  = 30 
	manpower = 1
	capital = 1459
   
	transports             = 100
	escorts                = 2
 


	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = { 
	date = { year = 0 month = january day = 0  } 
     	democratic        = 10 
     	political_left    = 2 
     	freedom           = 10 
     	free_market       = 8 
     	professional_army = 5 
     	defense_lobby     = 5 
     	interventionism   = 3 
} 

allowed_divisions = { 
        garrison = yes 
} 

diplomacy = { 
	relation = { tag = AFG value = 0 }
	relation = { tag = AST value = 200 access = yes }
	relation = { tag = BHU value = 200 }
	relation = { tag = CAN value = 200 access = yes }
	relation = { tag = EGY value = 200 access = yes }
	relation = { tag = FRA value = 150 }
	relation = { tag = GER value = 0 }
	relation = { tag = HOL value = 125 }
	relation = { tag = ITA value = -50 }
	relation = { tag = NEP value = 200 }
	relation = { tag = NZL value = 200 access = yes }
	relation = { tag = OMN value = 150 access = yes }
	relation = { tag = PER value = 25 }
	relation = { tag = SAF value = 200 access = yes }
	relation = { tag = SIA value = 0 }
	relation = { tag = YEM value = 0 } # was: 150, access = yes
} 

# native indian leaders
dormant_leaders = {	585163 
					585001
					585006
					585019
					585026
					585038
					585054
					585067
					585073
					585077
					585078
					585080
					585091
					585095
					585099
					585009
					585010
					585178
					585179
					585180
					585181
					585182
					585183
					585184
					585185
					585186
					585187
					585188
					585189
					585190
					585191
					585192
					585193
					585194
					585195
					585196
					585197
					585198
					585199
					585200
					585201
					585202
					585203
					585204
					585205
					585206
					585207
					585208
					585209
					585113
					585210
					585115
					585116
					585117
					585118
					585120
					585122
					585124
					585127
					585128
					585131
					585138
					585142
					585145
					585211
					585212
					585146
					585147
					585148
					585149
					585150
					585154
					585155
					585157
					585158
					585160
					585164
					585168
					585170
					585171
					585172
					585173
					585174
							}



   SpyInfo                = {  country = "U02" NumberOfSpies = 9  } 
   

	


 

#  Provinces
#################################################
#################################################

nationalprovinces      = {

#Burma
#######                 
 1406 # Haka
 1407 # Indaw
 1408 # Myitkyina
 1409 # Lashio
 1410 # Mandalay
 1411 # Pakokdu
 1412 # Taunggyi
 1413 # Kengtung
 1414 # Putao
 1415 # Rangoon
 1416 # Moulmein
 1417 # Pegu
 1418 # Tavoy
 1419 # Bassein
 1420 # Akyab
 # 1421 # Port Blair Islands/To UK!
 1439 # Gauhati
 1440 # Aijal
 1441 # Dibrugarh
 1442 # Imphal
 1443 # Dhubri
 1445 # Dhaka
 1450 # Cattagram
 1455 # Itanagar
 1458 # Mipi



#India  
#######
 1444 # Khulna
 1446 # Siliguri
 1447 # Calcutta
 1448 # Kharagpur
 1449 # Rajshahi
 1451 # Dehradun
 1452 # Gangtok
 1453 # Dharmasala
 1454 # Simla
 1459 # Dehli ############ Capital
 1460 # Merath
 1461 # Lucknow
 1462 # Muzaffarpur
 1463 # Chandigarh
 1464 # Bareli
 1465 # Patna
 1466 # Arrah
 1467 # Gorakhpur
 1468 # Cawnpore
 1469 # Raigarh
 1470 # Balangir
 1471 # Bhubanesbar
 1472 # Jamshedpur
 1473 # Kataka
 1474 # Jeypore
 1475 # Bastar
 1476 # Ranchi
 1477 # Raipur
 1478 # Burhanpur
 1479 # Jubbulpore
 1480 # Bhopal
 1481 # Indhur
 1482 # Amaravati
 1483 # Rewa
 1484 # Chhindwara
 1485 # Nagpur
 1486 # Aurangabad
 1487 # Hyderabad 
 1488 # Warangal
 1489 # 1489
 1490 # Raichur
 1491 # Nalgonda
 1492 # Adilabad
 1493 # Vizagapatam
 1494 # Nellore
 1495 # Trivandrum
 1496 # Gunturu
 1497 # Cochin
 1498 # Bezawada
 1499 # Trichinopoly
 1500 # Madras
 1501 # Anantapur
 1502 # Bangalore
 1503 # Mangalore
 1504 # Madurai
 1505 # Coimbatore
 1506 # Salem
 1507 # Mysore
 1508 # Solapur
 1512 # Kolhapur
 # 1513 # Panjim #### Portuguese Colony
 1514 # Nasik
 1515 # Hubli
 1516 # Poona
 # 1517 # Bombay  #### British Harbour/To UK!
 1518 # Ahmedabad
 1519 # Mandvi
 1520 # Surat
 1521 # Baroda
 1522 # Rajkot
 1523 # Gwalior
 1524 # Jaypur
 1525 # Jodhpur
 1526 # Udaypur
 1527 # Bikaner
 1528 # Kotah
 1530 # Lahore
 1531 # Ludhiana
 1532 # Nawabshah
 1535 # Amritsar
 1536 # Bahawalnagar



#Ceylon
#########
#To UK######
#  1510 #Kandy
#  1511 #Colombo
#  1509 #Mahawilachchiya


#Pakistan 
#######
 1278 # Sumdo
 1529 # Quetta
 1533 # Karachi
 1534 # Rawalpindi
 1537 # Peshawar
 1538 # Gwadar
 1539 # Muzaffarabad
 1540 # Srinagar

} 
   

ownedprovinces         = {   

#Burma
#######                 
 1406 # Haka
 1407 # Indaw
 1408 # Myitkyina
 1409 # Lashio
 1410 # Mandalay
 1411 # Pakokdu
 1412 # Taunggyi
 1413 # Kengtung
 1414 # Putao
 1415 # Rangoon
 1416 # Moulmein
 1417 # Pegu
 1418 # Tavoy
 1419 # Bassein
 1420 # Akyab
 # 1421 # Port Blair Islands/To UK!
 1439 # Gauhati
 1440 # Aijal
 1441 # Dibrugarh
 1442 # Imphal
 1443 # Dhubri
 1445 # Dhaka
 1450 # Cattagram
 1455 # Itanagar
 1458 # Mipi



#India  
#######
 1444 # Khulna
 1446 # Siliguri
 1447 # Calcutta
 1448 # Kharagpur
 1449 # Rajshahi
 1451 # Dehradun
 1452 # Gangtok
 1453 # Dharmasala
 1454 # Simla
 1459 # Dehli ############ Capital
 1460 # Merath
 1461 # Lucknow
 1462 # Muzaffarpur
 1463 # Chandigarh
 1464 # Bareli
 1465 # Patna
 1466 # Arrah
 1467 # Gorakhpur
 1468 # Cawnpore
 1469 # Raigarh
 1470 # Balangir
 1471 # Bhubanesbar
 1472 # Jamshedpur
 1473 # Kataka
 1474 # Jeypore
 1475 # Bastar
 1476 # Ranchi
 1477 # Raipur
 1478 # Burhanpur
 1479 # Jubbulpore
 1480 # Bhopal
 1481 # Indhur
 1482 # Amaravati
 1483 # Rewa
 1484 # Chhindwara
 1485 # Nagpur
 1486 # Aurangabad
 1487 # Hyderabad 
 1488 # Warangal
 1489 # 1489
 1490 # Raichur
 1491 # Nalgonda
 1492 # Adilabad
 1493 # Vizagapatam
 1494 # Nellore
 1495 # Trivandrum
 1496 # Gunturu
 1497 # Cochin
 1498 # Bezawada
 1499 # Trichinopoly
 1500 # Madras
 1501 # Anantapur
 1502 # Bangalore
 1503 # Mangalore
 1504 # Madurai
 1505 # Coimbatore
 1506 # Salem
 1507 # Mysore
 1508 # Solapur
 1512 # Kolhapur
 # 1513 # Panjim 
 1514 # Nasik
 1515 # Hubli
 1516 # Poona
 # 1517 # Bombay  #### British Harbour/To UK!
 1518 # Ahmedabad
 1519 # Mandvi
 1520 # Surat
 1521 # Baroda
 1522 # Rajkot
 1523 # Gwalior
 1524 # Jaypur
 1525 # Jodhpur
 1526 # Udaypur
 1527 # Bikaner
 1528 # Kotah
 1530 # Lahore
 1531 # Ludhiana
 1532 # Nawabshah
 1535 # Amritsar
 1536 # Bahawalnagar



#Ceylon
#########
#To UK######
#  1510 #Kandy
#  1511 #Colombo
#  1509 #Mahawilachchiya


#Pakistan 
#######
 1278 # Sumdo
 1529 # Quetta
 1533 # Karachi
 1534 # Rawalpindi
 1537 # Peshawar
 1538 # Gwadar
 1539 # Muzaffarabad
 1540 # Srinagar

} 

controlledprovinces = { 

#Burma
#######                 
 1406 # Haka#
 1407 # Indaw#
 1408 # Myitkyina#
 1409 # Lashio#
 1410 # Mandalay#
 1411 # Pakokdu#
 1412 # Taunggyi#
 1413 # Kengtung#
 1414 # Putao#
 1415 # Rangoon#
 1416 # Moulmein#
 1417 # Pegu#
 1418 # Tavoy#
 1419 # Bassein#
 1420 # Akyab#
 # 1421 # Port Blair Islands/To UK!
 1439 # Gauhati#
 1440 # Aijal#
 1441 # Dibrugarh#
 1442 # Imphal#
 1443 # Dhubri#
 1445 # Dhaka#
 1450 # Cattagram#
 1455 # Itanagar#
 1458 # Mipi#



#India  
#######
 1444 # Khulna#
 1446 # Siliguri#
 1447 # Calcutta#
 1448 # Kharagpur#
 1449 # Rajashahi#
 1451 # Dehradun#
 1452 # Gangtok#
 1453 # Dharmasala#
 1454 # Simla#
 1459 # Dehli ############ Capital#
 1460 # Merath#
 1461 # Lucknow#
 1462 # Muzaffarpur#
 1463 # Chandigarh#
 1464 # Bareli#
 1465 # Patna#
 1466 # Arrah#
 1467 # Gorakhpur#
 1468 # Cawnpore#
 1469 # Raigarh#
 1470 # Balangir#
 1471 # Bhubanesbar#
 1472 # Jamshedpur#
 1473 # Kataka#
 1474 # Jeypore#
 1475 # Bastar#
 1476 # Ranchi#
 1477 # Raipur#
 1478 # Burhanpur#
 1479 # Jubbulpore#
 1480 # Bhopal#
 1481 # Indhur#
 1482 # Amaravati#
 1483 # Rewa#
 1484 # Chhindwara#
 1485 # Nagpur#
 1486 # Aurangabad#
 1487 # Hyderabad#
 1488 # Warangal#
 1489 # Nizamabad#
 1490 # Raichur#
 1491 # Nalgonda#
 1492 # Adilabad#
 1493 # Vizagapatam#
 1494 # Nellore#
 1495 # Trivandrum#
 1496 # Gunturu#
 1497 # Cochin#
 1498 # Bezawada#
 1499 # Trichinopoly#
 1500 # Madras#
 1501 # Anantapur#
 1502 # Bangalore#
 1503 # Mangalore#
 1504 # Madurai#
 1505 # Coimbatore#
 1506 # Salem#
 1507 # Mysore#
 1508 # Solapur#
 1512 # Kolhapur#
 # 1513 # Panjim#
 1514 # Nasik#
 1515 # Hubli#
 1516 # Poona#
 # 1517 # Bombay  #### British Harbour/To UK!
 1518 # Ahmedabad#
 1519 # Mandvi#
 1520 # Surat#
 1521 # Baroda#
 1522 # Rajkot#
 1523 # Gwalior#
 1524 # Jaypur#
 1525 # Jodhpur#
 1526 # Udaypur#
 1527 # Bikaner#
 1528 # Kotah#
 1530 # Lahore#
 1531 # Ludhiana#
 1532 # Nawabshah#
 1535 # Amritsar#
 1536 # Bahawalnagar#



#Ceylon
#########
#To UK######
#  1510 #Kandy#
#  1511 #Colombo#
#  1509 #Mahawilachchiya#


#Pakistan 
#######
 1278 # Sumdo#
 1529 # Quetta#
 1533 # Karachi#
 1534 # Rawalpindi#
 1537 # Peshawar#
 1538 # Gwadar#
 1539 # Muzaffarabad#
 1540 # Srinagar#

} 

 ###################
 # technology data #
 ###################
 
   deactivate = { }
   
   techapps = { 
   
4010 4020 4030 4040 # Single Engined 1929, Int, Fighter, CAS 1930
4050 # Single Engined 1936

4290 4300 4310 4320 # Double Engined 1929, tactical, naval, escort brigade 1930
4330 4370 # Double Engined 1936, Transport 1937

# 4570 # CAG 1930
# 4520 # Strategic 1930

9010 9020 9030 # Aerial warfare, basic doctrines

2800 # Basic Armoured Car

#############################

2550 # Tanks

2290 2300 # GW artillery

2450 2460 # Early Static AA

2510 # Basic AA

17000 # 1936 rocket artillery/mortars

1010 1020 # Early infantry

1190 1200 1210 # Semi-moto Cavalry
# 1110 # Early Mountain
2400 #AT
# 1150 # Early Marine
1310 #Engineers
5010 # Agriculture
5050 # Basic Machine Tools
5080 5090 # Construction (up to the forts)
# 5190 5200 #  Oil Refining
# 5310 5320 # Basic CT machine
# 5410 # Basic Dec. Radar
# 5470 5480 # Nukes labs

6100 6110 6120 # Trench Warfare doctrine (land)

##Navy doctrines
8010 8070 8130 8180 8240 8370 8610 8660 8710 8760
###navy
# Escorts up to pre-WW2
3010	3040	3070	3100
3020	3050	3080 # DD just up to Washington!
3030 15250	3060	3090	3120

3800 # Prewar TP


} 
   
 ################################################################ 
 # army datas by Lord Rommel
 ################################################################ 
    
	landdivision = { dormant = yes id = { type = 12700 id = 6710 } name = "11th (East Africa) Division" type = infantry model = 3 strength = 100 }
	landdivision = { dormant = yes id = { type = 12700 id = 6711 } name = "81st (West Africa) Division" type = infantry model = 3 strength = 100 }
	landdivision = { dormant = yes id = { type = 12700 id = 6712 } name = "82nd (West Africa) Division" type = infantry model = 3 strength = 100 }	
	landdivision = { dormant = yes id = { type = 12700 id = 6533 } name = "Bikaner Camel Corps" type = cavalry  model = 2 strength = 35 extra = light_armor_brigade brigade_model = 3 } 
	landdivision = { dormant = yes id = { type = 12700 id = 6534 } name = "5th Indian Division" type = infantry model = 1 strength = 35 extra = artillery           brigade_model = 2 }
	#For AI only
	landdivision = { dormant = yes locked = yes id = { type = 12700 id = 6535 } name = "Indian Frontier Force"  type = garrison model = 1 extra = anti_air brigade_model = 2 }
	
# Indian army
	
landunit = {
	name = "Indian Northern Command"
	location = 1534
	id = { type = 12700 id = 6500 }
	    #division = { id = { type = 12700 id = 6501 } name = "Northern Command" type = hq model = 0 strength = 10 }
		division = { id = { type = 12700 id = 6502 } name = "1st Indian Division" type = infantry model = 0 strength = 35 extra = armored_car brigade_model = 0 }
	}

landunit = {
	name = "Indian Eastern Command"
	location = 1460
	id = { type = 12700 id = 6503 }
	    #division = { id = { type = 12700 id = 6504 } name = "Eastern Command" type = hq model = 0 strength = 10 }
		division = { id = { type = 12700 id = 6505 } name = "3th Indian Division" type = infantry model = 0 strength = 35 extra = armored_car brigade_model = 0 }
	}
	
landunit = {
	name = "Indian Southern Command"
	location = 1516
	id = { type = 12700 id = 6506 }
	    #division = { id = { type = 12700 id = 6507 } name = "Southern Command" type = hq model = 0 strength = 10 }
		division = { id = { type = 12700 id = 6508 } name = "4th Indian Division" type = infantry model = 0 strength = 35 extra = armored_car brigade_model = 0}
	}
	
# District forces	
	
landunit = {
	name = "Peshawar District"
	location = 1537
	id = { type = 12700 id = 6509 }
		division = { id = { type = 12700 id = 6510 } name = "Peshawar District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Kohat District"
	location = 1537
	id = { type = 12700 id = 6511 }
		division = { id = { type = 12700 id = 6512 } name = "Kohat District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Rawalpindi District"
	location = 1534
	id = { type = 12700 id = 6513 }
		division = { id = { type = 12700 id = 6514 } name = "Rawalpindi District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Lahore District"
	location = 1530
	id = { type = 12700 id = 6515 }
		division = { id = { type = 12700 id = 6516 } name = "Lahore District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Waziristan District"
	location = 1537
	id = { type = 12700 id = 6517 }
		division = { id = { type = 12700 id = 6518 } name = "Waziristan District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Meerut District"
	location = 1460
	id = { type = 12700 id = 6519 }
		division = { id = { type = 12700 id = 6520 } name = "Meerut District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Lucknow District"
	location = 1461
	id = { type = 12700 id = 6521 }
		division = { id = { type = 12700 id = 6522 } name = "Lucknow District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Jalapahur District"
	location = 1463
	id = { type = 12700 id = 6523 }
		division = { id = { type = 12700 id = 6524 } name = "Jalapahur District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Deccan District"
	location = 1516
	id = { type = 12700 id = 6525 }
		division = { id = { type = 12700 id = 6526 } name = "Deccan District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Bombay District"
	location = 1517
	id = { type = 12700 id = 6527 }
		division = { id = { type = 12700 id = 6528 } name = "Bombay District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Madras District"
	location = 1502
	id = { type = 12700 id = 6529 }
		division = { id = { type = 12700 id = 6530 } name = "Madras District" type = garrison model = 0 strength = 80 }
	}
	
landunit = {
	name = "Western District"
	location = 1529
	id = { type = 12700 id = 6531 }
		division = { id = { type = 12700 id = 6532 } name = "Western District" type = garrison model = 0 strength = 80 }
	}
	
###################################################
# Indian Airforce
# RIAF used Hawker Hart and Westland Wapiti planes 
# in 1936. They formed the 1st RIAF wing.
###################################################
	
airunit = {
	location = 1459 #Delhi
	base = 1459
    id = { type = 12700 id = 6600 }
	name = "Royal Indian Airforce"
		division = { id = { type = 12700 id = 6601 } name = "1st RIAF Wing" type = tactical_bomber model = 0 strength = 40 }
	}

##############################################################################
# Indian Navy
# 5 sloops in 1936.
##############################################################################

navalunit = { 
	name = "Royal Indian Navy" 
	id = { type = 12700 id = 6700 } 
	location = 1533 #Karachi
	base = 1533 #Karachi
		division = { id = { type = 12700 id = 6701 } name = "HMIS Indus" type = d_09 model = 0 } # sloop
		division = { id = { type = 12700 id = 6702 } name = "HMIS Hindustan" type = d_09 model = 0 } # sloop
		division = { id = { type = 12700 id = 6703 } name = "HMIS Cornwallis" type = d_09 model = 0 } # sloop; slow; mainly convoy escort
		division = { id = { type = 12700 id = 6704 } name = "HMIS Clive" type = d_09 model = 0 } # sloop; slow; mainly convoy escort
		division = { id = { type = 12700 id = 6705 } name = "HMIS Lawrence" type = d_09 model = 0 } # sloop; slow; mainly convoy escort
} 



	
}