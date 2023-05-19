#Converted to DH, April 17 2011, Kane
province = {	id = 1255	landfort = 3 }
province = {	id = 1260	landfort = 3 }
province = {	id = 1259       landfort = 3 }
province = {	id = 1256       landfort = 3 }

country = {
	tag = CHC
	intrinsic_gov_type = leninist
	extra_tc = 7

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 10
		free_market = 1
		freedom = 2
		professional_army = 3
		defense_lobby = 10
		interventionism = 5
	}
    allowed_divisions = { 
        militia = yes 
		d_02 = yes
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }

	diplomacy = {
		relation = { tag = JAP value = -100 }
		relation = { tag = MAN value = -100 }
		relation = { tag = CHI value = -200 }
		relation = { tag = CGX value = -200 }
		relation = { tag = CYN value = -200 }
		relation = { tag = CSX value = -200 }
		relation = { tag = CXB value = -200 }
		relation = { tag = SOV value = 100 }
		relation = { tag = MON value = 25 }
		relation = { tag = SIK value = 40 }
	}
  SpyInfo                = { country = "CHC" NumberOfSpies = 3 }
	capital = 1259 # Yan'an

	# Resource Reserves

	energy		= 200
	metal		= 200
	rare_materials 		= 100
	oil 		= 100
	supplies 	= 800
	money		= 50

	manpower = 350

	
    ownedprovinces =      {
	1259 #Yan'an
	1260 
	1255 #Pingliang
	1256 #Baoji
 	}
    controlledprovinces = {
	1259 #Yan'an
	1260 
	1255 #Pingliang
	1256 #Baoji
	  }
	nationalprovinces = {	
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
	1219 #Port Arthur
#European Possessions     
	1371 #Hongkong
	1372 #Macao
#Taiwan     
	1361 #Gaoxiong
	1362 #Taipei
	1363 #Taizhong
	1364 #Hualian
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
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930

9010 9030 # Aerial warfare, basic doctrines for inland nations

2800 # Basic Armoured Car

2290 # GW light artillery

1190 # GW Cavalry

1400 1460 # Guerilla Infantry Division

6500 # Guerilla Warfare

5080 # Basic Constr Eng

#Naval doctrines
8070 8760

#Naval Techs
3010	3040 # Escorts WW1
3020 # DD pre-WW1
3030 15250 3060 # CL pre-WW1
3350 3360 # 1900 Capital and CA
3800 # Prewar TP
	}

 blueprints = { 1410 1310 } 

#######
# COMMUNSIT CHINA OOB
#######

landunit = {
	location = 1255 # Yan'an
	name = "1. Hóng Fangmianjun"
	id = { type = 24000 id = 1 }
		division = { id = { type = 24000 id = 10 } name = "1. Hóng Zu Jituanjun"  type = bergsjaeger model = 0 strength = 73 }
		division = { id = { type = 24000 id = 11 } name = "15. Hóng Zu Jituanjun" type = bergsjaeger model = 0 strength = 58 }
		division = { id = { type = 24000 id = 12 } name = "28. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 13 }
		division = { id = { type = 24000 id = 13 } name = "29. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 13 }
	dig_in = 20.000 
	}
	
landunit = {
	location = 1256
	name = "2. Hóng Fangmianjun"
	id = { type = 24000 id = 2 }
		division = { id = { type = 24000 id = 14 } name = "2. Hóng Zu Jituanjun"  type = bergsjaeger model = 0 strength = 16 }
		division = { id = { type = 24000 id = 15 } name = "6. Hóng Zu Jituanjun"  type = bergsjaeger model = 0 strength = 16 }
	dig_in = 20.000 
	}
	
landunit = {
	location = 1260 # Xianyang
	name = "4. Fangmianjun"
	id = { type = 24000 id = 3 }
		division = { id = { type = 24000 id = 16 } name = "4. Hóng Jituanjun"     type = bergsjaeger model = 0 strength = 50 }
		division = { id = { type = 24000 id = 17 } name = "5. Hóng Jituanjun"     type = bergsjaeger model = 0 strength = 20 }
		division = { id = { type = 24000 id = 18 } name = "6. Hóng Jituanjun"     type = bergsjaeger model = 0 strength = 75 }
		division = { id = { type = 24000 id = 19 } name = "9. Hóng Jituanjun"     type = bergsjaeger model = 0 strength = 25 extra = artillery brigade_model = 2 }
		division = { id = { type = 24000 id = 20 } name = "16. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 25 }
		division = { id = { type = 24000 id = 21 } name = "30. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 6  }
		division = { id = { type = 24000 id = 22 } name = "31. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 15 }
		division = { id = { type = 24000 id = 23 } name = "32. Hóng Jituanjun"    type = bergsjaeger model = 0 strength = 8  }
	dig_in = 20.000 
	}
	
} # End File