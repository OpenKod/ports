Index: Wnn/etc/py_table.c
===================================================================
RCS file: /home/cvs/private/hrs/freewnn/Wnn/etc/py_table.c,v
retrieving revision 1.1.1.1
retrieving revision 1.2
diff -u -p -r1.1.1.1 -r1.2
--- Wnn/etc/py_table.c	20 Dec 2008 07:13:30 -0000	1.1.1.1
+++ Wnn/etc/py_table.c	20 Dec 2008 15:22:40 -0000	1.2
@@ -5,7 +5,7 @@
 /*
  * FreeWnn is a network-extensible Kana-to-Kanji conversion system.
  * This file is part of FreeWnn.
- * 
+ *
  * Copyright Kyoto University Research Institute for Mathematical Sciences
  *                 1987, 1988, 1989, 1990, 1991, 1992
  * Copyright OMRON Corporation. 1987, 1988, 1989, 1990, 1991, 1992, 1999
@@ -39,87 +39,83 @@
 
 /* pyshengmu_tbl[]: ShengMu table of Chinese PinYin */
 char *py_shengmu_tbl[PY_NUM_SHENGMU] = {
-
-  "", "B", "C", "Ch", "D",
-  "F", "G", "H", "J", "K",
-  "L", "M", "N", "P", "Q",
-  "R", "S", "Sh", "T", "W",
-  "X", "Y", "Z", "Zh"
+	"", "B", "C", "Ch", "D",
+	"F", "G", "H", "J", "K",
+	"L", "M", "N", "P", "Q",
+	"R", "S", "Sh", "T", "W",
+	"X", "Y", "Z", "Zh"
 };
 
 /* py_yunmu_tbl[]: YunMu table of Chinese ZhuYin */
 char *py_yunmu_tbl[PY_NUM_YUNMU * 5] = {
-
-  "��", "��", "��", "��", "��",
-  "a��", "����", "����", "����", "����",
-  "ai��", "��i��", "��i��", "��i��", "��i��",
-  "an��", "��n��", "��n��", "��n��", "��n��",
-  "ang��", "��ng��", "��ng��", "��ng��", "��ng��",
-  "ao��", "��o��", "��o��", "��o��", "��o��",
-  "e��", "����", "����", "����", "����",
-  "ei��", "��i��", "��i��", "��i��", "��i��",
-  "en��", "��n��", "��n��", "��n��", "��n��",
-  "eng��", "��ng��", "��ng��", "��ng��", "��ng��",
-  "er��", "��r��", "��r��", "��r��", "��r��",
-  "i��", "����", "����", "����", "����",
-  "ia��", "i����", "i����", "i����", "i����",
-  "ian��", "i��n��", "i��n��", "i��n��", "i��n��",
-  "iang��", "i��ng��", "i��ng��", "i��ng��", "i��ng��",
-  "iao��", "i��o��", "i��o��", "i��o��", "i��o��",
-  "ie��", "i����", "i����", "i����", "i����",
-  "in��", "��n��", "��n��", "��n��", "��n��",
-  "ing��", "��ng��", "��ng��", "��ng��", "��ng��",
-  "iong��", "i��ng��", "i��ng��", "i��ng��", "i��ng��",
-  "iu��", "i����", "i����", "i����", "i����",
-  "m��", "m��", "m��", "m��", "m��",
-  "n��", "n��", "����", "����", "����",
-  "ng��", "ng��", "ng��", "ng��", "ng��",
-  "o��", "����", "����", "����", "����",
-  "ong��", "��ng��", "��ng��", "��ng��", "��ng��",
-  "ou��", "��u��", "��u��", "��u��", "��u��",
-  "u��", "����", "����", "����", "����",
-  "ua��", "u����", "u����", "u����", "u����",
-  "uai��", "u��i��", "u��i��", "u��i��", "u��i��",
-  "uan��", "u��n��", "u��n��", "u��n��", "u��n��",
-  "uang��", "u��ng��", "u��ng��", "u��ng��", "u��ng��",
-  "ue��", "u����", "u����", "u����", "u����",
-  "ui��", "u����", "u����", "u����", "u����",
-  "un��", "��n��", "��n��", "��n��", "��n��",
-  "uo��", "u����", "u����", "u����", "u����",
-  "����", "����", "����", "����", "����",
-  "��e��", "������", "������", "������", "������",
-  "0��", "1��", "2��", "3��", "4��",    /* for undefinited YunMu  */
+	"��", "��", "��", "��", "��",
+	"a��", "����", "����", "����", "����",
+	"ai��", "��i��", "��i��", "��i��", "��i��",
+	"an��", "��n��", "��n��", "��n��", "��n��",
+	"ang��", "��ng��", "��ng��", "��ng��", "��ng��",
+	"ao��", "��o��", "��o��", "��o��", "��o��",
+	"e��", "����", "����", "����", "����",
+	"ei��", "��i��", "��i��", "��i��", "��i��",
+	"en��", "��n��", "��n��", "��n��", "��n��",
+	"eng��", "��ng��", "��ng��", "��ng��", "��ng��",
+	"er��", "��r��", "��r��", "��r��", "��r��",
+	"i��", "����", "����", "����", "����",
+	"ia��", "i����", "i����", "i����", "i����",
+	"ian��", "i��n��", "i��n��", "i��n��", "i��n��",
+	"iang��", "i��ng��", "i��ng��", "i��ng��", "i��ng��",
+	"iao��", "i��o��", "i��o��", "i��o��", "i��o��",
+	"ie��", "i����", "i����", "i����", "i����",
+	"in��", "��n��", "��n��", "��n��", "��n��",
+	"ing��", "��ng��", "��ng��", "��ng��", "��ng��",
+	"iong��", "i��ng��", "i��ng��", "i��ng��", "i��ng��",
+	"iu��", "i����", "i����", "i����", "i����",
+	"m��", "m��", "m��", "m��", "m��",
+	"n��", "n��", "����", "����", "����",
+	"ng��", "ng��", "ng��", "ng��", "ng��",
+	"o��", "����", "����", "����", "����",
+	"ong��", "��ng��", "��ng��", "��ng��", "��ng��",
+	"ou��", "��u��", "��u��", "��u��", "��u��",
+	"u��", "����", "����", "����", "����",
+	"ua��", "u����", "u����", "u����", "u����",
+	"uai��", "u��i��", "u��i��", "u��i��", "u��i��",
+	"uan��", "u��n��", "u��n��", "u��n��", "u��n��",
+	"uang��", "u��ng��", "u��ng��", "u��ng��", "u��ng��",
+	"ue��", "u����", "u����", "u����", "u����",
+	"ui��", "u����", "u����", "u����", "u����",
+	"un��", "��n��", "��n��", "��n��", "��n��",
+	"uo��", "u����", "u����", "u����", "u����",
+	"����", "����", "����", "����", "����",
+	"��e��", "������", "������", "������", "������",
+	"0��", "1��", "2��", "3��", "4��",    /* for undefinited YunMu  */
 };
 
-
 /* pinyin_tbl:  size is NUM_SHENGMU*NUM_YUNMU, including empty ShengMu */
 /*     and empty YunMu , and undefinited YunMu'-' */
 
 int pinyin_tbl[PY_NUM_SHENGMU * PY_NUM_YUNMU] = {
-
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-  0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
-  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1,
-  0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
-  0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
-  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
-  0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
-  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
+	0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
+	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1,
+	0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
+	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
+	0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
+	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
+	0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1,
+	0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1
 };
 #endif /* CHINESE */