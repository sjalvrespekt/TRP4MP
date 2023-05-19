# geändert Zergel, 03.11.2010, Anpassung Province ID an DH

#Kwantung Army

province = { id = 1228 naval_base = { size = 1 current_size = 1 }}

country = {
	tag = U00
	regular_id = JAP
	#puppet = JAP
	#control = JAP	
	belligerence = 10
	capital = 1228

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 5
		political_left = 3
		freedom = 3
		free_market = 3
		professional_army = 3
		defense_lobby = 8
		interventionism = 8
    }
    allowed_divisions = { 
        infantry = yes 
        cavalry = yes 
	} 
	
	diplomacy = {
		relation = { tag = BEL value = -25 }
		relation = { tag = CGX value = -75 }
		relation = { tag = CHC value = -200 }
		relation = { tag = CHI value = -100 }
		relation = { tag = CHL value = 20 }
		relation = { tag = CSX value = -75 }
		relation = { tag = CXB value = -75 }
		relation = { tag = CYN value = -75 }
		relation = { tag = ENG value = -25 }
		relation = { tag = ETH value = 35 }
		relation = { tag = FIN value = 20 }
		relation = { tag = FRA value = -20 }
		relation = { tag = GER value = 20 }
		relation = { tag = HOL value = -50 }
		relation = { tag = MAN value = 200 access = yes }
#		relation = { tag = MEN value = 200 access = yes }
		relation = { tag = JAP value = 200 access = yes }
		relation = { tag = U03 value = 70 access = yes }
		relation = { tag = PHI value = 0 }
		relation = { tag = SIA value = 75 }
		relation = { tag = SOV value = -10 }
		relation = { tag = USA value = 15 } 
	}		

  SpyInfo                = { country = "U00" NumberOfSpies = 8 }

	manpower = 145

	# Resource Reserves
	energy	=		1000 
	metal	= 		1000	
	rare_materials =	500	
	oil =			500	
	supplies =		3500
	money = 		100

	transports = 175 # + 700 in Japan, 975 in total
	escorts = 11 # + 70 in Japan; 81 in total
	
	ownedprovinces = {
 		#Korea
 		1225 #Cheongjin->Chongyin
 		1226 #Ganggye->Heysan
 		1227 #Hamheung->Hamhung/Heysan
 		1224 #Sinuiju->Sinuiju/Ganggye
 		1223 #Wonsan
 		1221 #Pyongyang
 		1228 #Seoul
 		1233 #Chuncheon->Chunchon
 		1231 #Daegu
 		1232 #Busab->Busan
 		1230 #Gwangju
 		1222 #Sariwon->Seoul
 		1229 #Daejeon-Seoul 
		
		#Manchurei
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1212 #Yanji->Jilin/Liaoyuan
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1220 #Dandong->Dalian
 		1218 #Panjin->Jinxi
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1211 #Hunjiang->Adong/Liaoyuan
 		1215 #Fushun->Adong
 		1217 #Anshan->Dalian
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		#1245 #Tangshan
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
 		1235 #Fuxin->Changde
 		1216 #Jinzhou->Jinxi

		#Japan
		# 1219 #Port Arthur
	}
	controlledprovinces = {
		#Korea
 		1225 #Cheongjin->Chongyin
 		1226 #Ganggye->Heysan
 		1227 #Hamheung->Hamhung/Heysan
 		1224 #Sinuiju->Sinuiju/Ganggye
 		1223 #Wonsan
 		1221 #Pyongyang
 		1228 #Seoul
 		1233 #Chuncheon->Chunchon
 		1231 #Daegu
 		1232 #Busab->Busan
 		1230 #Gwangju
 		1222 #Sariwon->Seoul
 		1229 #Daejeon-Seoul

		#Manchurei
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1212 #Yanji->Jilin/Liaoyuan
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1220 #Dandong->Dalian
 		1218 #Panjin->Jinxi
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1211 #Hunjiang->Adong/Liaoyuan
 		1215 #Fushun->Adong
 		1217 #Anshan->Dalian
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		#1245 #Tangshan
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
 		1235 #Fuxin->Changde
 		1216 #Jinzhou->Jinxi

		#Japan
		# 1219 #Port Arthur
	}
	nationalprovinces =   {
		#Korea
 		1225 #Cheongjin->Chongyin
 		1226 #Ganggye->Heysan
 		1227 #Hamheung->Hamhung/Heysan
 		1224 #Sinuiju->Sinuiju/Ganggye
 		1223 #Wonsan
 		1221 #Pyongyang
 		1228 #Seoul
 		1233 #Chuncheon->Chunchon
 		1231 #Daegu
 		1232 #Busab->Busan
 		1230 #Gwangju
 		1222 #Sariwon->Seoul
 		1229 #Daejeon-Seoul
		
		#Manchurei
 		1202 #Jiamusi->Jixi/Jiamusi
 		1204 #Jixi
 		1212 #Yanji->Jilin/Liaoyuan
 		1205 #Mudanjiang->Jilin/Mudanjiang
 		1199 #Harbin
 		1203 #Qiqihaer
 		1200 #Human->Mohe
 		1206 #Haila'er->Heilar
 		1213 #Baicheng->Ulan Hot
 		1237 #Ulayanqada->Xililnhot/Erenhot
 		1220 #Dandong->Dalian
 		1218 #Panjin->Jinxi
 		1201 #Heihe
 		1208 #Changchun->Mukden
 		1209 #Wulanhaote->Ulan Hot/Xilinhot
 		1210 #Tongliyao Hot->Chifeng
 		1211 #Hunjiang->Adong/Liaoyuan
 		1215 #Fushun->Adong
 		1217 #Anshan->Dalian
 		1197 #Hegang->Heihe
 		1198 #Butehaqi->Qiqihar
 		#1245 #Tangshan
 		1240 #Sili-yin Qota->Xilinhot/Erenhot
 		1236 #Chengde->Changde
 		1235 #Fuxin->Changde
 		1216 #Jinzhou->Jinxi

		#Japan
		1219 #Port Arthur
	}

	claimedprovinces = {	
	1331 #Yantai
	1328 #Quingdao
	1329 #Weifang
	1333 #Huaiyin
	1332 #Zaozhuang
	1261 #Longnan
	1303 #Anshun
	1339 #Suzhou
	1323 #Anyang
	1321 #Xinxiang=>Anyang
	1334 #Nantong
	1336 #Xuzhou
	1340 #Hefei
	1341 #Fuyang
	1319 #Kaifeng
	1322 #Luoyang
	1324 #Zhengzhou
	1325 #Nanyang
	1326 #Xinyang
	1316 #Suizhou=>Xiangfan
	1317 #Wuhan=>Hankou
	1344 #Anqing
	1342 #Xuanzhou=>Wuhu
	1337 #Nanjing
	1338 #Shanghai
	1345 #Hangzhou
	1346 #Ningbo
	1347 #Wenzhou
	1348 #Jinhua=>Ningbo(split)
	1357 #Nanping
	1358 #Fuzhou
	1359 #Sanming
	1360 #Xiamen
	1354 #Ganzhou
	1353 #Jiujiang
	1318 #Huangshi
	1355 #Ji'an=>Zhuzhou
	1309 #Xiangtan=>Shaoyang(split)
	1311 #Chenzhou
	1312 #Hengyang
	1310 #Changde
	1304 #Zunyi
	1302 #Wanxian
	1258 #Xi'an
	1262 #Linxia=>Xining(split)
	1257 #Tongguan=>Xi'an(split)
	1296 #Guanxiang=>Ya'an(split)
	1297 #Chengdu
	1298 #Luzhou=>Zigong
	1305 #Guiyang
	1306 #Kaili
	1313 #Shashi
	1307 #Huaihua
	1308 #Changsha
	1356 #Zhangzhou=>Longyang
	1349 #Xingan=>Pingxiang
	1335 #Yancheng=>Nantong(split)
	1314 #Shiyan=>Enshi
	1315 #Yichang
	1267 #Ankang/Nancheng
	1320 #Xuchang
	1299 #Chongqing
	1343 #Huainan=>Yangzhou
	1301 #Fuling
	1350 #Jindezhen=>Quzhou
	1351 #Shangrao
	1352 #Nanchang
	1264 #Lanzhou
	1263 #Tianshui
	1256 #Baoji
#Yunnan          
	1389 #Baoshan
	1390 #Kunming
	1384 #Luxi=>Baoshan(split)
	1385 #Dali
	1386 #Pu'er=>Jinghong(split)
	1387 #Jinghong
	1388 #Gejiung
	1300 #Yibin
	1291 #Xichang=>Ya'an(split)
	1292 #Ya'an
	1293 #Panzhihua=>Kangding
#Guangxi-Clique
 	1378 #Guilin
 	1380 #Liuzhou
	1383 #Wuzhou
 	1381 #Bose
 	1379 #Nanning
 	1374 #Pingxiang->Quinzhou
 	1376 #Debao->Bose
 	1382 #Hechi->Lizhou
 	1368 #Shaoguan
 	1369 #Guangzhou
 	1375 #Shantou->Chao´an
 	1370 #Lufeng->Bao´an
 	1373 #Jiangmen
 	1377 #Yulin->Maoming
 	1367 #Naoming->Zhanjiang, Maoming
 	1365 #Haikou->Hainan
#Shanxi       
	1241 #Tianjin
	1247 #Beiping
	1246 #Zhangyan=>Kalgan
	1251 #Datong
	1242 #Shijiazhuang
	1254 #Hequ=>Taiyuan
	1252 #Taiyuan
	1253 #Linfen=>Changzhi(split)
	1248 #Changzhi
	1249 #Yangquan=>Handan
	1250 #Lingqui
	1327 #Heze
	1243 #Baoding
	1244 #Changzhou=>Yucheng
	1330 #Jinan 
	1238 #Huhehaote=>Hohot
	1239 #Jining 
#Manchoukou
	1214 #Shenyang->Mukden
	1207 #Jilin->Xinjing
#Kwantung Armee
 	1202 #Jiamusi->Jixi/Jiamusi
 	1204 #Jixi
 	1212 #Yanji->Jilin/Liaoyuan
 	1205 #Mudanjiang->Jilin/Mudanjiang
 	1199 #Harbin
 	1203 #Qiqihaer
 	1200 #Human->Mohe
 	1206 #Haila'er
 	1213 #Baicheng->Ulan Hot
 	1237 #Ulayanqada->Xililnhot/Erenhot
 	1220 #Dandong->Dalian
 	1218 #Panjin->Jinxi
 	1201 #Heihe
 	1208 #Changchun->Mukden
 	1209 #Wulanhaote->Ulan Hot/Xilinhot
 	1210 #Tongliyao Hot->Chifeng
 	1211 #Hunjiang->Adong/Liaoyuan
 	1215 #Fushun->Adong
 	1217 #Anshan->Dalian
 	1197 #Hegang->Heihe
 	1198 #Butehaqi->Qiqihar
 	1245 #Tangshan
 	1240 #Sili-yin Qota->Xilinhot/Erenhot
 	1236 #Chengde->Changde
 	1235 #Fuxin->Changde
 	1216 #Jinzhou->Jinxi 
#Xibei san ma            
	1269 #Uqai=>Yuling
	1268 #Yinchuan
	1270 #Bayan Hot=>Bayan Nur
	1271 #Wuzhong=>Guyuan
	1272 #Linhe=>Bayan Nur(split)
	1265 #Zhangye=>Jinchang
	1266 #Yumen=>Dunhuang
	1283 #Ge'ermu=>Golmud
	1284 #Xining
	1285 #Yushu
#Tibet      
	1286 #Senge Khabab=>Gar
	1287 #Sger Rtse=>Nagqu
 	1288 #Rgyal Rtse=>Kagar/Xigaze
 	1289 #Lhasa
 	1290 #Ri Bo Che=>Quamdo
	1295 #Nying Khri=>Quamdo
	1294 #Chab Mdo=>Quamdo 
#Sinkiang        
	1279 #Kaxgar=>Kashgar
 	1274 #Qarqan=>Hotan
 	1282 #Xoten=>Taklimakan Desert
 	1275 #Aqsu=>Aksu
 	1280 #Ghulja
 	1281 #Urumqi
 	1277 #Qumul=>Altay
 	1276 #Karamay
 	1273 #Aletai=>Altay
#India        
	1278 #Sumdo 
#Communist China      
	1259 #Yan'an
	1260 #Yulin
	1255 #Pingliang
#Japan In China     
#	1219 #Port Arthur
#European Possessions     
	1371 #Hongkong
	1372 #Macao
#Taiwan     
#	1361 #Gaoxiong
#	1362 #Taipei
#	1363 #Taizhong
#	1364 #Hualian
#Mongolia 
#	1124 #Ulaabaatar
#	1123 #Olgii=>Khobdo
#	1125 #Muren
#	1121 #Bayankhongor
#	1122 #Arvaikheer
#	1120 #Choibalsan
}

	deactivate = { }

	techapps = {
		# JAP 1936 techs
		#######################
		
#####################
# Aircraft techs
#####################
4010 4020 4040 # Single Engined 1929, Int CAS 1930
4050 # Single Engined 1936

4290 4300 # double Engined 1929, tactical 1930

9010 9020 9030 # Aerial warfare, basic doctrines
#############################
		
		2800 # Basic Armoured Car
		
		2550 2630 # Tanks
		
		2290 2300 # GW artillery
		
		2450 # Early Static AA
		
		2460 2510 # Basic AA
		
		1010 1020 # Early infantry
		
		1190 1200 # Early cavalry
		
		1310 # Engineers
		
		2400 #AT
				
		5010 # Agriculture (basic)
		5080 5090  # Construction 
		5190 # Basic Oil Refining
		5310 5320 5350 # Encryption
		5470 # Nukes
		

		
		#6010 6030 6110 6120 # Trench Warfare doctrine (land)
		6400 6410 6420 # Light Infantry
		
				
3010 # Prewar Escorts
3800 3810 # Prewar and 1936 TP
	}

blueprints = { 1150 3250 3260 4360 2010 } # reflects Shokaku ( CV )
inventions = { 8022 } # Heavy BB

	
#####################################################
#KWA IJA - Imperial Japanese Army - Kwantung Army 
#####################################################	
# by Lord Rommel - 3.11.201 #
#####################################################	
#KWA Divisions
#####################################################	

landunit = {
	id = { type = 13016 id = 501 }
	name = "Kantogun" # Hsinking Manchukuo
	location = 1199  	    
	    division = { id = { type = 13016 id = 502 } name = "IJA Kantogun"     type = hq          model = 0 experience = 50 } 
		division = { id = { type = 13016 id = 503 } name = "1 Konseiryodan"   type = mechanized  model = 0 strength = 25     experience = 50 }
		division = { id = { type = 13016 id = 504 } name = "11 Konseiryodan"  type = d_02        model = 1 extra = artillery brigade_model = 1 experience = 20 }
		division = { id = { type = 13016 id = 505 } name = "2 Kibei Ryodan"   type = cavalry     model = 1 strength = 20     experience = 25 } #Cavlary brigade
		division = { id = { type = 13016 id = 506 } name = "3 Kibei Ryodan"   type = cavalry     model = 1 strength = 20     experience = 25 } #Cavlary brigade	
	}
	
landunit = {
	id = { type = 13016 id = 507 }
	name = "2 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 508 } name = "3 Ryodan"  type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 509 } name = "15 Ryodan" type = d_02 model = 1 experience = 20 }	
	}		
		
landunit = {
	id = { type = 13016 id = 510 }
	name = "6 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 511 } name = "11 Ryodan" type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 512 } name = "24 Ryodan" type = d_02 model = 1 experience = 20 }	
	}		
	
landunit = {
	id = { type = 13016 id = 513 }
	name = "7 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 514 } name = "13 Ryodan" type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 515 } name = "14 Ryodan" type = d_02 model = 1 experience = 20 }	
	}
	
landunit = {
	id = { type = 13016 id = 516 }
	name = "8 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 517 } name = "4 Ryodan"  type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 518 } name = "16 Ryodan" type = d_02 model = 1 experience = 20 }	
	}

landunit = {
	id = { type = 13016 id = 519 }
	name = "9 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 520 } name = "6 Ryodan"  type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 521 } name = "18 Ryodan" type = d_02 model = 1 experience = 20 }	
	}

landunit = {
	id = { type = 13016 id = 522 }
	name = "19 Hoheishidan" # 
	location =   1199
		division = { id = { type = 13016 id = 523 } name = "19 Ryodan" type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 524 } name = "38 Ryodan" type = d_02 model = 1 experience = 20 }	
	}	
	
landunit = {
	id = { type = 13016 id = 525 }
	name = "Chosen-gun" # Korea
	location = 1228 
		division = { id = { type = 13016 id = 526 } name = "19 Rusushidan" type = garrison model = 1 }
		division = { id = { type = 13016 id = 527 } name = "20 Rusushidan" type = garrison model = 1 }
	}
	
landunit = {
	id = { type = 13016 id = 570 }
	name = "20 Hoheishidan" # 
	location =   1229
		division = { id = { type = 13016 id = 571 } name = "39 Ryodan" type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 572 } name = "40 Ryodan" type = d_02 model = 1 experience = 20 }	
	}
	
#####################################################	
#IJA Cavalry Group
#####################################################
	
landunit = {
	id = { type = 13016 id = 528 }
	name = "IJA Kihei Shudan" # Mongolische Grenze
	location = 1240 # 	    
	    division = { id = { type = 13016 id = 529 } name = "1 Kibei Ryodan" type = cavalry model = 1 strength = 20 experience = 25 } #Cavlary brigade
		division = { id = { type = 13016 id = 530 } name = "4 Kibei Ryodan" type = cavalry model = 1 strength = 20 experience = 25 } #Cavlary brigade
	}
	
#####################################################	
#China Garrison Army
#####################################################	
	
landunit = {
	id = { type = 13016 id = 531 }
	name = "Shina Chutongun" # Grenze China
	location = 1235 #1245  	    
	    division = { id = { type = 13016 id = 532 } name = "Kawabe Ryodan" type = garrison model = 1 strength = 25 } 
	}	
	
landunit = {
	id = { type = 13016 id = 533 }
	name = "5 Hoheishidan" # 
	location = 1235  
		division = { id = { type = 13016 id = 534 } name = "9 Ryodan"  type = d_02 model = 1 experience = 20 } 
		division = { id = { type = 13016 id = 535 } name = "21 Ryodan" type = d_02 model = 1 experience = 20 }	
	}	
		
#####################################################	
#Grand Han Righteous Army
#####################################################		
	
landunit = {
	id = { type = 13016 id = 536 }
	name = "Grand Han Righteous Army" # Grenze China
	location = 1240	    
	    division = { id = { type = 13016 id = 537 } name = "Hun Shina gun" type = infantry model = 0 strength = 20 } 
	}	
	
#####################################################	
#Inner Mongolian Army
#8 division with 20ooo soldiers in 1936
#####################################################		
	
landunit = {
	id = { type = 13016 id = 540 }
	name = "Moukogo gun" # Mongolische Grenze
	location = 1240  	    
	    division = { id = { type = 13016 id = 541 } name = "1 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 542 } name = "2 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
		division = { id = { type = 13016 id = 543 } name = "3 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 544 } name = "4 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 545 } name = "5 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 546 } name = "6 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 547 } name = "7 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 
	    division = { id = { type = 13016 id = 548 } name = "8 Moukogo Kibeishidan" type = cavalry model = 1 strength = 15 } 	
    }
		
#####################################################	
#KWA Garrison Forces
#####################################################		
	
#landunit = {
#	id = { type = 13016 id = 550 }
#	name = "1 Hendan" # Songo, Manchuko
#	location = 1200
#		division = { id = { type = 13016 id = 560 } name = "2 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#		division = { id = { type = 13016 id = 561 } name = "3 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#	}

#landunit = {
#	id = { type = 13016 id = 551 }
#	name = "2 Hendan" # Toan, Manchuko
#	location = 1202
#		division = { id = { type = 13016 id = 562 } name = "4 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#		division = { id = { type = 13016 id = 563 } name = "5 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#    }
		
#landunit = {
#	id = { type = 13016 id = 552 }
#	name = "3 Hendan" # Keinei, Manchuko
#	location = 1205
#	    division = { id = { type = 13016 id = 564 } name = "1 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#		division = { id = { type = 13016 id = 565 } name = "6 Kokkyô Shubitai" type = garrison model = 1 extra = police strength = 50 }
#	}
	
#####################################
# Korea garrisons for AI by Studti  #
#####################################

# 1217 Anshan
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451248 } name = "49 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451249 } name = "50 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	
# 1219 Port Arthur
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451250 } name = "51 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	
# 1221 Pyeongyang
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451251 } name = "52 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451252 } name = "53 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	
# 1228 Seoul
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451253 } name = "54 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451254 } name = "55 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	
# 1232 Busan
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451255 } name = "56 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451256 } name = "57 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }
	
# 1223 Wonsan
	landdivision = { dormant = yes locked = yes id = { type = 13016 id = 451257 } name = "58 Kaigan o surutameni-ka" type = garrison model = 2 strength = 100 extra = anti_air brigade_model = 3 }

#####################################################
# KWA Transport Fleet
#####################################################	

navalunit = {
	name = "1. Kaigun"
	id = { type = 13016 id = 590 }
	location = 1232 #Busan
	base = 1232 #Busan
		division = { id = { type = 13016 id = 591 } name = "Kongo Maru" type = transport model = 1 }
		division = { id = { type = 13016 id = 592 } name = "Asaka Maru" type = transport model = 1 }
		division = { id = { type = 13016 id = 593 } name = "Matsukawa Maru" type = transport model = 1 }
		division = { id = { type = 13016 id = 594 } name = "Kaito Maru" type = transport model = 1 }
		division = { id = { type = 13016 id = 595 } name = "Katsura Maru" type = transport model = 1 }
		division = { id = { type = 13016 id = 596 } name = "Toyotsu Maru" type = transport model = 1 }
	}

#brigade_development = {
#        id = { type = 13016 id = 1700 }
#        cost = 0.5
#        size = 10
#        type = armored_car
#		model = 0
#        date  = {  year = 1938 }
#		unitcost = yes
#        }	
#		
#brigade_development = {
#        id = { type = 13016 id = 1701 }
#        cost = 0.5
#        size = 10
#        type = armored_car
#		model = 0
#        date  = {  year = 1938 }
#		unitcost = yes
#        }
	
} # End File
