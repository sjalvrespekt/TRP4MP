#Converted DH, 2011, March, 25, Kane
province = { id = 1345 air_base = { size = 5 current_size = 5 }} #Hangzhou
province = { id = 1358 air_base = { size = 1 current_size = 1 }} #Fuzhou
province = { id = 1352 air_base = { size = 6 current_size = 6 }} #Nanchang
province = { id = 1299 air_base = { size = 2 current_size = 2 }} #Chongqing
province = { id = 1317 air_base = { size = 2 current_size = 2 }} #Wuhan
#province = { id = 1258 air_base = { size = 1 current_size = 1 }} #Xi'An
#province = { id = 1308 air_base = { size = 1 current_size = 1 }} #Changsha
#province = { id = 1324 air_base = { size = 1 current_size = 1 }} #Zhengzhou
province = { id = 1338 naval_base = { size = 10	current_size = 10 }} #Shanghai
province = { id = 1328 naval_base = { size = 10	current_size = 10 }} #Qingdao

country = {
	tag = CHI

	ai_settings	= { flags = { convoy_gift_on_release = yes } }
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		free_market = 9
		freedom = 4
		professional_army = 3
		defense_lobby = 8
		interventionism = 4
	}
	
	#headofstate            = {  type = 22000 id = 52001  } #
	#headofgovernment       = {  type = 22000 id = 52002  } #
	#foreignminister        = {  type = 22000 id = 52003  } #
	#armamentminister       = {  type = 22000 id = 52048  } # He Yingqin
	#ministerofsecurity     = {  type = 22000 id = 52063  } # Dai Li
	#ministerofintelligence = {  type = 22000 id = 52078  } # Dai Li
	#chiefofstaff           = {  type = 22000 id = 52007  } #
	#chiefofarmy            = {  type = 22000 id = 52099  } # He Yingqin
	#chiefofnavy            = {  type = 22000 id = 52009  } #
	#chiefofair             = {  type = 22000 id = 52010  } #

	
    allowed_divisions = { 
	    militia = yes
        d_02 = yes 
        cavalry = yes 
        bergsjaeger = yes
	} 

	#inventions = { 2700061 2700063 2700065 }
	
	diplomacy = {
		relation = { tag = CGX value = 200 }
		relation = { tag = CSX value = 200 access = yes }
		relation = { tag = CXB value = 200 access = yes }
		relation = { tag = CYN value = 200 }
		relation = { tag = TIB value = 100 access = yes }
		relation = { tag = JAP value = -100 }
		relation = { tag = MAN value = -100 }
		#relation = { tag = MEN value = -100 }
	}
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
	capital = 1337 # Nanjing
	
	dormant_leaders = { 50304 50370 } # von Falkenhausen, Chennault
	dormant_ministers = { 52116 52117 52118 }
	
	# Resource Reserves
	energy		= 1000  
	metal		= 1000	
	rare_materials 	= 1000	
	oil 		= 1000	
	supplies 	= 1000
	money = 10


	manpower = 306

	dissent = 25
	
   nationalprovinces      = 
{	1331 #Yantai
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
	1262 #Linxia=>Xining(split)
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
	1124 #Ulaabaatar
	1123 #Olgii=>Khobdo
	1125 #Muren
	1121 #Bayankhongor
	1122 #Arvaikheer
	1120 #Choibalsan
} 

   ownedprovinces         = 
{    1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1301 1350 1351 1352 1327 1328 1329 1331 1332 1321 1257 1258 1263 1264
} 
   controlledprovinces    = 
{    1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1301 1350 1351 1352 1327 1328 1329 1331 1332 1321 1257 1258 1263 1264
}
	# ROTW Minor Tech '36
	deactivate = { }

	techapps = {
# Group E 1936 techs
#######################

#####################
# Aircraft techs
#####################
4010 4020 # Single Engined 1929, Int 1930
4290 4300 # double Engined 1929, TB 1930

2800 # Basic Armoured Car

2290 # GW light artillery

1400 1460 # Guerilla Infantry Division

1190 # GW Cavalry

#Naval doctrines
8070 8760

#Naval Techs
3010	3040 # Escorts WW1
3020 # DD pre-WW1
3030 15250 3060 # CL pre-WW1
3350 3360 # 1900 Capital and CA
3800 # Prewar TP
15090 # 1920 CVE

5080 5090 # Construction (up to the forts)

6500 6510 6540 # Guerilla Warfare

9010 9020 9030 # Aerial warfare, basic doctrines

}

 blueprints = { 1410 1310 } 


# CHINA 1936 Land OOB

landunit = {
	location = 1243 #Hebei
	name = "1. Zhànzheng Qu"
	id = { type = 22000 id = 1 }
        division = { id = { type = 22000 id = 20 } name = "1. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 21 } name = "9. Jituanjun"  type = d_02     model = 0                }
		division = { id = { type = 22000 id = 22 } name = "14. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 23 } name = "17. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 24 } name = "27. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 25 } name = "30. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 26 } name = "39. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 27 } name = "40. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 28 } name = "42. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 29 } name = "50. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 30 } name = "52. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 31 } name = "53. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 32 } name = "64. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 33 } name = "71. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 34 } name = "76. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 35 } name = "78. Jituanjun" type = militia  model = 0 strength =  50 }
		division = { id = { type = 22000 id = 36 } name = "90. Jituanjun" type = d_02     model = 0                }
	}
	
landunit = {
	location = 1252 #Taiyuan
	name = "2. Zhànzheng Qu"
	id = { type = 22000 id = 2 }
	    division = { id = { type = 22000 id = 37 } name = "3. Jituanjun"  type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 38 } name = "13. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 39 } name = "15. Jituanjun" type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 40 } name = "32. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 41 } name = "35. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 42 } name = "38. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 43 } name = "47. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 44 } name = "66. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 45 } name = "93. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 46 } name = "96. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 47 } name = "1. Qibing Jituanjun" type = cavalry model = 0           }
		division = { id = { type = 22000 id = 48 } name = "2. Qibing Jituanjun" type = cavalry model = 0           }
    }
	
landunit = {
	location = 1337 #Jiangsu
	name = "3. Zhànzheng Qu"
	id = { type = 22000 id = 3 }	
	    division = { id = { type = 22000 id = 49 } name = "21. Jituanjun"  type = d_02     model = 0                }
		division = { id = { type = 22000 id = 50 } name = "25. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 51 } name = "28. Jituanjun"  type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 52 } name = "54. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 53 } name = "57. Jituanjun"  type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 54 } name = "70. Jituanjun"  type = d_02     model = 0                }
		division = { id = { type = 22000 id = 55 } name = "73. Jituanjun"  type = d_02     model = 0                }
		division = { id = { type = 22000 id = 56 } name = "74. Jituanjun"  type = d_03     model = 0                }
		division = { id = { type = 22000 id = 57 } name = "85. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 58 } name = "88. Jituanjun"  type = d_02     model = 0                }
		division = { id = { type = 22000 id = 59 } name = "100. Jituanjun" type = d_02     model = 1                }
	}
	
landunit = {
	location = 1358 #Fujian
	name = "4. Zhànzheng Qu"
	id = { type = 22000 id = 4 }		
        division = { id = { type = 22000 id = 60 } name = "4. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 61 } name = "5. Jituanjun"  type = infantry model = 0                }
		division = { id = { type = 22000 id = 62 } name = "8. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 63 } name = "1. Róngyù Shi" type = d_02     model = 1 strength = 100 experience = 25 }
		division = { id = { type = 22000 id = 64 } name = "87. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 65 } name = "94. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 66 } name = "98. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 67 } name = "99. Jituanjun" type = d_02     model = 0                }
	}
	
landunit = {
	location = 1330 #Shandong
	name = "5. Zhànzheng Qu"
	id = { type = 22000 id = 5 }
        division = { id = { type = 22000 id = 68 } name = "2. Jituanjun"  type = d_02     model = 1                }
		division = { id = { type = 22000 id = 69 } name = "18. Jituanjun" type = infantry model = 0                }
		division = { id = { type = 22000 id = 70 } name = "20. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 71 } name = "22. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 72 } name = "29. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 73 } name = "36. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 74 } name = "41. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 75 } name = "45. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 76 } name = "51. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 77 } name = "55. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 78 } name = "56. Jituanjun" type = militia  model = 0 strength =  50 }
		division = { id = { type = 22000 id = 79 } name = "59. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 80 } name = "68. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 81 } name = "69. Jituanjun" type = militia  model = 0 strength =  50 }
		division = { id = { type = 22000 id = 82 } name = "75. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 83 } name = "84. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 84 } name = "89. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 85 } name = "92. Jituanjun" type = d_02     model = 0                }
	}
	
landunit = {
	location = 1317 #Hubei
	name = "6. Zhànzheng Qu"
	id = { type = 22000 id = 6 }
	    division = { id = { type = 22000 id = 86 } name = "12. Jituanjun" type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 87 } name = "67. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 88 } name = "77. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 89 } name = "86. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 90 } name = "3. Qibing Jituanjun" type = cavalry model = 0           } 
	}
	
landunit = {
	location = 1297 #Sichuan
	name = "7. Zhànzheng Qu" 
	id = { type = 22000 id = 7 }	
	    division = { id = { type = 22000 id = 91 } name = "63. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 92 } name = "65. Jituanjun" type = d_02     model = 0                }
	}
	
landunit = {
	location = 1264 #Gansu
	name = "8. Zhànzheng Qu"
	id = { type = 22000 id = 8 }	
	    division = { id = { type = 22000 id = 93 } name = "80. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 94 } name = "91. Jituanjun" type = militia  model = 0 strength =  75 }
		division = { id = { type = 22000 id = 95 } name = "4. Qibing Jituanjun" type = cavalry model = 0           } 
		division = { id = { type = 22000 id = 96 } name = "5. Qibing Jituanjun" type = cavalry model = 0           } 
		division = { id = { type = 22000 id = 97 } name = "6. Qibing Jituanjun" type = cavalry model = 0           }
	} 		
	
landunit = {
	location = 1352 #Jiangxu
	name = "9. Zhànzheng Qu"
	id = { type = 22000 id = 9 }	
        division = { id = { type = 22000 id = 98  } name = "6. Jituanjun"  type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 99  } name = "10. Jituanjun" type = d_02     model = 1                }
		division = { id = { type = 22000 id = 100 } name = "26. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 101 } name = "37. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 102 } name = "44. Jituanjun" type = militia  model = 0 strength = 75  }
		division = { id = { type = 22000 id = 103 } name = "49. Jituanjun" type = militia  model = 0 strength = 100 }
		division = { id = { type = 22000 id = 104 } name = "62. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 105 } name = "72. Jituanjun" type = militia  model = 0 strength = 50  }
		division = { id = { type = 22000 id = 106 } name = "79. Jituanjun" type = d_02     model = 1                }
	}
	
landunit = {
	location = 1258 #Xian
	name = "10. Zhànzheng Qu"
	id = { type = 22000 id = 10 }	
        division = { id = { type = 22000 id = 107 } name = "16. Jituanjun" type = d_02     model = 0                }
		division = { id = { type = 22000 id = 108 } name = "24. Jituanjun" type = militia  model = 0 strength = 50  }
	}
	
####################################
# dormant 200th division		
####################################	
#German trained divisions:
landdivision = { dormant = yes id = { type = 22000 id = 500 }  name = "Di 3 Shi"       type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 }
landdivision = { dormant = yes id = { type = 22000 id = 501 }  name = "Di 6 Shi"       type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 502 }  name = "Di 9 Shi"       type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 503 }  name = "Di 14 Shi"      type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 504 }  name = "Di 16 Shi"      type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 505 }  name = "Di 87 Shi"      type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 506 }  name = "Di 88 Shi"      type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 507 }  name = "Di Xunlian Shi" type = infantry model = 1 extra = artillery brigade_model = 1 experience = 25 } 

landdivision = { dormant = yes id = { type = 22000 id = 508 }  name = "Di 2 Shi"  type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 509 }  name = "Di 4 Shi"  type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 510 }  name = "Di 10 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 511 }  name = "Di 11 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 512 }  name = "Di 25 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 513 }  name = "Di 27 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 514 }  name = "Di 57 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 515 }  name = "Di 67 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 516 }  name = "Di 80 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 517 }  name = "Di 83 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 
landdivision = { dormant = yes id = { type = 22000 id = 518 }  name = "Di 89 Shi" type = infantry model = 1 extra = artillery brigade_model = 0 experience = 10 } 

landdivision = { dormant = yes id = { type = 22000 id = 279 }  name = "Dì 200 Shi" type = motorized model = 0 extra = light_armor_brigade brigade_model = 3 }

#X-Force
#New 1st Army
landdivision = { dormant = yes id = { type = 22000 id = 290 }  name = "38. Xin Shi" type = infantry model = 2 extra = light_armor_brigade brigade_model = 7 experience = 45 } 
landdivision = { dormant = yes id = { type = 22000 id = 291 }  name = "22. Xin Shi" type = infantry model = 2 extra = light_armor_brigade brigade_model = 7 experience = 45 } 
#New 6th Army
landdivision = { dormant = yes id = { type = 22000 id = 292 }  name = "14. Shi"     type = infantry model = 2 extra = light_armor_brigade brigade_model = 7 experience = 45 } 
landdivision = { dormant = yes id = { type = 22000 id = 293 }  name = "50. Shi"     type = infantry model = 2 extra = artillery           brigade_model = 4 experience = 25 } 
landdivision = { dormant = yes id = { type = 22000 id = 294 }  name = "30. Xin Shi" type = infantry model = 2 extra = artillery           brigade_model = 4 experience = 25 } 
#Y-Force
#11th Group Army
landdivision = { dormant = yes id = { type = 22000 id = 295 }  name = "2. Jituanjun" type = d_02  model = 3 extra = artillery brigade_model = 3 experience = 20 }
landdivision = { dormant = yes id = { type = 22000 id = 296 }  name = "6. Jituanjun" type = d_02  model = 3 extra = artillery brigade_model = 3 experience = 20 }
landdivision = { dormant = yes id = { type = 22000 id = 297 }  name = "8. Jituanjun" type = d_02  model = 3 extra = artillery brigade_model = 3 experience = 20 }
#20th Group Army
landdivision = { dormant = yes id = { type = 22000 id = 298 }  name = "53. Jituanjun" type = d_02 model = 3 extra = artillery brigade_model = 3 experience = 20 }
landdivision = { dormant = yes id = { type = 22000 id = 299 }  name = "54. Jituanjun" type = d_02 model = 3 extra = artillery brigade_model = 3 experience = 20 }
landdivision = { dormant = yes id = { type = 22000 id = 300 }  name = "71. Jituanjun" type = d_02 model = 3 extra = artillery brigade_model = 3 experience = 20 }

####################################
# dormant AVG / Flying Tigers		
####################################	
airdivision = { dormant = yes id = { type = 22000 id = 280 }  name = "1st American Volunteer Group" type = interceptor model = 2 experience = 20 }

####################################	

navalunit = {
	location = 1328 #Qingdao
	name = "1st Fleet"
	id = { type = 22000 id = 317 } 
	base = 1328
		division = { id = { type = 22000 id = 316 } name = "Chen Hai" type = escort_carrier model = 0 }
		division = { id = { type = 22000 id = 301 } name = "Ning Hai" type = light_cruiser model = 2 }
		division = { id = { type = 22000 id = 302 } name = "Ying Swei" type = light_cruiser model = 0 }
#		division = { id = { type = 22000 id = 303 } name = "Chao Ho" type = light_cruiser model = 0 } # under control of CGX
		division = { id = { type = 22000 id = 304 } name = "Hai Chen" type = light_cruiser model = 0 }
		division = { id = { type = 22000 id = 310 } name = "Hai Chou" type = light_cruiser model = 0 }
		division = { id = { type = 22000 id = 311 } name = "Hai Yung" type = light_cruiser model = 0 }
		division = { id = { type = 22000 id = 313 } name = "Hai Chi" type = light_cruiser model = 0 }
#		division = { id = { type = 22000 id = 307 } name = "Chung Shan" type = destroyer model = 0 } # small & slow gunboat
		division = { id = { type = 22000 id = 308 } name = "Yat Sen" type = d_09 model = 0 }
		division = { id = { type = 22000 id = 312 } name = "Tung Chi" type = d_09 model = 0 }
		division = { id = { type = 22000 id = 315 } name = "Hai Chow" type = d_09 model = 0 }
		division = { id = { type = 22000 id = 309 } name = "Changte" type = transport model = 0 }
	}

# China 1936 Airforce OOB

airunit = {
	location = 1352 #Nanchang
	id = { type = 22000 id = 400 }
	name = "1. Kongjun"
	base = 1352 #Nanchang
		division = { id = { type = 22000 id = 401 } name = "1. Kongjun I" strength = 27 type = tactical_bomber model = 0 extra = escort brigade_model = 0}
		division = { id = { type = 22000 id = 409 } name = "1. Kongjun II" strength = 20 type = tactical_bomber model = 0 extra = escort brigade_model = 0}
	}

airunit = {
	location = 1352 #Nanchang
	id = { type = 22000 id = 407 }
	name = "2. Kongjun"
	base = 1352 #Nanchang
		division = { id = { type = 22000 id = 408 } name = "2. Kongjun I" strength = 30 type = interceptor model = 0 }
		division = { id = { type = 22000 id = 410 } name = "2. Kongjun II" strength = 22 type = interceptor model = 0 }
	}

transports = 100
escorts = 80

division_development = { 
name = "Ping Hai" 
type = light_cruiser 
model = 2 
cost = 0.16 #1.6, lowered for AI
new_model = no unitcost = yes
id = { type = 22000 id = 314 } 
date = { year = 1936 month = june day = 17 } 
} 


} # End File