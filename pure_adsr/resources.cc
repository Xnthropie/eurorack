// Copyright 2019 Jan-Henrik Bruhn.
//
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#include "pure_adsr/resources.h"

namespace pure_adsr {

static const prog_char str_res_dummy[] PROGMEM = "dummy";


const prog_char* const string_table[] = {
  str_res_dummy,
};

const prog_uint16_t lut_res_env_linear[] PROGMEM = {
       0,    257,    514,    771,   1028,   1285,   1542,   1799,
    2056,   2313,   2570,   2827,   3084,   3341,   3598,   3855,
    4112,   4369,   4626,   4883,   5140,   5397,   5654,   5911,
    6168,   6425,   6682,   6939,   7196,   7453,   7710,   7967,
    8224,   8481,   8738,   8995,   9252,   9509,   9766,  10023,
   10280,  10537,  10794,  11051,  11308,  11565,  11822,  12079,
   12336,  12593,  12850,  13107,  13364,  13621,  13878,  14135,
   14392,  14649,  14906,  15163,  15420,  15677,  15934,  16191,
   16448,  16705,  16962,  17219,  17476,  17733,  17990,  18247,
   18504,  18761,  19018,  19275,  19532,  19789,  20046,  20303,
   20560,  20817,  21074,  21331,  21588,  21845,  22102,  22359,
   22616,  22873,  23130,  23387,  23644,  23901,  24158,  24415,
   24672,  24929,  25186,  25443,  25700,  25957,  26214,  26471,
   26728,  26985,  27242,  27499,  27756,  28013,  28270,  28527,
   28784,  29041,  29298,  29555,  29812,  30069,  30326,  30583,
   30840,  31097,  31354,  31611,  31868,  32125,  32382,  32639,
   32896,  33153,  33410,  33667,  33924,  34181,  34438,  34695,
   34952,  35209,  35466,  35723,  35980,  36237,  36494,  36751,
   37008,  37265,  37522,  37779,  38036,  38293,  38550,  38807,
   39064,  39321,  39578,  39835,  40092,  40349,  40606,  40863,
   41120,  41377,  41634,  41891,  42148,  42405,  42662,  42919,
   43176,  43433,  43690,  43947,  44204,  44461,  44718,  44975,
   45232,  45489,  45746,  46003,  46260,  46517,  46774,  47031,
   47288,  47545,  47802,  48059,  48316,  48573,  48830,  49087,
   49344,  49601,  49858,  50115,  50372,  50629,  50886,  51143,
   51400,  51657,  51914,  52171,  52428,  52685,  52942,  53199,
   53456,  53713,  53970,  54227,  54484,  54741,  54998,  55255,
   55512,  55769,  56026,  56283,  56540,  56797,  57054,  57311,
   57568,  57825,  58082,  58339,  58596,  58853,  59110,  59367,
   59624,  59881,  60138,  60395,  60652,  60909,  61166,  61423,
   61680,  61937,  62194,  62451,  62708,  62965,  63222,  63479,
   63736,  63993,  64250,  64507,  64764,  65021,  65278,  65535,
   65535,
};
const prog_uint16_t lut_res_env_expo[] PROGMEM = {
       0,   1035,   2054,   3057,   4045,   5018,   5975,   6918,
    7846,   8760,   9659,  10545,  11416,  12275,  13120,  13952,
   14771,  15577,  16371,  17152,  17921,  18679,  19425,  20159,
   20881,  21593,  22294,  22983,  23662,  24331,  24989,  25637,
   26274,  26902,  27520,  28129,  28728,  29318,  29899,  30471,
   31034,  31588,  32133,  32670,  33199,  33720,  34232,  34737,
   35233,  35722,  36204,  36678,  37145,  37604,  38056,  38502,
   38940,  39371,  39796,  40215,  40626,  41032,  41431,  41824,
   42211,  42592,  42967,  43336,  43699,  44057,  44409,  44756,
   45097,  45434,  45764,  46090,  46411,  46727,  47037,  47344,
   47645,  47941,  48233,  48521,  48804,  49083,  49357,  49627,
   49893,  50155,  50412,  50666,  50916,  51162,  51404,  51642,
   51877,  52108,  52335,  52559,  52780,  52997,  53210,  53421,
   53628,  53831,  54032,  54230,  54424,  54616,  54804,  54990,
   55173,  55353,  55530,  55704,  55876,  56045,  56211,  56375,
   56536,  56695,  56851,  57005,  57157,  57306,  57453,  57597,
   57740,  57880,  58018,  58153,  58287,  58419,  58548,  58676,
   58801,  58925,  59047,  59167,  59285,  59401,  59515,  59628,
   59739,  59848,  59955,  60061,  60165,  60267,  60368,  60468,
   60566,  60662,  60757,  60850,  60942,  61032,  61121,  61209,
   61295,  61380,  61464,  61546,  61628,  61707,  61786,  61863,
   61939,  62014,  62088,  62161,  62233,  62303,  62372,  62441,
   62508,  62574,  62639,  62703,  62767,  62829,  62890,  62950,
   63010,  63068,  63125,  63182,  63238,  63293,  63347,  63400,
   63452,  63504,  63554,  63604,  63654,  63702,  63750,  63797,
   63843,  63888,  63933,  63977,  64021,  64063,  64105,  64147,
   64188,  64228,  64267,  64306,  64344,  64382,  64419,  64456,
   64492,  64527,  64562,  64596,  64630,  64664,  64696,  64729,
   64760,  64792,  64822,  64853,  64883,  64912,  64941,  64969,
   64997,  65025,  65052,  65079,  65105,  65131,  65157,  65182,
   65206,  65231,  65255,  65278,  65302,  65324,  65347,  65369,
   65391,  65412,  65434,  65454,  65475,  65495,  65515,  65535,
   65535,
};
const prog_uint16_t lut_res_env_quartic[] PROGMEM = {
       0,      0,      0,      0,      0,      0,      0,      0,
       0,      0,      1,      1,      2,      3,      4,      5,
       6,      8,      9,     11,     14,     16,     19,     22,
      25,     29,     33,     37,     42,     48,     53,     59,
      66,     73,     81,     89,     98,    107,    117,    128,
     139,    151,    164,    177,    191,    206,    222,    238,
     256,    274,    293,    313,    334,    355,    378,    402,
     427,    453,    480,    508,    537,    567,    599,    631,
     665,    700,    737,    775,    814,    854,    896,    939,
     984,   1030,   1077,   1127,   1177,   1230,   1283,   1339,
    1396,   1455,   1515,   1577,   1641,   1707,   1775,   1844,
    1916,   1989,   2064,   2141,   2220,   2302,   2385,   2470,
    2557,   2647,   2739,   2833,   2929,   3027,   3128,   3231,
    3336,   3444,   3554,   3667,   3782,   3899,   4019,   4142,
    4267,   4395,   4525,   4658,   4794,   4933,   5074,   5218,
    5365,   5515,   5668,   5824,   5983,   6144,   6309,   6477,
    6648,   6822,   6999,   7179,   7363,   7550,   7740,   7933,
    8130,   8330,   8534,   8741,   8951,   9165,   9383,   9604,
    9829,  10057,  10289,  10525,  10765,  11008,  11255,  11507,
   11761,  12020,  12283,  12550,  12821,  13096,  13375,  13658,
   13945,  14237,  14532,  14832,  15137,  15445,  15758,  16076,
   16397,  16724,  17054,  17390,  17730,  18074,  18423,  18777,
   19136,  19499,  19868,  20241,  20618,  21001,  21389,  21781,
   22179,  22582,  22990,  23403,  23821,  24244,  24672,  25106,
   25545,  25990,  26440,  26895,  27355,  27821,  28293,  28770,
   29253,  29742,  30236,  30735,  31241,  31752,  32270,  32793,
   33321,  33856,  34397,  34944,  35497,  36056,  36621,  37192,
   37769,  38353,  38943,  39539,  40142,  40751,  41366,  41988,
   42617,  43251,  43893,  44541,  45196,  45857,  46526,  47201,
   47882,  48571,  49267,  49969,  50678,  51395,  52118,  52849,
   53587,  54332,  55084,  55843,  56610,  57384,  58165,  58954,
   59750,  60553,  61364,  62183,  63010,  63843,  64685,  65535,
   65535,
};
const prog_uint16_t lut_res_raised_cosine[] PROGMEM = {
       0,      2,      9,     22,     39,     61,     88,    120,
     157,    199,    246,    298,    354,    416,    482,    553,
     629,    710,    796,    886,    982,   1082,   1186,   1296,
    1410,   1530,   1653,   1782,   1915,   2053,   2195,   2342,
    2494,   2650,   2811,   2976,   3146,   3320,   3498,   3681,
    3869,   4060,   4256,   4457,   4661,   4870,   5083,   5300,
    5522,   5747,   5977,   6210,   6448,   6689,   6935,   7184,
    7437,   7694,   7955,   8220,   8488,   8760,   9035,   9314,
    9597,   9883,  10172,  10465,  10762,  11061,  11364,  11670,
   11980,  12292,  12607,  12926,  13247,  13572,  13899,  14229,
   14562,  14898,  15236,  15578,  15921,  16267,  16616,  16967,
   17321,  17676,  18034,  18395,  18757,  19122,  19488,  19857,
   20227,  20600,  20974,  21350,  21728,  22107,  22488,  22871,
   23255,  23641,  24027,  24416,  24805,  25196,  25588,  25980,
   26374,  26769,  27165,  27562,  27959,  28357,  28756,  29155,
   29555,  29956,  30356,  30758,  31159,  31561,  31963,  32365,
   32767,  33169,  33571,  33973,  34375,  34776,  35178,  35578,
   35979,  36379,  36778,  37177,  37575,  37972,  38369,  38765,
   39160,  39554,  39946,  40338,  40729,  41118,  41507,  41893,
   42279,  42663,  43046,  43427,  43806,  44184,  44560,  44934,
   45307,  45677,  46046,  46412,  46777,  47139,  47500,  47858,
   48213,  48567,  48918,  49267,  49613,  49956,  50298,  50636,
   50972,  51305,  51635,  51962,  52287,  52608,  52927,  53242,
   53554,  53864,  54170,  54473,  54772,  55069,  55362,  55651,
   55937,  56220,  56499,  56774,  57046,  57314,  57579,  57840,
   58097,  58350,  58599,  58845,  59086,  59324,  59557,  59787,
   60012,  60234,  60451,  60664,  60873,  61077,  61278,  61474,
   61665,  61853,  62036,  62214,  62388,  62558,  62723,  62884,
   63040,  63192,  63339,  63481,  63619,  63752,  63881,  64004,
   64124,  64238,  64348,  64452,  64552,  64648,  64738,  64824,
   64905,  64981,  65052,  65118,  65180,  65236,  65288,  65335,
   65377,  65414,  65446,  65473,  65495,  65512,  65525,  65532,
   65532,
};
const prog_uint16_t lut_res_unipolar_fold[] PROGMEM = {
       0,    352,    703,   1054,   1404,   1754,   2102,   2450,
    2796,   3141,   3483,   3824,   4163,   4500,   4834,   5165,
    5494,   5819,   6141,   6460,   6776,   7088,   7395,   7699,
    7999,   8294,   8585,   8871,   9152,   9429,   9700,   9966,
   10227,  10482,  10731,  10975,  11213,  11445,  11671,  11891,
   12104,  12311,  12512,  12706,  12893,  13073,  13247,  13414,
   13574,  13727,  13873,  14012,  14144,  14268,  14386,  14496,
   14598,  14694,  14782,  14863,  14937,  15003,  15062,  15113,
   15158,  15195,  15225,  15247,  15263,  15271,  15272,  15266,
   15253,  15234,  15207,  15174,  15133,  15087,  15033,  14973,
   14907,  14834,  14756,  14671,  14580,  14483,  14381,  14273,
   14159,  14040,  13915,  13786,  13651,  13512,  13368,  13219,
   13066,  12909,  12747,  12582,  12412,  12239,  12063,  11883,
   11700,  11513,  11324,  11133,  10939,  10742,  10544,  10343,
   10141,   9936,   9731,   9524,   9316,   9107,   8898,   8688,
    8477,   8266,   8055,   7845,   7634,   7424,   7215,   7007,
    6799,   6593,   6388,   6184,   5983,   5783,   5585,   5389,
    5196,   5005,   4816,   4631,   4448,   4269,   4092,   3919,
    3750,   3584,   3422,   3264,   3110,   2960,   2814,   2673,
    2536,   2403,   2276,   2153,   2035,   1922,   1815,   1712,
    1615,   1523,   1436,   1355,   1280,   1210,   1146,   1087,
    1035,    988,    947,    912,    883,    860,    843,    832,
     827,    828,    835,    848,    867,    893,    924,    962,
    1005,   1055,   1110,   1172,   1239,   1312,   1391,   1476,
    1567,   1663,   1766,   1873,   1987,   2105,   2229,   2359,
    2494,   2634,   2779,   2929,   3084,   3244,   3408,   3578,
    3751,   3930,   4112,   4299,   4490,   4686,   4885,   5087,
    5294,   5504,   5718,   5935,   6155,   6378,   6604,   6834,
    7065,   7300,   7537,   7776,   8017,   8261,   8506,   8753,
    9002,   9253,   9504,   9757,  10012,  10267,  10523,  10780,
   11037,  11295,  11553,  11812,  12070,  12329,  12587,  12845,
   13103,  13360,  13616,  13871,  14126,  14380,  14632,  14883,
   15133,  15381,  15627,  15872,  16115,  16356,  16595,  16832,
   17067,  17299,  17529,  17756,  17980,  18202,  18422,  18638,
   18851,  19061,  19268,  19472,  19673,  19871,  20065,  20255,
   20442,  20626,  20806,  20982,  21154,  21323,  21488,  21649,
   21807,  21960,  22110,  22255,  22397,  22534,  22668,  22797,
   22923,  23044,  23162,  23275,  23384,  23489,  23590,  23687,
   23780,  23869,  23954,  24035,  24112,  24185,  24254,  24320,
   24381,  24438,  24492,  24542,  24588,  24631,  24669,  24705,
   24736,  24764,  24789,  24810,  24828,  24843,  24854,  24862,
   24867,  24869,  24868,  24865,  24858,  24848,  24836,  24821,
   24803,  24783,  24761,  24736,  24709,  24680,  24648,  24614,
   24579,  24541,  24502,  24461,  24418,  24374,  24328,  24281,
   24232,  24183,  24131,  24079,  24026,  23972,  23917,  23861,
   23804,  23747,  23689,  23631,  23572,  23513,  23454,  23394,
   23335,  23275,  23216,  23156,  23097,  23038,  22979,  22920,
   22862,  22805,  22748,  22692,  22636,  22581,  22527,  22474,
   22422,  22370,  22320,  22271,  22223,  22176,  22130,  22086,
   22043,  22001,  21961,  21922,  21884,  21849,  21814,  21782,
   21750,  21721,  21693,  21667,  21642,  21620,  21599,  21580,
   21562,  21547,  21533,  21521,  21511,  21503,  21497,  21493,
   21490,  21490,  21491,  21495,  21500,  21507,  21516,  21527,
   21539,  21554,  21571,  21589,  21609,  21631,  21655,  21681,
   21708,  21738,  21769,  21801,  21836,  21872,  21910,  21949,
   21990,  22033,  22077,  22123,  22171,  22219,  22270,  22321,
   22375,  22429,  22485,  22542,  22600,  22660,  22721,  22782,
   22845,  22910,  22975,  23041,  23108,  23176,  23245,  23315,
   23386,  23457,  23529,  23602,  23676,  23750,  23824,  23900,
   23975,  24052,  24128,  24205,  24283,  24361,  24438,  24517,
   24595,  24674,  24752,  24831,  24910,  24989,  25068,  25146,
   25225,  25304,  25382,  25460,  25538,  25616,  25693,  25770,
   25847,  25923,  25999,  26075,  26150,  26224,  26298,  26372,
   26445,  26517,  26589,  26660,  26730,  26800,  26869,  26937,
   27004,  27071,  27137,  27202,  27266,  27330,  27392,  27454,
   27515,  27575,  27634,  27692,  27749,  27805,  27861,  27915,
   27968,  28021,  28072,  28123,  28172,  28221,  28268,  28315,
   28360,  28404,  28448,  28490,  28532,  28572,  28612,  28650,
   28688,  28725,  28760,  28795,  28828,  28861,  28893,  28923,
   28953,  28982,  29010,  29037,  29063,  29089,  29113,  29136,
   29159,  29181,  29202,  29222,  29241,  29260,  29277,  29294,
   29310,  29326,  29341,  29355,  29368,  29380,  29392,  29404,
   29414,  29424,  29434,  29443,  29451,  29459,  29466,  29472,
   29478,  29484,  29489,  29494,  29498,  29502,  29505,  29508,
   29511,  29513,  29515,  29517,  29518,  29519,  29520,  29521,
   29521,  29521,  29520,  29520,  29519,  29519,  29518,  29517,
   29515,  29514,  29513,  29511,  29510,  29508,  29506,  29505,
   29503,  29501,  29499,  29498,  29496,  29494,  29493,  29491,
   29490,  29488,  29487,  29486,  29484,  29483,  29483,  29482,
   29481,  29481,  29481,  29480,  29480,  29481,  29481,  29482,
   29482,  29483,  29485,  29486,  29488,  29490,  29492,  29494,
   29496,  29499,  29502,  29505,  29509,  29513,  29517,  29521,
   29525,  29530,  29535,  29540,  29546,  29551,  29557,  29564,
   29570,  29577,  29584,  29591,  29598,  29606,  29614,  29622,
   29631,  29639,  29648,  29657,  29667,  29676,  29686,  29696,
   29706,  29717,  29728,  29738,  29749,  29761,  29772,  29784,
   29796,  29808,  29820,  29832,  29845,  29857,  29870,  29883,
   29896,  29910,  29923,  29937,  29950,  29964,  29978,  29992,
   30006,  30021,  30035,  30050,  30064,  30079,  30093,  30108,
   30123,  30138,  30153,  30168,  30183,  30198,  30213,  30229,
   30244,  30259,  30274,  30290,  30305,  30320,  30336,  30351,
   30366,  30382,  30397,  30412,  30428,  30443,  30458,  30473,
   30488,  30504,  30519,  30534,  30549,  30564,  30579,  30593,
   30608,  30623,  30637,  30652,  30667,  30681,  30695,  30710,
   30724,  30738,  30752,  30766,  30780,  30794,  30807,  30821,
   30834,  30848,  30861,  30874,  30887,  30900,  30913,  30926,
   30939,  30951,  30964,  30976,  30988,  31001,  31013,  31025,
   31036,  31048,  31060,  31071,  31083,  31094,  31105,  31117,
   31128,  31138,  31149,  31160,  31171,  31181,  31191,  31202,
   31212,  31222,  31232,  31242,  31252,  31262,  31271,  31281,
   31290,  31299,  31309,  31318,  31327,  31336,  31345,  31354,
   31362,  31371,  31380,  31388,  31397,  31405,  31413,  31422,
   31430,  31438,  31446,  31454,  31462,  31469,  31477,  31485,
   31492,  31500,  31508,  31515,  31522,  31530,  31537,  31544,
   31552,  31559,  31566,  31573,  31580,  31587,  31594,  31601,
   31608,  31615,  31621,  31628,  31635,  31642,  31648,  31655,
   31662,  31668,  31675,  31682,  31688,  31695,  31701,  31708,
   31714,  31721,  31727,  31733,  31740,  31746,  31753,  31759,
   31765,  31772,  31778,  31785,  31791,  31797,  31804,  31810,
   31816,  31823,  31829,  31835,  31842,  31848,  31854,  31861,
   31867,  31873,  31880,  31886,  31892,  31898,  31905,  31911,
   31917,  31924,  31930,  31937,  31943,  31949,  31956,  31962,
   31968,  31975,  31981,  31987,  31994,  32000,  32007,  32013,
   32019,  32026,  32032,  32039,  32045,  32052,  32058,  32065,
   32071,  32077,  32084,  32090,  32097,  32103,  32110,  32116,
   32123,  32129,  32136,  32142,  32149,  32155,  32162,  32168,
   32175,  32181,  32188,  32194,  32201,  32207,  32214,  32220,
   32227,  32233,  32240,  32246,  32253,  32259,  32266,  32272,
   32279,  32285,  32292,  32298,  32305,  32311,  32318,  32324,
   32331,  32337,  32344,  32350,  32357,  32363,  32370,  32376,
   32382,  32389,  32395,  32402,  32408,  32414,  32421,  32427,
   32434,  32440,  32446,  32453,  32459,  32465,  32472,  32478,
   32484,  32490,  32497,  32503,  32509,  32516,  32522,  32528,
   32534,  32540,  32547,  32553,  32559,  32565,  32571,  32577,
   32583,  32590,  32596,  32602,  32608,  32614,  32620,  32626,
   32632,  32638,  32644,  32650,  32656,  32662,  32668,  32674,
   32680,  32686,  32692,  32697,  32703,  32709,  32715,  32721,
   32727,  32732,  32738,  32744,  32750,  32756,  32761,  32767,
   32767,
};


const prog_uint16_t* const lookup_table_table[] = {
  lut_res_env_linear,
  lut_res_env_expo,
  lut_res_env_quartic,
  lut_res_raised_cosine,
  lut_res_unipolar_fold,
};

const prog_uint32_t lut_res_env_increments[] PROGMEM = {
  3504693313, 3176601606, 2884013866, 2622586312, 2388566072, 2178702957, 1990175547, 1820529079,
  1667623120, 1529587348, 1404784101, 1291776569, 1189301718, 1096247183, 1011631504, 934587183,
  864346126, 800227116, 741624993, 688001314, 638876255, 593821582, 552454550, 514432575,
  479448594, 447227012, 417520144, 390105102, 364781062, 341366853, 319698837, 299629042,
  281023504, 263760808, 247730789, 232833385, 218977613, 206080659, 194067073, 182868042,
  172420748, 162667792, 153556675, 145039341, 137071757, 129613544, 122627643, 116080011,
  109939351, 104176866, 98766043, 93682448, 88903546, 84408543, 80178232, 76194860,
  72442009, 68904484, 65568210, 62420143, 59448188, 56641118, 53988510, 51480677,
  49108615, 46863947, 44738874, 42726133, 40818955, 39011029, 37296465, 35669767,
  34125801, 32659769, 31267185, 29943852, 28685844, 27489481, 26351320, 25268129,
  24236882, 23254735, 22319022, 21427239, 20577032, 19766190, 18992633, 18254405,
  17549664, 16876677, 16233811, 15619528, 15032376, 14470989, 13934075, 13420417,
  12928865, 12458333, 12007794, 11576280, 11162871, 10766702, 10386951, 10022842,
  9673638, 9338643, 9017196, 8708673, 8412479, 8128051, 7854857, 7592388,
  7340165, 7097730, 6864649, 6640510, 6424922, 6217511, 6017923, 5825821,
  5640885, 5462808, 5291300, 5126085, 4966898, 4813488, 4665615, 4523052,
  4385580, 4252991, 4125088, 4001681, 3882588, 3767639, 3656668, 3549518,
  3446038, 3346084, 3249520, 3156214, 3066041, 2978879, 2894614, 2813136,
  2734340, 2658124, 2584393, 2513053, 2444015, 2377196, 2312513, 2249888,
  2189246, 2130516, 2073628, 2018517, 1965119, 1913373, 1863220, 1814606,
  1767475, 1721775, 1677458, 1634475, 1592781, 1552330, 1513082, 1474994,
  1438028, 1402145, 1367310, 1333488, 1300644, 1268747, 1237765, 1207668,
  1178428, 1150015, 1122405, 1095570, 1069485, 1044128, 1019474, 995501,
  972187, 949513, 927457, 906001, 885126, 864814, 845047, 825809,
  807084, 788855, 771109, 753829, 737003, 720616, 704656, 689110,
  673965, 659209, 644832, 630822, 617168, 603860, 590888, 578242,
  565913, 553892, 542169, 530738, 519588, 508712, 498103, 487753,
  477655, 467801, 458186, 448802, 439643, 430702, 421975, 413455,
  405136, 397013, 389081, 381334, 373768, 366378, 359159, 352106,
  345216, 338483, 331904, 325475, 319192, 313051, 307048, 301180,
  295443, 289834, 284350, 278988, 273744, 268615, 263599, 258693,
  253893, 249198, 244605, 240110, 235713, 231409, 227198, 223077,
  219043,
};
const prog_uint32_t lut_res_env_increments_slow[] PROGMEM = {
  876173, 855969, 836311, 817181, 798563, 780441, 762801, 745627,
  728906, 712624, 696767, 681324, 666281, 651626, 637349, 623439,
  609883, 596673, 583797, 571247, 559013, 547085, 535455, 524115,
  513056, 502270, 491749, 481487, 471475, 461707, 452176, 442875,
  433798, 424939, 416292, 407850, 399610, 391564, 383708, 376036,
  368544, 361227, 354080, 347098, 340278, 333615, 327104, 320742,
  314525, 308449, 302511, 296706, 291032, 285485, 280062, 274760,
  269575, 264504, 259546, 254696, 249952, 245312, 240773, 236332,
  231987, 227735, 223575, 219504, 215519, 211620, 207803, 204066,
  200409, 196828, 193322, 189889, 186528, 183236, 180012, 176855,
  173763, 170734, 167767, 164860, 162012, 159222, 156488, 153809,
  151184, 148612, 146090, 143619, 141197, 138822, 136495, 134213,
  131976, 129782, 127631, 125522, 123454, 121426, 119437, 117486,
  115572, 113695, 111853, 110047, 108274, 106535, 104829, 103155,
  101512,  99900,  98318,  96765,  95241,  93745,  92277,  90835,
   89420,  88031,  86667,  85328,  84013,  82722,  81454,  80209,
   78986,  77785,  76605,  75446,  74308,  73190,  72092,  71013,
   69953,  68911,  67888,  66883,  65895,  64924,  63969,  63032,
   62110,  61204,  60314,  59439,  58578,  57733,  56901,  56084,
   55280,  54490,  53713,  52949,  52198,  51460,  50733,  50019,
   49316,  48625,  47945,  47277,  46619,  45972,  45336,  44710,
   44094,  43488,  42892,  42305,  41728,  41160,  40601,  40051,
   39510,  38977,  38453,  37937,  37429,  36929,  36437,  35952,
   35475,  35006,  34544,  34089,  33641,  33200,  32765,  32338,
   31916,  31502,  31093,  30691,  30295,  29905,  29521,  29143,
   28770,  28403,  28041,  27685,  27334,  26988,  26648,  26312,
   25981,  25656,  25335,  25019,  24707,  24400,  24097,  23799,
   23505,  23216,  22930,  22649,  22372,  22098,  21829,  21564,
   21302,  21044,  20789,  20539,  20292,  20048,  19808,  19571,
   19337,  19107,  18880,  18656,  18435,  18217,  18003,  17791,
   17582,  17376,  17173,  16972,  16775,  16580,  16388,  16198,
   16011,  15826,  15644,  15465,  15288,  15113,  14940,  14770,
   14602,
};


const prog_uint32_t* const lookup_table_32_table[] = {
  lut_res_env_increments,
  lut_res_env_increments_slow,
};


}  // namespace pure_adsr
