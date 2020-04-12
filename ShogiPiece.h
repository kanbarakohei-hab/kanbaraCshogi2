#pragma once
#include <stdio.h>

#ifndef _SHOGIPIECE_
#define _SHOGIPIECE_
/*マクロ定義*/
#define HU ("歩")
#define KYOUSYA ("香")
#define KEIMA ("桂")
#define GIN ("銀")
#define KIN ("金")
#define GYOKU ("玉")
#define KAKU ("角")
#define HISYA ("飛")
#define SPACE ("　")


#define _ONE              (91)
#define _TWO			  (81)
#define _THREE			  (71)
#define _FOUR			  (61)
#define _FIVE			  (51)
#define _SIX			  (41)
#define _SEVEN			  (31)
#define _EIGHT			  (21)
#define _NINE			  (11)
#define _ONE_ONE		  (92)
#define _ONE_TWO		  (82)
#define _ONE_THREE		  (72)
#define _ONE_FOUR		  (62)
#define _ONE_FIVE		  (52)
#define _ONE_SIX		  (42)
#define _ONE_SEVEN		  (32)
#define _ONE_EIGHT		  (22)
#define _ONE_NINE		  (12)
#define _TWO_ONE		  (93)
#define _TWO_TWO		  (83)
#define _TWO_THREE		  (73)
#define _TWO_FOUR		  (63)
#define _TWO_FIVE		  (53)
#define _TWO_SIX		  (43)
#define _TWO_SEVEN		  (33)
#define _TWO_EIGHT		  (23)
#define _TWO_NINE		  (13)
#define _THREE_ONE		  (94)
#define _THREE_TWO		  (84)
#define _THREE_THREE	  (74)
#define _THREE_FOUR		  (64)
#define _THREE_FIVE		  (54)
#define _THREE_SIX		  (44)
#define _THREE_SEVEN	  (34)
#define _THREE_EIGHT	  (24)
#define _THREE_NINE		  (14)
#define _FOUR_ONE		  (95)
#define _FOUR_TWO		  (85)
#define _FOUR_THREE		  (75)
#define _FOUR_FOUR		  (65)
#define _FOUR_FIVE		  (55)
#define _FOUR_SIX		  (45)
#define _FOUR_SEVEN		  (35)
#define _FOUR_EIGHT		  (25)
#define _FOUR_NINE		  (15)
#define _FIVE_ONE		  (96)
#define _FIVE_TWO		  (86)
#define _FIVE_THREE		  (76)
#define _FIVE_FOUR		  (66)
#define _FIVE_FIVE		  (56)
#define _FIVE_SIX		  (46)
#define _FIVE_SEVEN		  (36)
#define _FIVE_EIGHT		  (26)
#define _FIVE_NINE		  (16)
#define _SIX_ONE		  (97)
#define _SIX_TWO		  (87)
#define _SIX_THREE		  (77)
#define _SIX_FOUR		  (67)
#define _SIX_FIVE		  (57)
#define _SIX_SIX		  (47)
#define _SIX_SEVEN		  (37)
#define _SIX_EIGHT		  (27)
#define _SIX_NINE		  (17)
#define _SEVEN_ONE		  (98)
#define _SEVEN_TWO		  (88)
#define _SEVEN_THREE	  (78)
#define _SEVEN_FOUR		  (68)
#define _SEVEN_FIVE		  (58)
#define _SEVEN_SIX		  (48)
#define _SEVEN_SEVEN	  (38)
#define _SEVEN_EIGHT	  (28)
#define _SEVEN_NINE		  (18)
#define _EIGHT_ONE		  (99)
#define _EIGHT_TWO		  (89)
#define _EIGHT_THREE	  (79)
#define _EIGHT_FOUR		  (69)
#define _EIGHT_FIVE		  (59)
#define _EIGHT_SIX		  (49)
#define _EIGHT_SEVEN	  (39)
#define _EIGHT_EIGHT	  (29)
#define _EIGHT_NINE		  (19)

typedef struct {
    char koma[91];
    int move[91];
} komaInformation;






/*91歩→1歩*/
/*
1     91
2     81
3     71
4     61
5     51
6     41
7     31
8     21
9     11
10    92
11    82
12    72
13    62
14    52
15    42
16    32
17    22
18    12
19    93
20    83
21    73
22    63
23    53
24    43
25    33
26    23
27    13
28    94
29    84
30    74
31    64
32    54
33    44
34    34
35    24
36    14
37    95
38    85
39    75
40    65
41    55
42    45
43    35
44    25
45    15
46    96
47    86
48    76
49    66
50    56
51    46
52    36
53    26
54    16
55    97
56    87
57    77
58    67
59    57
60    47
61    37
62    27
63    17
64    98
65    88
66    78
67    68
68    58
69    48
70    38
71    28
72    18
73    99
74    89
75    79
76    69
77    59
78    49
79    39
80    29
81    19
*/

/*構造体宣言*/

/*関数宣言(プロトタイプ宣言)*/

#endif _SHOGIPIECE_