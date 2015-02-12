/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

// table of 1024 values / one period / stored in flash memory
const uint16 waveTableSine[]  = {
	2047,
	2060,
	2072,
	2085,
	2097,
	2110,
	2122,
	2135,
	2147,
	2160,
	2173,
	2185,
	2198,
	2210,
	2223,
	2235,
	2248,
	2260,
	2273,
	2285,
	2298,
	2310,
	2323,
	2335,
	2347,
	2360,
	2372,
	2385,
	2397,
	2409,
	2422,
	2434,
	2446,
	2459,
	2471,
	2483,
	2496,
	2508,
	2520,
	2532,
	2545,
	2557,
	2569,
	2581,
	2593,
	2605,
	2617,
	2629,
	2641,
	2653,
	2665,
	2677,
	2689,
	2701,
	2713,
	2725,
	2737,
	2749,
	2760,
	2772,
	2784,
	2796,
	2807,
	2819,
	2831,
	2842,
	2854,
	2865,
	2877,
	2888,
	2900,
	2911,
	2922,
	2934,
	2945,
	2956,
	2968,
	2979,
	2990,
	3001,
	3012,
	3023,
	3034,
	3045,
	3056,
	3067,
	3078,
	3089,
	3100,
	3110,
	3121,
	3132,
	3142,
	3153,
	3164,
	3174,
	3185,
	3195,
	3205,
	3216,
	3226,
	3236,
	3246,
	3257,
	3267,
	3277,
	3287,
	3297,
	3307,
	3317,
	3326,
	3336,
	3346,
	3356,
	3365,
	3375,
	3384,
	3394,
	3403,
	3413,
	3422,
	3431,
	3441,
	3450,
	3459,
	3468,
	3477,
	3486,
	3495,
	3504,
	3512,
	3521,
	3530,
	3539,
	3547,
	3556,
	3564,
	3573,
	3581,
	3589,
	3597,
	3606,
	3614,
	3622,
	3630,
	3638,
	3646,
	3653,
	3661,
	3669,
	3676,
	3684,
	3692,
	3699,
	3706,
	3714,
	3721,
	3728,
	3735,
	3742,
	3749,
	3756,
	3763,
	3770,
	3777,
	3784,
	3790,
	3797,
	3803,
	3810,
	3816,
	3822,
	3829,
	3835,
	3841,
	3847,
	3853,
	3859,
	3864,
	3870,
	3876,
	3881,
	3887,
	3893,
	3898,
	3903,
	3909,
	3914,
	3919,
	3924,
	3929,
	3934,
	3939,
	3943,
	3948,
	3953,
	3957,
	3962,
	3966,
	3971,
	3975,
	3979,
	3983,
	3987,
	3991,
	3995,
	3999,
	4003,
	4006,
	4010,
	4013,
	4017,
	4020,
	4024,
	4027,
	4030,
	4033,
	4036,
	4039,
	4042,
	4045,
	4047,
	4050,
	4053,
	4055,
	4058,
	4060,
	4062,
	4064,
	4066,
	4068,
	4070,
	4072,
	4074,
	4076,
	4078,
	4079,
	4081,
	4082,
	4083,
	4085,
	4086,
	4087,
	4088,
	4089,
	4090,
	4091,
	4091,
	4092,
	4093,
	4093,
	4094,
	4094,
	4094,
	4094,
	4094,
	4095,
	4094,
	4094,
	4094,
	4094,
	4094,
	4093,
	4093,
	4092,
	4091,
	4091,
	4090,
	4089,
	4088,
	4087,
	4086,
	4085,
	4083,
	4082,
	4081,
	4079,
	4078,
	4076,
	4074,
	4072,
	4070,
	4068,
	4066,
	4064,
	4062,
	4060,
	4058,
	4055,
	4053,
	4050,
	4047,
	4045,
	4042,
	4039,
	4036,
	4033,
	4030,
	4027,
	4024,
	4020,
	4017,
	4013,
	4010,
	4006,
	4003,
	3999,
	3995,
	3991,
	3987,
	3983,
	3979,
	3975,
	3971,
	3966,
	3962,
	3957,
	3953,
	3948,
	3943,
	3939,
	3934,
	3929,
	3924,
	3919,
	3914,
	3909,
	3903,
	3898,
	3893,
	3887,
	3881,
	3876,
	3870,
	3864,
	3859,
	3853,
	3847,
	3841,
	3835,
	3829,
	3822,
	3816,
	3810,
	3803,
	3797,
	3790,
	3784,
	3777,
	3770,
	3763,
	3756,
	3749,
	3742,
	3735,
	3728,
	3721,
	3714,
	3706,
	3699,
	3692,
	3684,
	3676,
	3669,
	3661,
	3653,
	3646,
	3638,
	3630,
	3622,
	3614,
	3606,
	3597,
	3589,
	3581,
	3573,
	3564,
	3556,
	3547,
	3539,
	3530,
	3521,
	3512,
	3504,
	3495,
	3486,
	3477,
	3468,
	3459,
	3450,
	3441,
	3431,
	3422,
	3413,
	3403,
	3394,
	3384,
	3375,
	3365,
	3356,
	3346,
	3336,
	3326,
	3317,
	3307,
	3297,
	3287,
	3277,
	3267,
	3257,
	3246,
	3236,
	3226,
	3216,
	3205,
	3195,
	3185,
	3174,
	3164,
	3153,
	3142,
	3132,
	3121,
	3110,
	3100,
	3089,
	3078,
	3067,
	3056,
	3045,
	3034,
	3023,
	3012,
	3001,
	2990,
	2979,
	2968,
	2956,
	2945,
	2934,
	2922,
	2911,
	2900,
	2888,
	2877,
	2865,
	2854,
	2842,
	2831,
	2819,
	2807,
	2796,
	2784,
	2772,
	2760,
	2749,
	2737,
	2725,
	2713,
	2701,
	2689,
	2677,
	2665,
	2653,
	2641,
	2629,
	2617,
	2605,
	2593,
	2581,
	2569,
	2557,
	2545,
	2532,
	2520,
	2508,
	2496,
	2483,
	2471,
	2459,
	2446,
	2434,
	2422,
	2409,
	2397,
	2385,
	2372,
	2360,
	2347,
	2335,
	2323,
	2310,
	2298,
	2285,
	2273,
	2260,
	2248,
	2235,
	2223,
	2210,
	2198,
	2185,
	2173,
	2160,
	2147,
	2135,
	2122,
	2110,
	2097,
	2085,
	2072,
	2060,
	2047,
	2034,
	2022,
	2009,
	1997,
	1984,
	1972,
	1959,
	1947,
	1934,
	1921,
	1909,
	1896,
	1884,
	1871,
	1859,
	1846,
	1834,
	1821,
	1809,
	1796,
	1784,
	1771,
	1759,
	1747,
	1734,
	1722,
	1709,
	1697,
	1685,
	1672,
	1660,
	1648,
	1635,
	1623,
	1611,
	1598,
	1586,
	1574,
	1562,
	1549,
	1537,
	1525,
	1513,
	1501,
	1489,
	1477,
	1465,
	1453,
	1441,
	1429,
	1417,
	1405,
	1393,
	1381,
	1369,
	1357,
	1345,
	1334,
	1322,
	1310,
	1298,
	1287,
	1275,
	1263,
	1252,
	1240,
	1229,
	1217,
	1206,
	1194,
	1183,
	1172,
	1160,
	1149,
	1138,
	1126,
	1115,
	1104,
	1093,
	1082,
	1071,
	1060,
	1049,
	1038,
	1027,
	1016,
	1005,
	994,
	984,
	973,
	962,
	952,
	941,
	930,
	920,
	909,
	899,
	889,
	878,
	868,
	858,
	848,
	837,
	827,
	817,
	807,
	797,
	787,
	777,
	768,
	758,
	748,
	738,
	729,
	719,
	710,
	700,
	691,
	681,
	672,
	663,
	653,
	644,
	635,
	626,
	617,
	608,
	599,
	590,
	582,
	573,
	564,
	555,
	547,
	538,
	530,
	521,
	513,
	505,
	497,
	488,
	480,
	472,
	464,
	456,
	448,
	441,
	433,
	425,
	418,
	410,
	402,
	395,
	388,
	380,
	373,
	366,
	359,
	352,
	345,
	338,
	331,
	324,
	317,
	310,
	304,
	297,
	291,
	284,
	278,
	272,
	265,
	259,
	253,
	247,
	241,
	235,
	230,
	224,
	218,
	213,
	207,
	201,
	196,
	191,
	185,
	180,
	175,
	170,
	165,
	160,
	155,
	151,
	146,
	141,
	137,
	132,
	128,
	123,
	119,
	115,
	111,
	107,
	103,
	99,
	95,
	91,
	88,
	84,
	81,
	77,
	74,
	70,
	67,
	64,
	61,
	58,
	55,
	52,
	49,
	47,
	44,
	41,
	39,
	36,
	34,
	32,
	30,
	28,
	26,
	24,
	22,
	20,
	18,
	16,
	15,
	13,
	12,
	11,
	9,
	8,
	7,
	6,
	5,
	4,
	3,
	3,
	2,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	2,
	3,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	11,
	12,
	13,
	15,
	16,
	18,
	20,
	22,
	24,
	26,
	28,
	30,
	32,
	34,
	36,
	39,
	41,
	44,
	47,
	49,
	52,
	55,
	58,
	61,
	64,
	67,
	70,
	74,
	77,
	81,
	84,
	88,
	91,
	95,
	99,
	103,
	107,
	111,
	115,
	119,
	123,
	128,
	132,
	137,
	141,
	146,
	151,
	155,
	160,
	165,
	170,
	175,
	180,
	185,
	191,
	196,
	201,
	207,
	213,
	218,
	224,
	230,
	235,
	241,
	247,
	253,
	259,
	265,
	272,
	278,
	284,
	291,
	297,
	304,
	310,
	317,
	324,
	331,
	338,
	345,
	352,
	359,
	366,
	373,
	380,
	388,
	395,
	402,
	410,
	418,
	425,
	433,
	441,
	448,
	456,
	464,
	472,
	480,
	488,
	497,
	505,
	513,
	521,
	530,
	538,
	547,
	555,
	564,
	573,
	582,
	590,
	599,
	608,
	617,
	626,
	635,
	644,
	653,
	663,
	672,
	681,
	691,
	700,
	710,
	719,
	729,
	738,
	748,
	758,
	768,
	777,
	787,
	797,
	807,
	817,
	827,
	837,
	848,
	858,
	868,
	878,
	889,
	899,
	909,
	920,
	930,
	941,
	952,
	962,
	973,
	984,
	994,
	1005,
	1016,
	1027,
	1038,
	1049,
	1060,
	1071,
	1082,
	1093,
	1104,
	1115,
	1126,
	1138,
	1149,
	1160,
	1172,
	1183,
	1194,
	1206,
	1217,
	1229,
	1240,
	1252,
	1263,
	1275,
	1287,
	1298,
	1310,
	1322,
	1334,
	1345,
	1357,
	1369,
	1381,
	1393,
	1405,
	1417,
	1429,
	1441,
	1453,
	1465,
	1477,
	1489,
	1501,
	1513,
	1525,
	1537,
	1549,
	1562,
	1574,
	1586,
	1598,
	1611,
	1623,
	1635,
	1648,
	1660,
	1672,
	1685,
	1697,
	1709,
	1722,
	1734,
	1747,
	1759,
	1771,
	1784,
	1796,
	1809,
	1821,
	1834,
	1846,
	1859,
	1871,
	1884,
	1896,
	1909,
	1921,
	1934,
	1947,
	1959,
	1972,
	1984,
	1997,
	2009,
	2022,
	2034
};
const uint16 waveTableTriangle[]  = {
	2048,
	2056,
	2064,
	2072,
	2080,
	2088,
	2096,
	2104,
	2112,
	2120,
	2128,
	2136,
	2144,
	2152,
	2160,
	2168,
	2176,
	2184,
	2192,
	2200,
	2208,
	2216,
	2224,
	2232,
	2240,
	2248,
	2256,
	2264,
	2272,
	2280,
	2288,
	2296,
	2304,
	2312,
	2320,
	2328,
	2336,
	2344,
	2352,
	2360,
	2368,
	2376,
	2384,
	2392,
	2400,
	2408,
	2416,
	2424,
	2432,
	2440,
	2448,
	2456,
	2464,
	2472,
	2480,
	2488,
	2496,
	2504,
	2512,
	2520,
	2528,
	2536,
	2544,
	2552,
	2560,
	2568,
	2576,
	2584,
	2592,
	2600,
	2608,
	2616,
	2624,
	2632,
	2640,
	2648,
	2656,
	2664,
	2672,
	2680,
	2688,
	2696,
	2704,
	2712,
	2720,
	2728,
	2736,
	2744,
	2752,
	2760,
	2768,
	2776,
	2784,
	2792,
	2800,
	2808,
	2816,
	2824,
	2832,
	2840,
	2848,
	2856,
	2864,
	2872,
	2880,
	2888,
	2896,
	2904,
	2912,
	2920,
	2928,
	2936,
	2944,
	2952,
	2960,
	2968,
	2976,
	2984,
	2992,
	3000,
	3008,
	3016,
	3024,
	3032,
	3040,
	3048,
	3056,
	3064,
	3072,
	3080,
	3088,
	3096,
	3104,
	3112,
	3120,
	3128,
	3136,
	3144,
	3152,
	3160,
	3168,
	3176,
	3184,
	3192,
	3200,
	3208,
	3216,
	3224,
	3232,
	3240,
	3248,
	3256,
	3264,
	3272,
	3280,
	3288,
	3296,
	3304,
	3312,
	3320,
	3328,
	3336,
	3344,
	3352,
	3360,
	3368,
	3376,
	3384,
	3392,
	3400,
	3408,
	3416,
	3424,
	3432,
	3440,
	3448,
	3456,
	3464,
	3472,
	3480,
	3488,
	3496,
	3504,
	3512,
	3520,
	3528,
	3536,
	3544,
	3552,
	3560,
	3568,
	3576,
	3584,
	3592,
	3600,
	3608,
	3616,
	3624,
	3632,
	3640,
	3648,
	3656,
	3664,
	3672,
	3680,
	3688,
	3696,
	3704,
	3712,
	3720,
	3728,
	3736,
	3744,
	3752,
	3760,
	3768,
	3776,
	3784,
	3792,
	3800,
	3808,
	3816,
	3824,
	3832,
	3840,
	3848,
	3856,
	3864,
	3872,
	3880,
	3888,
	3896,
	3904,
	3912,
	3920,
	3928,
	3936,
	3944,
	3952,
	3960,
	3968,
	3976,
	3984,
	3992,
	4000,
	4008,
	4016,
	4024,
	4032,
	4040,
	4048,
	4056,
	4064,
	4072,
	4080,
	4088,
	4095,
	4088,
	4080,
	4072,
	4064,
	4056,
	4048,
	4040,
	4032,
	4024,
	4016,
	4008,
	4000,
	3992,
	3984,
	3976,
	3968,
	3960,
	3952,
	3944,
	3936,
	3928,
	3920,
	3912,
	3904,
	3896,
	3888,
	3880,
	3872,
	3864,
	3856,
	3848,
	3840,
	3832,
	3824,
	3816,
	3808,
	3800,
	3792,
	3784,
	3776,
	3768,
	3760,
	3752,
	3744,
	3736,
	3728,
	3720,
	3712,
	3704,
	3696,
	3688,
	3680,
	3672,
	3664,
	3656,
	3648,
	3640,
	3632,
	3624,
	3616,
	3608,
	3600,
	3592,
	3584,
	3576,
	3568,
	3560,
	3552,
	3544,
	3536,
	3528,
	3520,
	3512,
	3504,
	3496,
	3488,
	3480,
	3472,
	3464,
	3456,
	3448,
	3440,
	3432,
	3424,
	3416,
	3408,
	3400,
	3392,
	3384,
	3376,
	3368,
	3360,
	3352,
	3344,
	3336,
	3328,
	3320,
	3312,
	3304,
	3296,
	3288,
	3280,
	3272,
	3264,
	3256,
	3248,
	3240,
	3232,
	3224,
	3216,
	3208,
	3200,
	3192,
	3184,
	3176,
	3168,
	3160,
	3152,
	3144,
	3136,
	3128,
	3120,
	3112,
	3104,
	3096,
	3088,
	3080,
	3072,
	3064,
	3056,
	3048,
	3040,
	3032,
	3024,
	3016,
	3008,
	3000,
	2992,
	2984,
	2976,
	2968,
	2960,
	2952,
	2944,
	2936,
	2928,
	2920,
	2912,
	2904,
	2896,
	2888,
	2880,
	2872,
	2864,
	2856,
	2848,
	2840,
	2832,
	2824,
	2816,
	2808,
	2800,
	2792,
	2784,
	2776,
	2768,
	2760,
	2752,
	2744,
	2736,
	2728,
	2720,
	2712,
	2704,
	2696,
	2688,
	2680,
	2672,
	2664,
	2656,
	2648,
	2640,
	2632,
	2624,
	2616,
	2608,
	2600,
	2592,
	2584,
	2576,
	2568,
	2560,
	2552,
	2544,
	2536,
	2528,
	2520,
	2512,
	2504,
	2496,
	2488,
	2480,
	2472,
	2464,
	2456,
	2448,
	2440,
	2432,
	2424,
	2416,
	2408,
	2400,
	2392,
	2384,
	2376,
	2368,
	2360,
	2352,
	2344,
	2336,
	2328,
	2320,
	2312,
	2304,
	2296,
	2288,
	2280,
	2272,
	2264,
	2256,
	2248,
	2240,
	2232,
	2224,
	2216,
	2208,
	2200,
	2192,
	2184,
	2176,
	2168,
	2160,
	2152,
	2144,
	2136,
	2128,
	2120,
	2112,
	2104,
	2096,
	2088,
	2080,
	2072,
	2064,
	2056,
	2048,
	2040,
	2032,
	2024,
	2016,
	2008,
	2000,
	1992,
	1984,
	1976,
	1968,
	1960,
	1952,
	1944,
	1936,
	1928,
	1920,
	1912,
	1904,
	1896,
	1888,
	1880,
	1872,
	1864,
	1856,
	1848,
	1840,
	1832,
	1824,
	1816,
	1808,
	1800,
	1792,
	1784,
	1776,
	1768,
	1760,
	1752,
	1744,
	1736,
	1728,
	1720,
	1712,
	1704,
	1696,
	1688,
	1680,
	1672,
	1664,
	1656,
	1648,
	1640,
	1632,
	1624,
	1616,
	1608,
	1600,
	1592,
	1584,
	1576,
	1568,
	1560,
	1552,
	1544,
	1536,
	1528,
	1520,
	1512,
	1504,
	1496,
	1488,
	1480,
	1472,
	1464,
	1456,
	1448,
	1440,
	1432,
	1424,
	1416,
	1408,
	1400,
	1392,
	1384,
	1376,
	1368,
	1360,
	1352,
	1344,
	1336,
	1328,
	1320,
	1312,
	1304,
	1296,
	1288,
	1280,
	1272,
	1264,
	1256,
	1248,
	1240,
	1232,
	1224,
	1216,
	1208,
	1200,
	1192,
	1184,
	1176,
	1168,
	1160,
	1152,
	1144,
	1136,
	1128,
	1120,
	1112,
	1104,
	1096,
	1088,
	1080,
	1072,
	1064,
	1056,
	1048,
	1040,
	1032,
	1024,
	1016,
	1008,
	1000,
	992,
	984,
	976,
	968,
	960,
	952,
	944,
	936,
	928,
	920,
	912,
	904,
	896,
	888,
	880,
	872,
	864,
	856,
	848,
	840,
	832,
	824,
	816,
	808,
	800,
	792,
	784,
	776,
	768,
	760,
	752,
	744,
	736,
	728,
	720,
	712,
	704,
	696,
	688,
	680,
	672,
	664,
	656,
	648,
	640,
	632,
	624,
	616,
	608,
	600,
	592,
	584,
	576,
	568,
	560,
	552,
	544,
	536,
	528,
	520,
	512,
	504,
	496,
	488,
	480,
	472,
	464,
	456,
	448,
	440,
	432,
	424,
	416,
	408,
	400,
	392,
	384,
	376,
	368,
	360,
	352,
	344,
	336,
	328,
	320,
	312,
	304,
	296,
	288,
	280,
	272,
	264,
	256,
	248,
	240,
	232,
	224,
	216,
	208,
	200,
	192,
	184,
	176,
	168,
	160,
	152,
	144,
	136,
	128,
	120,
	112,
	104,
	96,
	88,
	80,
	72,
	64,
	56,
	48,
	40,
	32,
	24,
	16,
	8,
	0,
	8,
	16,
	24,
	32,
	40,
	48,
	56,
	64,
	72,
	80,
	88,
	96,
	104,
	112,
	120,
	128,
	136,
	144,
	152,
	160,
	168,
	176,
	184,
	192,
	200,
	208,
	216,
	224,
	232,
	240,
	248,
	256,
	264,
	272,
	280,
	288,
	296,
	304,
	312,
	320,
	328,
	336,
	344,
	352,
	360,
	368,
	376,
	384,
	392,
	400,
	408,
	416,
	424,
	432,
	440,
	448,
	456,
	464,
	472,
	480,
	488,
	496,
	504,
	512,
	520,
	528,
	536,
	544,
	552,
	560,
	568,
	576,
	584,
	592,
	600,
	608,
	616,
	624,
	632,
	640,
	648,
	656,
	664,
	672,
	680,
	688,
	696,
	704,
	712,
	720,
	728,
	736,
	744,
	752,
	760,
	768,
	776,
	784,
	792,
	800,
	808,
	816,
	824,
	832,
	840,
	848,
	856,
	864,
	872,
	880,
	888,
	896,
	904,
	912,
	920,
	928,
	936,
	944,
	952,
	960,
	968,
	976,
	984,
	992,
	1000,
	1008,
	1016,
	1024,
	1032,
	1040,
	1048,
	1056,
	1064,
	1072,
	1080,
	1088,
	1096,
	1104,
	1112,
	1120,
	1128,
	1136,
	1144,
	1152,
	1160,
	1168,
	1176,
	1184,
	1192,
	1200,
	1208,
	1216,
	1224,
	1232,
	1240,
	1248,
	1256,
	1264,
	1272,
	1280,
	1288,
	1296,
	1304,
	1312,
	1320,
	1328,
	1336,
	1344,
	1352,
	1360,
	1368,
	1376,
	1384,
	1392,
	1400,
	1408,
	1416,
	1424,
	1432,
	1440,
	1448,
	1456,
	1464,
	1472,
	1480,
	1488,
	1496,
	1504,
	1512,
	1520,
	1528,
	1536,
	1544,
	1552,
	1560,
	1568,
	1576,
	1584,
	1592,
	1600,
	1608,
	1616,
	1624,
	1632,
	1640,
	1648,
	1656,
	1664,
	1672,
	1680,
	1688,
	1696,
	1704,
	1712,
	1720,
	1728,
	1736,
	1744,
	1752,
	1760,
	1768,
	1776,
	1784,
	1792,
	1800,
	1808,
	1816,
	1824,
	1832,
	1840,
	1848,
	1856,
	1864,
	1872,
	1880,
	1888,
	1896,
	1904,
	1912,
	1920,
	1928,
	1936,
	1944,
	1952,
	1960,
	1968,
	1976,
	1984,
	1992,
	2000,
	2008,
	2016,
	2024,
	2032,
	2040
};
const uint16 waveTableSqure[]  = {
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	4095,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};
const uint16 waveTableSawtoothUp[]  = {
	0,
	4,
	8,
	12,
	16,
	20,
	24,
	28,
	32,
	36,
	40,
	44,
	48,
	52,
	56,
	60,
	64,
	68,
	72,
	76,
	80,
	84,
	88,
	92,
	96,
	100,
	104,
	108,
	112,
	116,
	120,
	124,
	128,
	132,
	136,
	140,
	144,
	148,
	152,
	156,
	160,
	164,
	168,
	172,
	176,
	180,
	184,
	188,
	192,
	196,
	200,
	204,
	208,
	212,
	216,
	220,
	224,
	228,
	232,
	236,
	240,
	244,
	248,
	252,
	256,
	260,
	264,
	268,
	272,
	276,
	280,
	284,
	288,
	292,
	296,
	300,
	304,
	308,
	312,
	316,
	320,
	324,
	328,
	332,
	336,
	340,
	344,
	348,
	352,
	356,
	360,
	364,
	368,
	372,
	376,
	380,
	384,
	388,
	392,
	396,
	400,
	404,
	408,
	412,
	416,
	420,
	424,
	428,
	432,
	436,
	440,
	444,
	448,
	452,
	456,
	460,
	464,
	468,
	472,
	476,
	480,
	484,
	488,
	492,
	496,
	500,
	504,
	508,
	512,
	516,
	520,
	524,
	528,
	532,
	536,
	540,
	544,
	548,
	552,
	556,
	560,
	564,
	568,
	572,
	576,
	580,
	584,
	588,
	592,
	596,
	600,
	604,
	608,
	612,
	616,
	620,
	624,
	628,
	632,
	636,
	640,
	644,
	648,
	652,
	656,
	660,
	664,
	668,
	672,
	676,
	680,
	684,
	688,
	692,
	696,
	700,
	704,
	708,
	712,
	716,
	720,
	724,
	728,
	732,
	736,
	740,
	744,
	748,
	752,
	756,
	760,
	764,
	768,
	772,
	776,
	780,
	784,
	788,
	792,
	796,
	800,
	804,
	808,
	812,
	816,
	820,
	824,
	828,
	832,
	836,
	840,
	844,
	848,
	852,
	856,
	860,
	864,
	868,
	872,
	876,
	880,
	884,
	888,
	892,
	896,
	900,
	904,
	908,
	912,
	916,
	920,
	924,
	928,
	932,
	936,
	940,
	944,
	948,
	952,
	956,
	960,
	964,
	968,
	972,
	976,
	980,
	984,
	988,
	992,
	996,
	1000,
	1004,
	1008,
	1012,
	1016,
	1020,
	1024,
	1028,
	1032,
	1036,
	1040,
	1044,
	1048,
	1052,
	1056,
	1060,
	1064,
	1068,
	1072,
	1076,
	1080,
	1084,
	1088,
	1092,
	1096,
	1100,
	1104,
	1108,
	1112,
	1116,
	1120,
	1124,
	1128,
	1132,
	1136,
	1140,
	1144,
	1148,
	1152,
	1156,
	1160,
	1164,
	1168,
	1172,
	1176,
	1180,
	1184,
	1188,
	1192,
	1196,
	1200,
	1204,
	1208,
	1212,
	1216,
	1220,
	1224,
	1228,
	1232,
	1236,
	1240,
	1244,
	1248,
	1252,
	1256,
	1260,
	1264,
	1268,
	1272,
	1276,
	1280,
	1284,
	1288,
	1292,
	1296,
	1300,
	1304,
	1308,
	1312,
	1316,
	1320,
	1324,
	1328,
	1332,
	1336,
	1340,
	1344,
	1348,
	1352,
	1356,
	1360,
	1364,
	1368,
	1372,
	1376,
	1380,
	1384,
	1388,
	1392,
	1396,
	1400,
	1404,
	1408,
	1412,
	1416,
	1420,
	1424,
	1428,
	1432,
	1436,
	1440,
	1444,
	1448,
	1452,
	1456,
	1460,
	1464,
	1468,
	1472,
	1476,
	1480,
	1484,
	1488,
	1492,
	1496,
	1500,
	1504,
	1508,
	1512,
	1516,
	1520,
	1524,
	1528,
	1532,
	1536,
	1540,
	1544,
	1548,
	1552,
	1556,
	1560,
	1564,
	1568,
	1572,
	1576,
	1580,
	1584,
	1588,
	1592,
	1596,
	1600,
	1604,
	1608,
	1612,
	1616,
	1620,
	1624,
	1628,
	1632,
	1636,
	1640,
	1644,
	1648,
	1652,
	1656,
	1660,
	1664,
	1668,
	1672,
	1676,
	1680,
	1684,
	1688,
	1692,
	1696,
	1700,
	1704,
	1708,
	1712,
	1716,
	1720,
	1724,
	1728,
	1732,
	1736,
	1740,
	1744,
	1748,
	1752,
	1756,
	1760,
	1764,
	1768,
	1772,
	1776,
	1780,
	1784,
	1788,
	1792,
	1796,
	1800,
	1804,
	1808,
	1812,
	1816,
	1820,
	1824,
	1828,
	1832,
	1836,
	1840,
	1844,
	1848,
	1852,
	1856,
	1860,
	1864,
	1868,
	1872,
	1876,
	1880,
	1884,
	1888,
	1892,
	1896,
	1900,
	1904,
	1908,
	1912,
	1916,
	1920,
	1924,
	1928,
	1932,
	1936,
	1940,
	1944,
	1948,
	1952,
	1956,
	1960,
	1964,
	1968,
	1972,
	1976,
	1980,
	1984,
	1988,
	1992,
	1996,
	2000,
	2004,
	2008,
	2012,
	2016,
	2020,
	2024,
	2028,
	2032,
	2036,
	2040,
	2044,
	2048,
	2052,
	2056,
	2060,
	2064,
	2068,
	2072,
	2076,
	2080,
	2084,
	2088,
	2092,
	2096,
	2100,
	2104,
	2108,
	2112,
	2116,
	2120,
	2124,
	2128,
	2132,
	2136,
	2140,
	2144,
	2148,
	2152,
	2156,
	2160,
	2164,
	2168,
	2172,
	2176,
	2180,
	2184,
	2188,
	2192,
	2196,
	2200,
	2204,
	2208,
	2212,
	2216,
	2220,
	2224,
	2228,
	2232,
	2236,
	2240,
	2244,
	2248,
	2252,
	2256,
	2260,
	2264,
	2268,
	2272,
	2276,
	2280,
	2284,
	2288,
	2292,
	2296,
	2300,
	2304,
	2308,
	2312,
	2316,
	2320,
	2324,
	2328,
	2332,
	2336,
	2340,
	2344,
	2348,
	2352,
	2356,
	2360,
	2364,
	2368,
	2372,
	2376,
	2380,
	2384,
	2388,
	2392,
	2396,
	2400,
	2404,
	2408,
	2412,
	2416,
	2420,
	2424,
	2428,
	2432,
	2436,
	2440,
	2444,
	2448,
	2452,
	2456,
	2460,
	2464,
	2468,
	2472,
	2476,
	2480,
	2484,
	2488,
	2492,
	2496,
	2500,
	2504,
	2508,
	2512,
	2516,
	2520,
	2524,
	2528,
	2532,
	2536,
	2540,
	2544,
	2548,
	2552,
	2556,
	2560,
	2564,
	2568,
	2572,
	2576,
	2580,
	2584,
	2588,
	2592,
	2596,
	2600,
	2604,
	2608,
	2612,
	2616,
	2620,
	2624,
	2628,
	2632,
	2636,
	2640,
	2644,
	2648,
	2652,
	2656,
	2660,
	2664,
	2668,
	2672,
	2676,
	2680,
	2684,
	2688,
	2692,
	2696,
	2700,
	2704,
	2708,
	2712,
	2716,
	2720,
	2724,
	2728,
	2732,
	2736,
	2740,
	2744,
	2748,
	2752,
	2756,
	2760,
	2764,
	2768,
	2772,
	2776,
	2780,
	2784,
	2788,
	2792,
	2796,
	2800,
	2804,
	2808,
	2812,
	2816,
	2820,
	2824,
	2828,
	2832,
	2836,
	2840,
	2844,
	2848,
	2852,
	2856,
	2860,
	2864,
	2868,
	2872,
	2876,
	2880,
	2884,
	2888,
	2892,
	2896,
	2900,
	2904,
	2908,
	2912,
	2916,
	2920,
	2924,
	2928,
	2932,
	2936,
	2940,
	2944,
	2948,
	2952,
	2956,
	2960,
	2964,
	2968,
	2972,
	2976,
	2980,
	2984,
	2988,
	2992,
	2996,
	3000,
	3004,
	3008,
	3012,
	3016,
	3020,
	3024,
	3028,
	3032,
	3036,
	3040,
	3044,
	3048,
	3052,
	3056,
	3060,
	3064,
	3068,
	3072,
	3076,
	3080,
	3084,
	3088,
	3092,
	3096,
	3100,
	3104,
	3108,
	3112,
	3116,
	3120,
	3124,
	3128,
	3132,
	3136,
	3140,
	3144,
	3148,
	3152,
	3156,
	3160,
	3164,
	3168,
	3172,
	3176,
	3180,
	3184,
	3188,
	3192,
	3196,
	3200,
	3204,
	3208,
	3212,
	3216,
	3220,
	3224,
	3228,
	3232,
	3236,
	3240,
	3244,
	3248,
	3252,
	3256,
	3260,
	3264,
	3268,
	3272,
	3276,
	3280,
	3284,
	3288,
	3292,
	3296,
	3300,
	3304,
	3308,
	3312,
	3316,
	3320,
	3324,
	3328,
	3332,
	3336,
	3340,
	3344,
	3348,
	3352,
	3356,
	3360,
	3364,
	3368,
	3372,
	3376,
	3380,
	3384,
	3388,
	3392,
	3396,
	3400,
	3404,
	3408,
	3412,
	3416,
	3420,
	3424,
	3428,
	3432,
	3436,
	3440,
	3444,
	3448,
	3452,
	3456,
	3460,
	3464,
	3468,
	3472,
	3476,
	3480,
	3484,
	3488,
	3492,
	3496,
	3500,
	3504,
	3508,
	3512,
	3516,
	3520,
	3524,
	3528,
	3532,
	3536,
	3540,
	3544,
	3548,
	3552,
	3556,
	3560,
	3564,
	3568,
	3572,
	3576,
	3580,
	3584,
	3588,
	3592,
	3596,
	3600,
	3604,
	3608,
	3612,
	3616,
	3620,
	3624,
	3628,
	3632,
	3636,
	3640,
	3644,
	3648,
	3652,
	3656,
	3660,
	3664,
	3668,
	3672,
	3676,
	3680,
	3684,
	3688,
	3692,
	3696,
	3700,
	3704,
	3708,
	3712,
	3716,
	3720,
	3724,
	3728,
	3732,
	3736,
	3740,
	3744,
	3748,
	3752,
	3756,
	3760,
	3764,
	3768,
	3772,
	3776,
	3780,
	3784,
	3788,
	3792,
	3796,
	3800,
	3804,
	3808,
	3812,
	3816,
	3820,
	3824,
	3828,
	3832,
	3836,
	3840,
	3844,
	3848,
	3852,
	3856,
	3860,
	3864,
	3868,
	3872,
	3876,
	3880,
	3884,
	3888,
	3892,
	3896,
	3900,
	3904,
	3908,
	3912,
	3916,
	3920,
	3924,
	3928,
	3932,
	3936,
	3940,
	3944,
	3948,
	3952,
	3956,
	3960,
	3964,
	3968,
	3972,
	3976,
	3980,
	3984,
	3988,
	3992,
	3996,
	4000,
	4004,
	4008,
	4012,
	4016,
	4020,
	4024,
	4028,
	4032,
	4036,
	4040,
	4044,
	4048,
	4052,
	4056,
	4060,
	4064,
	4068,
	4072,
	4076,
	4080,
	4084,
	4088,
	4092
};
const uint16 waveTableSawtoothDown[]  = {
	4095,
	4091,
	4087,
	4083,
	4079,
	4075,
	4071,
	4067,
	4063,
	4059,
	4055,
	4051,
	4047,
	4043,
	4039,
	4035,
	4031,
	4027,
	4023,
	4019,
	4015,
	4011,
	4007,
	4003,
	3999,
	3995,
	3991,
	3987,
	3983,
	3979,
	3975,
	3971,
	3967,
	3963,
	3959,
	3955,
	3951,
	3947,
	3943,
	3939,
	3935,
	3931,
	3927,
	3923,
	3919,
	3915,
	3911,
	3907,
	3903,
	3899,
	3895,
	3891,
	3887,
	3883,
	3879,
	3875,
	3871,
	3867,
	3863,
	3859,
	3855,
	3851,
	3847,
	3843,
	3839,
	3835,
	3831,
	3827,
	3823,
	3819,
	3815,
	3811,
	3807,
	3803,
	3799,
	3795,
	3791,
	3787,
	3783,
	3779,
	3775,
	3771,
	3767,
	3763,
	3759,
	3755,
	3751,
	3747,
	3743,
	3739,
	3735,
	3731,
	3727,
	3723,
	3719,
	3715,
	3711,
	3707,
	3703,
	3699,
	3695,
	3691,
	3687,
	3683,
	3679,
	3675,
	3671,
	3667,
	3663,
	3659,
	3655,
	3651,
	3647,
	3643,
	3639,
	3635,
	3631,
	3627,
	3623,
	3619,
	3615,
	3611,
	3607,
	3603,
	3599,
	3595,
	3591,
	3587,
	3583,
	3579,
	3575,
	3571,
	3567,
	3563,
	3559,
	3555,
	3551,
	3547,
	3543,
	3539,
	3535,
	3531,
	3527,
	3523,
	3519,
	3515,
	3511,
	3507,
	3503,
	3499,
	3495,
	3491,
	3487,
	3483,
	3479,
	3475,
	3471,
	3467,
	3463,
	3459,
	3455,
	3451,
	3447,
	3443,
	3439,
	3435,
	3431,
	3427,
	3423,
	3419,
	3415,
	3411,
	3407,
	3403,
	3399,
	3395,
	3391,
	3387,
	3383,
	3379,
	3375,
	3371,
	3367,
	3363,
	3359,
	3355,
	3351,
	3347,
	3343,
	3339,
	3335,
	3331,
	3327,
	3323,
	3319,
	3315,
	3311,
	3307,
	3303,
	3299,
	3295,
	3291,
	3287,
	3283,
	3279,
	3275,
	3271,
	3267,
	3263,
	3259,
	3255,
	3251,
	3247,
	3243,
	3239,
	3235,
	3231,
	3227,
	3223,
	3219,
	3215,
	3211,
	3207,
	3203,
	3199,
	3195,
	3191,
	3187,
	3183,
	3179,
	3175,
	3171,
	3167,
	3163,
	3159,
	3155,
	3151,
	3147,
	3143,
	3139,
	3135,
	3131,
	3127,
	3123,
	3119,
	3115,
	3111,
	3107,
	3103,
	3099,
	3095,
	3091,
	3087,
	3083,
	3079,
	3075,
	3071,
	3067,
	3063,
	3059,
	3055,
	3051,
	3047,
	3043,
	3039,
	3035,
	3031,
	3027,
	3023,
	3019,
	3015,
	3011,
	3007,
	3003,
	2999,
	2995,
	2991,
	2987,
	2983,
	2979,
	2975,
	2971,
	2967,
	2963,
	2959,
	2955,
	2951,
	2947,
	2943,
	2939,
	2935,
	2931,
	2927,
	2923,
	2919,
	2915,
	2911,
	2907,
	2903,
	2899,
	2895,
	2891,
	2887,
	2883,
	2879,
	2875,
	2871,
	2867,
	2863,
	2859,
	2855,
	2851,
	2847,
	2843,
	2839,
	2835,
	2831,
	2827,
	2823,
	2819,
	2815,
	2811,
	2807,
	2803,
	2799,
	2795,
	2791,
	2787,
	2783,
	2779,
	2775,
	2771,
	2767,
	2763,
	2759,
	2755,
	2751,
	2747,
	2743,
	2739,
	2735,
	2731,
	2727,
	2723,
	2719,
	2715,
	2711,
	2707,
	2703,
	2699,
	2695,
	2691,
	2687,
	2683,
	2679,
	2675,
	2671,
	2667,
	2663,
	2659,
	2655,
	2651,
	2647,
	2643,
	2639,
	2635,
	2631,
	2627,
	2623,
	2619,
	2615,
	2611,
	2607,
	2603,
	2599,
	2595,
	2591,
	2587,
	2583,
	2579,
	2575,
	2571,
	2567,
	2563,
	2559,
	2555,
	2551,
	2547,
	2543,
	2539,
	2535,
	2531,
	2527,
	2523,
	2519,
	2515,
	2511,
	2507,
	2503,
	2499,
	2495,
	2491,
	2487,
	2483,
	2479,
	2475,
	2471,
	2467,
	2463,
	2459,
	2455,
	2451,
	2447,
	2443,
	2439,
	2435,
	2431,
	2427,
	2423,
	2419,
	2415,
	2411,
	2407,
	2403,
	2399,
	2395,
	2391,
	2387,
	2383,
	2379,
	2375,
	2371,
	2367,
	2363,
	2359,
	2355,
	2351,
	2347,
	2343,
	2339,
	2335,
	2331,
	2327,
	2323,
	2319,
	2315,
	2311,
	2307,
	2303,
	2299,
	2295,
	2291,
	2287,
	2283,
	2279,
	2275,
	2271,
	2267,
	2263,
	2259,
	2255,
	2251,
	2247,
	2243,
	2239,
	2235,
	2231,
	2227,
	2223,
	2219,
	2215,
	2211,
	2207,
	2203,
	2199,
	2195,
	2191,
	2187,
	2183,
	2179,
	2175,
	2171,
	2167,
	2163,
	2159,
	2155,
	2151,
	2147,
	2143,
	2139,
	2135,
	2131,
	2127,
	2123,
	2119,
	2115,
	2111,
	2107,
	2103,
	2099,
	2095,
	2091,
	2087,
	2083,
	2079,
	2075,
	2071,
	2067,
	2063,
	2059,
	2055,
	2051,
	2047,
	2043,
	2039,
	2035,
	2031,
	2027,
	2023,
	2019,
	2015,
	2011,
	2007,
	2003,
	1999,
	1995,
	1991,
	1987,
	1983,
	1979,
	1975,
	1971,
	1967,
	1963,
	1959,
	1955,
	1951,
	1947,
	1943,
	1939,
	1935,
	1931,
	1927,
	1923,
	1919,
	1915,
	1911,
	1907,
	1903,
	1899,
	1895,
	1891,
	1887,
	1883,
	1879,
	1875,
	1871,
	1867,
	1863,
	1859,
	1855,
	1851,
	1847,
	1843,
	1839,
	1835,
	1831,
	1827,
	1823,
	1819,
	1815,
	1811,
	1807,
	1803,
	1799,
	1795,
	1791,
	1787,
	1783,
	1779,
	1775,
	1771,
	1767,
	1763,
	1759,
	1755,
	1751,
	1747,
	1743,
	1739,
	1735,
	1731,
	1727,
	1723,
	1719,
	1715,
	1711,
	1707,
	1703,
	1699,
	1695,
	1691,
	1687,
	1683,
	1679,
	1675,
	1671,
	1667,
	1663,
	1659,
	1655,
	1651,
	1647,
	1643,
	1639,
	1635,
	1631,
	1627,
	1623,
	1619,
	1615,
	1611,
	1607,
	1603,
	1599,
	1595,
	1591,
	1587,
	1583,
	1579,
	1575,
	1571,
	1567,
	1563,
	1559,
	1555,
	1551,
	1547,
	1543,
	1539,
	1535,
	1531,
	1527,
	1523,
	1519,
	1515,
	1511,
	1507,
	1503,
	1499,
	1495,
	1491,
	1487,
	1483,
	1479,
	1475,
	1471,
	1467,
	1463,
	1459,
	1455,
	1451,
	1447,
	1443,
	1439,
	1435,
	1431,
	1427,
	1423,
	1419,
	1415,
	1411,
	1407,
	1403,
	1399,
	1395,
	1391,
	1387,
	1383,
	1379,
	1375,
	1371,
	1367,
	1363,
	1359,
	1355,
	1351,
	1347,
	1343,
	1339,
	1335,
	1331,
	1327,
	1323,
	1319,
	1315,
	1311,
	1307,
	1303,
	1299,
	1295,
	1291,
	1287,
	1283,
	1279,
	1275,
	1271,
	1267,
	1263,
	1259,
	1255,
	1251,
	1247,
	1243,
	1239,
	1235,
	1231,
	1227,
	1223,
	1219,
	1215,
	1211,
	1207,
	1203,
	1199,
	1195,
	1191,
	1187,
	1183,
	1179,
	1175,
	1171,
	1167,
	1163,
	1159,
	1155,
	1151,
	1147,
	1143,
	1139,
	1135,
	1131,
	1127,
	1123,
	1119,
	1115,
	1111,
	1107,
	1103,
	1099,
	1095,
	1091,
	1087,
	1083,
	1079,
	1075,
	1071,
	1067,
	1063,
	1059,
	1055,
	1051,
	1047,
	1043,
	1039,
	1035,
	1031,
	1027,
	1023,
	1019,
	1015,
	1011,
	1007,
	1003,
	999,
	995,
	991,
	987,
	983,
	979,
	975,
	971,
	967,
	963,
	959,
	955,
	951,
	947,
	943,
	939,
	935,
	931,
	927,
	923,
	919,
	915,
	911,
	907,
	903,
	899,
	895,
	891,
	887,
	883,
	879,
	875,
	871,
	867,
	863,
	859,
	855,
	851,
	847,
	843,
	839,
	835,
	831,
	827,
	823,
	819,
	815,
	811,
	807,
	803,
	799,
	795,
	791,
	787,
	783,
	779,
	775,
	771,
	767,
	763,
	759,
	755,
	751,
	747,
	743,
	739,
	735,
	731,
	727,
	723,
	719,
	715,
	711,
	707,
	703,
	699,
	695,
	691,
	687,
	683,
	679,
	675,
	671,
	667,
	663,
	659,
	655,
	651,
	647,
	643,
	639,
	635,
	631,
	627,
	623,
	619,
	615,
	611,
	607,
	603,
	599,
	595,
	591,
	587,
	583,
	579,
	575,
	571,
	567,
	563,
	559,
	555,
	551,
	547,
	543,
	539,
	535,
	531,
	527,
	523,
	519,
	515,
	511,
	507,
	503,
	499,
	495,
	491,
	487,
	483,
	479,
	475,
	471,
	467,
	463,
	459,
	455,
	451,
	447,
	443,
	439,
	435,
	431,
	427,
	423,
	419,
	415,
	411,
	407,
	403,
	399,
	395,
	391,
	387,
	383,
	379,
	375,
	371,
	367,
	363,
	359,
	355,
	351,
	347,
	343,
	339,
	335,
	331,
	327,
	323,
	319,
	315,
	311,
	307,
	303,
	299,
	295,
	291,
	287,
	283,
	279,
	275,
	271,
	267,
	263,
	259,
	255,
	251,
	247,
	243,
	239,
	235,
	231,
	227,
	223,
	219,
	215,
	211,
	207,
	203,
	199,
	195,
	191,
	187,
	183,
	179,
	175,
	171,
	167,
	163,
	159,
	155,
	151,
	147,
	143,
	139,
	135,
	131,
	127,
	123,
	119,
	115,
	111,
	107,
	103,
	99,
	95,
	91,
	87,
	83,
	79,
	75,
	71,
	67,
	63,
	59,
	55,
	51,
	47,
	43,
	39,
	35,
	31,
	27,
	23,
	19,
	15,
	11,
	7,
	3
};
/* [] END OF FILE */

