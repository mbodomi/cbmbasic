bool g790, g791, g792, g793, g794, g795;
u8 g0, g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, g14, g15, g16, g17, g18, g19, g20, g21, g22, g23, g24, g25, g26, g27, g28, g29, g30, g31, g32, g33, g34, g35, g36, g37, g38, g39, g40, g41, g42, g43, g44, g45, g46, g47, g48, g49, g50, g51, g52, g53, g54, g55, g56, g57, g58, g59, g60, g61, g62, g63, g64, g65, g66, g67, g68, g69, g70, g71, g72, g73, g74, g75, g76, g77, g78, g79, g80, g81, g82, g83, g84, g85, g86, g87, g88, g89, g90, g91, g92, g93, g94, g95, g96, g97, g98, g99, g100, g101, g102, g103, g104, g105, g106, g107, g108, g109, g110, g111, g112, g113, g114, g115, g116, g117, g118, g119, g120, g121, g122, g123, g124, g125, g126, g127, g128, g129, g130, g131, g132, g133, g134, g135, g136, g137, g138, g139, g140, g141, g142, g143, g144, g145, g146, g147, g148, g149, g150, g151, g152, g153, g154, g155, g156, g157, g158, g159, g160, g161, g162, g163, g164, g165, g166, g167, g168, g169, g170, g171, g172, g173, g174, g175, g176, g177, g178, g179, g180, g181, g182, g183, g184, g185, g186, g187, g188, g189, g190, g191, g192, g193, g194, g195, g196, g197, g198, g199, g200, g201, g202, g203, g204, g205, g206, g207, g208, g209, g210, g211, g212, g213, g214, g215, g216, g217, g218, g219, g220, g221, g222, g223, g224, g225, g226, g227, g228, g229, g230, g231, g232, g233, g234, g235, g236, g237, g238, g239, g240, g241, g242, g243, g244, g245, g246, g247, g248, g249, g250, g251, g252, g253, g254, g255, g256, g257, g258, g259, g260, g261, g262, g263, g264, g265, g266, g267, g268, g269, g270, g271, g272, g273, g274, g275, g276, g277, g278, g279, g280, g281, g282, g283, g284, g285, g286, g287, g288, g289, g290, g291, g292, g293, g294, g295, g296, g297, g298, g299, g300, g301, g302, g303, g304, g305, g306, g307, g308, g309, g310, g311, g312, g313, g314, g315, g316, g317, g318, g319, g320, g321, g322, g323, g324, g325, g326, g327, g328, g329, g330, g331, g332, g333, g334, g335, g336, g337, g338, g339, g340, g341, g342, g343, g344, g345, g346, g347, g348, g349, g350, g351, g352, g353, g354, g355, g356, g357, g358, g359, g360, g361, g362, g363, g364, g365, g366, g367, g368, g369, g370, g371, g372, g373, g374, g375, g376, g377, g378, g379, g380, g381, g382, g383, g384, g385, g386, g387, g388, g389, g390, g391, g392, g393, g394, g395, g396, g397, g398, g399, g400, g401, g402, g403, g404, g405, g406, g407, g408, g409, g410, g411, g412, g413, g414, g415, g416, g417, g418, g419, g420, g421, g422, g423, g424, g425, g426, g427, g428, g429, g430, g431, g432, g433, g434, g435, g436, g437, g438, g439, g440, g441, g442, g443, g444, g445, g446, g447, g448, g449, g450, g451, g452, g453, g454, g455, g456, g457, g458, g459, g460, g461, g462, g463, g464, g465, g466, g467, g468, g469, g470, g471, g472, g473, g474, g475, g476, g477, g478, g479, g480, g481, g482, g483, g484, g485, g486, g487, g488, g489, g490, g491, g492, g493, g494, g495, g496, g497, g498, g499, g500, g501, g502, g503, g504, g505, g506, g507, g508, g509, g510, g511, g512, g513, g514, g515, g516, g517, g518, g519, g520, g521, g522, g523, g524, g525, g526, g527, g528, g529, g530, g531, g532, g533, g534, g535, g536, g537, g538, g539, g540, g541, g542, g543, g544, g545, g546, g547, g548, g549, g550, g551, g552, g553, g554, g555, g556, g557, g558, g559, g560, g561, g562, g563, g564, g565, g566, g567, g568, g569, g570, g571, g572, g573, g574, g575, g576, g577, g578, g579, g580, g581, g582, g583, g584, g585, g586, g587, g588, g589, g590, g591, g592, g593, g594, g595, g596, g597, g598, g599, g600, g601, g602, g603, g604, g605, g606, g607, g608, g609, g610, g611, g612, g613, g614, g615, g616, g617, g618, g619, g620, g621, g622, g623, g624, g625, g626, g627, g628, g629, g630, g631, g632, g633, g634, g635, g636, g637, g638, g639, g640, g641, g642, g643, g644, g645, g646, g647, g648, g649, g650, g651, g652, g653, g654, g655, g656, g657, g658, g659, g660, g661, g662, g663, g664, g665, g666, g667, g668, g669, g670, g671, g672, g673, g674, g675, g676, g677, g678, g679, g680, g681, g682, g683, g684, g685, g686, g687, g688, g689, g690, g691, g692, g693, g694, g695, g696, g697, g698, g699, g700, g701, g702, g703, g704, g705, g706, g707, g708, g709, g710, g711, g712, g713, g714, g715, g716, g717, g718, g719, g720, g721, g722, g723, g724, g725, g726, g727, g728, g729, g730, g731, g732, g733, g734, g735, g736, g737, g738, g739, g740, g741, g742, g743, g744, g745, g746, g747, g748, g749, g750, g751, g752, g753, g754, g755, g756, g757, g758, g759, g760, g761, g762, g763, g764, g765, g766, g767, g768, g769, g770, g771, g772, g773, g774, g775, g776, g777, g778, g779, g780, g781, g782, g783, g784, g785, g786, g787, g788, g789;
u16 g796, g797, g798, g799, g800, g801, g802, g803, g804, g805, g806, g807, g808, g809, g810, g811, g812, g813, g814, g815, g816, g817, g818, g819, g820, g821, g822, g823, g824, g825, g826, g827, g828, g829, g830, g831, g832, g833, g834, g835, g836, g837, g838, g839, g840, g841, g842, g843, g844, g845, g846, g847, g848, g849, g850, g851, g852, g853, g854, g855, g856, g857, g858, g859, g860, g861, g862, g863, g864, g865, g866, g867, g868, g869, g870, g871, g872, g873, g874, g875, g876, g877, g878, g879, g880, g881, g882, g883, g884, g885, g886, g887, g888, g889, g890, g891, g892, g893, g894, g895, g896, g897, g898, g899, g900, g901, g902, g903, g904, g905, g906, g907, g908, g909, g910, g911, g912, g913, g914, g915, g916, g917, g918, g919, g920, g921, g922, g923, g924, g925, g926, g927, g928, g929, g930, g931, g932, g933, g934, g935, g936, g937, g938, g939, g940, g941, g942, g943, g944, g945, g946, g947, g948, g949, g950, g951, g952, g953, g954, g955, g956, g957, g958, g959, g960, g961, g962, g963, g964, g965, g966, g967, g968, g969, g970, g971, g972, g973, g974, g975, g976, g977, g978, g979, g980, g981, g982, g983, g984, g985, g986, g987, g988, g989, g990, g991, g992, g993, g994, g995, g996, g997, g998, g999, g1000, g1001;

start:
{
	S = -1;
	memcpy(((&RAM[40960u])), ROM, 17591u);
	PC = init_os(argc, argv);
	switch (PC) { /* different entry points */
		case 0xAD8A:
		goto lAD8A;
		case 0xAD9E:
		g764 = S;
		goto lAD9E;
		case 0xAEFD:
		g288 = ',';
		goto lAEFF;
		case 0xB6A3:
		g424 = S+1;
		goto lB6A3;
		case 0xB79E:
		goto lB79E;
		case 0xB7F7:
		g251 = S;
		goto lB7F7;
		case 0xE394:
		goto lE394;
		default:
		printf("unknown entry\n");
		exit(1);
	}
}

bb48000:
{
	u16 t0;
	u16 t1;
	t0 = PC;
	if (t0 == 0xA437) /* error handler */
	goto lA437;
	t1 = *((&_ZZ4mainE11case_labels[(t0 + 4294926336u)]));
	switch (t1) {
		default:
		goto not_found;
		;
		case 1u:
		goto lA3BB;
		case 2u:
		goto lA41F;
		case 3u:
		goto lA44A;
		case 4u:
		goto lA451;
		case 5u:
		goto lA454;
		case 6u:
		goto lA45E;
		case 7u:
		goto lA465;
		case 8u:
		goto lA46C;
		case 9u:
		goto lA474;
		case 10u:
		goto lA47B;
		case 11u:
		goto lA480;
		case 12u:
		goto lA483;
		case 13u:
		goto lA486;
		case 14u:
		goto lA48D;
		case 15u:
		goto lA7E1;
		case 16u:
		goto lA49F;
		case 17u:
		goto lA4A2;
		case 18u:
		goto lA4A7;
		case 19u:
		goto lA4F0;
		case 20u:
		goto lA4F3;
		case 21u:
		goto lA50D;
		case 22u:
		goto lA52D;
		case 23u:
		goto lA480;
		case 24u:
		goto lA565;
		case 25u:
		goto lA57C;
		case 26u:
		goto lA642;
		case 27u:
		goto lA65C;
		case 28u:
		goto lA65E;
		case 29u:
		goto lA663;
		case 30u:
		goto lA67A;
		case 31u:
		goto lA69C;
		case 32u:
		goto lA6A7;
		case 33u:
		goto lA6AA;
		case 34u:
		goto lA6AD;
		case 35u:
		goto lA6B6;
		case 36u:
		goto lA6B9;
		case 37u:
		goto lA6D4;
		case 38u:
		goto lA6D7;
		case 39u:
		goto lA6ED;
		case 40u:
		goto lA6F6;
		case 41u:
		goto lA71A;
		case 42u:
		goto lA740;
		case 43u:
		goto lA742;
		case 44u:
		goto lA749;
		case 45u:
		goto lA74C;
		case 46u:
		goto lA75A;
		case 47u:
		goto lA75D;
		case 48u:
		goto lA772;
		case 49u:
		goto lA775;
		case 50u:
		goto lA778;
		case 51u:
		goto lA78B;
		case 52u:
		goto lA792;
		case 53u:
		goto lA795;
		case 54u:
		goto lA79C;
		case 55u:
		goto lA79F;
		case 56u:
		goto lA7A2;
		case 57u:
		goto lA7A5;
		case 58u:
		goto lA7B1;
		case 59u:
		goto lA7E4;
		case 60u:
		goto lA7E7;
		case 61u:
		goto lA7AE;
		case 62u:
		goto lA815;
		case 63u:
		goto lA8A0;
		case 64u:
		goto lA81D;
		case 65u:
		goto lA82F;
		case 66u:
		goto lA831;
		case 67u:
		goto lA857;
		case 68u:
		goto lA871;
		case 69u:
		goto lA877;
		case 70u:
		goto lA897;
		case 71u:
		goto lA883;
		case 72u:
		goto lA888;
		case 73u:
		goto lA89A;
		case 74u:
		goto lA7AE;
		case 75u:
		goto lA8A0;
		case 76u:
		goto lA8A3;
		case 77u:
		goto lA8A6;
		case 78u:
		goto lA8C3;
		case 79u:
		goto lA8D2;
		case 80u:
		goto lA8DB;
		case 81u:
		goto lA8F8;
		case 82u:
		goto lA8FB;
		case 83u:
		goto bb48000_2e_lA928_crit_edge;
		case 84u:
		goto lA92B;
		case 85u:
		goto lA92E;
		case 86u:
		goto lA937;
		case 87u:
		goto lA93B;
		case 88u:
		goto lA93E;
		case 89u:
		goto lA943;
		case 90u:
		goto lA94B;
		case 91u:
		goto lA94E;
		case 92u:
		goto lA962;
		case 93u:
		goto lA965;
		case 94u:
		goto lA971;
		case 95u:
		goto lA9A5;
		case 96u:
		goto lA9A8;
		case 97u:
		goto lA9B1;
		case 98u:
		goto lA9BA;
		case 99u:
		goto lA9BF;
		case 100u:
		goto lA9C7;
		case 101u:
		goto lA9CA;
		case 102u:
		goto lA9E3;
		case 103u:
		goto lA9F2;
		case 104u:
		goto lA9F5;
		case 105u:
		goto lA9FC;
		case 106u:
		goto lA9FF;
		case 107u:
		goto lAA07;
		case 108u:
		goto lAA11;
		case 109u:
		goto lAA14;
		case 110u:
		goto lAA22;
		case 111u:
		goto lAA59;
		case 112u:
		goto lAA64;
		case 113u:
		goto lAA6F;
		case 114u:
		goto lAA80;
		case 115u:
		goto lABB5;
		case 116u:
		goto lAA86;
		case 117u:
		goto lAA89;
		case 118u:
		goto lAA90;
		case 119u:
		goto lAA96;
		case 120u:
		goto lAA9D;
		case 121u:
		goto lAAA0;
		case 122u:
		goto lAAB8;
		case 123u:
		goto lAABF;
		case 124u:
		goto lAAC2;
		case 125u:
		goto lAAC5;
		case 126u:
		goto lAAC8;
		case 127u:
		goto lAADC;
		case 128u:
		goto lAAE5;
		case 129u:
		goto lAAEC;
		case 130u:
		goto lAAFD;
		case 131u:
		goto lAB02;
		case 132u:
		goto lAAA2;
		case 133u:
		goto lAB1C;
		case 134u:
		goto lAB21;
		case 135u:
		goto lAB24;
		case 136u:
		goto lAB30;
		case 137u:
		goto lAB28;
		case 138u:
		goto lAB4A;
		case 139u:
		goto lAB72;
		case 140u:
		goto lAB7B;
		case 141u:
		goto lAB7E;
		case 142u:
		goto lAB85;
		case 143u:
		goto lAB88;
		case 144u:
		goto lAB8D;
		case 145u:
		goto lAB92;
		case 146u:
		goto lABA0;
		case 147u:
		goto lABA5;
		case 148u:
		goto lABA8;
		case 149u:
		goto lABAD;
		case 150u:
		goto lABB2;
		case 151u:
		goto lABB5;
		case 152u:
		goto lABBA;
		case 153u:
		goto lABBF;
		case 154u:
		goto lABC6;
		case 155u:
		goto lABCB;
		case 156u:
		goto lABCE;
		case 157u:
		goto lABD1;
		case 158u:
		goto lABD9;
		case 159u:
		goto lABE0;
		case 160u:
		goto lA8F8;
		case 161u:
		goto lA8FB;
		case 162u:
		goto lAC00;
		case 163u:
		goto lA560;
		case 164u:
		goto lAC06;
		case 165u:
		goto lAC18;
		case 166u:
		goto lAC2F;
		case 167u:
		goto lAC38;
		case 168u:
		goto lAC4A;
		case 169u:
		goto lAC4D;
		case 170u:
		goto lAC54;
		case 171u:
		goto lAC80;
		case 172u:
		goto lAC83;
		case 173u:
		goto lAC91;
		case 174u:
		goto lAC8C;
		case 175u:
		goto lAC91;
		case 176u:
		goto lAC94;
		case 177u:
		goto lACB0;
		case 178u:
		goto lAC15;
		case 179u:
		goto lACBB;
		case 180u:
		goto lACD4;
		case 181u:
		goto lACD7;
		case 182u:
		goto lAD1E;
		case 183u:
		goto lAD27;
		case 184u:
		goto lAD2E;
		case 185u:
		goto lAD45;
		case 186u:
		goto lAD52;
		case 187u:
		goto lAD55;
		case 188u:
		goto lAD5A;
		case 189u:
		goto lAD80;
		case 190u:
		goto lAD87;
		case 191u:
		goto lAD8A;
		case 192u:
		goto lAD8D;
		case 193u:
		goto lADB1;
		case 194u:
		goto lADB4;
		case 195u:
		goto lADBB;
		case 196u:
		goto lADBB;
		case 197u:
		goto lADF9;
		case 198u:
		goto lADFD;
		case 199u:
		goto lAE2B;
		case 200u:
		goto lAE46;
		case 201u:
		goto lAE64;
		case 202u:
		goto lAE86;
		case 203u:
		goto lAE8D;
		case 204u:
		goto lAE95;
		case 205u:
		goto lAEA5;
		case 206u:
		goto lB7E2;
		case 207u:
		goto bb48000_2e_lAED4_crit_edge;
		break;
		case 208u:
		goto lAED7;
		case 209u:
		goto lAEF4;
		case 210u:
		goto lAEF7;
		case 211u:
		goto lAF2B;
		case 212u:
		goto lAF3E;
		case 213u:
		goto lAF4B;
		case 214u:
		goto lB46F;
		case 215u:
		goto lAF71;
		case 216u:
		goto lAF7E;
		case 217u:
		goto lAF87;
		case 218u:
		goto lBC3C;
		case 219u:
		goto lAFAD;
		case 220u:
		goto lAFB4;
		case 221u:
		goto lAFB7;
		case 222u:
		goto lAFBA;
		case 223u:
		goto lAFBD;
		case 224u:
		goto lAFCA;
		case 225u:
		goto lAFD4;
		case 226u:
		goto lAD8D;
		case 227u:
		goto lAFE6;
		case 228u:
		goto lAFE9;
		case 229u:
		goto lAFF0;
		case 230u:
		goto lAFFF;
		case 231u:
		goto lB002;
		case 232u:
		goto lB016;
		case 233u:
		goto lB019;
		case 234u:
		goto lB02A;
		case 235u:
		goto lB037;
		case 236u:
		goto lB044;
		case 237u:
		goto lB081;
		case 238u:
		goto lB085;
		case 239u:
		goto lB088;
		case 240u:
		goto lB090;
		case 241u:
		goto lB097;
		case 242u:
		goto lB09A;
		case 243u:
		goto lB0A8;
		case 244u:
		goto lB0AD;
		case 245u:
		goto lB0B3;
		case 246u:
		goto lB0B8;
		case 247u:
		goto lB0DB;
		case 248u:
		goto lB160;
		case 249u:
		goto lB1B5;
		case 250u:
		goto lB1B8;
		case 251u:
		goto lB1BB;
		case 252u:
		goto lB1CC;
		case 253u:
		goto lB1E6;
		case 254u:
		goto lB205;
		case 255u:
		goto lB20E;
		case 256u:
		goto lB256;
		case 257u:
		goto lB264;
		case 258u:
		goto lB267;
		case 259u:
		goto lB2A0;
		case 260u:
		goto lB2BC;
		case 261u:
		goto lB319;
		case 262u:
		goto lB33E;
		case 263u:
		goto lB37D;
		case 264u:
		goto lB384;
		case 265u:
		goto lB387;
		case 266u:
		goto lB39E;
		case 267u:
		goto lB3A2;
		case 268u:
		goto lB3B3;
		case 269u:
		goto lB3B6;
		case 270u:
		goto lB3B9;
		case 271u:
		goto lB3BC;
		case 272u:
		goto lB3C3;
		case 273u:
		goto lB3C6;
		case 274u:
		goto lB3C9;
		case 275u:
		goto lB3CE;
		case 276u:
		goto lB44F;
		case 277u:
		goto lB3E6;
		case 278u:
		goto lB3ED;
		case 279u:
		goto lB3F7;
		case 280u:
		goto lB400;
		case 281u:
		goto lB403;
		case 282u:
		goto lB423;
		case 283u:
		goto lB43B;
		case 284u:
		goto lB444;
		case 285u:
		goto lB465;
		case 286u:
		goto lB468;
		case 287u:
		goto lB46D;
		case 288u:
		goto lB480;
		case 289u:
		goto lB4C3;
		case 290u:
		goto lB4CA;
		case 291u:
		goto lB51F;
		case 292u:
		goto lB54B;
		case 293u:
		goto lB564;
		case 294u:
		goto lB5BB;
		case 295u:
		goto lB62B;
		case 296u:
		goto lB646;
		case 297u:
		goto lB649;
		case 298u:
		goto lB660;
		case 299u:
		goto lB663;
		case 300u:
		goto lB66A;
		case 301u:
		goto lB66D;
		case 302u:
		goto lB674;
		case 303u:
		goto lADB8;
		case 304u:
		goto lB6A6;
		case 305u:
		goto lB6B1;
		case 306u:
		goto lB6EC;
		case 307u:
		goto lB6EF;
		case 308u:
		goto lB6F6;
		case 309u:
		goto lB700;
		case 310u:
		goto lB703;
		case 311u:
		goto lB712;
		case 312u:
		goto lB719;
		case 313u:
		goto lB4CA;
		case 314u:
		goto lB72C;
		case 315u:
		goto lB72F;
		case 316u:
		goto lB737;
		case 317u:
		goto lB73E;
		case 318u:
		goto lB745;
		case 319u:
		goto lB748;
		case 320u:
		goto lB74B;
		case 321u:
		goto lB764;
		case 322u:
		goto lB77C;
		case 323u:
		goto lB3A2;
		case 324u:
		goto lB785;
		case 325u:
		goto lB78B;
		case 326u:
		goto lB78E;
		case 327u:
		goto lB79E;
		case 328u:
		goto lB7A1;
		case 329u:
		goto lB7A4;
		case 330u:
		goto lB7AD;
		case 331u:
		goto lB7B0;
		case 332u:
		goto lB7DA;
		case 333u:
		goto lB7DD;
		case 334u:
		goto lB7EE;
		case 335u:
		goto lB7F1;
		case 336u:
		goto lB79E;
		case 337u:
		goto lB804;
		case 338u:
		goto lB80D;
		case 339u:
		goto lB816;
		case 340u:
		goto lB824;
		case 341u:
		goto lB827;
		case 342u:
		goto lB82D;
		case 343u:
		goto lB830;
		case 344u:
		goto lB837;
		case 345u:
		goto lB83C;
		case 346u:
		goto lB853;
		case 347u:
		goto lB865;
		case 348u:
		goto lB86A;
		case 349u:
		goto lB8A3;
		case 350u:
		goto lB8D7;
		case 351u:
		goto lB9EA;
		case 352u:
		goto lB9ED;
		case 353u:
		goto lBA04;
		case 354u:
		goto lBA0B;
		case 355u:
		goto lBA12;
		case 356u:
		goto lBA19;
		case 357u:
		goto lBA20;
		case 358u:
		goto lBA24;
		case 359u:
		goto lBA2B;
		case 360u:
		goto lBA33;
		case 361u:
		goto lBA42;
		case 362u:
		goto lBA47;
		case 363u:
		goto lBA4C;
		case 364u:
		goto lBA51;
		case 365u:
		goto lBB8F;
		case 366u:
		goto lBAE5;
		case 367u:
		goto lBAF4;
		case 368u:
		goto lBB01;
		case 369u:
		goto lBB12;
		case 370u:
		goto lBB12;
		case 371u:
		goto lBB17;
		case 372u:
		goto lBB21;
		case 373u:
		goto lBBD7;
		case 374u:
		goto lBC11_2e_preheader;
		case 375u:
		goto lBC26;
		case 376u:
		goto lBC39;
		case 377u:
		goto lBC3C;
		case 378u:
		goto lBC58;
		case 379u:
		goto lBCAE;
		case 380u:
		goto lBCB8;
		case 381u:
		goto lBCC9;
		case 382u:
		goto lBCCC;
		case 383u:
		goto lBCD5;
		case 384u:
		goto lBD0D;
		case 385u:
		goto lBD1A;
		case 386u:
		goto lBD33;
		case 387u:
		goto lBD55;
		case 388u:
		goto lBD5E;
		case 389u:
		goto lBD74;
		case 390u:
		goto lBD0A;
		case 391u:
		goto lBD82;
		case 392u:
		goto lBD86;
		case 393u:
		goto lBDC9;
		case 394u:
		goto lBDD7;
		case 395u:
		goto lAB1E;
		case 396u:
		goto lBE07;
		case 397u:
		goto lBE12;
		case 398u:
		goto lBE1D;
		case 399u:
		goto lBE24;
		case 400u:
		goto lBE2B;
		case 401u:
		goto lBE32;
		case 402u:
		goto lBE35;
		case 403u:
		goto lBF71;
		case 404u:
		goto lBF74;
		case 405u:
		goto lBF7B;
		case 406u:
		goto lBF8B;
		case 407u:
		goto lBF92;
		case 408u:
		goto lBF99;
		case 409u:
		goto lBFA1;
		case 410u:
		goto lBFA6;
		case 411u:
		goto lBFAD;
		case 412u:
		goto lBFB0;
		case 413u:
		goto lBFB4;
		case 414u:
		goto lBFED;
		case 415u:
		goto lBFF4;
		case 416u:
		goto lE000;
		case 417u:
		goto lE005;
		case 418u:
		goto lE00E;
		case 419u:
		goto lE011;
		case 420u:
		goto lE030;
		case 421u:
		goto lE033;
		case 422u:
		goto lE03A;
		case 423u:
		goto lE042;
		case 424u:
		goto lE04A;
		case 425u:
		goto lE04F;
		case 426u:
		goto lE052;
		case 427u:
		goto lE060;
		case 428u:
		goto lE073;
		case 429u:
		goto lE084;
		case 430u:
		goto lE097;
		case 431u:
		goto lE09A;
		case 432u:
		goto lE0A1;
		case 433u:
		goto lE0C5;
		case 434u:
		goto lE0CC;
		case 435u:
		goto lE0D3;
		case 436u:
		goto lE0F2;
		case 437u:
		goto lE10F;
		case 438u:
		goto lE115;
		case 439u:
		goto lE11B;
		case 440u:
		goto lE121;
		case 441u:
		goto lE127;
		case 442u:
		goto lE12A;
		case 443u:
		goto lE12D;
		case 444u:
		goto lE130;
		case 445u:
		goto lE156;
		case 446u:
		goto lE159;
		case 447u:
		goto lE162;
		case 448u:
		goto lE165;
		case 449u:
		goto lE168;
		case 450u:
		goto lE16F;
		case 451u:
		goto lE178;
		case 452u:
		goto lE183;
		case 453u:
		goto lE198;
		case 454u:
		goto lA52A;
		case 455u:
		goto lE1B8;
		case 456u:
		goto lA677;
		case 457u:
		goto lE1BE;
		case 458u:
		goto lE1C1;
		case 459u:
		goto lE1C4;
		case 460u:
		goto lE1C7;
		case 461u:
		goto lE1CA;
		case 462u:
		goto lE1CF;
		case 463u:
		goto lE1D9;
		case 464u:
		goto lE1E0;
		case 465u:
		goto lE1E3;
		case 466u:
		goto lE1E6;
		case 467u:
		goto lE1E9;
		case 468u:
		goto lE1EC;
		case 469u:
		goto lE1F3;
		case 470u:
		goto lE1F6;
		case 471u:
		goto lE1F9;
		case 472u:
		goto lB79E;
		case 473u:
		goto lE209;
		case 474u:
		goto lE211;
		case 475u:
		goto lE214;
		case 476u:
		goto lE21E;
		case 477u:
		goto lE221;
		case 478u:
		goto lE224;
		case 479u:
		goto lE22E;
		case 480u:
		goto lE231;
		case 481u:
		goto lE234;
		case 482u:
		goto lE242;
		case 483u:
		goto lE245;
		case 484u:
		goto lE248;
		case 485u:
		goto lE251;
		case 486u:
		goto lE254;
		case 487u:
		goto lE257;
		case 488u:
		goto lE25A;
		case 489u:
		goto lE25D;
		case 490u:
		goto lE264;
		case 491u:
		goto lE26B;
		case 492u:
		goto lE26E;
		case 493u:
		goto lE277;
		case 494u:
		goto lE27A;
		case 495u:
		goto lE27D;
		case 496u:
		goto lE284;
		case 497u:
		goto lE28B;
		case 498u:
		goto lE293;
		case 499u:
		goto lE2A0;
		case 500u:
		goto lE2A7;
		case 501u:
		goto lE2AD;
		case 502u:
		goto lE2B4;
		case 503u:
		goto lE2B7;
		case 504u:
		goto lE2BE;
		case 505u:
		goto lE2C5;
		case 506u:
		goto lE2CC;
		case 507u:
		goto lE2D5;
		case 508u:
		goto lE30E;
		case 509u:
		goto lE316;
		case 510u:
		goto lE324;
		case 511u:
		goto lE32B;
		case 512u:
		goto lE337;
		case 513u:
		goto lE38B;
		case 514u:
		goto lE394;
		case 515u:
		goto lE397;
		case 516u:
		goto lE39A;
		case 517u:
		goto lE39D;
		case 518u:
		goto lE406;
		case 519u:
		goto lE40E;
		case 520u:
		goto lE429;
		case 521u:
		goto lE430;
		case 522u:
		goto lE43D;
		case 523u:
		goto lA644;
		case 524u:
		goto lE4B1;
	}
}

lE394:
{
	g596 = S;
	RAM[g596 + 256u] = -29;
	RAM[(g596 - 1) + 256u] = -106;
	S = (g596 - 2);
	X = 11;
	Z = 0;
	N = 0;
	g33 = 0;
	goto lE455;
}

lA3B7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	bool t7;
	u16 t8;
	t0 = g28;
	t1 = g500;
	t2 = g430;
	t7 = g794&1;
	t3 = g761;
	t4 = g148;
	X = t4;
	A = t3;
	Z = t7;
	N = t2 >> 7;
	C = t1;
	V = t0;
	t5 = RAM[(g590 + 256u)];
	S = g370;
	t6 = RAM[(g370 + 256u)];
	t8 = (t5 + 1) + (t6 << 8);
	PC = t8;
	if ((t8 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA38F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	g27 = g343;
	g749 = g656;
	g999 = g749;
	t0 = RAM[(g999 + 257u)];
	t6 = t0 - 129;
	t7 = t6;
	t1 = ((t7 >> 8) & 1) ^ 1;
	t2 = t6;
	if ((t7 & 255u) == 0u) {
		t3 = RAM[74];
		if (t3 == 0) {
			t4 = RAM[(g999 + 258u)];
			RAM[73] = t4;
			t5 = RAM[(g999 + 259u)];
			RAM[74] = t5;
			g260 = t5;
			goto lA3A4;
		} else {
			g260 = t3;
			goto lA3A4;
		}
	} else {
		g28 = g27;
		g500 = t1;
		g430 = t2;
		g794 = (t7 & 255u) == 0u;
		g761 = t0;
		g148 = g749;
		goto lA3B7;
	}
}

bb2168:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g482;
	t1 = g901;
	t2 = (g901 >> 8) & 1;
	if (t1 == 0) {
		g28 = t0;
		g500 = t2;
		g430 = t1;
		g794 = t1 == 0;
		g761 = t1;
		g148 = t1;
		goto lA3B7;
	} else {
		g343 = t0;
		g656 = t1;
		goto lA38F;
	}
}

lA3B0:
{
	g901 = g749 + 18;
	if (((s8 )g749) < 0) {
		goto bb2167;
	} else {
		if (((g999 ^ g901) & 128u) == 0u) {
			goto bb2167;
		} else {
			g482 = 1;
			goto bb2168;
		}
	}
}

lA3A4:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	t0 = g260;
	t1 = RAM[(g999 + 259u)];
	if (((t0 - t1) & 255u) == 0u) {
		t2 = RAM[73];
		t3 = RAM[(g999 + 258u)];
		t6 = t2 - t3;
		t7 = t6;
		t4 = ((t7 >> 8) & 1) ^ 1;
		t5 = t6;
		if ((t7 & 255u) == 0u) {
			g28 = g27;
			g500 = t4;
			g430 = t5;
			g794 = (t7 & 255u) == 0u;
			g761 = t2;
			g148 = g749;
			goto lA3B7;
		} else {
			goto lA3B0;
		}
	} else {
		goto lA3B0;
	}
}

bb2167:
{
	g482 = 0;
	goto bb2168;
}

lA38A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g164;
	g590 = t0 + 1;
	g370 = t0 + 2;
	t1 = t0 + 4;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = V;
	g343 = t2;
	g656 = t1;
	goto lA38F;
}

lA749:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = 75;
	t1 = t0 - 2;
	S = t1;
	g164 = t1;
	goto lA38A;
}

lA8D2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		goto lA8D1;
	} else {
		A = -1;
		Z = 0;
		N = 1;
		RAM[74] = -1;
		t1 = S;
		RAM[t1 + 256u] = -88;
		RAM[(t1 - 1) + 256u] = -38;
		t2 = t1 - 2;
		S = t2;
		g164 = t2;
		goto lA38A;
	}
}

lAD27:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = A;
	RAM[73] = t0;
	t1 = Y;
	RAM[74] = t1;
	t2 = S;
	RAM[t2 + 256u] = -83;
	RAM[(t2 - 1) + 256u] = 45;
	t3 = t2 - 2;
	S = t3;
	g164 = t3;
	goto lA38A;
}

lAD1E:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lAD24;
	} else {
		Y = 0;
		Z = 1;
		N = 0;
		goto lAD27;
	}
}

lA3F3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	t0 = g366;
	t1 = g758;
	t2 = RAM[91];
	RAM[91] = (t2 - 1);
	t3 = RAM[89];
	RAM[89] = (t3 - 1);
	t4 = t0 - 1;
	X = t4;
	Z = (t0 == 1);
	N = t4 >> 7;
	if (t0 == 1) {
		t5 = S;
		t6 = RAM[(((t5 + 1) + 256u))];
		t7 = t5 + 2;
		S = t7;
		t8 = RAM[(t7 + 256u)];
		t9 = (t6 + 1) + (t8 << 8);
		PC = t9;
		if ((t9 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		g30 = t4;
		g211 = t1;
		goto lA3EC;
	}
}

bb2358:
{
	u8 t0;
	t0 = g66;
	V = t0;
	C = (((g996 >> 8) & 1) ^ 1);
	g350 = g915 + 1;
	X = g350;
	A = g601;
	Z = g609;
	N = g709;
	if (g601 == 0) {
		g366 = g350;
		g758 = g601;
		goto lA3F3;
	} else {
		A = g270;
		Z = g642;
		N = g163;
		C = 1;
		g927 = g934 & 255;
		g808 = (g866 - g927) + 1;
		g981 = g808;
		if (((g981 ^ g819) & 128u) == 0u) {
			goto bb2461;
		} else {
			if (((g601 ^ g270) & 128u) == 0u) {
				goto bb2461;
			} else {
				g667 = 1;
				goto bb2462;
			}
		}
	}
}

bb2283:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g532;
	V = t0;
	g601 = g934;
	g609 = g601 == 0;
	g709 = (g601 >> 7);
	t1 = ((g890 >> 8) & 1) ^ 1;
	C = t1;
	RAM[34] = g601;
	Y = g601;
	g721 = RAM[91];
	A = g721;
	Z = g721 == 0;
	N = g721 >> 7;
	t2 = RAM[96];
	g915 = ((((g721 - 1) - t2))) + t1;
	g996 = g915;
	if (((g996 ^ g721) & 128u) == 0u) {
		goto bb2357;
	} else {
		if (((t2 ^ g721) & 128u) == 0u) {
			goto bb2357;
		} else {
			g66 = 1;
			goto bb2358;
		}
	}
}

lA3BF:
{
	u8 t0;
	C = 1;
	g270 = RAM[90];
	A = g270;
	g642 = g270 == 0;
	Z = g642;
	g163 = (g270 >> 7);
	N = g163;
	t0 = RAM[95];
	g866 = g270 - 1;
	g934 = (g866 - t0) + 1;
	g819 = g270;
	g890 = g934;
	if (((g890 ^ g819) & 128u) == 0u) {
		goto bb2282;
	} else {
		if (((t0 ^ g270) & 128u) == 0u) {
			goto bb2282;
		} else {
			g532 = 1;
			goto bb2283;
		}
	}
}

lA3BB:
{
	u8 t0;
	u8 t1;
	t0 = A;
	RAM[49] = t0;
	t1 = Y;
	RAM[50] = t1;
	goto lA3BF;
}

bb29046:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g733;
	V = t0;
	C = (g924 >> 8) & 1;
	RAM[91] = g924;
	t1 = RAM[51];
	A = t1;
	t2 = RAM[52];
	X = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[88] = t1;
	RAM[89] = t2;
	t3 = S;
	RAM[t3 + 256u] = -74;
	RAM[(t3 - 1) + 256u] = 42;
	S = (t3 - 2);
	goto lA3BF;
}

bb28987:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g162;
	V = t0;
	t1 = (g805 >> 8) & 1;
	C = t1;
	RAM[90] = g805;
	t2 = RAM[96];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g924 = t1 + t2;
	if (((s8 )t2) < 0) {
		goto bb29045;
	} else {
		if (((t2 ^ g924) & 128u) == 0u) {
			goto bb29045;
		} else {
			g733 = 1;
			goto bb29046;
		}
	}
}

lB572:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	g597 = g432;
	g595 = g222;
	t0 = RAM[50];
	t11 = g595 - t0;
	t12 = t11;
	t1 = ((t12 >> 8) & 1) ^ 1;
	C = t1;
	Z = ((t12 & 255u) == 0u);
	N = t11 >> 7;
	if ((t12 & 255u) == 0u) {
		t2 = RAM[49];
		t13 = g597 - t2;
		t14 = t13;
		t3 = ((t14 >> 8) & 1) ^ 1;
		C = t3;
		Z = ((t14 & 255u) == 0u);
		N = t13 >> 7;
		if ((t14 & 255u) == 0u) {
			t4 = RAM[79];
			t5 = RAM[78];
			t6 = t4 | t5;
			A = t6;
			Z = t6 == 0;
			N = t6 >> 7;
			if (t6 == 0) {
				goto lB601;
			} else {
				t7 = RAM[85];
				C = 0;
				t8 = (((t7 & 4) >> 1));
				Y = t8;
				RAM[85] = t8;
				t9 = RAM[(((((t4 << 8u) | t5) + t8) & 65535u))];
				A = t9;
				Z = t9 == 0;
				N = t9 >> 7;
				t10 = RAM[95];
				g805 = t10 + t9;
				if (((t10 ^ t9) & 128u) == 0u) {
					if (((t9 ^ g805) & 128u) == 0u) {
						goto bb28986;
					} else {
						g162 = 1;
						goto bb28987;
					}
				} else {
					goto bb28986;
				}
			}
		} else {
			g509 = t3;
			goto lB57D;
		}
	} else {
		g509 = t1;
		goto lB57D;
	}
}

lB56E:
{
	u8 t0;
	u8 t1;
	t0 = g531;
	t1 = g653;
	A = t1;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	g432 = t1;
	g222 = t0;
	goto lB572;
}

lB566:
{
	u8 t0;
	u8 t1;
	t0 = A;
	RAM[88] = t0;
	t1 = X;
	RAM[89] = t1;
	A = 3;
	Z = 0;
	N = 0;
	RAM[83] = 3;
	g531 = t1;
	g653 = t0;
	goto lB56E;
}

lB559:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = X;
	t1 = RAM[48];
	t4 = t0 - t1;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		t2 = A;
		t3 = RAM[47];
		t6 = t2 - t3;
		t7 = t6;
		C = (((t7 >> 8) & 1) ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if ((t7 & 255u) == 0u) {
			goto lB566;
		} else {
			goto lB561;
		}
	} else {
		goto lB561;
	}
}

lB54D:
{
	u8 t0;
	u8 t1;
	RAM[83] = 7;
	t0 = RAM[45];
	A = t0;
	t1 = RAM[46];
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[34] = t0;
	RAM[35] = t1;
	goto lB559;
}

lB544:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = A;
	t1 = RAM[22];
	t3 = t0 - t1;
	t4 = t3;
	C = (((t4 >> 8) & 1) ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		goto lB54D;
	} else {
		t2 = S;
		RAM[t2 + 256u] = -75;
		RAM[(t2 - 1) + 256u] = 74;
		S = (t2 - 2);
		goto lB5C7;
	}
}

lB52A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g1;
	t1 = g50;
	RAM[51] = t1;
	RAM[52] = t0;
	Y = 0;
	RAM[79] = 0;
	RAM[78] = 0;
	t2 = RAM[49];
	t3 = RAM[50];
	RAM[95] = t2;
	RAM[96] = t3;
	A = 25;
	X = 0;
	Z = 1;
	N = 0;
	RAM[34] = 25;
	RAM[35] = 0;
	goto lB544;
}

lB526:
{
	u8 t0;
	u8 t1;
	t0 = RAM[55];
	X = t0;
	t1 = RAM[56];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g1 = t1;
	g50 = t0;
	goto lB52A;
}

lA416:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = g725;
	t1 = g113;
	t2 = g116 - t0;
	t3 = 9 - t0;
	RAM[t2 + 256u] = t1;
	t4 = RAM[(((t3 + 87u) & 255u))];
	t5 = t3 - 1;
	if (((s8 )t5) < 0) {
		A = t4;
		X = t5;
		Z = (t3 == 1);
		N = t5 >> 7;
		RAM[(t2 - 1) + 256u] = -92;
		RAM[(t2 - 2) + 256u] = 30;
		S = (t2 - 3);
		goto lB526;
	} else {
		g725 = (t0 + 1);
		g113 = t4;
		goto lA416;
	}
}

lA412:
{
	u8 t0;
	t0 = A;
	RAM[g625 + 256u] = t0;
	g116 = g625 - 1;
	S = g116;
	X = 9;
	A = g311;
	Z = g311 == 0;
	N = g311 >> 7;
	g725 = 0;
	g113 = g311;
	goto lA416;
}

lA408:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	g625 = g363;
	g311 = Y;
	t0 = RAM[52];
	t5 = g311 - t0;
	t6 = t5;
	t1 = (t6 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t6 & 255u) == 0u);
	N = t5 >> 7;
	if (t1 == 0) {
		if ((t6 & 255u) == 0u) {
			t2 = A;
			t3 = RAM[51];
			t7 = t2 - t3;
			t8 = t7;
			t4 = (t8 >> 8) & 1;
			C = (t4 ^ 1);
			Z = ((t8 & 255u) == 0u);
			N = t7 >> 7;
			if (t4 == 0) {
				goto lA412;
			} else {
				g334 = g625;
				goto lA434;
			}
		} else {
			goto lA412;
		}
	} else {
		g334 = g625;
		goto lA434;
	}
}

lA3B8:
{
	u8 t0;
	u8 t1;
	t0 = g390;
	RAM[(t0 - 1) + 256u] = -93;
	RAM[(t0 - 2) + 256u] = -70;
	t1 = t0 - 3;
	S = t1;
	g363 = t1;
	goto lA408;
}

lA508:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g305;
	RAM[89] = t0;
	t1 = S;
	RAM[t1 + 256u] = -91;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = 12;
	g390 = t2;
	goto lA3B8;
}

bb4378:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g374;
	V = t0;
	t1 = g921;
	A = t1;
	t2 = (g921 >> 8) & 1;
	C = t2;
	RAM[88] = t1;
	t3 = RAM[46];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[91] = t3;
	if (t2 == 0) {
		g305 = t3;
		goto lA508;
	} else {
		t4 = t3 + 1;
		Y = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		g305 = t4;
		goto lA508;
	}
}

lA4F3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[512];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lA480;
	} else {
		C = 0;
		t1 = RAM[45];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		RAM[90] = t1;
		t2 = RAM[11];
		g921 = t2 + t1;
		if (((t2 ^ t1) & 128u) == 0u) {
			if (((t1 ^ g921) & 128u) == 0u) {
				goto bb4377;
			} else {
				g374 = 1;
				goto bb4378;
			}
		} else {
			goto bb4377;
		}
	}
}

bb4377:
{
	g374 = 0;
	goto bb4378;
}

lB159:
{
	u8 t0;
	u8 t1;
	t0 = g89;
	RAM[88] = g357;
	RAM[89] = t0;
	RAM[g727 + 256u] = -79;
	t1 = g727 - 1;
	S = t1;
	RAM[t1 + 256u] = 95;
	g390 = t1;
	goto lA3B8;
}

bb21282:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g525;
	V = t0;
	g357 = g988;
	A = g357;
	Z = g357 == 0;
	N = g357 >> 7;
	t2 = g988 & 256u;
	C = (t2 >> 8u);
	if (t2 == 0u) {
		g89 = g309;
		goto lB159;
	} else {
		t1 = g309 + 1;
		Y = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		g89 = t1;
		goto lB159;
	}
}

lB143:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[47];
	t1 = RAM[48];
	RAM[95] = t0;
	RAM[96] = t1;
	t2 = RAM[49];
	A = t2;
	g309 = RAM[50];
	Y = g309;
	Z = g309 == 0;
	N = g309 >> 7;
	RAM[90] = t2;
	RAM[91] = g309;
	C = 0;
	g988 = t2 + 7;
	if (((s8 )t2) < 0) {
		goto bb21281;
	} else {
		if (((t2 ^ g988) & 128u) == 0u) {
			goto bb21281;
		} else {
			g525 = 1;
			goto bb21282;
		}
	}
}

lB13B:
{
	u16 t0;
	u16 t1;
	u16 t2;
	u16 t3;
	t0 = g818 - 83;
	t1 = t0;
	C = (((t1 >> 8) & 1) ^ 1);
	Z = ((t1 & 255u) == 0u);
	N = t0 >> 7;
	if ((t1 & 255u) == 0u) {
		t2 = g581 - 84;
		t3 = t2;
		C = (((t3 >> 8) & 1) ^ 1);
		Z = ((t3 & 255u) == 0u);
		N = t2 >> 7;
		if ((t3 & 255u) == 0u) {
			goto lAF08;
		} else {
			goto lB143;
		}
	} else {
		goto lB143;
	}
}

lB0EF:
{
	u8 t0;
	u8 t1;
	g574 = g34;
	t0 = g431;
	t1 = g406;
	g249 = g574 + g106;
	RAM[96] = g249;
	g877 = g249;
	g503 = t0;
	g231 = t1;
	goto lB0F1;
}

lB0F1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	g628 = g503;
	g427 = g231;
	RAM[95] = g427;
	t0 = RAM[48];
	if (((g877 - t0) & 255u) == 0u) {
		t1 = RAM[47];
		if (((g427 - t1) & 255u) == 0u) {
			X = g249;
			V = g628;
			Y = 0;
			g727 = S;
			g43 = g727 + 1;
			p11 = &RAM[(g43 + 256u)];
			t2 = *p11;
			A = t2;
			*p11 = t2;
			S = g727;
			t4 = t2 - 42;
			t5 = t4;
			C = (((t5 >> 8) & 1) ^ 1);
			Z = ((t5 & 255u) == 0u);
			N = t4 >> 7;
			if ((t5 & 255u) == 0u) {
				goto lB123;
			} else {
				t3 = RAM[69];
				A = t3;
				g581 = RAM[70];
				Y = g581;
				g818 = t3;
				t6 = g818 - 84;
				t7 = t6;
				C = (((t7 >> 8) & 1) ^ 1);
				Z = ((t7 & 255u) == 0u);
				N = t6 >> 7;
				if ((t7 & 255u) == 0u) {
					t8 = g581;
					t9 = t8 - 201;
					t10 = t9;
					C = (((t10 >> 8) & 1) ^ 1);
					Z = ((t10 & 255u) == 0u);
					N = t9 >> 7;
					if ((t10 & 255u) == 0u) {
						goto lB123;
					} else {
						t11 = t8 - 73;
						t12 = t11;
						C = (((t12 >> 8) & 1) ^ 1);
						Z = ((t12 & 255u) == 0u);
						N = t11 >> 7;
						if ((t12 & 255u) == 0u) {
							goto lAF08;
						} else {
							goto lB13B;
						}
					}
				} else {
					goto lB13B;
				}
			}
		} else {
			goto lB0FB;
		}
	} else {
		goto lB0FB;
	}
}

bb20778:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	t0 = g759;
	t1 = g859;
	t7 = g859 & 256u;
	t2 = (t7 >> 8u);
	if (t7 == 0u) {
		g503 = t0;
		g231 = t1;
		goto lB0F1;
	} else {
		t3 = g249 + 1;
		t4 = t3 == 0;
		t5 = (t3 >> 7);
		t6 = g574 + 1;
		if (t3 == 0) {
			A = t1;
			X = t3;
			C = t2;
			Z = t4;
			N = t5;
			V = t0;
			Y = 0;
			goto lB113;
		} else {
			g34 = t6;
			g431 = t0;
			g406 = t1;
			goto lB0EF;
		}
	}
}

lB109:
{
	g859 = g427 + 7;
	if (((s8 )g427) < 0) {
		goto bb20777;
	} else {
		if (((g849 ^ g859) & 128u) == 0u) {
			goto bb20777;
		} else {
			g759 = 1;
			goto bb20778;
		}
	}
}

lB0FB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	u16 t5;
	t0 = RAM[69];
	g849 = g427;
	t3 = (g249 << 8u) | g849;
	t1 = RAM[t3];
	if (((t0 - t1) & 255u) == 0u) {
		t2 = RAM[(((t3 + 1u) & 65535u))];
		t4 = g512 - t2;
		t5 = t4;
		if ((t5 & 255u) == 0u) {
			X = g249;
			A = g512;
			C = (((t5 >> 8) & 1) ^ 1);
			Z = ((t5 & 255u) == 0u);
			N = t4 >> 7;
			V = g628;
			Y = 1;
			goto lB185;
		} else {
			goto lB109;
		}
	} else {
		goto lB109;
	}
}

bb20777:
{
	g759 = 0;
	goto bb20778;
}

lB0DB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	g512 = X;
	RAM[70] = g512;
	C = 1;
	t0 = RAM[16];
	t1 = A;
	t2 = t1 | t0;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t10 = t2 - 40;
	t11 = t10;
	t3 = (((((((t11 ^ t2) & 128u) == 0u) | (((s8 )t2) > -1))&1))) ? 0 : 1;
	V = t3;
	t4 = t10;
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	C = (((t11 >> 8) & 1) ^ 1);
	if (t4 == 0) {
		t6 = RAM[12];
		t7 = RAM[14];
		t8 = S;
		RAM[t8 + 256u] = (t6 | t7);
		t9 = RAM[13];
		A = t9;
		RAM[(t8 - 1) + 256u] = t9;
		S = (t8 - 2);
		Y = 0;
		Z = 1;
		N = 0;
		goto lB1DB;
	} else {
		Y = 0;
		RAM[16] = 0;
		t5 = RAM[45];
		A = t5;
		g106 = RAM[46];
		X = g106;
		Z = g106 == 0;
		N = g106 >> 7;
		g34 = 0;
		g431 = t3;
		g406 = t5;
		goto lB0EF;
	}
}

lB0BA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = A;
	t4 = t0 - 36;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		A = -1;
		Z = 0;
		N = 1;
		RAM[13] = -1;
		goto lB0D4;
	} else {
		t6 = t0 - 37;
		t7 = t6;
		C = (((t7 >> 8) & 1) ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if ((t7 & 255u) == 0u) {
			t1 = RAM[16];
			A = t1;
			Z = t1 == 0;
			N = t1 >> 7;
			if (t1 == 0) {
				RAM[14] = 128u;
				t2 = RAM[69];
				t3 = t2 | 128u;
				A = t3;
				Z = 0;
				N = 1;
				RAM[69] = t3;
				goto lB0D4;
			} else {
				goto lAF08;
			}
		} else {
			goto lB0DB;
		}
	}
}

lB0AD:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lB0BA;
	} else {
		goto lB0AF;
	}
}

lB0B8:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lB0BA;
	} else {
		goto lB0B0;
	}
}

bb21281:
{
	g525 = 0;
	goto bb21282;
}

lB264:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -78;
	RAM[(t0 - 1) + 256u] = 102;
	t1 = t0 - 2;
	S = t1;
	g363 = t1;
	goto lA408;
}

lB2B9:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -78;
	RAM[(t0 - 1) + 256u] = -69;
	t1 = t0 - 2;
	S = t1;
	g363 = t1;
	goto lA408;
}

bb23581:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g232;
	V = t0;
	t1 = g920;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t3 = g920 & 256u;
	C = (t3 >> 8u);
	if (t3 == 0u) {
		goto lB2B9;
	} else {
		t2 = g436 + 1;
		Y = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		if (t2 == 0) {
			goto lA435;
		} else {
			goto lB2B9;
		}
	}
}

bb23497:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g646;
	V = t0;
	g436 = g797;
	A = g436;
	Z = g436 == 0;
	N = g436 >> 7;
	t3 = g797 & 256u;
	t1 = (t3 >> 8u);
	C = t1;
	if (t3 == 0u) {
		RAM[89] = g436;
		Y = g436;
		A = g195;
		Z = g195 == 0;
		N = g195 >> 7;
		t2 = RAM[88];
		g920 = (t2 + g195) + t1;
		if (((t2 ^ g195) & 128u) == 0u) {
			if (((g195 ^ g920) & 128u) == 0u) {
				goto bb23580;
			} else {
				g232 = 1;
				goto bb23581;
			}
		} else {
			goto bb23580;
		}
	} else {
		goto lA435;
	}
}

lB2A0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	g195 = X;
	RAM[113] = g195;
	t0 = A;
	RAM[114] = t0;
	t1 = RAM[34];
	Y = t1;
	t2 = RAM[11];
	t3 = t2 - 1;
	RAM[11] = t3;
	Z = (t2 == 1);
	N = t3 >> 7;
	if (t2 == 1) {
		t4 = RAM[89];
		t5 = C;
		g797 = (t4 + t0) + (((s16 )(s8 )t5));
		if (((t4 ^ t0) & 128u) == 0u) {
			if (((t0 ^ g797) & 128u) == 0u) {
				goto bb23496;
			} else {
				g646 = 1;
				goto bb23497;
			}
		} else {
			goto bb23496;
		}
	} else {
		g524 = t1;
		goto lB286;
	}
}

bb23496:
{
	g646 = 0;
	goto bb23497;
}

bb23580:
{
	g232 = 0;
	goto bb23581;
}

lE39A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	RAM[t0 + 256u] = -29;
	RAM[(t0 - 1) + 256u] = -100;
	t1 = RAM[43];
	A = t1;
	t2 = RAM[44];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[(t0 - 2) + 256u] = -28;
	RAM[(t0 - 3) + 256u] = 40;
	t3 = t0 - 4;
	S = t3;
	g363 = t3;
	goto lA408;
}

lB384:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -122;
	S = (t0 - 2);
	goto lB526;
}

lB37D:
{
	u8 t0;
	u8 t1;
	t0 = RAM[13];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lB384;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -77;
		RAM[(t1 - 1) + 256u] = -125;
		S = (t1 - 2);
		goto lB6A6;
	}
}

lB516:
{
	u8 t0;
	X = 16;
	t0 = RAM[15];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (((s8 )t0) < 0) {
		goto lA437;
	} else {
		RAM[g356 + 256u] = -75;
		RAM[(g664 - 2) + 256u] = 30;
		S = (g664 - 3);
		goto lB526;
	}
}

lB501:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	g316 = g448;
	t0 = RAM[50];
	t4 = g316 - t0;
	t5 = t4;
	t1 = (t5 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if (t1 == 0) {
		if ((t5 & 255u) == 0u) {
			t2 = RAM[49];
			t6 = (g977 & 255) - t2;
			t7 = t6;
			t3 = (t7 >> 8) & 1;
			C = (t3 ^ 1);
			Z = ((t7 & 255u) == 0u);
			N = t6 >> 7;
			if (t3 == 0) {
				goto lB50B;
			} else {
				goto lB516;
			}
		} else {
			goto lB50B;
		}
	} else {
		goto lB516;
	}
}

bb27156:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g299;
	V = t0;
	g737 = g977;
	A = g737;
	t1 = (g977 >> 8) & 1;
	C = t1;
	t2 = RAM[52];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t1 == 0) {
		t3 = t2 - 1;
		Y = t3;
		Z = (t2 == 1);
		N = t3 >> 7;
		g448 = t3;
		goto lB501;
	} else {
		g448 = t2;
		goto lB501;
	}
}

lB4F6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g62;
	g664 = g142;
	RAM[g664 + 256u] = t0;
	g356 = g664 - 1;
	S = g356;
	t1 = t0 ^ -1;
	A = t1;
	Z = (t0 == 0xff);
	N = t1 >> 7;
	C = 1;
	t2 = RAM[51];
	g977 = (t2 + t1) + 1;
	if (((t2 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g977) & 128u) == 0u) {
			goto bb27155;
		} else {
			g299 = 1;
			goto bb27156;
		}
	} else {
		goto bb27155;
	}
}

lB47D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g515;
	t1 = S;
	RAM[t1 + 256u] = -76;
	RAM[(t1 - 1) + 256u] = 127;
	t2 = t1 - 2;
	S = t2;
	t3 = RAM[15];
	C = (t3 & 1);
	t4 = (t3 >> 1);
	Z = t4 == 0;
	N = 0;
	RAM[15] = t4;
	g62 = t0;
	g142 = t2;
	goto lB4F6;
}

lB475:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g136;
	t1 = RAM[100];
	X = t1;
	t2 = RAM[101];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[80] = t1;
	RAM[81] = t2;
	g515 = t0;
	goto lB47D;
}

lAA52:
{
	u8 t0;
	Y = 0;
	t0 = RAM[g961];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	RAM[g312 + 256u] = -86;
	RAM[(g312 - 1) + 256u] = 88;
	S = (g312 - 2);
	g136 = t0;
	goto lB475;
}

lAA3D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	Y = g198;
	t0 = RAM[46];
	t4 = g198 - t0;
	t5 = t4;
	t1 = (t5 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if (t1 == 0) {
		if ((t5 & 255u) == 0u) {
			A = g745;
			t2 = RAM[45];
			t6 = g745 - t2;
			t7 = t6;
			t3 = (t7 >> 8) & 1;
			C = (t3 ^ 1);
			Z = ((t7 & 255u) == 0u);
			N = t6 >> 7;
			if (t3 == 0) {
				goto lAA52;
			} else {
				goto lAA4B;
			}
		} else {
			goto lAA52;
		}
	} else {
		goto lAA4B;
	}
}

lA9DA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	g312 = g267;
	t0 = RAM[74];
	Y = t0;
	t7 = t0 - 191;
	t8 = t7;
	C = (((t8 >> 8) & 1) ^ 1);
	Z = ((t8 & 255u) == 0u);
	N = t7 >> 7;
	if ((t8 & 255u) == 0u) {
		RAM[g312 + 256u] = -87;
		RAM[(g312 - 1) + 256u] = -30;
		S = (g312 - 2);
		goto lB6A6;
	} else {
		Y = 2;
		g745 = RAM[100];
		g198 = RAM[101];
		g961 = (g198 << 8u) | g745;
		t1 = RAM[(((g961 + 2u) & 65535u))];
		A = t1;
		t2 = RAM[52];
		t9 = t1 - t2;
		t10 = t9;
		t3 = (t10 >> 8) & 1;
		C = (t3 ^ 1);
		Z = ((t10 & 255u) == 0u);
		N = t9 >> 7;
		if (t3 == 0) {
			if ((t10 & 255u) == 0u) {
				Y = 1;
				t4 = RAM[(((g961 + 1u) & 65535u))];
				A = t4;
				t5 = RAM[51];
				t11 = t4 - t5;
				t12 = t11;
				t6 = (t12 >> 8) & 1;
				C = (t6 ^ 1);
				Z = ((t12 & 255u) == 0u);
				N = t11 >> 7;
				if (t6 == 0) {
					goto lAA3D;
				} else {
					goto lAA4B;
				}
			} else {
				goto lAA3D;
			}
		} else {
			goto lAA4B;
		}
	}
}

lA9BF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Z;
	t1 = S;
	t2 = t1 + 1;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	A = t3;
	Z = t3 == 0;
	t4 = (t3 >> 7);
	N = t4;
	if (t0 == 0) {
		g267 = t2;
		goto lA9DA;
	} else {
		if (t4 == 0) {
			goto lBBD0;
		} else {
			g81 = t2;
			goto bb11344;
		}
	}
}

lAC83:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -123;
	t1 = t0 - 2;
	S = t1;
	g267 = t1;
	goto lA9DA;
}

lB4BF:
{
	u8 t0;
	A = g262;
	Z = g643;
	N = g462;
	t0 = S;
	RAM[t0 + 256u] = -76;
	RAM[(t0 - 1) + 256u] = -62;
	S = (t0 - 2);
	g136 = g262;
	goto lB475;
}

lB4B5:
{
	u8 t0;
	u16 t1;
	u16 t2;
	t0 = g355;
	RAM[114] = t0;
	A = g419;
	Z = g105;
	N = g467;
	if (g419 == 0) {
		goto lB4BF;
	} else {
		t1 = g419 - 2;
		t2 = t1;
		C = (((t2 >> 8) & 1) ^ 1);
		Z = ((t2 & 255u) == 0u);
		N = t1 >> 7;
		if ((t2 & 255u) == 0u) {
			goto lB4BF;
		} else {
			goto lB4CA;
		}
	}
}

bb26745:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g73;
	V = t0;
	t1 = g900;
	A = t1;
	t2 = (g900 >> 8) & 1;
	C = t2;
	RAM[113] = t1;
	X = g419;
	g105 = g419 == 0;
	Z = g105;
	g467 = (g419 >> 7);
	N = g467;
	if (t2 == 0) {
		g355 = g419;
		goto lB4B5;
	} else {
		t3 = g419 + 1;
		X = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		g355 = t3;
		goto lB4B5;
	}
}

lB4A9:
{
	u8 t0;
	t0 = g145;
	RAM[97] = g262;
	A = g262;
	g643 = g262 == 0;
	Z = g643;
	g462 = (g262 >> 7);
	N = g462;
	g900 = (g178 + g262) + (((s16 )(s8 )t0));
	if (((g178 ^ g262) & 128u) == 0u) {
		if (((g937 ^ g900) & 128u) == 0u) {
			goto bb26744;
		} else {
			g73 = 1;
			goto bb26745;
		}
	} else {
		goto bb26744;
	}
}

lB4A4:
{
	u8 t0;
	u16 t1;
	u16 t2;
	Y = g262;
	A = g339;
	t1 = g903 - 34;
	t2 = t1;
	t0 = ((t2 >> 8) & 1) ^ 1;
	C = t0;
	Z = ((t2 & 255u) == 0u);
	N = t1 >> 7;
	if ((t2 & 255u) == 0u) {
		g145 = t0;
		goto lB4A9;
	} else {
		goto lB4A8;
	}
}

lB497:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	g262 = g328;
	t0 = g40;
	g937 = g262;
	g339 = RAM[(((g1001 + g937) & 65535u))];
	if (g339 == 0) {
		Y = g262;
		Z = g339 == 0;
		N = g339 >> 7;
		A = g339;
		C = t0;
		goto lB4A8;
	} else {
		g903 = g339;
		t1 = RAM[7];
		if (((g903 - t1) & 255u) == 0u) {
			goto lB4A4;
		} else {
			t2 = RAM[8];
			t5 = (g903 - t2);
			t3 = ((t5 >> 8) & 1) ^ 1;
			t4 = g262 + 1;
			if ((t5 & 255u) == 0u) {
				goto lB4A4;
			} else {
				g328 = t4;
				g40 = t3;
				goto lB497;
			}
		}
	}
}

lB48D:
{
	u8 t0;
	g178 = A;
	RAM[111] = g178;
	g419 = Y;
	RAM[112] = g419;
	RAM[98] = g178;
	RAM[99] = g419;
	Y = -1;
	Z = 0;
	N = 1;
	g1001 = (g419 << 8u) | g178;
	t0 = C;
	g328 = 0;
	g40 = t0;
	goto lB497;
}

lAC7D:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = 127;
	S = (t0 - 2);
	goto lB48D;
}

bb14720:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g326;
	V = t0;
	t1 = g800;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t3 = g800 & 256u;
	C = (t3 >> 8u);
	if (t3 == 0u) {
		goto lAC7D;
	} else {
		t2 = g442 + 1;
		Y = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		goto lAC7D;
	}
}

lAC72:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g85;
	t1 = g337;
	RAM[8] = t1;
	t2 = RAM[122];
	A = t2;
	g442 = RAM[123];
	Y = g442;
	Z = g442 == 0;
	N = g442 >> 7;
	g800 = (((s16 )(s8 )t0)) + t2;
	if (((s8 )t2) < 0) {
		goto bb14719;
	} else {
		if (((t2 ^ g800) & 128u) == 0u) {
			goto bb14719;
		} else {
			g326 = 1;
			goto bb14720;
		}
	}
}

lAC54:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	u16 t10;
	t0 = RAM[13];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	if (t1 == 0) {
		t8 = S;
		RAM[t8 + 256u] = -84;
		RAM[(t8 - 1) + 256u] = -117;
		S = (t8 - 2);
		goto lBCF3;
	} else {
		t2 = RAM[17];
		Z = t2 == 0;
		N = t2 >> 7;
		t3 = t2 & 64;
		V = (t3 >> 6);
		if (t3 == 0) {
			t6 = A;
			RAM[7] = t6;
			t9 = t6 - 34;
			t10 = t9;
			t7 = ((t10 >> 8) & 1) ^ 1;
			C = t7;
			Z = ((t10 & 255u) == 0u);
			N = t9 >> 7;
			if ((t10 & 255u) == 0u) {
				g85 = t7;
				g337 = t6;
				goto lAC72;
			} else {
				RAM[7] = 58;
				A = 44;
				Z = 0;
				N = 0;
				g634 = 44;
				goto lAC71;
			}
		} else {
			t4 = X;
			t5 = t4 + 1;
			X = t5;
			RAM[122] = t5;
			A = 0;
			Z = 1;
			N = 0;
			RAM[7] = 0;
			g634 = 0;
			goto lAC71;
		}
	}
}

lAC71:
{
	u8 t0;
	t0 = g634;
	C = 0;
	g85 = 0;
	g337 = t0;
	goto lAC72;
}

bb14719:
{
	g326 = 0;
	goto bb14720;
}

lB487:
{
	X = 34;
	Z = 0;
	N = 0;
	RAM[7] = 34;
	RAM[8] = 34;
	goto lB48D;
}

lAABF:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -63;
	S = (t0 - 2);
	goto lB487;
}

lAB1E:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = 32;
	S = (t0 - 2);
	goto lB487;
}

lA469:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = 107;
	S = (t0 - 2);
	goto lAB1E;
}

lA465:
{
	A = 105;
	Y = -93;
	Z = 0;
	N = 1;
	goto lA469;
}

lA84B:
{
	u8 t0;
	t0 = g257;
	A = -127;
	Y = -93;
	Z = 0;
	N = 1;
	if (t0 == 0) {
		goto lE386;
	} else {
		goto lA469;
	}
}

lA7BE:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	Y = 0;
	t4 = (g333 << 8u) | g187;
	t0 = RAM[t4];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		Y = 2;
		t1 = RAM[(((t4 + 2u) & 65535u))];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		C = 0;
		if (t1 == 0) {
			g257 = 0;
			goto lA84B;
		} else {
			t2 = RAM[(((t4 + 3u) & 65535u))];
			RAM[57] = t2;
			Y = 4;
			t3 = RAM[(((t4 + 4u) & 65535u))];
			RAM[58] = t3;
			A = 4;
			Z = 0;
			N = 0;
			g862 = g187 + 4;
			if ((g187 & 128u) == 0u) {
				if ((g862 & 128u) == 0u) {
					goto bb8578;
				} else {
					g599 = 1;
					goto bb8579;
				}
			} else {
				goto bb8578;
			}
		}
	} else {
		t5 = t0 - 58;
		t6 = t5;
		C = (((t6 >> 8) & 1) ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if ((t6 & 255u) == 0u) {
			goto lA7E1;
		} else {
			goto lAF08;
		}
	}
}

lA7B1:
{
	u16 t0;
	u16 t1;
	g187 = RAM[122];
	A = g187;
	g333 = RAM[123];
	Y = g333;
	t0 = g333 - 2;
	t1 = t0;
	C = (((t1 >> 8) & 1) ^ 1);
	Z = ((t1 & 255u) == 0u);
	N = t0 >> 7;
	if ((t1 & 255u) == 0u) {
		goto lA7BE;
	} else {
		RAM[61] = g187;
		RAM[62] = g333;
		goto lA7BE;
	}
}

lA849:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = t0 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g257 = g459;
	goto lA84B;
}

lA832:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	g459 = g241;
	t0 = Z;
	if (t0 == 0) {
		goto lA870;
	} else {
		t1 = RAM[122];
		A = t1;
		t2 = RAM[123];
		Y = t2;
		t3 = RAM[58];
		t4 = t3 == 0;
		t5 = (t3 >> 7);
		t6 = t3 + 1;
		X = t6;
		Z = t6 == 0;
		N = t6 >> 7;
		if (t6 == 0) {
			goto lA849;
		} else {
			RAM[61] = t1;
			RAM[62] = t2;
			t7 = RAM[57];
			A = t7;
			Y = t3;
			Z = t4;
			N = t5;
			RAM[59] = t7;
			RAM[60] = t3;
			goto lA849;
		}
	}
}

lA82F:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lA831;
	} else {
		g241 = t0;
		goto lA832;
	}
}

lA831:
{
	C = 0;
	g241 = 0;
	goto lA832;
}

lA46C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[58];
	t1 = t0 + 1;
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lA474;
	} else {
		t2 = S;
		RAM[t2 + 256u] = -92;
		RAM[(t2 - 1) + 256u] = 115;
		A = 113;
		Y = -93;
		Z = 0;
		N = 1;
		RAM[(t2 - 2) + 256u] = -67;
		RAM[(t2 - 3) + 256u] = -56;
		S = (t2 - 4);
		goto lAB1E;
	}
}

lA474:
{
	u8 t0;
	A = 118;
	Y = -93;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = 122;
	S = (t0 - 2);
	goto lAB1E;
}

lE38B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t4 = X;
	A = t4;
	Z = t4 == 0;
	t5 = (t4 >> 7);
	N = t5;
	if (((s8 )t4) < 0) {
		goto lA474;
	} else {
		C = t5;
		t0 = (t4 << 1);
		X = t0;
		t6 = t0;
		t1 = RAM[(t6 + 41766u)];
		RAM[34] = t1;
		t2 = RAM[(t6 + 41767u)];
		A = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		RAM[35] = t2;
		t3 = S;
		RAM[t3 + 256u] = -92;
		RAM[(t3 - 1) + 256u] = 73;
		S = (t3 - 2);
		PC = -52;
		goto not_found;
	}
}

lAB1C:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lAB10;
	} else {
		goto lAB1E;
	}
}

lAC94:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t6 = Z;
	if (t6 == 0) {
		t7 = A;
		t8 = t7 - 44;
		t9 = t8;
		C = (((t9 >> 8) & 1) ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if ((t9 & 255u) == 0u) {
			goto lAC9D;
		} else {
			t0 = RAM[17];
			A = t0;
			Z = t0 == 0;
			t1 = (t0 >> 7);
			N = t1;
			if (t0 == 0) {
				t4 = RAM[19];
				A = t4;
				Z = t4 == 0;
				N = t4 >> 7;
				if (t4 == 0) {
					A = 12;
					Y = -83;
					Z = 0;
					N = 1;
					t5 = S;
					RAM[t5 + 256u] = -85;
					RAM[(t5 - 1) + 256u] = 113;
					S = (t5 - 2);
					goto lAB1E;
				} else {
					X = 24;
					Z = 0;
					N = 0;
					goto lA437;
				}
			} else {
				if (t1 == 0) {
					Y = -1;
					RAM[57] = t0;
					RAM[58] = -1;
					X = 11;
					Z = 0;
					N = 0;
					goto lA437;
				} else {
					t2 = RAM[63];
					A = t2;
					t3 = RAM[64];
					Y = t3;
					RAM[57] = t2;
					RAM[58] = t3;
					X = 11;
					Z = 0;
					N = 0;
					goto lA437;
				}
			}
		}
	} else {
		goto lAC9D;
	}
}

lACB0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = Z;
	if (t0 == 0) {
		t1 = S;
		RAM[t1 + 256u] = -84;
		RAM[(t1 - 1) + 256u] = -76;
		S = (t1 - 2);
		A = 44;
		Z = 0;
		N = 0;
		g288 = 44;
		goto lAEFF;
	} else {
		t2 = RAM[67];
		A = t2;
		t3 = RAM[68];
		Y = t3;
		t4 = RAM[17];
		X = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		if (((s8 )t4) < 0) {
			g714 = t3;
			g592 = t2;
			goto lA827;
		} else {
			Y = 0;
			t5 = RAM[(((t3 << 8u) | t2))];
			A = t5;
			Z = t5 == 0;
			N = t5 >> 7;
			if (t5 == 0) {
				goto lACFB;
			} else {
				t6 = RAM[19];
				A = t6;
				Z = t6 == 0;
				N = t6 >> 7;
				if (t6 == 0) {
					A = -4;
					Y = -84;
					Z = 0;
					N = 1;
					goto lAB1E;
				} else {
					goto lACFB;
				}
			}
		}
	}
}

lE183:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = A;
	t1 = t0 & 16;
	A = t1;
	t2 = (t1 >> 4);
	Z = (t2 ^ 1);
	N = 0;
	if (t2 == 1) {
		goto lA437;
	} else {
		t3 = RAM[122];
		A = t3;
		t4 = t3 - 2;
		t5 = t4;
		C = (((t5 >> 8) & 1) ^ 1);
		Z = ((t5 & 255u) == 0u);
		N = t4 >> 7;
		if ((t5 & 255u) == 0u) {
			goto lE194;
		} else {
			A = 100;
			Y = -93;
			Z = 0;
			N = 1;
			goto lAB1E;
		}
	}
}

lE198:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t0 = A;
	t1 = t0 & -65;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		t2 = RAM[123];
		A = t2;
		t8 = t2 - 2;
		t9 = t8;
		C = (((t9 >> 8) & 1) ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if ((t9 & 255u) == 0u) {
			t3 = X;
			RAM[45] = t3;
			t4 = Y;
			RAM[46] = t4;
			A = 118;
			Y = -93;
			Z = 0;
			N = 1;
			t5 = S;
			RAM[t5 + 256u] = -31;
			RAM[(t5 - 1) + 256u] = -79;
			S = (t5 - 2);
			goto lAB1E;
		} else {
			t6 = S;
			RAM[t6 + 256u] = -31;
			t7 = t6 - 1;
			S = t7;
			RAM[t7 + 256u] = -73;
			g708 = t7;
			goto lA68E;
		}
	} else {
		X = 29;
		Z = 0;
		N = 0;
		goto lA437;
	}
}

lE429:
{
	u8 t0;
	A = 115;
	Y = -28;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -28;
	RAM[(t0 - 1) + 256u] = 47;
	S = (t0 - 2);
	goto lAB1E;
}

lE43D:
{
	u8 t0;
	A = 96;
	Y = -28;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -28;
	RAM[(t0 - 1) + 256u] = 67;
	S = (t0 - 2);
	goto lAB1E;
}

lAEC6:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = -56;
	S = (t0 - 2);
	goto lB487;
}

bb17707:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g234;
	V = t0;
	t1 = g835;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t3 = g835 & 256u;
	C = (t3 >> 8u);
	if (t3 == 0u) {
		goto lAEC6;
	} else {
		t2 = g6 + 1;
		Y = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		goto lAEC6;
	}
}

lAEBD:
{
	u8 t0;
	u8 t1;
	t0 = g78;
	t1 = RAM[122];
	A = t1;
	g6 = RAM[123];
	Y = g6;
	Z = g6 == 0;
	N = g6 >> 7;
	g835 = (((s16 )(s8 )t0)) + t1;
	if (((s8 )t1) < 0) {
		goto bb17706;
	} else {
		if (((t1 ^ g835) & 128u) == 0u) {
			goto bb17706;
		} else {
			g234 = 1;
			goto bb17707;
		}
	}
}

lABBF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = A;
	t3 = t0 - 34;
	t4 = t3;
	t1 = ((t4 >> 8) & 1) ^ 1;
	C = t1;
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		t2 = S;
		RAM[t2 + 256u] = -85;
		RAM[(t2 - 1) + 256u] = -59;
		S = (t2 - 2);
		g78 = t1;
		goto lAEBD;
	} else {
		goto lABCE;
	}
}

lAE95:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	u16 t16;
	u16 t17;
	u16 t18;
	u16 t19;
	u16 t20;
	u16 t21;
	u16 t22;
	u16 t23;
	u16 t24;
	u16 t25;
	u16 t26;
	u16 t27;
	t0 = C;
	if (t0 == 0) {
		t1 = A;
		t11 = t1;
		t12 = t11 - 255;
		t13 = t12;
		C = (((t13 >> 8) & 1) ^ 1);
		Z = ((t13 & 255u) == 0u);
		N = t12 >> 7;
		if ((t13 & 255u) == 0u) {
			A = -88;
			Y = -82;
			Z = 0;
			N = 1;
			t2 = S;
			RAM[t2 + 256u] = -82;
			RAM[(t2 - 1) + 256u] = -92;
			S = (t2 - 2);
			g160 = -82;
			g425 = -88;
			goto lBBA2;
		} else {
			t14 = t11 - 46;
			t15 = t14;
			C = (((t15 >> 8) & 1) ^ 1);
			Z = ((t15 & 255u) == 0u);
			N = t14 >> 7;
			if ((t15 & 255u) == 0u) {
				goto lBCF3;
			} else {
				t16 = t11 - 171;
				t17 = t16;
				C = (((t17 >> 8) & 1) ^ 1);
				Z = ((t17 & 255u) == 0u);
				N = t16 >> 7;
				if ((t17 & 255u) == 0u) {
					Y = 21;
					Z = 0;
					N = 0;
					goto lAF0F;
				} else {
					t18 = t11 - 170;
					t19 = t18;
					C = (((t19 >> 8) & 1) ^ 1);
					Z = ((t19 & 255u) == 0u);
					N = t18 >> 7;
					if ((t19 & 255u) == 0u) {
						goto lAE8A;
					} else {
						t20 = t11 - 34;
						t21 = t20;
						t3 = ((t21 >> 8) & 1) ^ 1;
						C = t3;
						Z = ((t21 & 255u) == 0u);
						N = t20 >> 7;
						if ((t21 & 255u) == 0u) {
							g78 = t3;
							goto lAEBD;
						} else {
							t22 = t11 - 168;
							t23 = t22;
							C = (((t23 >> 8) & 1) ^ 1);
							Z = ((t23 & 255u) == 0u);
							N = t22 >> 7;
							if ((t23 & 255u) == 0u) {
								Y = 24;
								Z = 0;
								N = 0;
								goto lAF0F;
							} else {
								t24 = t11 - 165;
								t25 = t24;
								C = (((t25 >> 8) & 1) ^ 1);
								Z = ((t25 & 255u) == 0u);
								N = t24 >> 7;
								if ((t25 & 255u) == 0u) {
									t9 = S;
									RAM[t9 + 256u] = -77;
									t10 = t9 - 1;
									S = t10;
									RAM[t10 + 256u] = -10;
									g252 = t10;
									goto lB3E1;
								} else {
									t26 = t11 - 180;
									t27 = t26;
									t4 = (t27 >> 8) & 1;
									C = (t4 ^ 1);
									Z = ((t27 & 255u) == 0u);
									N = t26 >> 7;
									if (t4 == 0) {
										C = (t1 >> 7);
										t7 = (t11 << 1);
										A = t7;
										t8 = S;
										RAM[t8 + 256u] = t7;
										X = t7;
										Z = t7 == 0;
										N = ((t1 >> 6) & 1);
										RAM[(t8 - 1) + 256u] = -81;
										RAM[(t8 - 2) + 256u] = -84;
										S = (t8 - 3);
										PC = 115;
										goto not_found;
									} else {
										goto lAEF1;
									}
								}
							}
						}
					}
				}
			}
		}
	} else {
		t5 = S;
		RAM[t5 + 256u] = -81;
		RAM[(t5 - 1) + 256u] = 42;
		t6 = t5 - 2;
		S = t6;
		g670 = t6;
		goto lB08B;
	}
}

bb17706:
{
	g234 = 0;
	goto bb17707;
}

lB46F:
{
	A = -1;
	Y = 0;
	Z = 1;
	N = 0;
	goto lB487;
}

lB46D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = t0 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	goto lB46F;
}

lB4A8:
{
	C = 0;
	g145 = 0;
	goto lB4A9;
}

bb26744:
{
	g73 = 0;
	goto bb26745;
}

bb29398:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g468;
	V = t0;
	t1 = g997;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = g997 & 256u;
	C = (t2 >> 8u);
	if (t2 == 0u) {
		*p18 = -74;
		RAM[g47 + 256u] = 95;
		S = g87;
		g136 = t1;
		goto lB475;
	} else {
		X = 23;
		Z = 0;
		N = 0;
		goto lA437;
	}
}

lB649:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	g87 = S;
	g47 = g87 + 1;
	t0 = RAM[(g47 + 256u)];
	RAM[111] = t0;
	t1 = g87 + 2;
	S = t1;
	p18 = &RAM[(t1 + 256u)];
	t2 = *p18;
	RAM[112] = t2;
	Y = 0;
	t3 = RAM[(((t2 << 8u) | t0))];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	C = 0;
	t4 = RAM[100];
	t5 = RAM[101];
	t6 = RAM[(((t5 << 8u) | t4))];
	g997 = t6 + t3;
	if (((t6 ^ t3) & 128u) == 0u) {
		if (((t3 ^ g997) & 128u) == 0u) {
			goto bb29397;
		} else {
			g468 = 1;
			goto bb29398;
		}
	} else {
		goto bb29397;
	}
}

bb29397:
{
	g468 = 0;
	goto bb29398;
}

lB6EF:
{
	u8 t0;
	u8 t1;
	t0 = X;
	t1 = S;
	RAM[t1 + 256u] = t0;
	A = 1;
	Z = 0;
	N = 0;
	RAM[(t1 - 1) + 256u] = -74;
	RAM[(t1 - 2) + 256u] = -11;
	S = (t1 - 3);
	g515 = 1;
	goto lB47D;
}

lB70E:
{
	u8 t0;
	u8 t1;
	t0 = g197;
	t1 = g14;
	RAM[t1 + 256u] = t0;
	RAM[(t1 - 1) + 256u] = -73;
	RAM[(t1 - 2) + 256u] = 17;
	S = (t1 - 3);
	g515 = t0;
	goto lB47D;
}

lB70D:
{
	u8 t0;
	u8 t1;
	t0 = g303;
	t1 = X;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g197 = t1;
	g14 = t0;
	goto lB70E;
}

lB70C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g16;
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = t1 - 1;
	S = t2;
	g303 = t2;
	goto lB70D;
}

lB706:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	bool t6;
	t0 = g689;
	t1 = g626;
	t2 = g228;
	t3 = g24;
	t4 = g375;
	t6 = g791&1;
	Z = t6;
	N = t4 >> 7;
	if (t3 == 0) {
		g16 = t4;
		goto lB70C;
	} else {
		t5 = RAM[(((((t1 << 8u) | t2) + t0) & 65535u))];
		X = t5;
		A = t0;
		Z = t0 == 0;
		N = t0 >> 7;
		g16 = t0;
		goto lB70C;
	}
}

lB703:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	t0 = A;
	t1 = RAM[80];
	t2 = RAM[81];
	t3 = Y;
	t4 = RAM[(((((t2 << 8u) | t1) + t3) & 65535u))];
	t6 = t0 - t4;
	t7 = t6;
	t5 = ((t7 >> 8) & 1) ^ 1;
	C = t5;
	Z = ((t7 & 255u) == 0u);
	N = t6 >> 7;
	A = t3;
	g689 = t3;
	g626 = t2;
	g228 = t1;
	g24 = t5;
	g375 = t3;
	g791 = t3 == 0;
	goto lB706;
}

bb30990:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g310;
	V = t0;
	t1 = g856;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = ((g986 >> 8) & 1) ^ 1;
	C = t2;
	t3 = t1 ^ -1;
	A = t3;
	g689 = g13;
	g626 = g208;
	g228 = g9;
	g24 = t2;
	g375 = t3;
	g791 = t1 == 0xff;
	goto lB706;
}

lB72F:
{
	u8 t0;
	u8 t1;
	C = 0;
	t0 = A;
	g9 = RAM[80];
	g208 = RAM[81];
	g13 = Y;
	t1 = RAM[(((((g208 << 8u) | g9) + g13) & 65535u))];
	g856 = (t0 - 1) - t1;
	g986 = g856;
	if (((g986 ^ t0) & 128u) == 0u) {
		goto bb30989;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb30989;
		} else {
			g310 = 1;
			goto bb30990;
		}
	}
}

bb30989:
{
	g310 = 0;
	goto bb30990;
}

bb31200:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = g323;
	V = t0;
	t1 = g811;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t5 = g919 & 256u;
	C = ((t5 >> 8u) ^ 1);
	if (t5 == 0u) {
		g303 = g378;
		goto lB70D;
	} else {
		t2 = t1 ^ -1;
		A = t2;
		t3 = RAM[101];
		t6 = t2 - t3;
		t7 = t6;
		t4 = (t7 >> 8) & 1;
		C = (t4 ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if (t4 != 0) {
			g197 = t2;
			g14 = g378;
			goto lB70E;
		} else {
			A = t3;
			Z = t3 == 0;
			N = t3 >> 7;
			g197 = t3;
			g14 = g378;
			goto lB70E;
		}
	}
}

lB74B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = Z;
	if (t0 == 0) {
		t1 = X;
		t2 = t1 - 1;
		A = t2;
		t3 = S;
		RAM[t3 + 256u] = t2;
		g378 = t3 - 1;
		S = g378;
		C = 0;
		X = 0;
		Z = 1;
		N = 0;
		t4 = RAM[80];
		t5 = RAM[81];
		t6 = Y;
		t7 = RAM[(((((t5 << 8u) | t4) + t6) & 65535u))];
		g811 = (t2 - 1) - t7;
		g919 = g811;
		if (((g919 ^ t2) & 128u) == 0u) {
			goto bb31199;
		} else {
			if (((t7 ^ t2) & 128u) == 0u) {
				goto bb31199;
			} else {
				g323 = 1;
				goto bb31200;
			}
		}
	} else {
		goto lB248;
	}
}

bb31199:
{
	g323 = 0;
	goto bb31200;
}

lB51F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	RAM[15] = 128u;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0) {
		goto lB526;
	} else {
		g62 = t2;
		g142 = t1;
		goto lB4F6;
	}
}

bb27155:
{
	g299 = 0;
	goto bb27156;
}

lB62B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	t0 = RAM[85];
	t1 = RAM[88];
	t2 = RAM[78];
	t3 = RAM[79];
	RAM[(((t3 << 8u) | t2) + (t0 + 1)) & 65535u] = t1;
	X = t1;
	t4 = RAM[89];
	t5 = t4 + 1;
	RAM[89] = t5;
	A = t5;
	t6 = t0 + 2;
	Y = t6;
	Z = t6 == 0;
	N = t6 >> 7;
	t7 = RAM[78];
	t8 = RAM[79];
	RAM[(((t8 << 8u) | t7) + t6) & 65535u] = t5;
	g1 = t5;
	g50 = t1;
	goto lB52A;
}

lB54B:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lB54D;
	} else {
		goto lB544;
	}
}

lB564:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lB566;
	} else {
		goto lB559;
	}
}

bb28012:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = g929;
	A = t0;
	RAM[89] = t0;
	S = g747;
	t1 = RAM[(g747 + 256u)];
	t2 = (t1 >> 7);
	N = t2;
	V = ((t1 >> 6) & 1);
	B = ((t1 >> 4) & 1);
	D = ((t1 >> 3) & 1);
	I = ((t1 >> 2) & 1);
	Z = ((t1 >> 1) & 1);
	C = (t1 & 1);
	if (t2 == 0) {
		g531 = t0;
		g653 = g688;
		goto lB56E;
	} else {
		A = g361;
		Z = g485;
		N = g403;
		if (((s8 )g361) < 0) {
			g531 = t0;
			g653 = g688;
			goto lB56E;
		} else {
			t3 = RAM[(((g907 + 4u) & 65535u))];
			t4 = (t3 >> 7);
			Y = 0;
			C = t4;
			t6 = t3 << 1;
			Z = ((t6 & 254u) == 0u);
			N = ((t3 >> 6) & 1);
			t5 = t6;
			A = t5;
			g836 = (t4 + 5) + (t6 & 254);
			if (((s8 )t5) < 0) {
				goto bb28180;
			} else {
				if (((t5 ^ g836) & 128u) == 0u) {
					goto bb28180;
				} else {
					g289 = 1;
					goto bb28181;
				}
			}
		}
	}
}

bb27921:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g386;
	V = t0;
	g688 = g994;
	t1 = (g994 >> 8) & 1;
	C = t1;
	RAM[88] = g688;
	Y = 3;
	t2 = RAM[(((g907 + 3u) & 65535u))];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[89];
	g929 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		goto bb28012;
	} else {
		goto bb28012;
	}
}

lB57D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g509;
	RAM[34] = g597;
	RAM[35] = g595;
	t8 = (g595 << 8u) | g597;
	g361 = RAM[t8];
	g485 = g361 == 0;
	g403 = (g361 >> 7);
	X = g361;
	t1 = RAM[(((t8 + 1u) & 65535u))];
	t2 = V;
	t3 = B;
	t4 = D;
	t5 = I;
	g747 = S;
	RAM[g747 + 256u] = (((((((((((((((((t2 << 6) | (t1 & 128u)))) | (t3 << 4)))) | (t4 << 3)))) | (t5 << 2)))) | t0))) | ((((((t1 == 0))) << 1))));
	S = (g747 - 1);
	Y = 2;
	g418 = RAM[34];
	g397 = RAM[35];
	g907 = (g397 << 8u) | g418;
	t6 = RAM[(((g907 + 2u) & 65535u))];
	A = t6;
	Z = t6 == 0;
	N = t6 >> 7;
	t7 = RAM[88];
	g994 = (t7 + t6) + (((s16 )(s8 )t0));
	if (((t7 ^ t6) & 128u) == 0u) {
		if (((t6 ^ g994) & 128u) == 0u) {
			goto bb27920;
		} else {
			g386 = 1;
			goto bb27921;
		}
	} else {
		goto bb27920;
	}
}

bb27920:
{
	g386 = 0;
	goto bb27921;
}

lB5B0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = X;
	t1 = RAM[89];
	t4 = t0 - t1;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		t2 = A;
		t3 = RAM[88];
		t6 = t2 - t3;
		t7 = t6;
		C = (((t7 >> 8) & 1) ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if ((t7 & 255u) == 0u) {
			g432 = t2;
			g222 = t0;
			goto lB572;
		} else {
			goto lB5B8;
		}
	} else {
		goto lB5B8;
	}
}

lB5AE:
{
	u8 t0;
	t0 = g368;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lB5B0;
}

bb28235:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g762;
	V = t0;
	t1 = g803;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g803 >> 8) & 1;
	C = t2;
	RAM[34] = t1;
	if (t2 == 0) {
		g368 = g397;
		goto lB5AE;
	} else {
		t3 = g397 + 1;
		RAM[35] = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		g368 = t3;
		goto lB5AE;
	}
}

bb28181:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g289;
	V = t0;
	t1 = g836;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g836 >> 8) & 1;
	C = t2;
	g803 = (((g418 + (g836 & 255)))) + t2;
	if (((g418 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g803) & 128u) == 0u) {
			goto bb28234;
		} else {
			g762 = 1;
			goto bb28235;
		}
	} else {
		goto bb28234;
	}
}

bb28180:
{
	g289 = 0;
	goto bb28181;
}

bb28234:
{
	g762 = 0;
	goto bb28235;
}

lB5BB:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lB5BD;
	} else {
		goto lB5B0;
	}
}

bb28986:
{
	g162 = 0;
	goto bb28987;
}

bb29045:
{
	g733 = 0;
	goto bb29046;
}

bb2282:
{
	g532 = 0;
	goto bb2283;
}

bb2357:
{
	g66 = 0;
	goto bb2358;
}

lA3EC:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g30;
	t1 = g211;
	t2 = t1 - 1;
	Y = t2;
	Z = (t1 == 1);
	N = t2 >> 7;
	t3 = RAM[90];
	t4 = RAM[91];
	t8 = t2;
	t5 = RAM[(((((t4 << 8u) | t3) + t8) & 65535u))];
	A = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	t6 = RAM[88];
	t7 = RAM[89];
	RAM[(((t7 << 8u) | t6) + t8) & 65535u] = t5;
	if (t1 == 1) {
		g366 = t0;
		g758 = t2;
		goto lA3F3;
	} else {
		g30 = t0;
		g211 = t2;
		goto lA3EC;
	}
}

bb2543:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g420;
	V = t0;
	t1 = g905;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g812 >> 8) & 1;
	C = (t2 ^ 1);
	RAM[88] = t1;
	if (t2 != 0) {
		t3 = RAM[89];
		t4 = t3 - 1;
		RAM[89] = t4;
		Z = (t3 == 1);
		N = t4 >> 7;
		g30 = g350;
		g211 = g601;
		goto lA3EC;
	} else {
		g30 = g350;
		g211 = g601;
		goto lA3EC;
	}
}

lA3DC:
{
	u8 t0;
	u8 t1;
	t1 = g308;
	t0 = RAM[88];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	g905 = ((((t0 - 1) - g927))) + (((s16 )(s8 )t1));
	g812 = g905;
	if (((g812 ^ t0) & 128u) == 0u) {
		goto bb2542;
	} else {
		if (((g601 ^ t0) & 128u) == 0u) {
			goto bb2542;
		} else {
			g420 = 1;
			goto bb2543;
		}
	}
}

bb2462:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g667;
	V = t0;
	t1 = g808;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g981 >> 8) & 1;
	t3 = t2 ^ 1;
	C = t3;
	RAM[90] = t1;
	if (t2 == 0) {
		g308 = t3;
		goto lA3DC;
	} else {
		t4 = g721 - 1;
		RAM[91] = t4;
		Z = (g721 == 1);
		N = t4 >> 7;
		C = 1;
		g308 = 1;
		goto lA3DC;
	}
}

bb2461:
{
	g667 = 0;
	goto bb2462;
}

bb2542:
{
	g420 = 0;
	goto bb2543;
}

bb2785:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	t0 = g757;
	V = t0;
	t1 = g831;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t6 = g831 & 256u;
	C = (t6 >> 8u);
	if (t6 == 0u) {
		RAM[34] = t1;
		X = g505;
		t7 = g505 - (g831 & 255);
		t8 = t7;
		t2 = (t8 >> 8) & 1;
		C = (t2 ^ 1);
		Z = ((t8 & 255u) == 0u);
		N = t7 >> 7;
		if (t2 == 0) {
			t3 = RAM[(((g505 + 1) + 256u))];
			t4 = g505 + 2;
			S = t4;
			t5 = RAM[(t4 + 256u)];
			t9 = (t3 + 1) + (t5 << 8);
			PC = t9;
			if ((t9 + 4294926336u) > 17590u) {
				goto not_found;
			} else {
				goto bb48000;
			}
		} else {
			goto lA435;
		}
	} else {
		goto lA435;
	}
}

lA3FB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	g505 = g225;
	t0 = g41;
	t1 = (t0 >> 7);
	C = t1;
	t3 = t0 << 1;
	Z = ((t3 & 254u) == 0u);
	N = ((t0 >> 6) & 1);
	t2 = t3;
	A = t2;
	g831 = (((t1 | 62))) + (t3 & 254);
	if (((s8 )t2) < 0) {
		goto bb2784;
	} else {
		if (((t2 ^ g831) & 128u) == 0u) {
			goto bb2784;
		} else {
			g757 = 1;
			goto bb2785;
		}
	}
}

lA753:
{
	u8 t0;
	t0 = S;
	A = 9;
	Z = 0;
	N = 0;
	RAM[(t0 + 2) + 256u] = -89;
	RAM[(t0 + 1) + 256u] = 89;
	S = t0;
	g225 = t0;
	g41 = 9;
	goto lA3FB;
}

lA74C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		goto lA753;
	} else {
		t1 = X;
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		t2 = C;
		g945 = (t1 + 15) + (((s16 )(s8 )t2));
		if (((s8 )t1) < 0) {
			goto bb7779;
		} else {
			if (((t1 ^ g945) & 128u) == 0u) {
				goto bb7779;
			} else {
				g393 = 1;
				goto bb7780;
			}
		}
	}
}

bb7780:
{
	u8 t0;
	u8 t1;
	t0 = g393;
	V = t0;
	t1 = g945;
	A = t1;
	C = (g945 >> 8) & 1;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	S = t1;
	goto lA753;
}

bb7779:
{
	g393 = 0;
	goto bb7780;
}

lA883:
{
	u8 t0;
	u8 t1;
	A = 3;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = -121;
	t1 = t0 - 2;
	S = t1;
	g225 = t1;
	g41 = 3;
	goto lA3FB;
}

lADAA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g258;
	t1 = X;
	RAM[t0 + 256u] = t1;
	A = 1;
	Z = 0;
	N = 0;
	RAM[(t0 - 1) + 256u] = -83;
	RAM[(t0 - 2) + 256u] = -80;
	t2 = t0 - 3;
	S = t2;
	g225 = t2;
	g41 = 1;
	goto lA3FB;
}

lADA4:
{
	u8 t0;
	RAM[122] = (g327 - 1);
	X = 0;
	t0 = RAM[72];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g258 = g155;
	goto lADAA;
}

lAD9E:
{
	u8 t0;
	u8 t1;
	g155 = g764;
	g327 = RAM[122];
	X = g327;
	Z = g327 == 0;
	N = g327 >> 7;
	if (g327 == 0) {
		t0 = RAM[123];
		t1 = t0 - 1;
		RAM[123] = t1;
		Z = (t0 == 1);
		N = t1 >> 7;
		goto lADA4;
	} else {
		goto lADA4;
	}
}

lA9B1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[14];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[13];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[(t1 - 1) + 256u] = t2;
	RAM[(t1 - 2) + 256u] = -87;
	RAM[(t1 - 3) + 256u] = -71;
	t3 = t1 - 4;
	S = t3;
	g764 = t3;
	goto lAD9E;
}

lAAA2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	u16 t16;
	u16 t17;
	t0 = Z;
	if (t0 == 0) {
		t1 = A;
		t10 = t1;
		t11 = t10 - 163;
		t12 = t11;
		t2 = ((t12 >> 8) & 1) ^ 1;
		C = t2;
		t3 = (t12 & 255u) == 0u;
		Z = t3;
		t4 = (t11 >> 7);
		N = t4;
		if ((t12 & 255u) == 0u) {
			g686 = t2;
			g593 = t3;
			g587 = t4;
			goto lAAF8;
		} else {
			t13 = t10 - 166;
			t5 = (t13 & 255u) == 0u;
			Z = t5;
			t6 = (t13 >> 7);
			N = t6;
			C = 0;
			if ((t13 & 255u) == 0u) {
				g686 = 0;
				g593 = t5;
				g587 = t6;
				goto lAAF8;
			} else {
				t14 = t10 - 44;
				t15 = t14;
				C = (((t15 >> 8) & 1) ^ 1);
				Z = ((t15 & 255u) == 0u);
				N = t14 >> 7;
				if ((t15 & 255u) == 0u) {
					C = 1;
					t9 = S;
					RAM[t9 + 256u] = -86;
					RAM[(t9 - 1) + 256u] = -21;
					S = (t9 - 2);
					PC = -16;
					goto not_found;
				} else {
					t16 = t10 - 59;
					t17 = t16;
					C = (((t17 >> 8) & 1) ^ 1);
					Z = ((t17 & 255u) == 0u);
					N = t16 >> 7;
					if ((t17 & 255u) == 0u) {
						goto lAB13;
					} else {
						t7 = S;
						RAM[t7 + 256u] = -86;
						RAM[(t7 - 1) + 256u] = -73;
						t8 = t7 - 2;
						S = t8;
						g764 = t8;
						goto lAD9E;
					}
				}
			}
		}
	} else {
		goto lAAE7;
	}
}

lAA96:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	N = t2 >> 7;
	V = ((t2 >> 6) & 1);
	B = ((t2 >> 4) & 1);
	D = ((t2 >> 3) & 1);
	I = ((t2 >> 2) & 1);
	t3 = (t2 >> 1) & 1;
	Z = t3;
	C = (t2 & 1);
	if (t3 == 0) {
		goto lAAA2;
	} else {
		goto lAAD7;
	}
}

lAAA0:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lAAA2;
	} else {
		goto lAAD7;
	}
}

lAD8A:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = -116;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lA775:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = 119;
	S = (t0 - 2);
	goto lAD8A;
}

lA79C:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -98;
	S = (t0 - 2);
	goto lAD8A;
}

lB423:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	t0 = RAM[123];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[122];
	RAM[(t1 - 1) + 256u] = t2;
	t3 = RAM[78];
	t4 = RAM[79];
	t11 = (t4 << 8u) | t3;
	t5 = Y;
	t6 = RAM[(((t11 + t5) & 65535u))];
	RAM[122] = t6;
	t7 = t5 + 1;
	Y = t7;
	t8 = RAM[(((t11 + t7) & 65535u))];
	RAM[123] = t8;
	t9 = RAM[72];
	RAM[(t1 - 2) + 256u] = t9;
	t10 = RAM[71];
	A = t10;
	Z = t10 == 0;
	N = t10 >> 7;
	RAM[(t1 - 3) + 256u] = t10;
	RAM[(t1 - 4) + 256u] = -76;
	RAM[(t1 - 5) + 256u] = 58;
	S = (t1 - 6);
	goto lAD8A;
}

lB79E:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -96;
	S = (t0 - 2);
	goto lAD8A;
}

lA94B:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = 77;
	S = (t0 - 2);
	goto lB79E;
}

lAA86:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -120;
	S = (t0 - 2);
	goto lB79E;
}

lAA80:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -126;
	S = (t0 - 2);
	goto lAA86;
}

lAB85:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -121;
	S = (t0 - 2);
	goto lB79E;
}

lABA5:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -89;
	S = (t0 - 2);
	goto lB79E;
}

lAFBD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	p9 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p9;
	X = t1;
	t2 = RAM[101];
	*p9 = t2;
	t3 = RAM[100];
	RAM[t0 + 256u] = t3;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[(t0 - 1) + 256u] = t1;
	RAM[(t0 - 2) + 256u] = -81;
	RAM[(t0 - 3) + 256u] = -55;
	S = (t0 - 4);
	goto lB79E;
}

lB745:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 71;
	S = (t0 - 2);
	goto lB79E;
}

lE221:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 35;
	S = (t0 - 2);
	goto lB79E;
}

lB7EB:
{
	u8 t0;
	t0 = g724;
	RAM[(t0 - 1) + 256u] = -73;
	RAM[(t0 - 2) + 256u] = -19;
	S = (t0 - 3);
	goto lAD8A;
}

lB824:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -72;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 38;
	g724 = t1;
	goto lB7EB;
}

lB82D:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -72;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 47;
	g724 = t1;
	goto lB7EB;
}

lE12A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = 44;
	S = (t0 - 2);
	goto lAD8A;
}

lAEF4:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = -10;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lAFB4:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -81;
	RAM[(t0 - 1) + 256u] = -74;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lB1B5:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -79;
	RAM[(t0 - 1) + 256u] = -73;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lE257:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 89;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lE1E3:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -27;
	S = (t0 - 2);
	goto lE257;
}

bb48000_2e_lA928_crit_edge:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = 42;
	t1 = t0 - 2;
	S = t1;
	g764 = t1;
	goto lAD9E;
}

lAE2B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[77];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = t1 - 1;
	S = t2;
	g258 = t2;
	goto lADAA;
}

bb2784:
{
	g757 = 0;
	goto bb2785;
}

lA434:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g334;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA421:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	t0 = g64;
	t1 = RAM[((((((((t0 + g110) + 1))))) + 256u))];
	RAM[((t0 - 9) + 97u) & 255u] = t1;
	t2 = t0 + 1;
	if (t2 == 9) {
		X = 0;
		t3 = RAM[(((g110 + 10) + 256u))];
		Y = t3;
		t4 = g110 + 11;
		S = t4;
		t5 = RAM[(t4 + 256u)];
		A = t5;
		t6 = RAM[52];
		t10 = t3 - t6;
		t11 = t10;
		t7 = (t11 >> 8) & 1;
		C = (t7 ^ 1);
		Z = ((t11 & 255u) == 0u);
		N = t10 >> 7;
		if (t7 == 0) {
			if ((t11 & 255u) == 0u) {
				t8 = RAM[51];
				t12 = t5 - t8;
				t13 = t12;
				t9 = (t13 >> 8) & 1;
				C = (t9 ^ 1);
				Z = ((t13 & 255u) == 0u);
				N = t12 >> 7;
				if (t9 == 0) {
					goto lA435;
				} else {
					g334 = t4;
					goto lA434;
				}
			} else {
				goto lA435;
			}
		} else {
			g334 = t4;
			goto lA434;
		}
	} else {
		g64 = t2;
		goto lA421;
	}
}

lA41F:
{
	X = -9;
	Z = 0;
	N = 1;
	g110 = S;
	g64 = 0;
	goto lA421;
}

lA437:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = RAM[768];
	t1 = RAM[769];
	t2 = (t1 << 8) | t0;
	PC = t2;
	if ((t2 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA435:
{
	X = 16;
	Z = 0;
	N = 0;
	goto lA437;
}

lA435_2e_loopexit:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	t0 = g588;
	t1 = g571;
	t2 = g380;
	t3 = g654;
	t4 = g221;
	t5 = g346;
	t6 = g302;
	t7 = g287;
	t8 = g283;
	X = t8;
	A = t7;
	Z = t6 == 0;
	N = t5 >> 7;
	C = t4;
	Y = t3;
	RAM[93] = g513;
	RAM[113] = t2;
	RAM[114] = t1;
	V = t0;
	goto lA435;
}

lB35F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	u16 t10;
	g473 = g577;
	t0 = g367;
	t1 = g499;
	t2 = g306;
	t3 = g657;
	t4 = g220;
	g513 = 16 - g473;
	t9 = t4 << 1;
	t5 = t9;
	g878 = (t3 << 1) | (t4 >> 7);
	t6 = (g878 >> 8);
	g677 = g878;
	if (t6 == 0) {
		g457 = t2 << 1;
		t10 = (t1 << 1) | (t2 >> 7);
		t7 = (t10 >> 8);
		g389 = t10;
		if (t7 == 0) {
			g697 = t0;
			g541 = g677;
			g620 = t7;
			g272 = g677;
			g286 = t5;
			goto lB378;
		} else {
			t8 = RAM[40];
			g971 = t8 + (t9 & 254);
			if (((t8 ^ t5) & 128u) == 0u) {
				goto bb24973;
			} else {
				goto bb24973;
			}
		}
	} else {
		g588 = t0;
		g571 = t1;
		g380 = t2;
		g654 = g677;
		g221 = t6;
		g346 = g677;
		g302 = g677;
		g287 = g677;
		g283 = t5;
		goto lA435_2e_loopexit;
	}
}

lB378:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	t0 = g697;
	t1 = g541;
	t2 = g620;
	t3 = g272;
	t4 = g286;
	t5 = g513 - 1;
	t6 = g473 + 1;
	if (g513 == 1) {
		X = t4;
		A = t3;
		Z = (g513 == 1);
		N = t5 >> 7;
		C = t2;
		Y = t1;
		RAM[93] = t5;
		RAM[113] = g457;
		RAM[114] = g389;
		V = t0;
		t7 = RAM[(((g5 + 1) + 256u))];
		t8 = g5 + 2;
		S = t8;
		t9 = RAM[(t8 + 256u)];
		t10 = (t7 + 1) + (t9 << 8);
		PC = t10;
		if ((t10 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		g577 = t6;
		g367 = t0;
		g499 = g389;
		g306 = g457;
		g657 = t1;
		g220 = t4;
		goto lB35F;
	}
}

bb25051:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g0;
	t1 = g815;
	t2 = (g815 >> 8) & 1;
	if (t2 == 0) {
		g697 = t0;
		g541 = t1;
		g620 = t2;
		g272 = t1;
		g286 = g365;
		goto lB378;
	} else {
		g588 = t0;
		g571 = g389;
		g380 = g457;
		g654 = t1;
		g221 = t2;
		g346 = t1;
		g302 = t1;
		g287 = t1;
		g283 = g365;
		goto lA435_2e_loopexit;
	}
}

bb24973:
{
	g365 = g971;
	g815 = (((g247 + (g878 & 255)))) + ((((g971 >> 8) & 1)));
	if (((g247 ^ g677) & 128u) == 0u) {
		if (((g677 ^ g815) & 128u) == 0u) {
			goto bb25050;
		} else {
			g0 = 1;
			goto bb25051;
		}
	} else {
		goto bb25050;
	}
}

bb25050:
{
	g0 = 0;
	goto bb25051;
}

lB355:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g5 = g153;
	g247 = g25;
	RAM[41] = g247;
	A = 16;
	RAM[93] = 16;
	X = 0;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = RAM[113];
	t1 = RAM[114];
	t2 = V;
	g577 = 0;
	g367 = t2;
	g499 = t1;
	g306 = t0;
	g657 = 0;
	g220 = 0;
	goto lB35F;
}

lB337:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g114;
	RAM[40] = t0;
	A = 0;
	Z = 1;
	N = 0;
	t1 = S;
	RAM[t1 + 256u] = -77;
	RAM[(t1 - 1) + 256u] = 61;
	t2 = t1 - 2;
	S = t2;
	g153 = t2;
	g25 = 0;
	goto lB355;
}

lB331:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g99;
	t1 = RAM[70];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (((s8 )t1) < 0) {
		t2 = t0 - 2;
		X = t2;
		Z = ((t0 - 1) == 1);
		N = t2 >> 7;
		g114 = t2;
		goto lB337;
	} else {
		g114 = t0;
		goto lB337;
	}
}

bb24349:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g273;
	V = t0;
	t1 = g955;
	A = t1;
	C = (g955 >> 8) & 1;
	RAM[113] = g53;
	t2 = RAM[11];
	t3 = t2 - 1;
	RAM[11] = t3;
	Z = (t2 == 1);
	N = t3 >> 7;
	if (t2 == 1) {
		RAM[114] = t1;
		X = 5;
		t4 = RAM[69];
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		if (((s8 )t4) < 0) {
			X = 4;
			Z = 0;
			N = 0;
			g99 = 4;
			goto lB331;
		} else {
			g99 = 5;
			goto lB331;
		}
	} else {
		g342 = g53;
		g522 = g35;
		g165 = t1;
		goto lB2F2;
	}
}

lB320:
{
	u8 t0;
	u8 t1;
	u16 t2;
	g53 = g671;
	t2 = g962;
	t0 = g20;
	g35 = g584;
	t1 = RAM[101];
	g955 = (t1 + t0) + t2;
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g955) & 128u) == 0u) {
			goto bb24348;
		} else {
			g273 = 1;
			goto bb24349;
		}
	} else {
		goto bb24348;
	}
}

lB30F:
{
	u8 t0;
	u8 t1;
	t0 = g673;
	t1 = g705 | g446;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = 0;
	if (t1 == 0) {
		g671 = g254;
		g962 = 0;
		g20 = t1;
		g584 = t0;
		goto lB320;
	} else {
		*p16 = -77;
		S = g629;
		RAM[g629 + 256u] = 24;
		g131 = t0;
		g491 = g629;
		goto lB34C;
	}
}

lB2F2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	u16 t16;
	u16 t17;
	g446 = g342;
	t0 = g522;
	g705 = g165;
	RAM[114] = g705;
	t1 = t0 + 1;
	Y = t1;
	t2 = S;
	g629 = t2 + 1;
	g254 = RAM[(g629 + 256u)];
	X = g254;
	RAM[100] = g254;
	t3 = t2 + 2;
	S = t3;
	p16 = &RAM[(t3 + 256u)];
	t4 = *p16;
	A = t4;
	RAM[101] = t4;
	t5 = RAM[95];
	t6 = RAM[96];
	t13 = (t6 << 8u) | t5;
	t7 = RAM[(((t13 + t1) & 65535u))];
	t14 = t4 - t7;
	t15 = t14;
	t8 = (t15 >> 8) & 1;
	C = (t8 ^ 1);
	Z = ((t15 & 255u) == 0u);
	N = t14 >> 7;
	if (t8 == 0) {
		if ((t15 & 255u) == 0u) {
			t9 = t0 + 2;
			Y = t9;
			A = g254;
			t10 = RAM[(((t13 + t9) & 65535u))];
			t16 = g254 - t10;
			t17 = t16;
			t11 = (t17 >> 8) & 1;
			C = (t11 ^ 1);
			Z = ((t17 & 255u) == 0u);
			N = t16 >> 7;
			if (t11 == 0) {
				goto lB245;
			} else {
				g673 = t9;
				goto lB30F;
			}
		} else {
			goto lB245;
		}
	} else {
		t12 = t0 + 2;
		Y = t12;
		Z = t12 == 0;
		N = t12 >> 7;
		g673 = t12;
		goto lB30F;
	}
}

lB2EA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[95];
	t1 = RAM[96];
	t2 = RAM[(((((t1 << 8u) | t0) + 4u) & 65535u))];
	RAM[11] = t2;
	A = 0;
	Z = 1;
	N = 0;
	RAM[113] = 0;
	g342 = 0;
	g522 = 4;
	g165 = 0;
	goto lB2F2;
}

lB256:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = RAM[11];
	A = t0;
	Y = 4;
	t1 = RAM[95];
	t2 = RAM[96];
	t3 = RAM[(((((t2 << 8u) | t1) + 4u) & 65535u))];
	t4 = t0 - t3;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		goto lB2EA;
	} else {
		goto lB245;
	}
}

bb23893:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g616;
	V = t0;
	C = (((g949 >> 8) & 1) ^ 1);
	t1 = RAM[95];
	RAM[(((g243 << 8u) | t1) + 3u) & 65535u] = g892;
	t2 = RAM[12];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0) {
		Y = 4;
		Z = 0;
		N = 0;
		goto lB2EA;
	} else {
		goto lB34B;
	}
}

bb23795:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g469;
	V = t0;
	t1 = ((g798 >> 8) & 1) ^ 1;
	C = t1;
	t2 = RAM[96];
	RAM[(((t2 << 8u) | g557) + 2u) & 65535u] = g884;
	t3 = RAM[50];
	A = t3;
	Y = 3;
	Z = 0;
	N = 0;
	g243 = RAM[96];
	g892 = ((((t3 - 1) - g243))) + t1;
	g949 = g892;
	if (((g949 ^ t3) & 128u) == 0u) {
		goto bb23892;
	} else {
		if (((g243 ^ t3) & 128u) == 0u) {
			goto bb23892;
		} else {
			g616 = 1;
			goto bb23893;
		}
	}
}

lB2CD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g545;
	t1 = RAM[89];
	RAM[89] = (t1 - 1);
	t2 = RAM[114];
	t3 = t2 - 1;
	RAM[114] = t3;
	Z = (t2 == 1);
	N = t3 >> 7;
	if (t2 == 1) {
		RAM[89] = t1;
		C = 1;
		t4 = RAM[49];
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		g557 = RAM[95];
		g884 = ((((t4 - 1) - g557))) + 1;
		g798 = g884;
		if (((g798 ^ t4) & 128u) == 0u) {
			goto bb23794;
		} else {
			if (((g557 ^ t4) & 128u) == 0u) {
				goto bb23794;
			} else {
				g469 = 1;
				goto bb23795;
			}
		}
	} else {
		g115 = t0;
		g455 = 0;
		goto lB2C8;
	}
}

lB2BC:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = A;
	RAM[49] = t0;
	t1 = Y;
	RAM[50] = t1;
	A = 0;
	t2 = RAM[114];
	RAM[114] = (t2 + 1);
	t3 = RAM[113];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t3 == 0) {
		g545 = t3;
		goto lB2CD;
	} else {
		g115 = t3;
		g455 = 0;
		goto lB2C8;
	}
}

lB2C8:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = g115;
	t1 = g455;
	t2 = t0 - t1;
	t3 = RAM[88];
	t4 = RAM[89];
	RAM[(((t4 << 8u) | t3) + (t2 - 1)) & 65535u] = 0;
	t5 = t1 + 1;
	if (t5 == t0) {
		Y = 0;
		Z = (t2 == 1);
		N = 0;
		g545 = 0;
		goto lB2CD;
	} else {
		g115 = t0;
		g455 = t5;
		goto lB2C8;
	}
}

bb23794:
{
	g469 = 0;
	goto bb23795;
}

bb23892:
{
	g616 = 0;
	goto bb23893;
}

bb24259:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g618;
	V = t0;
	t1 = g824;
	t2 = (g824 >> 8) & 1;
	C = t2;
	X = t1;
	t3 = Y;
	A = t3;
	t4 = RAM[34];
	Y = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	t5 = t2;
	g671 = t1;
	g962 = t5;
	g20 = t3;
	g584 = t4;
	goto lB320;
}

lB319:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[100];
	t2 = C;
	g824 = (t1 + t0) + (((s16 )(s8 )t2));
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g824) & 128u) == 0u) {
			goto bb24258;
		} else {
			g618 = 1;
			goto bb24259;
		}
	} else {
		goto bb24258;
	}
}

bb24258:
{
	g618 = 0;
	goto bb24259;
}

bb24348:
{
	g273 = 0;
	goto bb24349;
}

lB34C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g131;
	t1 = g491;
	t2 = t1 - 1;
	S = t2;
	RAM[34] = t0;
	t3 = RAM[95];
	t4 = RAM[96];
	t8 = (t4 << 8u) | t3;
	t5 = RAM[(((t8 + t0) & 65535u))];
	RAM[40] = t5;
	t6 = t0 - 1;
	Y = t6;
	t7 = RAM[(((t8 + t6) & 65535u))];
	A = t7;
	Z = t7 == 0;
	N = t7 >> 7;
	g153 = t2;
	g25 = t7;
	goto lB355;
}

lB296:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	t0 = g32;
	t1 = g464;
	t2 = RAM[95];
	t3 = RAM[96];
	RAM[(((t3 << 8u) | t2) + (g650 + 1)) & 65535u] = t1;
	t4 = g650 + 2;
	Y = t4;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t5 = RAM[95];
	t6 = RAM[96];
	RAM[(((t6 << 8u) | t5) + t4) & 65535u] = t0;
	t7 = S;
	RAM[t7 + 256u] = -78;
	t8 = t7 - 1;
	S = t8;
	RAM[t8 + 256u] = -97;
	g131 = t4;
	g491 = t8;
	goto lB34C;
}

lB286:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	g650 = g524;
	X = 11;
	A = 0;
	t0 = RAM[12];
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = t0 & 64;
	V = (t1 >> 6);
	if (t1 == 0) {
		g32 = 11;
		g464 = 0;
		goto lB296;
	} else {
		g132 = S;
		t2 = g132 + 1;
		S = t2;
		t3 = RAM[(t2 + 256u)];
		A = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		C = 0;
		g953 = t3 + 1;
		if (((s8 )t3) < 0) {
			goto bb23262;
		} else {
			if (((t3 ^ g953) & 128u) == 0u) {
				goto bb23262;
			} else {
				g26 = 1;
				goto bb23263;
			}
		}
	}
}

lB27D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g330;
	RAM[113] = t0;
	t1 = RAM[11];
	A = t1;
	Y = 4;
	Z = 0;
	N = 0;
	t2 = RAM[95];
	t3 = RAM[96];
	RAM[(((t3 << 8u) | t2) + 4u) & 65535u] = t1;
	g524 = 4;
	goto lB286;
}

lB274:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = g200;
	Y = 1;
	t1 = RAM[70];
	A = t1;
	Z = t1 == 0;
	t2 = (t1 >> 7);
	N = t2;
	t3 = RAM[95];
	t4 = RAM[96];
	RAM[(((t4 << 8u) | t3) + 1u) & 65535u] = t1;
	if (t2 == 0) {
		g330 = t0;
		goto lB27D;
	} else {
		t5 = t0 - 2;
		X = t5;
		Z = ((t0 - 1) == 1);
		N = t5 >> 7;
		g330 = t5;
		goto lB27D;
	}
}

lB267:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	Y = 0;
	RAM[114] = 0;
	X = 5;
	t0 = RAM[69];
	A = t0;
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	t2 = RAM[95];
	t3 = RAM[96];
	RAM[(t3 << 8u) | t2] = t0;
	if (t1 == 0) {
		g200 = 5;
		goto lB274;
	} else {
		X = 4;
		Z = 0;
		N = 0;
		g200 = 4;
		goto lB274;
	}
}

bb23339:
{
	u8 t0;
	u8 t1;
	t0 = g134;
	V = t0;
	t1 = g846;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (g846 >> 8) & 1;
	g32 = g188;
	g464 = t1;
	goto lB296;
}

bb23263:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g26;
	V = t0;
	g188 = g953;
	t1 = (g953 >> 8) & 1;
	C = t1;
	X = g188;
	t2 = g132 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	g846 = t1 + t3;
	if (((s8 )t3) < 0) {
		goto bb23338;
	} else {
		if (((t3 ^ g846) & 128u) == 0u) {
			goto bb23338;
		} else {
			g134 = 1;
			goto bb23339;
		}
	}
}

bb23262:
{
	g26 = 0;
	goto bb23263;
}

bb23338:
{
	g134 = 0;
	goto bb23339;
}

lA565:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = A;
	t4 = t0 - 13;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		goto lAACA;
	} else {
		t1 = X;
		RAM[t1 | 512u] = t0;
		t2 = t1 + 1;
		X = t2;
		t6 = t2 - 89;
		t7 = t6;
		t3 = (t7 >> 8) & 1;
		C = (t3 ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if (t3 == 0) {
			X = 23;
			Z = 0;
			N = 0;
			goto lA437;
		} else {
			goto lA562;
		}
	}
}

lA857:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Z;
	if (t0 == 0) {
		goto lA870;
	} else {
		X = 26;
		t1 = RAM[62];
		Y = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		if (t1 == 0) {
			goto lA437;
		} else {
			t2 = RAM[61];
			RAM[122] = t2;
			RAM[123] = t1;
			t3 = RAM[59];
			A = t3;
			t4 = RAM[60];
			Y = t4;
			Z = t4 == 0;
			N = t4 >> 7;
			RAM[57] = t3;
			RAM[58] = t4;
			goto lA870;
		}
	}
}

lA8DB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t0 = X;
	S = t0;
	t1 = A;
	t8 = t1 - 141;
	t9 = t8;
	C = (((t9 >> 8) & 1) ^ 1);
	Z = ((t9 & 255u) == 0u);
	N = t8 >> 7;
	if ((t9 & 255u) == 0u) {
		t3 = RAM[(((t0 + 2) + 256u))];
		RAM[57] = t3;
		t4 = RAM[(((t0 + 3) + 256u))];
		RAM[58] = t4;
		t5 = RAM[(((t0 + 4) + 256u))];
		RAM[122] = t5;
		t6 = t0 + 5;
		S = t6;
		t7 = RAM[(t6 + 256u)];
		A = t7;
		Z = t7 == 0;
		N = t7 >> 7;
		RAM[123] = t7;
		goto lA8F8;
	} else {
		X = 12;
		t2 = RAM[4514];
		Z = t2 == 0;
		N = t2 >> 7;
		V = ((t2 >> 6) & 1);
		goto lA437;
	}
}

lA8C3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	t0 = C;
	if (t0 == 0) {
		X = 17;
		Z = 0;
		N = 0;
		goto lA437;
	} else {
		t1 = RAM[95];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		t5 = (t1 - 2) + (((s16 )(s8 )t0));
		t6 = t5;
		V = (((((((t6 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		t2 = ((t6 >> 8) & 1) ^ 1;
		C = t2;
		RAM[122] = t5;
		t3 = RAM[96];
		A = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		t7 = (t3 - 1) + t2;
		t8 = t7;
		V = (((((((t8 ^ t3) & 128u) == 0u) | (((s8 )t3) > -1))&1))) ? 0 : 1;
		t4 = t7;
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		C = (((t8 >> 8) & 1) ^ 1);
		RAM[123] = t4;
		goto lA8D1;
	}
}

lACBB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	t0 = Y;
	Y = (t0 + 1);
	t1 = A;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		X = 13;
		t2 = t0 + 2;
		Y = t2;
		t3 = RAM[122];
		t4 = RAM[123];
		t9 = (t4 << 8u) | t3;
		t5 = RAM[(((t9 + t2) & 65535u))];
		A = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		if (t5 == 0) {
			goto lA437;
		} else {
			t6 = RAM[(((t9 + (t0 + 3)) & 65535u))];
			RAM[63] = t6;
			t7 = RAM[(((t9 + (t0 + 4)) & 65535u))];
			A = t7;
			t8 = t0 + 5;
			Y = t8;
			Z = t8 == 0;
			N = t8 >> 7;
			RAM[64] = t7;
			goto lACD1;
		}
	} else {
		goto lACD1;
	}
}

lAD2E:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		X = 10;
		Z = 0;
		N = 0;
		goto lA437;
	} else {
		g174 = X;
		S = g174;
		A = g174;
		Z = g174 == 0;
		N = g174 >> 7;
		C = 0;
		g885 = g174 + 4;
		if (((s8 )g174) < 0) {
			goto bb15411;
		} else {
			if (((g174 ^ g885) & 128u) == 0u) {
				goto bb15411;
			} else {
				g31 = 1;
				goto bb15412;
			}
		}
	}
}

lAD99:
{
	X = 22;
	Z = 0;
	N = 0;
	goto lA437;
}

lAD90:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[13];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	t2 = C;
	if (t1 == 0) {
		if (t2 != 0) {
			goto lAD99;
		} else {
			goto lAD96;
		}
	} else {
		if (t2 != 0) {
			goto lAD96;
		} else {
			goto lAD99;
		}
	}
}

lA9BA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	p3 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p3;
	t2 = C;
	t4 = (t1 << 1) | (((s16 )(s8 )t2));
	C = (t4 >> 8);
	Z = ((t4 & 255u) == 0u);
	t3 = t4;
	N = t3 >> 7;
	A = t3;
	*p3 = -87;
	RAM[t0 + 256u] = -66;
	S = (t0 - 1);
	goto lAD90;
}

lAD8D:
{
	u8 t0;
	C = 0;
	t0 = RAM[56];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	goto lAD90;
}

lA772:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = 116;
	S = (t0 - 2);
	goto lAD8D;
}

lADF0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t5 = g863;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	p6 = &RAM[(t1 + 256u)];
	t2 = *p6;
	A = t2;
	t3 = RAM[t5];
	t6 = t2 - t3;
	t7 = t6;
	t4 = (t7 >> 8) & 1;
	C = (t4 ^ 1);
	Z = ((t7 & 255u) == 0u);
	N = t6 >> 7;
	if (t4 == 0) {
		g157 = t1;
		g549 = t2;
		goto lAE5D;
	} else {
		*p6 = -83;
		RAM[t0 + 256u] = -8;
		S = (t0 - 1);
		goto lAD8D;
	}
}

bb16573:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g746;
	V = t0;
	t1 = g816;
	A = t1;
	C = (g816 >> 8) & 1;
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = t1 + 41088u;
	g863 = t2;
	goto lADF0;
}

bb16494:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = g123;
	V = t0;
	t1 = g841;
	t2 = (t1 >> 7);
	RAM[34] = t1;
	t4 = g841 & 255;
	C = t2;
	t5 = t4 << 1;
	Z = ((t5 & 254u) == 0u);
	N = ((t1 >> 6) & 1);
	t3 = t5;
	A = t3;
	g816 = (t2 + t4) + (t5 & 254);
	if (((g841 ^ t5) & 128u) == 0u) {
		if (((t3 ^ g816) & 128u) == 0u) {
			goto bb16572;
		} else {
			g746 = 1;
			goto bb16573;
		}
	} else {
		goto bb16572;
	}
}

bb16443:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = g364;
	V = t0;
	t1 = g842;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g842 >> 8) & 1;
	C = t2;
	if (t1 == 0) {
		t3 = RAM[101];
		t4 = S;
		RAM[t4 + 256u] = t3;
		t5 = RAM[100];
		A = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		RAM[(t4 - 1) + 256u] = t5;
		RAM[(t4 - 2) + 256u] = -74;
		t6 = t4 - 3;
		S = t6;
		RAM[t6 + 256u] = 69;
		g781 = t6;
		goto lAE83;
	} else {
		g841 = ((((g842 & 255) + 255))) + t2;
		if (((s8 )t1) > -1) {
			goto bb16493;
		} else {
			if (((t1 ^ g841) & 128u) == 0u) {
				goto bb16493;
			} else {
				g123 = 1;
				goto bb16494;
			}
		}
	}
}

bb16384:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g539;
	V = t0;
	t1 = g911;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t4 = g911 & 256u;
	t2 = (t4 >> 8u);
	C = t2;
	if (t4 == 0u) {
		goto lAE58;
	} else {
		t3 = RAM[13];
		g842 = (((t3 + (g911 & 255)))) + t2;
		if (((t3 ^ t1) & 128u) == 0u) {
			if (((t1 ^ g842) & 128u) == 0u) {
				goto bb16442;
			} else {
				g364 = 1;
				goto bb16443;
			}
		} else {
			goto bb16442;
		}
	}
}

lADD7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g520;
	t1 = RAM[77];
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		if (t0 == 0) {
			g911 = ((((g909 & 255) + 7))) + (((s16 )(s8 )t0));
			if (((s8 )g518) < 0) {
				goto bb16383;
			} else {
				if (((g518 ^ g911) & 128u) == 0u) {
					goto bb16383;
				} else {
					g539 = 1;
					goto bb16384;
				}
			}
		} else {
			goto lAE58;
		}
	} else {
		t2 = RAM[13];
		RAM[13] = (t2 >> 1);
		t5 = (t1 << 1) | (t2 & 1);
		C = (t5 >> 8);
		g782 = t5;
		A = g782;
		g143 = RAM[122];
		X = g143;
		Z = g143 == 0;
		N = g143 >> 7;
		if (g143 == 0) {
			t3 = RAM[123];
			t4 = t3 - 1;
			RAM[123] = t4;
			Z = (t3 == 1);
			N = t4 >> 7;
			goto lAE11;
		} else {
			goto lAE11;
		}
	}
}

lADBB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	C = 1;
	t0 = A;
	g909 = t0 - 177;
	t8 = g909;
	V = (((((((t8 ^ t0) & 128u) == 0u) | (((s8 )t0) < 0))&1))) ? 0 : 1;
	g518 = g909;
	A = g518;
	Z = g518 == 0;
	N = g518 >> 7;
	t9 = t8 & 256u;
	t1 = (t9 >> 8u) ^ 1;
	C = t1;
	if (t9 == 0u) {
		t10 = g909 & 255;
		t11 = t10 - 3;
		t12 = t11;
		t2 = (t12 >> 8) & 1;
		t3 = t2 ^ 1;
		C = t3;
		Z = ((t12 & 255u) == 0u);
		N = t11 >> 7;
		if (t2 == 0) {
			g520 = t3;
			goto lADD7;
		} else {
			t4 = RAM[77];
			t5 = (((((((((t10 << 1) | ((((((((((((((t10 - 1) >> 8u))))) & 1))) ^ 1)))))))))) ^ 1))) ^ t4;
			A = t5;
			t13 = t5 - t4;
			t14 = t13;
			t6 = (t14 >> 8) & 1;
			C = (t6 ^ 1);
			Z = ((t14 & 255u) == 0u);
			N = t13 >> 7;
			if (t6 == 0) {
				RAM[77] = t5;
				t7 = S;
				RAM[t7 + 256u] = -83;
				RAM[(t7 - 1) + 256u] = -45;
				S = (t7 - 2);
				PC = 115;
				goto not_found;
			} else {
				goto lAF08;
			}
		}
	} else {
		g520 = t1;
		goto lADD7;
	}
}

bb16383:
{
	g539 = 0;
	goto bb16384;
}

bb16442:
{
	g364 = 0;
	goto bb16443;
}

bb16493:
{
	g123 = 0;
	goto bb16494;
}

bb16572:
{
	g746 = 0;
	goto bb16573;
}

lAE11:
{
	RAM[122] = (g143 - 1);
	Y = 27;
	Z = 0;
	N = 0;
	RAM[77] = g782;
	g863 = 41115u;
	goto lADF0;
}

lAE5D:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = g157;
	t1 = g549;
	t2 = t1 - 100;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		goto lAE64;
	} else {
		RAM[t0 + 256u] = -82;
		RAM[(t0 - 1) + 256u] = 99;
		S = (t0 - 2);
		goto lAD8D;
	}
}

lAE5B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g528;
	t1 = g245;
	t2 = g7;
	if (t0 == 0) {
		g157 = t1;
		g549 = t2;
		goto lAE5D;
	} else {
		g271 = t1;
		goto lAE80;
	}
}

lADFD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	t3 = t2 == 0;
	t4 = (t2 >> 7);
	t5 = RAM[75];
	Y = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	if (((s8 )t5) < 0) {
		X = t2;
		Z = t3;
		N = t4;
		if (t2 == 0) {
			g528 = t3;
			g245 = t1;
			g7 = t2;
			goto lAE5B;
		} else {
			goto lAE66;
		}
	} else {
		t6 = RAM[(t5 + 41088u)];
		t8 = t2 - t6;
		t9 = t8;
		t7 = (t9 >> 8) & 1;
		C = (t7 ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if (t7 != 0) {
			goto lADF9;
		} else {
			goto lAE66;
		}
	}
}

lAE58:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	Y = -1;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	t3 = t2 == 0;
	Z = t3;
	N = t2 >> 7;
	g528 = t3;
	g245 = t1;
	g7 = t2;
	goto lAE5B;
}

lB1B8:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -79;
	RAM[(t0 - 1) + 256u] = -70;
	S = (t0 - 2);
	goto lAD8D;
}

lB7A1:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -93;
	S = (t0 - 2);
	goto lB1B8;
}

lB6EC:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -74;
	RAM[(t0 - 1) + 256u] = -18;
	S = (t0 - 2);
	goto lB7A1;
}

lB3C3:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -59;
	S = (t0 - 2);
	goto lAD8D;
}

lB3ED:
{
	u8 t0;
	u8 t1;
	t0 = A;
	RAM[78] = t0;
	t1 = Y;
	RAM[79] = t1;
	goto lAD8D;
}

lB400:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -76;
	RAM[(t0 - 1) + 256u] = 2;
	S = (t0 - 2);
	goto lAD8D;
}

lB465:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -76;
	RAM[(t0 - 1) + 256u] = 103;
	S = (t0 - 2);
	goto lAD8D;
}

lAFBA:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -81;
	RAM[(t0 - 1) + 256u] = -68;
	S = (t0 - 2);
	C = 1;
	goto lAD90;
}

lB016:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = 24;
	S = (t0 - 2);
	goto lAD90;
}

lB646:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -74;
	RAM[(t0 - 1) + 256u] = 72;
	S = (t0 - 2);
	C = 1;
	goto lAD90;
}

lB6A3:
{
	u8 t0;
	t0 = g424;
	RAM[(t0 - 1) + 256u] = -74;
	RAM[(t0 - 2) + 256u] = -91;
	S = (t0 - 3);
	C = 1;
	goto lAD90;
}

lB782:
{
	u8 t0;
	u8 t1;
	t0 = g170;
	RAM[t0 + 256u] = -73;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -124;
	g424 = t1;
	goto lB6A3;
}

lB77C:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 126;
	t1 = t0 - 2;
	S = t1;
	g170 = t1;
	goto lB782;
}

lB78B:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -115;
	t1 = t0 - 2;
	S = t1;
	g170 = t1;
	goto lB782;
}

lB7AD:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -81;
	t1 = t0 - 2;
	S = t1;
	g170 = t1;
	goto lB782;
}

lE25A:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 92;
	g424 = t1;
	goto lB6A3;
}

lAF08:
{
	X = 11;
	Z = 0;
	N = 0;
	goto lA437;
}

lA7EF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	u16 t16;
	u16 t17;
	u16 t18;
	t0 = A;
	t1 = C;
	t10 = (t0 - 129) + (((s16 )(s8 )t1));
	t11 = t10;
	V = (((((((t11 ^ t0) & 128u) == 0u) | (((s8 )t0) < 0))&1))) ? 0 : 1;
	t2 = t10;
	A = t2;
	Z = t2 == 0;
	t3 = (t2 >> 7);
	N = t3;
	t12 = t11 & 256u;
	C = ((t12 >> 8u) ^ 1);
	if (t12 == 0u) {
		t13 = t10 & 255;
		t14 = t13 - 35;
		t15 = t14;
		t4 = (t15 >> 8) & 1;
		C = (t4 ^ 1);
		Z = ((t15 & 255u) == 0u);
		N = t14 >> 7;
		if (t4 == 0) {
			t17 = t13 - 75;
			t18 = t17;
			C = (((t18 >> 8) & 1) ^ 1);
			Z = ((t18 & 255u) == 0u);
			N = t17 >> 7;
			if ((t18 & 255u) == 0u) {
				t9 = S;
				RAM[t9 + 256u] = -88;
				RAM[(t9 - 1) + 256u] = 20;
				S = (t9 - 2);
				PC = 115;
				goto not_found;
			} else {
				goto lAF08;
			}
		} else {
			C = t3;
			t5 = (t13 << 1);
			Y = t5;
			t16 = t5;
			t6 = RAM[(t16 + 40973u)];
			t7 = S;
			RAM[t7 + 256u] = t6;
			t8 = RAM[(t16 + 40972u)];
			A = t8;
			Z = t8 == 0;
			N = t8 >> 7;
			RAM[(t7 - 1) + 256u] = t8;
			S = (t7 - 2);
			PC = 115;
			goto not_found;
		}
	} else {
		goto lA9A5;
	}
}

lA7ED:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA7EF;
	} else {
		goto lA82B;
	}
}

lA7E7:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -23;
	S = (t0 - 2);
	goto lA7ED;
}

lA943:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lA8A0;
	} else {
		goto lA7ED;
	}
}

lA957:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[101];
	t1 = t0 - 1;
	RAM[101] = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	t2 = S;
	if (t0 == 1) {
		t3 = t2 + 1;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		goto lA7EF;
	} else {
		RAM[t2 + 256u] = -87;
		RAM[(t2 - 1) + 256u] = 97;
		S = (t2 - 2);
		PC = 115;
		goto not_found;
	}
}

lA94E:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = S;
	t1 = A;
	RAM[t0 + 256u] = t1;
	S = (t0 - 1);
	t2 = t1 - 141;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		goto lA957;
	} else {
		g586 = t1;
		goto lA953;
	}
}

lA953:
{
	u8 t0;
	u16 t1;
	u16 t2;
	t0 = g586;
	t1 = t0 - 137;
	t2 = t1;
	C = (((t2 >> 8) & 1) ^ 1);
	Z = ((t2 & 255u) == 0u);
	N = t1 >> 7;
	if ((t2 & 255u) == 0u) {
		goto lA957;
	} else {
		goto lAF08;
	}
}

lA971:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	t0 = C;
	if (t0 == 0) {
		t1 = A;
		g993 = (t1 - 48) + (((s16 )(s8 )t0));
		V = (((((((g993 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		RAM[7] = g993;
		g373 = RAM[21];
		A = g373;
		RAM[34] = g373;
		g959 = g373;
		t5 = g959 - 25;
		t6 = t5;
		t2 = (t6 >> 8) & 1;
		C = (t2 ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if (t2 == 0) {
			g586 = g373;
			goto lA953;
		} else {
			t3 = RAM[20];
			t7 = t3;
			t8 = t7 << 2;
			t4 = (t8 & 508);
			A = t4;
			g985 = ((((((((((g959 << 1) | (t3 >> 7)))) << 1))) & 510))) | ((((t7 >> 6) & 1)));
			t9 = (g985 >> 8);
			C = t9;
			Z = ((g985 & 255u) == 0u);
			g349 = g985;
			g201 = (g349 >> 7);
			N = g201;
			RAM[34] = g349;
			g802 = (((t7 + (t8 & 252)))) + t9;
			if (((t3 ^ t4) & 128u) == 0u) {
				if (((t4 ^ g802) & 128u) == 0u) {
					goto bb10945;
				} else {
					g215 = 1;
					goto bb10946;
				}
			} else {
				goto bb10945;
			}
		}
	} else {
		goto lA96A;
	}
}

lA96B:
{
	X = 0;
	Z = 1;
	N = 0;
	RAM[20] = 0;
	RAM[21] = 0;
	goto lA971;
}

lA48D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = A;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lA480;
	} else {
		X = -1;
		Z = 0;
		N = 1;
		RAM[58] = -1;
		t1 = C;
		t2 = S;
		RAM[t2 + 256u] = -92;
		t3 = t2 - 1;
		S = t3;
		p1 = &RAM[(t3 + 256u)];
		if (t1 == 0) {
			*p1 = -98;
			S = (t2 - 2);
			goto lA96B;
		} else {
			*p1 = -104;
			g341 = t3;
			goto lA579;
		}
	}
}

lA6A4:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -90;
	S = (t0 - 2);
	goto lA96B;
}

lA69C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = C;
	if (t0 == 0) {
		goto lA6A4;
	} else {
		t1 = Z;
		if (t1 == 0) {
			t2 = A;
			t3 = t2 - 171;
			t4 = t3;
			C = (((t4 >> 8) & 1) ^ 1);
			Z = ((t4 & 255u) == 0u);
			N = t3 >> 7;
			if ((t4 & 255u) == 0u) {
				goto lA6A4;
			} else {
				goto lA68D;
			}
		} else {
			goto lA6A4;
		}
	}
}

lA6B6:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -72;
	S = (t0 - 2);
	goto lA96B;
}

lA8A0:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = -94;
	S = (t0 - 2);
	goto lA96B;
}

lA89A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = -100;
	S = (t0 - 2);
	goto lA8A0;
}

lA962:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = 100;
	S = (t0 - 2);
	goto lA96B;
}

lA965:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = A;
	t4 = t0 - 44;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		goto lA957;
	} else {
		t1 = S;
		t2 = t1 + 1;
		S = t2;
		t3 = RAM[(t2 + 256u)];
		A = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lA96A;
	}
}

lAB02:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	t0 = A;
	t7 = t0 - 41;
	t8 = t7;
	C = (((t8 >> 8) & 1) ^ 1);
	Z = ((t8 & 255u) == 0u);
	N = t7 >> 7;
	if ((t8 & 255u) == 0u) {
		t1 = S;
		t2 = t1 + 1;
		S = t2;
		t3 = RAM[(t2 + 256u)];
		N = t3 >> 7;
		V = ((t3 >> 6) & 1);
		B = ((t3 >> 4) & 1);
		D = ((t3 >> 3) & 1);
		I = ((t3 >> 2) & 1);
		Z = ((t3 >> 1) & 1);
		t4 = t3 & 1;
		C = t4;
		if (t4 == 0) {
			goto lAB0F;
		} else {
			t5 = X;
			A = t5;
			Z = t5 == 0;
			N = t5 >> 7;
			t6 = RAM[9];
			g887 = ((((t5 - 1) - t6))) + t4;
			g989 = g887;
			if (((g989 ^ t5) & 128u) == 0u) {
				goto bb13174;
			} else {
				if (((t6 ^ t5) & 128u) == 0u) {
					goto bb13174;
				} else {
					g558 = 1;
					goto bb13175;
				}
			}
		}
	} else {
		goto lAF08;
	}
}

lAEFF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = g288;
	Y = 0;
	t1 = RAM[122];
	t2 = RAM[123];
	t3 = RAM[(((t2 << 8u) | t1))];
	t4 = t0 - t3;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		PC = 115;
		goto not_found;
	} else {
		goto lAF08;
	}
}

bb7990:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g674;
	V = t0;
	C = (g946 >> 8) & 1;
	RAM[g538 + 256u] = g946;
	t1 = RAM[58];
	RAM[(g362 - 2) + 256u] = t1;
	t2 = RAM[57];
	RAM[(g362 - 3) + 256u] = t2;
	A = -92;
	Z = 0;
	N = 1;
	RAM[(g362 - 4) + 256u] = -89;
	RAM[(g362 - 5) + 256u] = 113;
	S = (g362 - 6);
	g288 = -92;
	goto lAEFF;
}

bb7926:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g253;
	V = t0;
	t1 = (g845 >> 8) & 1;
	C = t1;
	g362 = S;
	RAM[g362 + 256u] = g845;
	g538 = g362 - 1;
	S = g538;
	t2 = RAM[123];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g946 = t1 + t2;
	if (((s8 )t2) < 0) {
		goto bb7989;
	} else {
		if (((t2 ^ g946) & 128u) == 0u) {
			goto bb7989;
		} else {
			g674 = 1;
			goto bb7990;
		}
	}
}

lA75D:
{
	u8 t0;
	u8 t1;
	C = 0;
	t0 = Y;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[122];
	g845 = t1 + t0;
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g845) & 128u) == 0u) {
			goto bb7925;
		} else {
			g253 = 1;
			goto bb7926;
		}
	} else {
		goto bb7925;
	}
}

bb7925:
{
	g253 = 0;
	goto bb7926;
}

bb7989:
{
	g674 = 0;
	goto bb7990;
}

lA815:
{
	u8 t0;
	A = -92;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = 25;
	S = (t0 - 2);
	g288 = -92;
	goto lAEFF;
}

lA92E:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = A;
	t2 = t0 - 137;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		goto lA937;
	} else {
		A = -89;
		Z = 0;
		N = 1;
		t1 = S;
		RAM[t1 + 256u] = -87;
		RAM[(t1 - 1) + 256u] = 54;
		S = (t1 - 2);
		g288 = -89;
		goto lAEFF;
	}
}

lA9A8:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = A;
	RAM[73] = t0;
	t1 = Y;
	RAM[74] = t1;
	A = -78;
	Z = 0;
	N = 1;
	t2 = S;
	RAM[t2 + 256u] = -87;
	RAM[(t2 - 1) + 256u] = -80;
	S = (t2 - 2);
	g288 = -78;
	goto lAEFF;
}

lAA89:
{
	u8 t0;
	u8 t1;
	t0 = Z;
	if (t0 == 0) {
		A = 44;
		Z = 0;
		N = 0;
		t1 = S;
		RAM[t1 + 256u] = -86;
		RAM[(t1 - 1) + 256u] = -113;
		S = (t1 - 2);
		g288 = 44;
		goto lAEFF;
	} else {
		goto lAA90;
	}
}

lAB88:
{
	u8 t0;
	A = 44;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -116;
	S = (t0 - 2);
	g288 = 44;
	goto lAEFF;
}

lABA8:
{
	u8 t0;
	A = 44;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -84;
	S = (t0 - 2);
	g288 = 44;
	goto lAEFF;
}

lABC6:
{
	u8 t0;
	A = 59;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -54;
	S = (t0 - 2);
	g288 = 59;
	goto lAEFF;
}

lAEFC:
{
	u8 t0;
	u8 t1;
	t0 = g248;
	t1 = RAM[11433];
	Z = t1 == 0;
	N = t1 >> 7;
	V = ((t1 >> 6) & 1);
	g288 = t0;
	goto lAEFF;
}

lAEF1:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = -13;
	S = (t0 - 2);
	A = 40;
	Z = 0;
	N = 0;
	g248 = 40;
	goto lAEFC;
}

lAFAD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = X;
	t4 = t0 - 143;
	t5 = t4;
	t1 = (t5 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -81;
	t3 = t2 - 1;
	S = t3;
	p8 = &RAM[(t3 + 256u)];
	if (t1 == 0) {
		*p8 = -77;
		S = (t2 - 2);
		A = 40;
		Z = 0;
		N = 0;
		g248 = 40;
		goto lAEFC;
	} else {
		*p8 = -45;
		S = (t2 - 2);
		goto lAEF1;
	}
}

lB3F7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[79];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[78];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[(t1 - 1) + 256u] = t2;
	RAM[(t1 - 2) + 256u] = -77;
	RAM[(t1 - 3) + 256u] = -1;
	S = (t1 - 4);
	goto lAEF1;
}

lAEF7:
{
	u8 t0;
	A = 41;
	t0 = RAM[10409];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g248 = 41;
	goto lAEFC;
}

lB205:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = A;
	t3 = t0 - 44;
	t4 = t3;
	C = (((t4 >> 8) & 1) ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		goto lB1DB;
	} else {
		t1 = Y;
		RAM[11] = t1;
		t2 = S;
		RAM[t2 + 256u] = -78;
		RAM[(t2 - 1) + 256u] = 13;
		S = (t2 - 2);
		goto lAEF7;
	}
}

lB3C6:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -56;
	S = (t0 - 2);
	goto lAEF7;
}

lB761:
{
	u8 t0;
	t0 = g785;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 99;
	S = (t0 - 2);
	goto lAEF7;
}

lB700:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 2;
	t1 = t0 - 2;
	S = t1;
	g785 = t1;
	goto lB761;
}

lB72C:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 46;
	t1 = t0 - 2;
	S = t1;
	g785 = t1;
	goto lB761;
}

lB748:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 74;
	t1 = t0 - 2;
	S = t1;
	g785 = t1;
	goto lB761;
}

lB73E:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = A;
	t2 = t0 - 41;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		goto lB748;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -73;
		RAM[(t1 - 1) + 256u] = 68;
		S = (t1 - 2);
		A = 44;
		Z = 0;
		N = 0;
		g288 = 44;
		goto lAEFF;
	}
}

lB3B9:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -69;
	S = (t0 - 2);
	A = 40;
	Z = 0;
	N = 0;
	g248 = 40;
	goto lAEFC;
}

lAFB7:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -81;
	RAM[(t0 - 1) + 256u] = -71;
	S = (t0 - 2);
	A = 44;
	Z = 0;
	N = 0;
	g288 = 44;
	goto lAEFF;
}

lB088:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = Z;
	t1 = S;
	if (t0 == 0) {
		RAM[t1 + 256u] = -80;
		RAM[(t1 - 1) + 256u] = 128u;
		S = (t1 - 2);
		A = 44;
		Z = 0;
		N = 0;
		g288 = 44;
		goto lAEFF;
	} else {
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	}
}

lB3C9:
{
	u8 t0;
	A = -78;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -51;
	S = (t0 - 2);
	g288 = -78;
	goto lAEFF;
}

lB3E1:
{
	u8 t0;
	t0 = g252;
	A = -91;
	Z = 0;
	N = 1;
	RAM[(t0 - 1) + 256u] = -77;
	RAM[(t0 - 2) + 256u] = -27;
	S = (t0 - 3);
	g288 = -91;
	goto lAEFF;
}

lB3B3:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -77;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -75;
	g252 = t1;
	goto lB3E1;
}

lB7F1:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -13;
	S = (t0 - 2);
	A = 44;
	Z = 0;
	N = 0;
	g288 = 44;
	goto lAEFF;
}

lB837:
{
	u8 t0;
	u8 t1;
	t0 = Z;
	if (t0 == 0) {
		t1 = S;
		RAM[t1 + 256u] = -72;
		RAM[(t1 - 1) + 256u] = 59;
		S = (t1 - 2);
		goto lB7F1;
	} else {
		goto lB83C;
	}
}

lE20E:
{
	u8 t0;
	t0 = g218;
	RAM[(t0 - 1) + 256u] = -30;
	RAM[(t0 - 2) + 256u] = 16;
	S = (t0 - 3);
	A = 44;
	Z = 0;
	N = 0;
	g288 = 44;
	goto lAEFF;
}

lE200:
{
	u8 t0;
	u8 t1;
	t0 = g152;
	RAM[t0 + 256u] = -30;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 2;
	g218 = t1;
	goto lE20E;
}

lE1E9:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -21;
	t1 = t0 - 2;
	S = t1;
	g152 = t1;
	goto lE200;
}

lE1F6:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -8;
	t1 = t0 - 2;
	S = t1;
	g152 = t1;
	goto lE200;
}

lE231:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 51;
	t1 = t0 - 2;
	S = t1;
	g152 = t1;
	goto lE200;
}

lE245:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 71;
	t1 = t0 - 2;
	S = t1;
	g152 = t1;
	goto lE200;
}

lE254:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 86;
	g218 = t1;
	goto lE20E;
}

lB09A:
{
	u8 t0;
	u8 t1;
	t0 = C;
	if (t0 == 0) {
		goto lAF08;
	} else {
		X = 0;
		Z = 1;
		N = 0;
		RAM[13] = 0;
		RAM[14] = 0;
		t1 = S;
		RAM[t1 + 256u] = -80;
		RAM[(t1 - 1) + 256u] = -89;
		S = (t1 - 2);
		PC = 115;
		goto not_found;
	}
}

lB444:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Z;
	if (t0 == 0) {
		goto lAF08;
	} else {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		RAM[122] = t2;
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		RAM[123] = t4;
		goto lB44F;
	}
}

lE214:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lE20D;
	} else {
		goto lAF08;
	}
}

lB245:
{
	u8 t0;
	X = 18;
	t0 = RAM[3746];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	goto lA437;
}

lB21C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = g292;
	g445 = g109;
	g723 = g624;
	g741 = g29;
	RAM[95] = g741;
	RAM[96] = g723;
	g916 = g723;
	t1 = RAM[50];
	if (((g916 - t1) & 255u) == 0u) {
		t2 = RAM[49];
		t3 = g741 - t2;
		t4 = t3;
		if ((t4 & 255u) == 0u) {
			X = g741;
			A = g723;
			C = (((t4 >> 8) & 1) ^ 1);
			Z = ((t4 & 255u) == 0u);
			N = t3 >> 7;
			V = g445;
			Y = t0;
			*p15 = -78;
			S = g15;
			RAM[g15 + 256u] = 99;
			goto lB194;
		} else {
			goto lB228;
		}
	} else {
		goto lB228;
	}
}

bb22780:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g230;
	t1 = g874;
	t2 = g874 & 256u;
	if (t2 == 0u) {
		g292 = 3;
		g109 = t0;
		g624 = t1;
		g29 = g190;
		goto lB21C;
	} else {
		X = g190;
		A = t1;
		C = (t2 >> 8u);
		Z = t1 == 0;
		N = t1 >> 7;
		V = t0;
		Y = 3;
		goto lB245;
	}
}

bb22678:
{
	u8 t0;
	g190 = g857;
	t0 = RAM[(((g807 + 3u) & 65535u))];
	g874 = (g916 + t0) + ((((g857 >> 8) & 1)));
	if (((g723 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g874) & 128u) == 0u) {
			goto bb22779;
		} else {
			g230 = 1;
			goto bb22780;
		}
	} else {
		goto bb22779;
	}
}

lB237:
{
	u8 t0;
	t0 = RAM[(((g807 + 2u) & 65535u))];
	g857 = g741 + t0;
	if (((g741 ^ t0) & 128u) == 0u) {
		goto bb22678;
	} else {
		goto bb22678;
	}
}

lB228:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	g807 = (g723 << 8u) | g741;
	t0 = RAM[g807];
	t1 = RAM[69];
	if (((t0 - t1) & 255u) == 0u) {
		t2 = RAM[70];
		t3 = RAM[(((g807 + 1u) & 65535u))];
		t4 = (t2 - t3);
		if ((t4 & 255u) == 0u) {
			C = (((t4 >> 8) & 1) ^ 1);
			V = g445;
			Y = 1;
			X = 19;
			A = g655;
			Z = g655 == 0;
			N = 0;
			if (g655 == 0) {
				RAM[g474 + 256u] = -78;
				S = g15;
				RAM[g15 + 256u] = 85;
				goto lB194;
			} else {
				goto lA437;
			}
		} else {
			goto lB237;
		}
	} else {
		goto lB237;
	}
}

bb22779:
{
	g230 = 0;
	goto bb22780;
}

lB20E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	g501 = S;
	g15 = g501 + 1;
	t0 = RAM[(g15 + 256u)];
	RAM[13] = t0;
	g474 = g501 + 2;
	S = g474;
	p15 = &RAM[(g474 + 256u)];
	t1 = *p15;
	RAM[14] = t1;
	g655 = t1 & 127;
	RAM[12] = g655;
	t2 = RAM[47];
	X = t2;
	t3 = RAM[48];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	t4 = V;
	t5 = Y;
	g292 = t5;
	g109 = t4;
	g624 = t3;
	g29 = t2;
	goto lB21C;
}

lB248:
{
	X = 14;
	Z = 0;
	N = 0;
	goto lA437;
}

lA9E3:
{
	u8 t0;
	u16 t1;
	u16 t2;
	t0 = A;
	t1 = t0 - 6;
	t2 = t1;
	C = (((t2 >> 8) & 1) ^ 1);
	Z = ((t2 & 255u) == 0u);
	N = t1 >> 7;
	if ((t2 & 255u) == 0u) {
		Y = 0;
		Z = 1;
		N = 0;
		RAM[97] = 0;
		RAM[102] = 0;
		g493 = 0;
		goto lA9ED;
	} else {
		goto lB248;
	}
}

lAA22:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = C;
	if (t0 == 0) {
		t1 = A;
		t3 = (t1 - 48) + (((s16 )(s8 )t0));
		t4 = t3;
		V = (((((((t4 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		t2 = t3;
		A = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		C = (((t4 >> 8) & 1) ^ 1);
		g216 = t2;
		goto lBD7E;
	} else {
		goto lB248;
	}
}

lB1CC:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lB248;
	} else {
		goto lBC9B;
	}
}

lB1BB:
{
	u8 t0;
	t0 = RAM[102];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (((s8 )t0) < 0) {
		goto lB1CC;
	} else {
		goto lB1BF;
	}
}

lB78E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = Z;
	if (t0 == 0) {
		t1 = RAM[34];
		t2 = RAM[35];
		t3 = RAM[(((t2 << 8u) | t1))];
		A = t3;
		Y = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lB3A2;
	} else {
		goto lB248;
	}
}

lB7A4:
{
	u8 t0;
	u8 t1;
	t0 = RAM[100];
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		t1 = RAM[101];
		X = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		PC = 121;
		goto not_found;
	} else {
		goto lB248;
	}
}

lB7F7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = g251;
	t1 = RAM[102];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (((s8 )t1) < 0) {
		goto lB248;
	} else {
		t2 = RAM[97];
		A = t2;
		t4 = t2 - 145;
		t5 = t4;
		t3 = (t5 >> 8) & 1;
		C = (t3 ^ 1);
		Z = ((t5 & 255u) == 0u);
		N = t4 >> 7;
		if (t3 == 0) {
			goto lB248;
		} else {
			RAM[t0 + 256u] = -72;
			RAM[(t0 - 1) + 256u] = 3;
			S = (t0 - 2);
			goto lBC9B;
		}
	}
}

lB7EE:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -16;
	t1 = t0 - 2;
	S = t1;
	g251 = t1;
	goto lB7F7;
}

lB80D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[21];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[20];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[(t1 - 1) + 256u] = t2;
	RAM[(t1 - 2) + 256u] = -72;
	RAM[(t1 - 3) + 256u] = 21;
	t3 = t1 - 4;
	S = t3;
	g251 = t3;
	goto lB7F7;
}

lE12D:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = 47;
	t1 = t0 - 2;
	S = t1;
	g251 = t1;
	goto lB7F7;
}

lB9ED:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	t0 = Z;
	if (t0 == 0) {
		t1 = N;
		if (t1 == 0) {
			t2 = RAM[97];
			A = t2;
			Z = t2 == 0;
			N = t2 >> 7;
			t3 = C;
			t5 = (t2 - 128) + (((s16 )(s8 )t3));
			t6 = t5;
			V = (((((((t6 ^ t2) & 128u) == 0u) | (((s8 )t2) > -1))&1))) ? 0 : 1;
			C = (((t6 >> 8) & 1) ^ 1);
			t4 = S;
			RAM[t4 + 256u] = t5;
			RAM[97] = 128u;
			A = -42;
			Y = -71;
			Z = 0;
			N = 1;
			RAM[(t4 - 1) + 256u] = -70;
			RAM[(t4 - 2) + 256u] = 3;
			S = (t4 - 3);
			goto lB867;
		} else {
			goto lB248;
		}
	} else {
		goto lB248;
	}
}

lB3A6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[58];
	t1 = t0 + 1;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		X = 21;
		t2 = RAM[7074];
		Z = t2 == 0;
		N = t2 >> 7;
		V = ((t2 >> 6) & 1);
		goto lA437;
	} else {
		goto lB34B;
	}
}

lAB7B:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = 125;
	S = (t0 - 2);
	goto lB3A6;
}

lABCE:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -48;
	S = (t0 - 2);
	goto lB3A6;
}

lABB2:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -76;
	S = (t0 - 2);
	goto lABCE;
}

lB3B6:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -72;
	S = (t0 - 2);
	goto lB3A6;
}

lB403:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	RAM[78] = t1;
	g246 = t0 + 2;
	S = g246;
	t2 = RAM[(g246 + 256u)];
	RAM[79] = t2;
	t5 = (t2 << 8u) | t1;
	t3 = RAM[(((t5 + 2u) & 65535u))];
	RAM[71] = t3;
	X = t3;
	Y = 3;
	t4 = RAM[(((t5 + 3u) & 65535u))];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	if (t4 == 0) {
		X = 27;
		Z = 0;
		N = 0;
		goto lA437;
	} else {
		RAM[72] = t4;
		Y = 4;
		Z = 0;
		N = 0;
		g282 = 0;
		goto lB418;
	}
}

lB4CA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	t0 = RAM[22];
	X = t0;
	t9 = t0 - 34;
	t10 = t9;
	C = (((t10 >> 8) & 1) ^ 1);
	Z = ((t10 & 255u) == 0u);
	N = t9 >> 7;
	if ((t10 & 255u) == 0u) {
		X = 25;
		Z = 0;
		N = 0;
		goto lA437;
	} else {
		t1 = RAM[97];
		t11 = t0;
		*((&RAM[t11])) = t1;
		t2 = RAM[98];
		RAM[(t11 + 1u) & 255u] = t2;
		t3 = RAM[99];
		A = t3;
		RAM[(t11 + 2u) & 255u] = t3;
		RAM[100] = t0;
		RAM[101] = 0;
		RAM[112] = 0;
		Y = -1;
		RAM[13] = -1;
		RAM[23] = t0;
		t4 = t0 + 3;
		X = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		RAM[22] = t4;
		t5 = S;
		t6 = RAM[(((t5 + 1) + 256u))];
		t7 = t5 + 2;
		S = t7;
		t8 = RAM[(t7 + 256u)];
		t12 = (t6 + 1) + (t8 << 8);
		PC = t12;
		if ((t12 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	}
}

lB674:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -74;
	RAM[(t0 - 1) + 256u] = 118;
	S = (t0 - 2);
	goto lB4CA;
}

lB6F6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	Y = 0;
	t2 = RAM[98];
	t3 = RAM[99];
	RAM[(t3 << 8u) | t2] = t1;
	t4 = t0 + 3;
	S = t4;
	t5 = RAM[(t4 + 256u)];
	A = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	goto lB4CA;
}

lB97E:
{
	X = 15;
	Z = 0;
	N = 0;
	goto lA437;
}

lB938:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	t0 = RAM[97];
	t1 = t0 + 1;
	RAM[97] = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lB97E;
	} else {
		t2 = RAM[98];
		t3 = C;
		t8 = (t3 << 8) | t2;
		RAM[98] = (t8 >> 1);
		t4 = RAM[99];
		t9 = ((((t8 & 1) << 8))) | t4;
		RAM[99] = (t9 >> 1);
		t5 = RAM[100];
		t10 = ((((t9 & 1) << 8))) | t5;
		RAM[100] = (t10 >> 1);
		t6 = RAM[101];
		t11 = ((((t10 & 1) << 8))) | t6;
		RAM[101] = (t11 >> 1);
		t7 = RAM[112];
		t12 = ((((t11 & 1) << 8))) | t7;
		C = (t12 & 1);
		t13 = (t12 >> 1);
		Z = ((t13 & 255u) == 0u);
		N = ((t12 >> 8) & 1);
		RAM[112] = t13;
		goto lB946;
	}
}

bb33881:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g756;
	V = t0;
	t1 = g880;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g880 >> 8) & 1;
	C = t2;
	RAM[98] = t1;
	if (t2 == 0) {
		goto lB946;
	} else {
		goto lB938;
	}
}

bb33814:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g182;
	V = t0;
	t1 = (g942 >> 8) & 1;
	C = t1;
	RAM[99] = g942;
	t2 = RAM[98];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[106];
	g880 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		if (((t2 ^ g880) & 128u) == 0u) {
			goto bb33880;
		} else {
			g756 = 1;
			goto bb33881;
		}
	} else {
		goto bb33880;
	}
}

bb33747:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g449;
	V = t0;
	t1 = (g861 >> 8) & 1;
	C = t1;
	RAM[100] = g861;
	t2 = RAM[99];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[107];
	g942 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		if (((t2 ^ g942) & 128u) == 0u) {
			goto bb33813;
		} else {
			g182 = 1;
			goto bb33814;
		}
	} else {
		goto bb33813;
	}
}

bb33680:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g712;
	V = t0;
	t1 = (g848 >> 8) & 1;
	C = t1;
	RAM[101] = g848;
	t2 = RAM[100];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[108];
	g861 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		if (((t2 ^ g861) & 128u) == 0u) {
			goto bb33746;
		} else {
			g449 = 1;
			goto bb33747;
		}
	} else {
		goto bb33746;
	}
}

bb33613:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g440;
	V = t0;
	t1 = (g799 >> 8) & 1;
	C = t1;
	RAM[112] = g799;
	t2 = RAM[101];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[109];
	g848 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		if (((t2 ^ g848) & 128u) == 0u) {
			goto bb33679;
		} else {
			g712 = 1;
			goto bb33680;
		}
	} else {
		goto bb33679;
	}
}

lB8A3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	t0 = RAM[111];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	if (t1 == 0) {
		t2 = A;
		t3 = RAM[86];
		t4 = C;
		g799 = (t3 + t2) + (((s16 )(s8 )t4));
		if (((t3 ^ t2) & 128u) == 0u) {
			if (((t2 ^ g799) & 128u) == 0u) {
				goto bb33612;
			} else {
				g440 = 1;
				goto bb33613;
			}
		} else {
			goto bb33612;
		}
	} else {
		Y = 97;
		g58 = X;
		t5 = g58 - 105;
		t6 = t5;
		C = (((t6 >> 8) & 1) ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if ((t6 & 255u) == 0u) {
			g828 = 97u;
			goto lB8AF;
		} else {
			Y = 105;
			Z = 0;
			N = 0;
			g828 = 105u;
			goto lB8AF;
		}
	}
}

lB865:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lB8A3;
	} else {
		goto lB867;
	}
}

bb32685:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = g488;
	V = t0;
	t1 = g984;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g801 >> 8) & 1;
	t3 = t2 ^ 1;
	C = t3;
	if (t1 == 0) {
		goto lB8A3;
	} else {
		if (t2 == 0) {
			RAM[97] = g184;
			t4 = RAM[110];
			Y = t4;
			RAM[102] = t4;
			t5 = t1 ^ -1;
			A = t5;
			Z = (t1 == 0xff);
			N = t5 >> 7;
			g850 = t3 + t5;
			if (((s8 )t1) > -1) {
				goto bb32761;
			} else {
				if (((t5 ^ g850) & 128u) == 0u) {
					goto bb32761;
				} else {
					g647 = 1;
					goto bb32762;
				}
			}
		} else {
			Y = 0;
			Z = 1;
			N = 0;
			RAM[112] = 0;
			g477 = t1;
			g413 = g83;
			goto lB897;
		}
	}
}

lB877:
{
	u8 t0;
	g184 = g659;
	g83 = g475;
	Y = g184;
	Z = g184 == 0;
	N = g184 >> 7;
	if (g184 == 0) {
		goto lB848;
	} else {
		C = 1;
		t0 = RAM[97];
		g984 = ((((g184 - 1) - t0))) + 1;
		g801 = g984;
		if (((g801 ^ g184) & 128u) == 0u) {
			goto bb32684;
		} else {
			if (((t0 ^ g184) & 128u) == 0u) {
				goto bb32684;
			} else {
				g488 = 1;
				goto bb32685;
			}
		}
	}
}

lB86F:
{
	u8 t0;
	u8 t1;
	t0 = RAM[112];
	RAM[86] = t0;
	X = 105;
	t1 = RAM[105];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g659 = t1;
	g475 = 105;
	goto lB877;
}

lB853:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[102];
	t1 = t0 ^ -1;
	RAM[102] = t1;
	t2 = RAM[110];
	RAM[111] = (t2 ^ t1);
	t3 = RAM[97];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t3 == 0) {
		goto lBBFC;
	} else {
		goto lB86F;
	}
}

lE01E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = g22;
	t1 = 5 - t0;
	t6 = t1;
	p37 = &RAM[(((t6 + 105u) & 255u))];
	t2 = *p37;
	p38 = &RAM[(((t6 + 97u) & 255u))];
	t3 = *p38;
	*p38 = t2;
	*p37 = t3;
	t4 = t1 - 1;
	if (((s8 )t4) < 0) {
		X = t4;
		Y = t3;
		t5 = RAM[86];
		A = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		RAM[112] = t5;
		RAM[g452 + 256u] = -32;
		RAM[(g773 - 2) + 256u] = 47;
		S = (g773 - 3);
		goto lB853;
	} else {
		g22 = (t0 + 1);
		goto lE01E;
	}
}

bb43725:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = g242;
	V = t0;
	t1 = g854;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (g854 >> 8) & 1;
	if (t1 == 0) {
		goto lE00B;
	} else {
		C = 1;
		t3 = (g854 & 255) - 1;
		t4 = t3;
		V = (((((((t4 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		t2 = t3;
		A = t2;
		C = (((t4 >> 8) & 1) ^ 1);
		g773 = S;
		RAM[g773 + 256u] = t2;
		g452 = g773 - 1;
		S = g452;
		X = 5;
		Z = 0;
		N = 0;
		g22 = 0;
		goto lE01E;
	}
}

lE011:
{
	u8 t0;
	t0 = RAM[7];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 0;
	g854 = t0 + 129;
	if (((s8 )t0) > -1) {
		goto bb43724;
	} else {
		if (((t0 ^ g854) & 128u) == 0u) {
			goto bb43724;
		} else {
			g242 = 1;
			goto bb43725;
		}
	}
}

bb43724:
{
	g242 = 0;
	goto bb43725;
}

lE27D:
{
	u8 t0;
	A = 0;
	Z = 1;
	N = 0;
	RAM[111] = 0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -125;
	S = (t0 - 2);
	goto lB853;
}

lB86A:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lB86F;
	} else {
		goto lBBFC;
	}
}

lBD86:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[110];
	t1 = RAM[102];
	t2 = t0 ^ t1;
	A = t2;
	RAM[111] = t2;
	t3 = RAM[97];
	X = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t3 == 0) {
		goto lBBFC;
	} else {
		goto lB86F;
	}
}

lBAED:
{
	u8 t0;
	u8 t1;
	t0 = g554;
	X = 0;
	Z = 1;
	N = 0;
	RAM[111] = 0;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = -13;
	S = (t1 - 2);
	g659 = t0;
	g475 = 0;
	goto lB877;
}

lA9FF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = A;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lAA07;
	} else {
		t1 = t0 + 1;
		X = t1;
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		t2 = S;
		RAM[t2 + 256u] = -86;
		RAM[(t2 - 1) + 256u] = 6;
		S = (t2 - 2);
		g554 = t1;
		goto lBAED;
	}
}

bb36749:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g96;
	V = t0;
	t1 = g806;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = g806 & 256u;
	C = (t2 >> 8u);
	if (t2 == 0u) {
		g554 = t1;
		goto lBAED;
	} else {
		goto lB97E;
	}
}

lBAE5:
{
	u8 t0;
	t0 = A;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lBAF8;
	} else {
		C = 0;
		g806 = t0 + 2;
		if (((s8 )t0) < 0) {
			goto bb36748;
		} else {
			if (((t0 ^ g806) & 128u) == 0u) {
				goto bb36748;
			} else {
				g96 = 1;
				goto bb36749;
			}
		}
	}
}

bb36748:
{
	g96 = 0;
	goto bb36749;
}

bb32684:
{
	g488 = 0;
	goto bb32685;
}

bb33612:
{
	g440 = 0;
	goto bb33613;
}

bb33679:
{
	g712 = 0;
	goto bb33680;
}

bb33746:
{
	g449 = 0;
	goto bb33747;
}

bb33813:
{
	g182 = 0;
	goto bb33814;
}

bb33880:
{
	g756 = 0;
	goto bb33881;
}

bb34178:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g126;
	V = t0;
	t1 = g963;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g963 >> 8) & 1;
	C = t2;
	RAM[97] = t1;
	if (t2 == 0) {
		goto lB946;
	} else {
		goto lB938;
	}
}

bb34118:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g730;
	V = t0;
	t1 = g804;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t4 = g925 & 256u;
	t2 = (t4 >> 8u) ^ 1;
	C = t2;
	if (t4 == 0u) {
		goto lB8F7;
	} else {
		t3 = t1 ^ -1;
		A = t3;
		Z = (t1 == 0xff);
		N = t3 >> 7;
		g963 = (t3 + 1) + t2;
		if (((s8 )t1) > -1) {
			goto bb34177;
		} else {
			if (((t3 ^ g963) & 128u) == 0u) {
				goto bb34177;
			} else {
				g126 = 1;
				goto bb34178;
			}
		}
	}
}

bb34087:
{
	u8 t0;
	u8 t1;
	t0 = g636;
	C = 1;
	t1 = RAM[97];
	g804 = ((((t0 - 1) - t1))) + 1;
	g925 = g804;
	if (((g925 ^ t0) & 128u) == 0u) {
		goto bb34117;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb34117;
		} else {
			g730 = 1;
			goto bb34118;
		}
	}
}

lB8DB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	g582 = g589;
	g65 = g122;
	g412 = g82;
	g443 = g398;
	t0 = g583;
	t1 = g304;
	t2 = g171;
	t3 = g21;
	if (t3 == 0) {
		g865 = (t1 + 8) + (((s16 )(s8 )t0));
		if (((s8 )t1) < 0) {
			goto bb33499;
		} else {
			if (((t1 ^ g865) & 128u) == 0u) {
				goto bb33499;
			} else {
				g402 = 1;
				goto bb33500;
			}
		}
	} else {
		t4 = (t3 >> 7);
		RAM[98] = t3;
		X = t3;
		Z = t3 == 0;
		N = t4;
		V = t2;
		A = t1;
		C = t0;
		RAM[99] = g443;
		RAM[100] = g412;
		RAM[101] = g65;
		RAM[112] = g582;
		if (t4 == 0) {
			g54 = t3;
			g447 = g443;
			g514 = g412;
			g68 = g65;
			g360 = g582;
			g372 = t0;
			g569 = t1;
			goto lB91D;
		} else {
			g636 = t1;
			goto bb34087;
		}
	}
}

bb33500:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = g402;
	t1 = g865;
	t3 = (g865 & 255) - 32;
	t4 = t3;
	t2 = ((t4 >> 8) & 1) ^ 1;
	if ((t4 & 255u) == 0u) {
		RAM[98] = g443;
		X = g582;
		Z = ((t4 & 255u) == 0u);
		N = t3 >> 7;
		V = t0;
		A = t1;
		C = t2;
		RAM[99] = g412;
		RAM[100] = g65;
		RAM[101] = g582;
		RAM[112] = 0;
		goto lB8F7;
	} else {
		g589 = 0;
		g122 = g582;
		g82 = g65;
		g398 = g412;
		g583 = t2;
		g304 = t1;
		g171 = t0;
		g21 = g443;
		goto lB8DB;
	}
}

bb33499:
{
	g402 = 0;
	goto bb33500;
}

lB8D7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	Y = 0;
	A = 0;
	Z = 1;
	N = 0;
	C = 0;
	t0 = RAM[98];
	t1 = V;
	t2 = RAM[99];
	t3 = RAM[100];
	t4 = RAM[101];
	t5 = RAM[112];
	g589 = t5;
	g122 = t4;
	g82 = t3;
	g398 = t2;
	g583 = 0;
	g304 = 0;
	g171 = t1;
	g21 = t0;
	goto lB8DB;
}

bb33348:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g301;
	V = t0;
	t1 = g980;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g813 >> 8) & 1;
	C = (t2 ^ 1);
	RAM[98] = t1;
	if (t2 == 0) {
		goto lB8D7;
	} else {
		goto bb33373;
	}
}

bb33270:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g507;
	V = t0;
	t1 = ((g940 >> 8) & 1) ^ 1;
	C = t1;
	RAM[99] = g943;
	t2 = RAM[(g992 + 1u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[(((g950 + 1u) & 255u))];
	g980 = ((((t2 - 1) - t3))) + t1;
	g813 = g980;
	if (((g813 ^ t2) & 128u) == 0u) {
		goto bb33347;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb33347;
		} else {
			g301 = 1;
			goto bb33348;
		}
	}
}

bb33192:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g60;
	V = t0;
	t1 = ((g966 >> 8) & 1) ^ 1;
	C = t1;
	RAM[100] = g796;
	t2 = RAM[(g992 + 2u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[(((g950 + 2u) & 255u))];
	g943 = ((((t2 - 1) - t3))) + t1;
	g940 = g943;
	if (((g940 ^ t2) & 128u) == 0u) {
		goto bb33269;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb33269;
		} else {
			g507 = 1;
			goto bb33270;
		}
	}
}

bb33114:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g461;
	V = t0;
	t1 = ((g987 >> 8) & 1) ^ 1;
	C = t1;
	RAM[101] = g935;
	t2 = RAM[(g992 + 3u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[(((g950 + 3u) & 255u))];
	g796 = ((((t2 - 1) - t3))) + t1;
	g966 = g796;
	if (((g966 ^ t2) & 128u) == 0u) {
		goto bb33191;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb33191;
		} else {
			g60 = 1;
			goto bb33192;
		}
	}
}

bb33031:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g540;
	V = t0;
	t1 = (g872 >> 8) & 1;
	C = t1;
	RAM[112] = g872;
	t2 = RAM[(g992 + 4u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g950 = g58;
	t3 = RAM[(((g950 + 4u) & 255u))];
	g935 = ((((t2 - 1) - t3))) + t1;
	g987 = g935;
	if (((g987 ^ t2) & 128u) == 0u) {
		goto bb33113;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb33113;
		} else {
			g461 = 1;
			goto bb33114;
		}
	}
}

lB8AF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g992 = g828;
	C = 1;
	t0 = A;
	t1 = t0 ^ -1;
	A = t1;
	Z = (t0 == 0xff);
	N = t1 >> 7;
	t2 = RAM[86];
	g872 = (t2 + t1) + 1;
	if (((t2 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g872) & 128u) == 0u) {
			goto bb33030;
		} else {
			g540 = 1;
			goto bb33031;
		}
	} else {
		goto bb33030;
	}
}

bb33030:
{
	g540 = 0;
	goto bb33031;
}

bb33113:
{
	g461 = 0;
	goto bb33114;
}

bb33191:
{
	g60 = 0;
	goto bb33192;
}

bb33269:
{
	g507 = 0;
	goto bb33270;
}

bb33347:
{
	g301 = 0;
	goto bb33348;
}

lBB8F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[38];
	RAM[98] = t0;
	t1 = RAM[39];
	RAM[99] = t1;
	t2 = RAM[40];
	RAM[100] = t2;
	t3 = RAM[41];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[101] = t3;
	goto lB8D7;
}

lBB29:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	g480 = g694;
	g332 = g149;
	g575 = g347;
	g700 = g521;
	g384 = g263;
	g274 = g250;
	t0 = RAM[106];
	t1 = RAM[98];
	t8 = t0 - t1;
	if ((t8 & 255u) == 0u) {
		t2 = RAM[107];
		t3 = RAM[99];
		t9 = t2 - t3;
		if ((t9 & 255u) == 0u) {
			t4 = RAM[108];
			t5 = RAM[100];
			t10 = t4 - t5;
			if ((t10 & 255u) == 0u) {
				t6 = RAM[109];
				t7 = RAM[101];
				t11 = t6 - t7;
				g69 = t6;
				g954 = t11;
				g790 = (t11 & 255u) == 0u;
				g814 = t11;
				goto lBB3F_2e_preheader;
			} else {
				g69 = t4;
				g954 = t10;
				g790 = (t10 & 255u) == 0u;
				g814 = t10;
				goto lBB3F_2e_preheader;
			}
		} else {
			g69 = t2;
			g954 = t9;
			g790 = (t9 & 255u) == 0u;
			g814 = t9;
			goto lBB3F_2e_preheader;
		}
	} else {
		g69 = t0;
		g954 = t8;
		g790 = (t8 & 255u) == 0u;
		g814 = t8;
		goto lBB3F_2e_preheader;
	}
}

lBB3F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u16 t14;
	g179 = g173;
	t0 = g716;
	t1 = g434;
	t2 = g740;
	t3 = g376;
	t4 = g293;
	t5 = g202;
	t6 = g698;
	t7 = g194;
	t8 = g772;
	p32 = &RAM[(g421 + 256u)];
	*p32 = (((((((((((((((((t7 << 6) | (t8 << 7)))) | (t6 << 4)))) | (t5 << 3)))) | (t4 << 2)))) | t2))) | (t3 << 1));
	t14 = (t1 << 1) | (((s16 )(s8 )t2));
	t9 = t14;
	if ((t14 >> 8) == 0) {
		g675 = t0;
		g748 = t9;
		goto lBB4C;
	} else {
		t10 = t0 + 1;
		t11 = (t10 >> 7);
		RAM[(t10 + 41u) & 255u] = t9;
		if (t10 == 0) {
			g675 = t10;
			g748 = 64;
			goto lBB4C;
		} else {
			if (t11 == 0) {
				Y = g179;
				X = t10;
				t12 = (((((((((((((((((((((((((((t9 << 1) & 254))) << 1))) & 252))) << 1))) & 248))) << 1))) & 240))) << 2))) & 448));
				A = t12;
				RAM[112] = t12;
				S = g421;
				t13 = RAM[(g421 + 256u)];
				N = t13 >> 7;
				V = ((t13 >> 6) & 1);
				B = ((t13 >> 4) & 1);
				D = ((t13 >> 3) & 1);
				I = ((t13 >> 2) & 1);
				Z = ((t13 >> 1) & 1);
				C = (t13 & 1);
				goto lBB8F;
			} else {
				g675 = t10;
				g748 = 1;
				goto lBB4C;
			}
		}
	}
}

lBB4F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	t0 = g196;
	t1 = g204;
	t2 = g127;
	t3 = RAM[109];
	RAM[109] = (t3 << 1);
	t4 = RAM[108];
	t11 = (t4 << 1) | (t3 >> 7);
	RAM[108] = t11;
	t5 = RAM[107];
	t12 = (t5 << 1) | (t11 >> 8);
	RAM[107] = t12;
	t6 = RAM[106];
	t13 = (t6 << 1) | (t12 >> 8);
	t7 = (t13 >> 8);
	t8 = (t13 & 255u) == 0u;
	t9 = t13;
	t10 = (t9 >> 7);
	RAM[106] = t9;
	if ((((((t7 == 0) ^ 1)&1)) | (t10 == 0))&1) {
		g173 = t0;
		g716 = g297;
		g434 = t1;
		g740 = t7;
		g376 = t8;
		g293 = g602;
		g202 = g451;
		g698 = g607;
		g194 = t2;
		g772 = t10;
		goto lBB3F;
	} else {
		g694 = g297;
		g149 = t1;
		g347 = g602;
		g521 = g451;
		g263 = g607;
		g250 = t2;
		goto lBB29;
	}
}

lBB4C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	g297 = g675;
	g679 = g748;
	t0 = *p32;
	t1 = (t0 >> 6) & 1;
	g607 = (t0 >> 4) & 1;
	g451 = (t0 >> 3) & 1;
	g602 = (t0 >> 2) & 1;
	t2 = t0 & 1;
	if (t2 == 0) {
		g196 = g179;
		g204 = g679;
		g127 = t1;
		goto lBB4F;
	} else {
		t3 = RAM[109];
		t4 = RAM[101];
		g983 = ((((t3 - 1) - t4))) + (((s16 )(s8 )t2));
		g948 = g983;
		if (((g948 ^ t3) & 128u) == 0u) {
			goto bb37496;
		} else {
			goto bb37496;
		}
	}
}

bb37685:
{
	u8 t0;
	t0 = g186;
	RAM[106] = g899;
	g196 = g679;
	g204 = g679;
	g127 = t0;
	goto lBB4F;
}

bb37622:
{
	u8 t0;
	u8 t1;
	RAM[107] = g833;
	t0 = RAM[106];
	t1 = RAM[98];
	g899 = ((((t0 - 1) - t1))) + (((((((g891 >> 8) & 1) ^ 1)))));
	if (((g899 ^ t0) & 128u) == 0u) {
		goto bb37684;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb37684;
		} else {
			g186 = 1;
			goto bb37685;
		}
	}
}

bb37559:
{
	u8 t0;
	u8 t1;
	RAM[108] = g886;
	t0 = RAM[107];
	t1 = RAM[99];
	g833 = ((((t0 - 1) - t1))) + (((((((g991 >> 8) & 1) ^ 1)))));
	g891 = g833;
	if (((g891 ^ t0) & 128u) == 0u) {
		goto bb37622;
	} else {
		goto bb37622;
	}
}

bb37496:
{
	u8 t0;
	u8 t1;
	RAM[109] = g983;
	t0 = RAM[108];
	t1 = RAM[100];
	g886 = ((((t0 - 1) - t1))) + (((((((g948 >> 8) & 1) ^ 1)))));
	g991 = g886;
	if (((g991 ^ t0) & 128u) == 0u) {
		goto bb37559;
	} else {
		goto bb37559;
	}
}

bb37684:
{
	g186 = 0;
	goto bb37685;
}

lBB3F_2e_preheader:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	bool t4;
	u16 t5;
	u16 t6;
	t0 = g69;
	t5 = g954;
	t4 = g790&1;
	t6 = g814;
	t1 = t4;
	t2 = ((t5 >> 8) & 1) ^ 1;
	t3 = (t6 >> 7);
	g173 = t0;
	g716 = g480;
	g434 = g332;
	g740 = t2;
	g376 = t1;
	g293 = g575;
	g202 = g700;
	g698 = g384;
	g194 = g274;
	g772 = t3;
	goto lBB3F;
}

lBB21:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = RAM[97];
	t1 = t0 + 1;
	RAM[97] = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lB97E;
	} else {
		X = -4;
		A = 1;
		Z = 0;
		N = 0;
		t2 = V;
		t3 = B;
		t4 = D;
		t5 = I;
		g421 = S;
		g694 = -4;
		g149 = 1;
		g347 = t5;
		g521 = t4;
		g263 = t3;
		g250 = t2;
		goto lBB29;
	}
}

lBC4F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g340;
	t1 = g124;
	RAM[97] = t1;
	RAM[112] = t0;
	RAM[102] = t0;
	t2 = C;
	if (t2 == 0) {
		goto bb33373;
	} else {
		goto lB8D7;
	}
}

lAF7E:
{
	u8 t0;
	t0 = Y;
	A = t0;
	X = -96;
	Z = 0;
	N = 1;
	g340 = t0;
	g124 = -96;
	goto lBC4F;
}

lBC49:
{
	u8 t0;
	t0 = g718;
	A = 0;
	Z = 1;
	N = 0;
	RAM[101] = 0;
	RAM[100] = 0;
	g340 = 0;
	g124 = t0;
	goto lBC4F;
}

lBC44:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g353;
	p33 = p34;
	t1 = g570;
	t2 = *p33;
	RAM[99] = t2;
	X = t1;
	t3 = C;
	t5 = ((((((((t0 ^ -1))))) << 1))) | (((s16 )(s8 )t3));
	C = (t5 >> 8);
	Z = ((t5 & 255u) == 0u);
	t4 = t5;
	N = t4 >> 7;
	A = t4;
	g718 = t1;
	goto lBC49;
}

lB391:
{
	u8 t0;
	t0 = g130;
	X = 0;
	Z = 1;
	N = 0;
	RAM[13] = 0;
	RAM[98] = t0;
	g353 = t0;
	p34 = &Y;
	g570 = -112;
	goto lBC44;
}

lAED7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[101];
	Y = (t0 ^ -1);
	t1 = RAM[100];
	t2 = t1 ^ -1;
	A = t2;
	Z = (t1 == 0xff);
	N = t2 >> 7;
	g130 = t2;
	goto lB391;
}

lAF2B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u16 t13;
	t0 = A;
	RAM[100] = t0;
	t1 = Y;
	RAM[101] = t1;
	t2 = RAM[69];
	X = t2;
	t3 = RAM[70];
	Y = t3;
	t4 = RAM[13];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	if (t4 == 0) {
		t7 = RAM[14];
		Z = t7 == 0;
		t8 = (t7 >> 7);
		N = t8;
		V = ((t7 >> 6) & 1);
		if (t8 == 0) {
			t11 = S;
			RAM[t11 + 256u] = -81;
			t12 = t11 - 1;
			S = t12;
			RAM[t12 + 256u] = 112;
			g154 = t12;
			goto lAF14;
		} else {
			t13 = (t1 << 8u) | t0;
			t9 = RAM[t13];
			X = t9;
			t10 = RAM[(((t13 + 1u) & 65535u))];
			Y = t10;
			A = t9;
			Z = t9 == 0;
			N = t9 >> 7;
			g130 = t9;
			goto lB391;
		}
	} else {
		A = 0;
		Z = 1;
		N = 0;
		RAM[112] = 0;
		t5 = S;
		RAM[t5 + 256u] = -81;
		t6 = t5 - 1;
		S = t6;
		RAM[t6 + 256u] = 61;
		g154 = t6;
		goto lAF14;
	}
}

lB002:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = RAM[101];
	t1 = RAM[11];
	t2 = RAM[8];
	Y = (((((t0 ^ t1) & t2))) ^ t1);
	t3 = RAM[100];
	t4 = RAM[7];
	t5 = (t3 ^ t1) & t4;
	t6 = t5 ^ t1;
	A = t6;
	Z = (t1 == t5);
	N = t6 >> 7;
	g130 = t6;
	goto lB391;
}

bb25283:
{
	u8 t0;
	u8 t1;
	t0 = g471;
	V = t0;
	t1 = g936;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (((g933 >> 8) & 1) ^ 1);
	g130 = t1;
	goto lB391;
}

bb25209:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g369;
	V = t0;
	t1 = ((g826 >> 8) & 1) ^ 1;
	C = t1;
	Y = g823;
	t2 = RAM[52];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[50];
	g936 = ((((t2 - 1) - t3))) + t1;
	g933 = g936;
	if (((g933 ^ t2) & 128u) == 0u) {
		goto bb25282;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb25282;
		} else {
			g471 = 1;
			goto bb25283;
		}
	}
}

lB387:
{
	u8 t0;
	u8 t1;
	C = 1;
	t0 = RAM[51];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[49];
	g823 = ((((t0 - 1) - t1))) + 1;
	g826 = g823;
	if (((g826 ^ t0) & 128u) == 0u) {
		goto bb25208;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb25208;
		} else {
			g369 = 1;
			goto bb25209;
		}
	}
}

bb25208:
{
	g369 = 0;
	goto bb25209;
}

bb25282:
{
	g471 = 0;
	goto bb25283;
}

lB3A2:
{
	A = 0;
	Z = 1;
	N = 0;
	g130 = 0;
	goto lB391;
}

lB816:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = RAM[20];
	t1 = RAM[21];
	t2 = RAM[(((t1 << 8u) | t0))];
	Y = t2;
	t3 = S;
	t4 = RAM[(((t3 + 1) + 256u))];
	RAM[20] = t4;
	t5 = t3 + 2;
	S = t5;
	t6 = RAM[(t5 + 256u)];
	A = t6;
	Z = t6 == 0;
	N = t6 >> 7;
	RAM[21] = t6;
	goto lB3A2;
}

lBC3C:
{
	u8 t0;
	t0 = A;
	RAM[98] = t0;
	A = 0;
	Z = 1;
	N = 0;
	g353 = t0;
	p34 = &A;
	g570 = -120;
	goto lBC44;
}

lB072:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g476;
	t1 = t0 + 1;
	X = t1;
	t2 = C;
	t5 = (t1 << 1) | (((s16 )(s8 )t2));
	C = (t5 >> 8);
	t3 = RAM[18];
	t4 = t5 & t3;
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	if (t4 == 0) {
		goto lBC3C;
	} else {
		A = -1;
		Z = 0;
		N = 1;
		goto lBC3C;
	}
}

lB061:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g88;
	t1 = g481;
	X = t0;
	Z = t1 == 0;
	t2 = (t0 >> 7);
	N = t2;
	if (t2 == 0) {
		C = 0;
		g476 = t0;
		goto lB072;
	} else {
		g476 = t0;
		goto lB072;
	}
}

lB02A:
{
	u8 t0;
	t0 = A;
	g88 = t0;
	g481 = t0;
	goto lB061;
}

lB05B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u16 t12;
	u16 t13;
	t0 = g382;
	t1 = g128;
	t2 = g578;
	t3 = g354 - t0;
	t4 = t3 - 1;
	if (t3 == 1) {
		Y = t0;
		Z = (t3 == 1);
		N = t4 >> 7;
		X = t4;
		A = t2;
		C = t1;
		g88 = g573;
		g481 = g573;
		goto lB061;
	} else {
		t12 = t0;
		t5 = RAM[(((((g652 << 8u) | g548) + t12) & 65535u))];
		t6 = RAM[98];
		t7 = RAM[99];
		t8 = RAM[(((((t7 << 8u) | t6) + t12) & 65535u))];
		t13 = (t5 - t8);
		t9 = (t13 >> 8) & 1;
		t10 = t9 ^ 1;
		t11 = t0 + 1;
		if ((t13 & 255u) == 0u) {
			g382 = t11;
			g128 = t10;
			g578 = t5;
			goto lB05B;
		} else {
			Y = t0;
			A = t5;
			C = t10;
			X = -1;
			Z = 0;
			N = 1;
			if (t9 == 0) {
				g476 = -1;
				goto lB072;
			} else {
				X = 1;
				Z = 0;
				N = 0;
				g476 = 1;
				goto lB072;
			}
		}
	}
}

lB056:
{
	u8 t0;
	t0 = g71;
	g573 = g565;
	RAM[102] = g573;
	Y = -1;
	g354 = t0 + 1;
	X = g354;
	Z = g354 == 0;
	N = g354 >> 7;
	g382 = 0;
	g128 = g392;
	g578 = g573;
	goto lB05B;
}

bb19786:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g226;
	V = t0;
	t1 = g809;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g957 >> 8) & 1;
	g392 = t2 ^ 1;
	C = g392;
	if (t1 == 0) {
		g71 = g394;
		g565 = t1;
		goto lB056;
	} else {
		A = 1;
		Z = 0;
		N = 0;
		if (t2 == 0) {
			X = g409;
			A = -1;
			Z = 0;
			N = 1;
			g71 = g409;
			g565 = -1;
			goto lB056;
		} else {
			g71 = g394;
			g565 = 1;
			goto lB056;
		}
	}
}

lB044:
{
	g548 = X;
	RAM[108] = g548;
	g652 = Y;
	RAM[109] = g652;
	g394 = A;
	X = g394;
	Z = g394 == 0;
	N = g394 >> 7;
	C = 1;
	g409 = RAM[97];
	g809 = ((((g394 - 1) - g409))) + 1;
	g957 = g809;
	if (((g957 ^ g394) & 128u) == 0u) {
		goto bb19785;
	} else {
		if (((g409 ^ g394) & 128u) == 0u) {
			goto bb19785;
		} else {
			g226 = 1;
			goto bb19786;
		}
	}
}

bb19785:
{
	g226 = 0;
	goto bb19786;
}

lBD82:
{
	u8 t0;
	u8 t1;
	t0 = S;
	p36 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p36;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	*p36 = -67;
	RAM[t0 + 256u] = -123;
	S = (t0 - 1);
	goto lBC3C;
}

lBDCD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g750;
	t1 = g275;
	RAM[98] = t1;
	RAM[99] = t0;
	X = -112;
	Z = 0;
	N = 1;
	C = 1;
	t2 = S;
	RAM[t2 + 256u] = -67;
	RAM[(t2 - 1) + 256u] = -42;
	S = (t2 - 2);
	g718 = -112;
	goto lBC49;
}

lA6E8:
{
	u8 t0;
	RAM[73] = g203;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -20;
	S = (t0 - 2);
	g750 = g51;
	g275 = g74;
	goto lBDCD;
}

lA6D7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	t0 = Y;
	t1 = RAM[95];
	t2 = RAM[96];
	t7 = (t2 << 8u) | t1;
	g51 = RAM[(((t7 + (t0 + 1)) & 65535u))];
	X = g51;
	g203 = t0 + 2;
	Y = g203;
	g74 = RAM[(((t7 + g203) & 65535u))];
	A = g74;
	t3 = RAM[21];
	t8 = g74 - t3;
	t9 = t8;
	t4 = ((t9 >> 8) & 1) ^ 1;
	C = t4;
	Z = ((t9 & 255u) == 0u);
	N = t8 >> 7;
	if ((t9 & 255u) == 0u) {
		t5 = RAM[20];
		t10 = g51 - t5;
		t11 = t10;
		t6 = ((t11 >> 8) & 1) ^ 1;
		C = t6;
		Z = ((t11 & 255u) == 0u);
		N = t10 >> 7;
		if ((t11 & 255u) == 0u) {
			goto lA6E8;
		} else {
			g97 = t6;
			goto lA6E6;
		}
	} else {
		g97 = t4;
		goto lA6E6;
	}
}

lA6E6:
{
	u8 t0;
	t0 = g97;
	if (t0 == 0) {
		goto lA6E8;
	} else {
		goto lE386;
	}
}

lBDC9:
{
	u8 t0;
	u8 t1;
	t0 = RAM[58];
	A = t0;
	t1 = RAM[57];
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g750 = t1;
	g275 = t0;
	goto lBDCD;
}

bb47779:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g701;
	V = t0;
	t1 = g990;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (((g918 >> 8) & 1) ^ 1);
	t2 = S;
	RAM[t2 + 256u] = -28;
	RAM[(t2 - 1) + 256u] = 60;
	S = (t2 - 2);
	g750 = g660;
	g275 = t1;
	goto lBDCD;
}

bb47705:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g315;
	V = t0;
	g660 = g998;
	t1 = ((g844 >> 8) & 1) ^ 1;
	C = t1;
	X = g660;
	t2 = RAM[56];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[44];
	g990 = ((((t2 - 1) - t3))) + t1;
	g918 = g990;
	if (((g918 ^ t2) & 128u) == 0u) {
		goto bb47778;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb47778;
		} else {
			g701 = 1;
			goto bb47779;
		}
	}
}

lE430:
{
	u8 t0;
	u8 t1;
	t0 = RAM[55];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 1;
	t1 = RAM[43];
	g998 = ((((t0 - 1) - t1))) + 1;
	g844 = g998;
	if (((g844 ^ t0) & 128u) == 0u) {
		goto bb47704;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb47704;
		} else {
			g315 = 1;
			goto bb47705;
		}
	}
}

bb47704:
{
	g315 = 0;
	goto bb47705;
}

bb47778:
{
	g701 = 0;
	goto bb47779;
}

lBCD5:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Y;
	RAM[112] = t0;
	t1 = RAM[102];
	RAM[102] = t0;
	t2 = C;
	t3 = ((((((((((((((((t1 ^ 128u))))) << 1))) | (((s16 )(s8 )t2)))))) >> 8))));
	C = t3;
	RAM[97] = -96;
	t4 = RAM[101];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	RAM[7] = t4;
	if (t3 == 0) {
		goto bb33373;
	} else {
		goto lB8D7;
	}
}

lE0E3:
{
	u8 t0;
	u8 t1;
	RAM[102] = 0;
	t0 = RAM[97];
	RAM[112] = t0;
	A = 128u;
	Z = 0;
	N = 1;
	RAM[97] = 128u;
	t1 = S;
	RAM[t1 + 256u] = -32;
	RAM[(t1 - 1) + 256u] = -15;
	S = (t1 - 2);
	goto lB8D7;
}

lE0A1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = X;
	RAM[34] = t0;
	t1 = Y;
	RAM[35] = t1;
	t6 = (t1 << 8u) | t0;
	t2 = RAM[(((t6 + 4u) & 65535u))];
	RAM[98] = t2;
	t3 = RAM[(((t6 + 5u) & 65535u))];
	RAM[100] = t3;
	t4 = RAM[(((t6 + 8u) & 65535u))];
	RAM[99] = t4;
	Y = 9;
	t5 = RAM[(((t6 + 9u) & 65535u))];
	A = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	RAM[101] = t5;
	goto lE0E3;
}

lE0D3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[101];
	t1 = RAM[98];
	RAM[101] = t1;
	RAM[98] = t0;
	t2 = RAM[99];
	X = t2;
	t3 = RAM[100];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[99] = t3;
	RAM[100] = t2;
	goto lE0E3;
}

lE09A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = N;
	if (t0 == 0) {
		t1 = Z;
		if (t1 == 0) {
			A = -117;
			Y = 0;
			Z = 1;
			N = 0;
			t3 = S;
			RAM[t3 + 256u] = -32;
			RAM[(t3 - 1) + 256u] = -60;
			S = (t3 - 2);
			g160 = 0;
			g425 = -117;
			goto lBBA2;
		} else {
			t2 = S;
			RAM[t2 + 256u] = -32;
			RAM[(t2 - 1) + 256u] = -96;
			S = (t2 - 2);
			PC = -13;
			goto not_found;
		}
	} else {
		goto lE0D3;
	}
}

lB91D:
{
	u8 t0;
	u8 t1;
	g770 = g54;
	g325 = g447;
	g622 = g514;
	g322 = g68;
	g638 = g360;
	t0 = g372;
	t1 = g569;
	g973 = (t1 + 1) + (((s16 )(s8 )t0));
	if (((s8 )t1) < 0) {
		goto bb33929;
	} else {
		if (((t1 ^ g973) & 128u) == 0u) {
			goto bb33929;
		} else {
			g779 = 1;
			goto bb33930;
		}
	}
}

bb33930:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	t0 = g779;
	t1 = g973;
	t2 = g638 << 1;
	t10 = (g322 << 1) | (g638 >> 7);
	t3 = t10;
	t11 = (g622 << 1) | (t10 >> 8);
	t4 = t11;
	t12 = (g325 << 1) | (t11 >> 8);
	t5 = t12;
	t13 = (g770 << 1) | (t12 >> 8);
	t6 = (t13 >> 8);
	t7 = (t13 & 255u) == 0u;
	t8 = t13;
	t9 = (t8 >> 7);
	if (t9 == 0) {
		g54 = t8;
		g447 = t5;
		g514 = t4;
		g68 = t3;
		g360 = t2;
		g372 = t6;
		g569 = t1;
		goto lB91D;
	} else {
		A = t1;
		C = t6;
		V = t0;
		Z = t7;
		N = t9;
		RAM[112] = t2;
		RAM[101] = t3;
		RAM[100] = t4;
		RAM[99] = t5;
		RAM[98] = t8;
		g636 = t1;
		goto bb34087;
	}
}

bb33929:
{
	g779 = 0;
	goto bb33930;
}

bb34117:
{
	g730 = 0;
	goto bb34118;
}

bb34177:
{
	g126 = 0;
	goto bb34178;
}

lBC26:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lBC1A;
	} else {
		goto lB938;
	}
}

bb36486:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g407;
	V = t0;
	g552 = g881;
	A = g552;
	Z = g552 == 0;
	t1 = (g552 >> 7);
	N = t1;
	t4 = g881 & 256u;
	t2 = (t4 >> 8u);
	C = t2;
	if (t4 == 0u) {
		if (t1 == 0) {
			g404 = g766;
			goto lBADA;
		} else {
			g137 = t2;
			goto lBAC6;
		}
	} else {
		if (t1 == 0) {
			C = 0;
			t3 = RAM[5136];
			Z = t3 == 0;
			N = t3 >> 7;
			V = ((t3 >> 6) & 1);
			g137 = 0;
			goto lBAC6;
		} else {
			goto lB97E;
		}
	}
}

bb36456:
{
	u8 t0;
	u8 t1;
	g766 = g738;
	t0 = g585;
	C = 0;
	t1 = RAM[97];
	g881 = t1 + t0;
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g881) & 128u) == 0u) {
			goto bb36485;
		} else {
			g407 = 1;
			goto bb36486;
		}
	} else {
		goto bb36485;
	}
}

lBAB7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g279;
	t1 = t0 - 1;
	S = t1;
	t2 = RAM[105];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0) {
		g404 = t1;
		goto lBADA;
	} else {
		g738 = t1;
		g585 = t2;
		goto bb36456;
	}
}

lBA2B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		t1 = S;
		RAM[t1 + 256u] = -70;
		t2 = t1 - 1;
		S = t2;
		RAM[t2 + 256u] = 50;
		g279 = t2;
		goto lBAB7;
	} else {
		goto lBA8B;
	}
}

bb36957:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g651;
	V = t0;
	t1 = g832;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (((g938 >> 8) & 1) ^ 1);
	RAM[97] = t1;
	t2 = S;
	RAM[t2 + 256u] = -69;
	t3 = t2 - 1;
	S = t3;
	RAM[t3 + 256u] = 32;
	g279 = t3;
	goto lBAB7;
}

lBB17:
{
	u8 t0;
	A = 0;
	Z = 1;
	N = 0;
	C = 1;
	t0 = RAM[97];
	g832 = -t0;
	g938 = g832;
	if ((g938 & 128u) == 0u) {
		goto bb36956;
	} else {
		if ((t0 & 128u) == 0u) {
			goto bb36956;
		} else {
			g651 = 1;
			goto bb36957;
		}
	}
}

bb36956:
{
	g651 = 0;
	goto bb36957;
}

lE03A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	RAM[111] = 0;
	t0 = S;
	p39 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p39;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	*p39 = -32;
	RAM[t0 + 256u] = 65;
	t2 = t0 - 1;
	S = t2;
	if (t1 == 0) {
		g404 = t2;
		goto lBADA;
	} else {
		g738 = t2;
		g585 = t1;
		goto bb36456;
	}
}

bb36485:
{
	g407 = 0;
	goto bb36486;
}

lBAF4:
{
	u8 t0;
	u8 t1;
	t0 = RAM[97];
	t1 = t0 + 1;
	RAM[97] = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lB97E;
	} else {
		goto lBAF8;
	}
}

lBD33:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	t0 = C;
	if (t0 == 0) {
		t1 = RAM[94];
		A = t1;
		t6 = t1;
		t7 = t6 - 10;
		t8 = t7;
		t2 = (t8 >> 8) & 1;
		C = (t2 ^ 1);
		Z = ((t8 & 255u) == 0u);
		N = t7 >> 7;
		if (t2 == 0) {
			A = 100;
			t3 = RAM[96];
			Z = t3 == 0;
			t4 = (t3 >> 7);
			N = t4;
			V = ((t3 >> 6) & 1);
			if (t4 == 0) {
				goto lB97E;
			} else {
				RAM[94] = 100;
				goto lBD30;
			}
		} else {
			t9 = t6 << 2;
			t10 = t9 & 508;
			Z = ((t10 & 252u) == 0u);
			t5 = t10;
			N = t5 >> 7;
			A = t5;
			C = 0;
			g978 = t6 + (t9 & 252);
			if (((t1 ^ t5) & 128u) == 0u) {
				if (((t5 ^ g978) & 128u) == 0u) {
					goto bb40952;
				} else {
					g281 = 1;
					goto bb40953;
				}
			} else {
				goto bb40952;
			}
		}
	} else {
		goto lBD35;
	}
}

lBD1A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	t0 = C;
	if (t0 == 0) {
		goto lBD33;
	} else {
		t1 = A;
		t4 = t1;
		t5 = t4 - 171;
		t6 = t5;
		t2 = ((t6 >> 8) & 1) ^ 1;
		C = t2;
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if ((t6 & 255u) == 0u) {
			g777 = t2;
			goto lBD2E;
		} else {
			t7 = t4 - 45;
			t8 = t7;
			t3 = ((t8 >> 8) & 1) ^ 1;
			C = t3;
			Z = ((t8 & 255u) == 0u);
			N = t7 >> 7;
			if ((t8 & 255u) == 0u) {
				g777 = t3;
				goto lBD2E;
			} else {
				t9 = t4 - 170;
				t10 = t9;
				C = (((t10 >> 8) & 1) ^ 1);
				Z = ((t10 & 255u) == 0u);
				N = t9 >> 7;
				if ((t10 & 255u) == 0u) {
					goto lBD30;
				} else {
					t11 = t4 - 43;
					t12 = t11;
					C = (((t12 >> 8) & 1) ^ 1);
					Z = ((t12 & 255u) == 0u);
					N = t11 >> 7;
					if ((t12 & 255u) == 0u) {
						goto lBD30;
					} else {
						goto lBD35;
					}
				}
			}
		}
	}
}

lE00B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 13;
	t1 = t0 - 2;
	S = t1;
	t2 = RAM[102];
	t3 = t2 ^ -1;
	A = t3;
	Z = (t2 == 0xff);
	N = t3 >> 7;
	if (((s8 )t2) > -1) {
		goto lB97E;
	} else {
		g404 = t1;
		goto lBADA;
	}
}

lE005:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = RAM[97];
	A = t0;
	t2 = t0 - 136;
	t3 = t2;
	t1 = (t3 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if (t1 == 0) {
		goto lE00B;
	} else {
		goto lE00E;
	}
}

lBB12:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		t1 = S;
		RAM[t1 + 256u] = -69;
		RAM[(t1 - 1) + 256u] = 22;
		t2 = t1 - 2;
		S = t2;
		g470 = t2;
		goto lBC1B;
	} else {
		X = 20;
		Z = 0;
		N = 0;
		goto lA437;
	}
}

lE0F9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = A;
	t3 = t0 - 240;
	t4 = t3;
	C = (((t4 >> 8) & 1) ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		t1 = Y;
		RAM[56] = t1;
		t2 = X;
		RAM[55] = t2;
		goto lA663;
	} else {
		X = t0;
		Z = t0 == 0;
		N = t0 >> 7;
		if (t0 == 0) {
			X = 30;
			Z = 0;
			N = 0;
			goto lA437;
		} else {
			goto lA437;
		}
	}
}

lE10F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE115:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE11B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE121:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE127:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE162:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE178:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = C;
	if (t0 == 0) {
		t1 = RAM[10];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		if (t1 == 0) {
			t3 = S;
			RAM[t3 + 256u] = -31;
			RAM[(t3 - 1) + 256u] = -105;
			S = (t3 - 2);
			PC = -73;
			goto not_found;
		} else {
			X = 28;
			Z = 0;
			N = 0;
			t2 = S;
			RAM[t2 + 256u] = -31;
			RAM[(t2 - 1) + 256u] = -126;
			S = (t2 - 2);
			PC = -73;
			goto not_found;
		}
	} else {
		goto lE0F9;
	}
}

lE1C4:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = C;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE0F9;
	}
}

lE1CF:
{
	u8 t0;
	t0 = C;
	if (t0 == 0) {
		goto lE194;
	} else {
		goto lE0F9;
	}
}

lA480:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = RAM[770];
	t1 = RAM[771];
	t2 = (t1 << 8) | t0;
	PC = t2;
	if ((t2 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA55F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	t0 = g466;
	t1 = g456;
	t2 = g4;
	t3 = g635;
	t4 = g151;
	t5 = g472;
	Y = 1;
	Z = t5;
	N = t4;
	A = t3;
	V = t2;
	C = t1;
	X = t0;
	t6 = RAM[(((g329 + 1) + 256u))];
	t7 = g329 + 2;
	S = t7;
	t8 = RAM[(t7 + 256u)];
	t9 = (t6 + 1) + (t8 << 8);
	PC = t9;
	if ((t9 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA53C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = g135;
	g103 = g536;
	t1 = g264;
	g668 = g79;
	t2 = g734;
	g893 = (t0 << 8u) | g103;
	t3 = RAM[(((g893 + 1u) & 65535u))];
	t4 = t3 == 0;
	t5 = (t3 >> 7);
	if (t3 == 0) {
		g466 = t1;
		g456 = g668;
		g4 = t2;
		g635 = t3;
		g151 = t5;
		g472 = t4;
		goto lA55F;
	} else {
		g426 = 0;
		goto lA544;
	}
}

bb4856:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g463;
	t1 = g852;
	t2 = (g852 >> 8) & 1;
	t3 = RAM[34];
	RAM[(((g387 << 8u) | t3) + 1u) & 65535u] = t1;
	RAM[34] = g564;
	RAM[35] = t1;
	if (t2 == 0) {
		g135 = t1;
		g536 = g564;
		g264 = g564;
		g79 = t2;
		g734 = t0;
		goto lA53C;
	} else {
		g466 = g564;
		g456 = t2;
		g4 = t0;
		g635 = t1;
		g151 = 0;
		g472 = 0;
		goto lA55F;
	}
}

bb4763:
{
	g564 = g968;
	*((&RAM[g893])) = g564;
	g387 = RAM[35];
	g852 = ((((g968 >> 8) & 1))) + g387;
	if (((s8 )g387) < 0) {
		goto bb4855;
	} else {
		if (((g387 ^ g852) & 128u) == 0u) {
			goto bb4855;
		} else {
			g463 = 1;
			goto bb4856;
		}
	}
}

lA544:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g426;
	t1 = RAM[(((g893 + (t0 + 5)) & 65535u))];
	if (t1 == 0) {
		t2 = t0 + 6;
		g968 = (g103 + t2) + (((s16 )(s8 )g668));
		if (((g103 ^ t2) & 128u) == 0u) {
			goto bb4763;
		} else {
			goto bb4763;
		}
	} else {
		g426 = (t0 + 1);
		goto lA544;
	}
}

bb4855:
{
	g463 = 0;
	goto bb4856;
}

lA533:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	g329 = g576;
	t0 = RAM[43];
	A = t0;
	t1 = RAM[44];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[34] = t0;
	RAM[35] = t1;
	C = 0;
	t2 = V;
	t3 = X;
	g135 = t1;
	g536 = t0;
	g264 = t3;
	g79 = 0;
	g734 = t2;
	goto lA53C;
}

lA4F0:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = -14;
	t1 = t0 - 2;
	S = t1;
	g576 = t1;
	goto lA533;
}

lA52D:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -91;
	RAM[(t0 - 1) + 256u] = 47;
	t1 = t0 - 2;
	S = t1;
	g576 = t1;
	goto lA533;
}

lE1B8:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -70;
	t1 = t0 - 2;
	S = t1;
	g576 = t1;
	goto lA533;
}

lA579:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g341;
	S = (t0 - 1);
	t1 = RAM[772];
	t2 = RAM[773];
	t3 = (t2 << 8) | t1;
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA49F:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -92;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -95;
	g341 = t1;
	goto lA579;
}

lA609:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g606;
	t1 = g117;
	t2 = g735;
	Y = t2;
	X = t0;
	RAM[t2 + 509u] = t1;
	t3 = RAM[123];
	RAM[123] = (t3 - 1);
	A = -1;
	Z = 0;
	N = 1;
	RAM[122] = -1;
	t4 = S;
	t5 = RAM[(((t4 + 1) + 256u))];
	t6 = t4 + 2;
	S = t6;
	t7 = RAM[(t6 + 256u)];
	t8 = (t5 + 1) + (t7 << 8);
	PC = t8;
	if ((t8 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA582:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g615;
	g111 = g752;
	g108 = RAM[(t0 | 512u)];
	if (((s8 )g108) < 0) {
		t2 = (g108 - 255);
		C = (((t2 >> 8) & 1) ^ 1);
		if ((t2 & 255u) == 0u) {
			g344 = t0;
			g56 = g108;
			g523 = g111;
			goto lA5C9;
		} else {
			t1 = t0 + 1;
			if (t1 == 0) {
				g49 = t1;
				goto lA58E;
			} else {
				g615 = t1;
				g752 = g111;
				goto lA582;
			}
		}
	} else {
		g49 = t0;
		goto lA58E;
	}
}

lA5DE:
{
	u8 t0;
	u16 t1;
	u16 t2;
	C = 1;
	t1 = (g867 & 255) - 85;
	t2 = t1;
	V = (((((((t2 ^ g317) & 128u) == 0u) | (((s8 )g317) > -1))&1))) ? 0 : 1;
	t0 = t1;
	C = (((t2 >> 8) & 1) ^ 1);
	if (t0 == 0) {
		RAM[8] = t0;
		g189 = g529;
		g233 = g438;
		goto lA5E5;
	} else {
		g615 = g529;
		g752 = g438;
		goto lA582;
	}
}

lA5C9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = g344;
	t1 = g56;
	t2 = g523;
	g529 = t0 + 1;
	g438 = t2 + 1;
	RAM[g438 + 507u] = t1;
	if (t1 == 0) {
		g606 = g529;
		g117 = t1;
		g735 = g438;
		goto lA609;
	} else {
		C = 1;
		g867 = t1 - 58;
		t3 = g867;
		V = (((((((t3 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		g317 = g867;
		C = (((t3 >> 8) & 1) ^ 1);
		if (g317 == 0) {
			goto lA5DC;
		} else {
			t4 = (((g867 & 255) - 73));
			C = (((t4 >> 8) & 1) ^ 1);
			if ((t4 & 255u) == 0u) {
				goto lA5DC;
			} else {
				goto lA5DE;
			}
		}
	}
}

lA58E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	g139 = g49;
	t4 = g108;
	t5 = (t4 - 32);
	C = (((t5 >> 8) & 1) ^ 1);
	if ((t5 & 255u) == 0u) {
		g344 = g139;
		g56 = g108;
		g523 = g111;
		goto lA5C9;
	} else {
		RAM[8] = g108;
		t6 = (t4 - 34);
		C = (((t6 >> 8) & 1) ^ 1);
		if ((t6 & 255u) == 0u) {
			g603 = g139;
			g147 = g108;
			g517 = g111;
			goto lA5EE;
		} else {
			t0 = RAM[15];
			t1 = t0 & 64;
			V = (t1 >> 6);
			if (t1 == 0) {
				t7 = (t4 - 63);
				C = (((t7 >> 8) & 1) ^ 1);
				if ((t7 & 255u) == 0u) {
					g344 = g139;
					g56 = -103;
					g523 = g111;
					goto lA5C9;
				} else {
					t8 = g108;
					t2 = ((((((t8 + 464) >> 8u))))) & 1;
					C = (t2 ^ 1);
					if (t2 == 0) {
						t3 = ((((((t8 + 452) >> 8u))))) & 1;
						C = (t3 ^ 1);
						if (t3 == 0) {
							goto lA5AC;
						} else {
							g344 = g139;
							g56 = g108;
							g523 = g111;
							goto lA5C9;
						}
					} else {
						goto lA5AC;
					}
				}
			} else {
				g344 = g139;
				g56 = g108;
				g523 = g111;
				goto lA5C9;
			}
		}
	}
}

lA5C7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g2;
	t1 = g666;
	t2 = RAM[113];
	g344 = t0;
	g56 = t1;
	g523 = t2;
	goto lA5C9;
}

bb5431:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g70;
	V = t0;
	t1 = g956;
	C = (((g871 >> 8) & 1) ^ 1);
	if (t1 == 0) {
		g776 = g478;
		g550 = g621;
		g118 = g94;
		goto lA5B6;
	} else {
		t3 = (((g956 & 255) - 128));
		C = (((t3 >> 8) & 1) ^ 1);
		if ((t3 & 255u) == 0u) {
			t2 = t1 | g478;
			g2 = g621;
			g666 = t2;
			goto lA5C7;
		} else {
			g763 = g94;
			goto lA5F5;
		}
	}
}

lA5B8:
{
	u8 t0;
	u8 t1;
	g478 = g504;
	g621 = g490;
	g94 = g553;
	t0 = RAM[(g621 | 512u)];
	C = 1;
	t1 = RAM[(g94 + 41118u)];
	g956 = ((((t0 - 1) - t1))) + 1;
	g871 = g956;
	if (((g871 ^ t0) & 128u) == 0u) {
		goto bb5430;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb5430;
		} else {
			g70 = 1;
			goto bb5431;
		}
	}
}

lA5B6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g776;
	t1 = g550;
	t2 = g118;
	t3 = t2 + 1;
	t4 = t1 + 1;
	g504 = t0;
	g490 = t4;
	g553 = t3;
	goto lA5B8;
}

lA5AC:
{
	u8 t0;
	RAM[113] = g111;
	RAM[11] = 0;
	RAM[122] = g139;
	t0 = g139 - 1;
	g776 = 0;
	g550 = t0;
	g118 = -1;
	goto lA5B6;
}

lA5F9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g268;
	t1 = (t0 + g612) + 1;
	t5 = t1;
	t2 = RAM[(t5 + 41117u)];
	if (((s8 )t2) < 0) {
		t3 = RAM[(t5 + 41118u)];
		if (t3 == 0) {
			t4 = RAM[(g236 | 512u)];
			if (((s8 )t4) < 0) {
				g606 = g236;
				g117 = t4;
				g735 = t1;
				goto lA609;
			} else {
				g2 = g236;
				g666 = t4;
				goto lA5C7;
			}
		} else {
			g504 = g753;
			g490 = g236;
			g553 = t1;
			goto lA5B8;
		}
	} else {
		g268 = (t0 + 1);
		goto lA5F9;
	}
}

lA5F5:
{
	u8 t0;
	g612 = g763;
	g236 = RAM[122];
	t0 = RAM[11];
	g753 = t0 + 1;
	RAM[11] = g753;
	g268 = 0;
	goto lA5F9;
}

lA5EE:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g603;
	t1 = g147;
	t2 = g517;
	t3 = t2 + 1;
	RAM[t3 + 507u] = t1;
	t4 = t0 + 1;
	if (t4 == 0) {
		g763 = t3;
		goto lA5F5;
	} else {
		g189 = t4;
		g233 = t3;
		goto lA5E5;
	}
}

lA5E5:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g189;
	t1 = g233;
	t2 = RAM[(t0 | 512u)];
	if (t2 == 0) {
		g344 = t0;
		g56 = t2;
		g523 = t1;
		goto lA5C9;
	} else {
		t3 = RAM[8];
		t4 = (t2 - t3);
		C = (((t4 >> 8) & 1) ^ 1);
		if ((t4 & 255u) == 0u) {
			g344 = t0;
			g56 = t2;
			g523 = t1;
			goto lA5C9;
		} else {
			g603 = t0;
			g147 = t2;
			g517 = t1;
			goto lA5EE;
		}
	}
}

bb5430:
{
	g70 = 0;
	goto bb5431;
}

lA5DC:
{
	RAM[15] = g317;
	goto lA5DE;
}

lA57C:
{
	u8 t0;
	t0 = RAM[122];
	X = t0;
	Y = 4;
	Z = 0;
	N = 0;
	RAM[15] = 4;
	g615 = t0;
	g752 = 4;
	goto lA582;
}

lA641:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA640:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	bool t4;
	t0 = g8;
	t1 = g726;
	t2 = g80;
	t4 = g793&1;
	t3 = g158;
	Y = t3;
	Z = t4;
	N = t2 >> 7;
	A = t1;
	X = t0;
	C = 0;
	goto lA641;
}

lA617:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u16 t14;
	u16 t15;
	u16 t16;
	u16 t17;
	g547 = g662;
	t0 = g67;
	RAM[95] = t0;
	RAM[96] = g547;
	g875 = (g547 << 8u) | t0;
	t1 = RAM[(((g875 + 1u) & 65535u))];
	if (t1 == 0) {
		g8 = g547;
		g726 = t1;
		g80 = t1;
		g793 = t1 == 0;
		g158 = 1;
		goto lA640;
	} else {
		t2 = RAM[21];
		t3 = RAM[(((g875 + 3u) & 65535u))];
		t14 = t2 - t3;
		t15 = t14;
		t4 = (t15 >> 8) & 1;
		t5 = t4 ^ 1;
		t6 = (t15 & 255u) == 0u;
		t7 = (t14 >> 7);
		if (t4 == 0) {
			if ((t15 & 255u) == 0u) {
				t8 = RAM[20];
				t9 = RAM[(((g875 + 2u) & 65535u))];
				t16 = t8 - t9;
				t17 = t16;
				t10 = (t17 >> 8) & 1;
				t11 = t10 ^ 1;
				t12 = (t17 & 255u) == 0u;
				t13 = (t16 >> 7);
				if (t10 == 0) {
					if ((t17 & 255u) == 0u) {
						g319 = t11;
						g559 = t8;
						g141 = t13;
						g193 = t12;
						g703 = 2;
						goto lA641_2e_loopexit;
					} else {
						g172 = t11;
						goto lA637;
					}
				} else {
					g319 = t11;
					g559 = t8;
					g141 = t13;
					g193 = t12;
					g703 = 2;
					goto lA641_2e_loopexit;
				}
			} else {
				g172 = t5;
				goto lA637;
			}
		} else {
			g319 = t5;
			g559 = t2;
			g141 = t7;
			g193 = t6;
			g703 = 3;
			goto lA641_2e_loopexit;
		}
	}
}

lA637:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g172;
	t1 = RAM[(((g875 + 1u) & 65535u))];
	t2 = RAM[g875];
	if (t0 == 0) {
		g8 = t1;
		g726 = t2;
		g80 = t2;
		g793 = t2 == 0;
		g158 = 0;
		goto lA640;
	} else {
		g662 = t1;
		g67 = t2;
		goto lA617;
	}
}

lA613:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g640;
	S = (t0 - 1);
	t1 = RAM[43];
	A = t1;
	t2 = RAM[44];
	X = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g662 = t2;
	g67 = t1;
	goto lA617;
}

lA4A2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Y;
	RAM[11] = t0;
	t1 = S;
	RAM[t1 + 256u] = -92;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = -90;
	g640 = t2;
	goto lA613;
}

lA6A7:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -90;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -87;
	g640 = t1;
	goto lA613;
}

lA8C0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g219;
	t1 = g665;
	t2 = S;
	RAM[t2 + 256u] = -88;
	RAM[(t2 - 1) + 256u] = -62;
	S = (t2 - 2);
	g662 = t0;
	g67 = t1;
	goto lA617;
}

bb9675:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g690;
	V = t0;
	t1 = g932;
	A = t1;
	t2 = (g932 >> 8) & 1;
	C = t2;
	t3 = RAM[123];
	X = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t2 == 0) {
		g219 = t3;
		g665 = t1;
		goto lA8C0;
	} else {
		t4 = t3 + 1;
		X = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		g219 = t4;
		g665 = t1;
		goto lA8C0;
	}
}

bb9609:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = g572;
	V = t0;
	t1 = g967;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t6 = g952 & 256u;
	C = ((t6 >> 8u) ^ 1);
	if (t6 == 0u) {
		t4 = RAM[43];
		A = t4;
		t5 = RAM[44];
		X = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		g219 = t5;
		g665 = t4;
		goto lA8C0;
	} else {
		t2 = Y;
		A = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		C = 1;
		t3 = RAM[122];
		g932 = (t3 + t2) + 1;
		if (((t3 ^ t2) & 128u) == 0u) {
			if (((t2 ^ g932) & 128u) == 0u) {
				goto bb9674;
			} else {
				g690 = 1;
				goto bb9675;
			}
		} else {
			goto bb9674;
		}
	}
}

bb9547:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g519;
	V = t0;
	t1 = ((g821 >> 8) & 1) ^ 1;
	C = t1;
	t2 = RAM[58];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[21];
	g967 = ((((t2 - 1) - t3))) + t1;
	g952 = g967;
	if (((g952 ^ t2) & 128u) == 0u) {
		goto bb9608;
	} else {
		if (((t3 ^ t2) & 128u) == 0u) {
			goto bb9608;
		} else {
			g572 = 1;
			goto bb9609;
		}
	}
}

lA8A6:
{
	u8 t0;
	u8 t1;
	C = 1;
	t0 = RAM[57];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[20];
	g821 = ((((((t0 - 1) - t1))) + 1));
	if (((g821 ^ t0) & 128u) == 0u) {
		goto bb9546;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb9546;
		} else {
			g519 = 1;
			goto bb9547;
		}
	}
}

bb9546:
{
	g519 = 0;
	goto bb9547;
}

bb9608:
{
	g572 = 0;
	goto bb9609;
}

bb9674:
{
	g690 = 0;
	goto bb9675;
}

lA641_2e_loopexit:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g319;
	t1 = g559;
	t2 = g141;
	t3 = g193;
	t4 = g703;
	Y = t4;
	Z = t3;
	N = t2;
	A = t1;
	X = g547;
	C = t0;
	goto lA641;
}

lA642:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA641;
	} else {
		goto lA644;
	}
}

lA6AD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = Z;
	if (t0 == 0) {
		t1 = A;
		t3 = t1 - 171;
		t4 = t3;
		C = (((t4 >> 8) & 1) ^ 1);
		Z = ((t4 & 255u) == 0u);
		N = t3 >> 7;
		if ((t4 & 255u) == 0u) {
			t2 = S;
			RAM[t2 + 256u] = -90;
			RAM[(t2 - 1) + 256u] = -75;
			S = (t2 - 2);
			PC = 115;
			goto not_found;
		} else {
			goto lA641;
		}
	} else {
		goto lA6BB;
	}
}

lA6B9:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA641;
	} else {
		goto lA6BB;
	}
}

lA68D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA65E:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA68D;
	} else {
		goto lA660;
	}
}

lA65C:
{
	A = 0;
	Z = 1;
	N = 0;
	goto lA65E;
}

lA67A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	RAM[22] = 25;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	Y = t1;
	t2 = RAM[(((t0 + 2) + 256u))];
	X = -6;
	RAM[506] = t2;
	RAM[505] = t1;
	S = -8;
	A = 0;
	Z = 1;
	N = 0;
	RAM[62] = 0;
	RAM[16] = 0;
	goto lA68D;
}

lA45E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = Y;
	t1 = t0 + 1;
	Y = t1;
	t2 = S;
	t3 = t2 + 1;
	S = t3;
	p0 = &RAM[(t3 + 256u)];
	t4 = *p0;
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	if (((s8 )t4) < 0) {
		*p0 = -92;
		RAM[t2 + 256u] = 100;
		S = (t2 - 1);
		goto lA67A;
	} else {
		t5 = t1;
		g939 = t5;
		goto lA456;
	}
}

bb6773:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g479;
	V = t0;
	t1 = g825;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (g825 >> 8) & 1;
	RAM[123] = t1;
	t2 = RAM[(g435 + 256u)];
	t3 = g435 + 1;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb6713:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g433;
	V = t0;
	t1 = (g974 >> 8) & 1;
	C = t1;
	RAM[122] = g974;
	t2 = RAM[44];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g825 = (t2 + 255) + t1;
	if (((s8 )t2) > -1) {
		goto bb6772;
	} else {
		if (((t2 ^ g825) & 128u) == 0u) {
			goto bb6772;
		} else {
			g479 = 1;
			goto bb6773;
		}
	}
}

lA68E:
{
	u8 t0;
	g435 = g708;
	S = (g435 - 1);
	C = 0;
	t0 = RAM[43];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	g974 = t0 + 255;
	if (((s8 )t0) > -1) {
		goto bb6712;
	} else {
		if (((t0 ^ g974) & 128u) == 0u) {
			goto bb6712;
		} else {
			g433 = 1;
			goto bb6713;
		}
	}
}

lA659:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -90;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 91;
	g708 = t1;
	goto lA68E;
}

lA4ED:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = -17;
	S = (t0 - 2);
	goto lA659;
}

lA4A7:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = C;
	if (t0 == 0) {
		goto lA4ED;
	} else {
		g284 = RAM[95];
		g923 = g284;
		g713 = RAM[96];
		t2 = (g713 << 8u) | g923;
		g604 = RAM[(((t2 + 1u) & 65535u))];
		RAM[35] = g604;
		g48 = RAM[45];
		RAM[34] = g48;
		RAM[37] = g713;
		A = g284;
		g489 = g284 == 0;
		g537 = (g284 >> 7);
		Y = 0;
		Z = 1;
		N = 0;
		t1 = RAM[t2];
		g944 = g284 - 1;
		g898 = (g944 - t1) + (((s16 )(s8 )t0));
		if (((g898 ^ g923) & 128u) == 0u) {
			goto bb3824;
		} else {
			if (((t1 ^ g284) & 128u) == 0u) {
				goto bb3824;
			} else {
				g732 = 1;
				goto bb3825;
			}
		}
	}
}

lA4DF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	g767 = g177;
	t0 = g702;
	t1 = g767 + g336;
	t2 = RAM[34];
	t3 = RAM[35];
	t11 = t1;
	t4 = RAM[(((((t3 << 8u) | t2) + t11) & 65535u))];
	t5 = RAM[36];
	t6 = RAM[37];
	RAM[(((t6 << 8u) | t5) + t11) & 65535u] = t4;
	t7 = t1 + 1;
	if (t7 == 0) {
		t8 = RAM[35];
		RAM[35] = (t8 + 1);
		t9 = RAM[37];
		RAM[37] = (t9 + 1);
		t10 = t0 - 1;
		if (t0 == 1) {
			Y = t7;
			A = t4;
			Z = (t0 == 1);
			N = t10 >> 7;
			X = t10;
			goto lA4ED;
		} else {
			g551 = t10;
			goto lA4DF_2e_backedge;
		}
	} else {
		g551 = t0;
		goto lA4DF_2e_backedge;
	}
}

lA4DF_2e_backedge:
{
	u8 t0;
	u8 t1;
	t0 = g551;
	t1 = g767 + 1;
	g177 = t1;
	g702 = t0;
	goto lA4DF;
}

bb4157:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g437;
	V = t0;
	t1 = g902;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t3 = g902 & 256u;
	C = (t3 >> 8u);
	if (t3 == 0u) {
		g177 = 0;
		g702 = g610;
		goto lA4DF;
	} else {
		t2 = g604 - 1;
		RAM[35] = t2;
		Z = (g604 == 1);
		N = t2 >> 7;
		C = 0;
		g177 = 0;
		g702 = g610;
		goto lA4DF;
	}
}

lA4D7:
{
	g610 = g780;
	C = 0;
	g902 = g876 + (g979 & 255);
	if (((g48 ^ g336) & 128u) == 0u) {
		if (((g336 ^ g902) & 128u) == 0u) {
			goto bb4156;
		} else {
			g437 = 1;
			goto bb4157;
		}
	} else {
		goto bb4156;
	}
}

bb4065:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g410;
	V = t0;
	g336 = g979;
	A = g336;
	t1 = (g906 >> 8) & 1;
	C = (t1 ^ 1);
	Y = g336;
	Z = g336 == 0;
	N = g336 >> 7;
	if (t1 == 0) {
		g780 = g566;
		goto lA4D7;
	} else {
		t2 = g566 + 1;
		X = t2;
		t3 = g713 - 1;
		RAM[37] = t3;
		Z = (g713 == 1);
		N = t3 >> 7;
		g780 = t2;
		goto lA4D7;
	}
}

bb3991:
{
	u8 t0;
	t0 = g351;
	V = t0;
	g566 = g926;
	X = g566;
	C = 1;
	A = g284;
	Z = g489;
	N = g537;
	g979 = (((g944 - ((((g898 + g876) & 255)))))) + 1;
	g906 = g979;
	if (((g906 ^ g923) & 128u) == 0u) {
		goto bb4064;
	} else {
		if (((g530 ^ g284) & 128u) == 0u) {
			goto bb4064;
		} else {
			g410 = 1;
			goto bb4065;
		}
	}
}

bb3935:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g291;
	V = t0;
	t1 = g910;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g910 >> 8) & 1;
	C = t2;
	RAM[46] = t1;
	g926 = (((((((g910 & 255) - 1))) - g713))) + t2;
	if (((g926 ^ t1) & 128u) == 0u) {
		goto bb3990;
	} else {
		if (((g713 ^ t1) & 128u) == 0u) {
			goto bb3990;
		} else {
			g351 = 1;
			goto bb3991;
		}
	}
}

bb3874:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g169;
	V = t0;
	g530 = g995;
	t1 = (g995 >> 8) & 1;
	C = t1;
	RAM[45] = g530;
	RAM[36] = g530;
	t2 = RAM[46];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g910 = (t2 + 255) + t1;
	if (((s8 )t2) > -1) {
		goto bb3934;
	} else {
		if (((t2 ^ g910) & 128u) == 0u) {
			goto bb3934;
		} else {
			g291 = 1;
			goto bb3935;
		}
	}
}

bb3825:
{
	u8 t0;
	u8 t1;
	t0 = g732;
	V = t0;
	t1 = g898;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = 0;
	g876 = g48;
	g995 = g876 + (g898 & 255);
	if (((g48 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g995) & 128u) == 0u) {
			goto bb3873;
		} else {
			g169 = 1;
			goto bb3874;
		}
	} else {
		goto bb3873;
	}
}

bb3824:
{
	g732 = 0;
	goto bb3825;
}

bb3873:
{
	g169 = 0;
	goto bb3874;
}

bb3934:
{
	g291 = 0;
	goto bb3935;
}

bb3990:
{
	g351 = 0;
	goto bb3991;
}

bb4064:
{
	g410 = 0;
	goto bb4065;
}

bb4156:
{
	g437 = 0;
	goto bb4157;
}

lA52A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -91;
	RAM[(t0 - 1) + 256u] = 44;
	S = (t0 - 2);
	goto lA659;
}

lA522:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = g555;
	t1 = g458 - t0;
	t6 = t1;
	t2 = RAM[(t6 + 508u)];
	t3 = RAM[95];
	t4 = RAM[96];
	RAM[(((t4 << 8u) | t3) + t6) & 65535u] = t2;
	t5 = t1 - 1;
	if (((s8 )t5) < 0) {
		Y = t5;
		A = t2;
		Z = (t1 == 1);
		N = t5 >> 7;
		goto lA52A;
	} else {
		g555 = (t0 + 1);
		goto lA522;
	}
}

lA50D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[20];
	t1 = RAM[21];
	RAM[510] = t0;
	RAM[511] = t1;
	t2 = RAM[49];
	A = t2;
	t3 = RAM[50];
	RAM[45] = t2;
	RAM[46] = t3;
	t4 = RAM[11];
	g458 = t4 - 1;
	Y = g458;
	Z = (t4 == 1);
	N = g458 >> 7;
	g555 = 0;
	goto lA522;
}

bb6425:
{
	u8 t0;
	u8 t1;
	t0 = g561;
	V = t0;
	t1 = g928;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (g928 >> 8) & 1;
	RAM[46] = t1;
	goto lA659;
}

bb6366:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g580;
	V = t0;
	t1 = (g879 >> 8) & 1;
	C = t1;
	RAM[45] = g879;
	t2 = RAM[44];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g928 = t1 + t2;
	if (((s8 )t2) < 0) {
		goto bb6424;
	} else {
		if (((t2 ^ g928) & 128u) == 0u) {
			goto bb6424;
		} else {
			g561 = 1;
			goto bb6425;
		}
	}
}

lA644:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[43];
	t1 = RAM[44];
	RAM[(t1 << 8u) | t0] = 0;
	Y = 1;
	t2 = RAM[43];
	t3 = RAM[44];
	RAM[(((t3 << 8u) | t2) + 1u) & 65535u] = 0;
	t4 = RAM[43];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	C = 0;
	g879 = t4 + 2;
	if (((s8 )t4) < 0) {
		goto bb6365;
	} else {
		if (((t4 ^ g879) & 128u) == 0u) {
			goto bb6365;
		} else {
			g580 = 1;
			goto bb6366;
		}
	}
}

bb6365:
{
	g580 = 0;
	goto bb6366;
}

bb6424:
{
	g561 = 0;
	goto bb6425;
}

lA877:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	p2 = &RAM[(t1 + 256u)];
	t2 = *p2;
	N = t2 >> 7;
	V = ((t2 >> 6) & 1);
	B = ((t2 >> 4) & 1);
	D = ((t2 >> 3) & 1);
	I = ((t2 >> 2) & 1);
	t3 = (t2 >> 1) & 1;
	Z = t3;
	C = (t2 & 1);
	if (t3 == 0) {
		*p2 = -88;
		RAM[t0 + 256u] = 127;
		S = (t0 - 1);
		goto lA660;
	} else {
		goto lA659;
	}
}

bb6712:
{
	g433 = 0;
	goto bb6713;
}

bb6772:
{
	g479 = 0;
	goto bb6773;
}

lA700:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	t0 = Y;
	t1 = t0 + 1;
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lE386;
	} else {
		t2 = RAM[95];
		t3 = RAM[96];
		t10 = (t3 << 8u) | t2;
		t4 = RAM[(((t10 + t1) & 65535u))];
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		if (t4 == 0) {
			t5 = RAM[(((t10 + t4) & 65535u))];
			X = t5;
			t6 = t4 + 1;
			Y = t6;
			t7 = RAM[(((t10 + t6) & 65535u))];
			A = t7;
			Z = t7 == 0;
			N = t7 >> 7;
			RAM[95] = t5;
			RAM[96] = t7;
			if (t7 == 0){
				goto lE386;
			} else {
				goto lA6C9;
			}
		} else {
			t8 = RAM[774];
			t9 = RAM[775];
			t11 = (t9 << 8) | t8;
			PC = t11;
			if ((t11 + 4294926336u) > 17590u) {
				goto not_found;
			} else {
				goto bb48000;
			}
		}
	}
}

lA6F6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = A;
	t3 = t0 - 34;
	t4 = t3;
	C = (((t4 >> 8) & 1) ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		t1 = RAM[15];
		t2 = t1 ^ -1;
		A = t2;
		Z = (t1 == 0xff);
		N = t2 >> 7;
		RAM[15] = t2;
		goto lA700;
	} else {
		goto lA700;
	}
}

lA7E1:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = RAM[776];
	t1 = RAM[777];
	t2 = (t1 << 8) | t0;
	PC = t2;
	if ((t2 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb8579:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g599;
	V = t0;
	t1 = g862;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g862 >> 8) & 1;
	C = t2;
	RAM[122] = t1;
	if (t2 == 0) {
		goto lA7E1;
	} else {
		t3 = g333 + 1;
		RAM[123] = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lA7E1;
	}
}

bb8578:
{
	g599 = 0;
	goto bb8579;
}

lA82B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA827:
{
	u8 t0;
	u8 t1;
	t0 = g714;
	t1 = g592;
	RAM[65] = t1;
	RAM[66] = t0;
	goto lA82B;
}

lA81D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	C = 1;
	t0 = RAM[43];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t5 = t0 - 1;
	t6 = t5;
	V = (((((((t6 ^ t0) & 128u) == 0u) | (((s8 )t0) > -1))&1))) ? 0 : 1;
	t1 = t5;
	A = t1;
	t2 = (t6 >> 8) & 1;
	C = (t2 ^ 1);
	t3 = RAM[44];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t2 == 0) {
		g714 = t3;
		g592 = t1;
		goto lA827;
	} else {
		t4 = t3 - 1;
		Y = t4;
		Z = (t3 == 1);
		N = t4 >> 7;
		g714 = t4;
		g592 = t1;
		goto lA827;
	}
}

lA677:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = 121;
	S = (t0 - 2);
	goto lA81D;
}

lA663:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[55];
	t1 = RAM[56];
	RAM[51] = t0;
	RAM[52] = t1;
	t2 = RAM[45];
	A = t2;
	t3 = RAM[46];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[47] = t2;
	RAM[48] = t3;
	RAM[49] = t2;
	RAM[50] = t3;
	goto lA677;
}

lA870:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA8D1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA905:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb10151:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g706;
	V = t0;
	t1 = g951;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g951 >> 8) & 1;
	C = t2;
	RAM[122] = t1;
	if (t2 == 0) {
		goto lA905;
	} else {
		t3 = RAM[123];
		t4 = t3 + 1;
		RAM[123] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		goto lA905;
	}
}

lA8FB:
{
	u8 t0;
	u8 t1;
	t0 = Y;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 0;
	t1 = RAM[122];
	g951 = t1 + t0;
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g951) & 128u) == 0u) {
			goto bb10150;
		} else {
			g706 = 1;
			goto bb10151;
		}
	} else {
		goto bb10150;
	}
}

lA93E:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA940;
	} else {
		goto lA8FB;
	}
}

lACD1:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -45;
	S = (t0 - 2);
	goto lA8FB;
}

bb10150:
{
	g706 = 0;
	goto bb10151;
}

lA905_2e_loopexit:
{
	u8 t0;
	u8 t1;
	bool t2;
	t0 = g502;
	t1 = g278;
	t2 = g792&1;
	X = g645;
	Y = g144;
	A = g516;
	Z = t2;
	N = t1 >> 7;
	C = t0;
	goto lA905;
}

lA911:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g645 = g321;
	g614 = g90;
	t0 = g280;
	g227 = g400;
	RAM[7] = g614;
	RAM[8] = g645;
	t1 = RAM[122];
	t2 = RAM[123];
	g931 = (t2 << 8u) | t1;
	g715 = 0;
	g765 = t0;
	goto lA919;
}

lA919:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	t5 = g715;
	t6 = g765;
	g144 = t5 + g227;
	g516 = RAM[(((g931 + g144) & 65535u))];
	if (g516 == 0) {
		g502 = t6;
		g278 = g516;
		g792 = g516 == 0;
		goto lA905_2e_loopexit;
	} else {
		t11 = g516;
		t12 = t11 - g645;
		t13 = t12;
		t7 = ((t13 >> 8) & 1) ^ 1;
		t8 = t12;
		if ((t13 & 255u) == 0u) {
			g502 = t7;
			g278 = t8;
			g792 = (t13 & 255u) == 0u;
			goto lA905_2e_loopexit;
		} else {
			t0 = g144 + 1;
			t9 = t11 - 34;
			t10 = t9;
			t1 = ((t10 >> 8) & 1) ^ 1;
			t2 = (t10 & 255u) == 0u;
			t3 = (t9 >> 7);
			t4 = t5 + 1;
			if ((t10 & 255u) == 0u) {
				g321 = g614;
				g90 = g645;
				g280 = t1;
				g400 = t0;
				goto lA911;
			} else {
				g715 = t4;
				g765 = t1;
				goto lA919;
			}
		}
	}
}

lA90B:
{
	u8 t0;
	u8 t1;
	t0 = g214;
	RAM[7] = t0;
	Y = 0;
	Z = 1;
	N = 0;
	RAM[8] = 0;
	t1 = C;
	g321 = t0;
	g90 = 0;
	g280 = t1;
	g400 = 0;
	goto lA911;
}

lA906:
{
	u8 t0;
	X = 58;
	t0 = RAM[162];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g214 = 58;
	goto lA90B;
}

lA75A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = 92;
	S = (t0 - 2);
	goto lA906;
}

lA8F8:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = -6;
	S = (t0 - 2);
	goto lA906;
}

lB3CE:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = S;
	t1 = A;
	RAM[t0 + 256u] = t1;
	t2 = RAM[72];
	RAM[(t0 - 1) + 256u] = t2;
	t3 = RAM[71];
	RAM[(t0 - 2) + 256u] = t3;
	t4 = RAM[123];
	RAM[(t0 - 3) + 256u] = t4;
	t5 = RAM[122];
	A = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	RAM[(t0 - 4) + 256u] = t5;
	RAM[(t0 - 5) + 256u] = -77;
	RAM[(t0 - 6) + 256u] = -35;
	S = (t0 - 7);
	goto lA8F8;
}

lABEA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[512];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		t1 = RAM[19];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		if (t1 == 0) {
			t2 = S;
			RAM[t2 + 256u] = -85;
			RAM[(t2 - 1) + 256u] = -11;
			S = (t2 - 2);
			goto lA906;
		} else {
			goto lABD6;
		}
	} else {
		A = 0;
		Z = 1;
		N = 0;
		g12 = 0;
		goto lAC0F;
	}
}

lABD9:
{
	u8 t0;
	u8 t1;
	t0 = RAM[19];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lABEA;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -85;
		RAM[(t1 - 1) + 256u] = -33;
		S = (t1 - 2);
		PC = -73;
		goto not_found;
	}
}

lABE0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = A;
	t1 = t0 & 2;
	A = t1;
	t2 = (t1 >> 1);
	Z = (t2 ^ 1);
	N = 0;
	if (t2 == 1) {
		t3 = S;
		RAM[t3 + 256u] = -85;
		RAM[(t3 - 1) + 256u] = -26;
		S = (t3 - 2);
		goto lABB5;
	} else {
		goto lABEA;
	}
}

lACB8:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -70;
	S = (t0 - 2);
	goto lA906;
}

lAC2F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = Z;
	if (t0 == 0) {
		goto lAC51;
	} else {
		t1 = RAM[17];
		Z = t1 == 0;
		t2 = (t1 >> 7);
		N = t2;
		t3 = t1 & 64;
		V = (t3 >> 6);
		if (t3 == 0) {
			if (t2 == 0) {
				t5 = RAM[19];
				A = t5;
				Z = t5 == 0;
				N = t5 >> 7;
				if (t5 == 0){
					t6 = S;
					RAM[t6 + 256u] = -84;
					RAM[(t6 - 1) + 256u] = 73;
					t7 = t6 - 2;
					S = t7;
					A = 63;
					Z = 0;
					N = 0;
					g358 = t7;
					goto lAB47;
				} else {
					goto lAC4A;
				}
			} else {
				goto lACB8;
			}
		} else {
			t4 = S;
			RAM[t4 + 256u] = -84;
			RAM[(t4 - 1) + 256u] = 55;
			RAM[(t4 - 2) + 256u] = -31;
			RAM[(t4 - 3) + 256u] = 38;
			S = (t4 - 4);
			PC = -28;
			goto not_found;
		}
	}
}

lACD7:
{
	u8 t0;
	u16 t1;
	u16 t2;
	t0 = A;
	X = t0;
	t1 = t0 - 131;
	t2 = t1;
	C = (((t2 >> 8) & 1) ^ 1);
	Z = ((t2 & 255u) == 0u);
	N = t1 >> 7;
	if ((t2 & 255u) == 0u) {
		goto lAC51;
	} else {
		goto lACB8;
	}
}

lA909:
{
	u8 t0;
	t0 = g183;
	S = (t0 - 1);
	X = 0;
	Z = 1;
	N = 0;
	g214 = 0;
	goto lA90B;
}

lA8A3:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -88;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -91;
	g183 = t1;
	goto lA909;
}

lA93B:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -87;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 61;
	g183 = t1;
	goto lA909;
}

lA937:
{
	u8 t0;
	t0 = RAM[97];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		goto lA93B;
	} else {
		goto lA940;
	}
}

lA96A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA9CA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	t0 = RAM[100];
	t1 = RAM[73];
	t2 = RAM[74];
	RAM[(t2 << 8u) | t1] = t0;
	Y = 1;
	t3 = RAM[101];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	t4 = RAM[73];
	t5 = RAM[74];
	RAM[(((t5 << 8u) | t4) + 1u) & 65535u] = t3;
	t6 = S;
	t7 = RAM[(((t6 + 1) + 256u))];
	t8 = t6 + 2;
	S = t8;
	t9 = RAM[(t8 + 256u)];
	t10 = (t7 + 1) + (t9 << 8);
	PC = t10;
	if ((t10 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAA6F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	u8 t18;
	u16 t19;
	t0 = RAM[80];
	t1 = RAM[81];
	t2 = RAM[(((t1 << 8u) | t0))];
	t3 = RAM[73];
	t4 = RAM[74];
	RAM[(t4 << 8u) | t3] = t2;
	t5 = RAM[80];
	t6 = RAM[81];
	t7 = RAM[(((((t6 << 8u) | t5) + 1u) & 65535u))];
	t8 = RAM[73];
	t9 = RAM[74];
	RAM[(((t9 << 8u) | t8) + 1u) & 65535u] = t7;
	Y = 2;
	t10 = RAM[80];
	t11 = RAM[81];
	t12 = RAM[(((((t11 << 8u) | t10) + 2u) & 65535u))];
	A = t12;
	Z = t12 == 0;
	N = t12 >> 7;
	t13 = RAM[73];
	t14 = RAM[74];
	RAM[(((t14 << 8u) | t13) + 2u) & 65535u] = t12;
	t15 = S;
	t16 = RAM[(((t15 + 1) + 256u))];
	t17 = t15 + 2;
	S = t17;
	t18 = RAM[(t17 + 256u)];
	t19 = (t16 + 1) + (t18 << 8);
	PC = t19;
	if ((t19 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAAE7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAACA:
{
	u8 t0;
	u8 t1;
	t0 = X;
	RAM[t0 | 512u] = 0;
	X = -1;
	Y = 1;
	t1 = RAM[19];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lAAD7;
	} else {
		goto lAAE7;
	}
}

lAAC8:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lAA9D;
	} else {
		goto lAACA;
	}
}

lAAE5:
{
	u8 t0;
	u8 t1;
	t0 = A;
	t1 = t0 ^ -1;
	A = t1;
	Z = (t0 == 0xff);
	N = t1 >> 7;
	goto lAAE7;
}

lAADC:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[19];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	if (t1 == 0) {
		goto lAAE5;
	} else {
		A = 10;
		Z = 0;
		N = 0;
		t2 = S;
		RAM[t2 + 256u] = -86;
		RAM[(t2 - 1) + 256u] = -28;
		t3 = t2 - 2;
		S = t3;
		g358 = t3;
		goto lAB47;
	}
}

lAB30:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = Y;
	Y = (t0 + 1);
	t1 = A;
	t3 = t1 - 13;
	t4 = t3;
	C = (((t4 >> 8) & 1) ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if ((t4 & 255u) == 0u) {
		t2 = S;
		RAM[t2 + 256u] = -85;
		RAM[(t2 - 1) + 256u] = 55;
		S = (t2 - 2);
		goto lAAE5;
	} else {
		goto lAB28;
	}
}

lAB28:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = X;
	t1 = t0 - 1;
	X = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	if (t0 == 1) {
		goto lAAE7;
	} else {
		t2 = RAM[34];
		t3 = RAM[35];
		t4 = Y;
		t5 = RAM[(((((t3 << 8u) | t2) + t4) & 65535u))];
		A = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		t6 = S;
		RAM[t6 + 256u] = -85;
		RAM[(t6 - 1) + 256u] = 47;
		t7 = t6 - 2;
		S = t7;
		g358 = t7;
		goto lAB47;
	}
}

lAB24:
{
	u8 t0;
	u8 t1;
	t0 = A;
	Y = 0;
	t1 = t0 + 1;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	goto lAB28;
}

lAB4A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = A;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAB72:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = RAM[61];
	A = t0;
	t1 = RAM[62];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[122] = t0;
	RAM[123] = t1;
	t2 = S;
	t3 = RAM[(((t2 + 1) + 256u))];
	t4 = t2 + 2;
	S = t4;
	t5 = RAM[(t4 + 256u)];
	t6 = (t3 + 1) + (t5 << 8);
	PC = t6;
	if ((t6 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lABA0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = RAM[19];
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lABB7;
	}
}

lABBA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	X = 0;
	Z = 1;
	N = 0;
	RAM[19] = 0;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lACFB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAD96:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAE46:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = RAM[101];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[100];
	RAM[(t1 - 1) + 256u] = t2;
	t3 = RAM[99];
	RAM[(t1 - 2) + 256u] = t3;
	t4 = RAM[98];
	RAM[(t1 - 3) + 256u] = t4;
	t5 = RAM[97];
	A = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	RAM[(t1 - 4) + 256u] = t5;
	S = (t1 - 5);
	t6 = RAM[34];
	t7 = RAM[35];
	t8 = (t7 << 8) | t6;
	PC = t8;
	if ((t8 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAE80:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g271;
	t1 = RAM[97];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = RAM[(((t0 + 1) + 256u))];
	t3 = t0 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAE66:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	C = (t1 & 1);
	RAM[18] = (t1 >> 1);
	t2 = RAM[(((t0 + 2) + 256u))];
	RAM[105] = t2;
	t3 = RAM[(((t0 + 3) + 256u))];
	RAM[106] = t3;
	t4 = RAM[(((t0 + 4) + 256u))];
	RAM[107] = t4;
	t5 = RAM[(((t0 + 5) + 256u))];
	RAM[108] = t5;
	t6 = RAM[(((t0 + 6) + 256u))];
	RAM[109] = t6;
	t7 = t0 + 7;
	S = t7;
	t8 = RAM[(t7 + 256u)];
	RAM[110] = t8;
	t9 = RAM[102];
	t10 = t8 ^ t9;
	A = t10;
	Z = (t9 == t8);
	N = t10 >> 7;
	RAM[111] = t10;
	g271 = t7;
	goto lAE80;
}

lAE64:
{
	u8 t0;
	t0 = Y;
	RAM[75] = t0;
	goto lAE66;
}

lAE83:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g781;
	S = (t0 - 1);
	t1 = RAM[778];
	t2 = RAM[779];
	t3 = (t2 << 8) | t1;
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lADB1:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -83;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -77;
	g781 = t1;
	goto lAE83;
}

lAF27:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = RAM[(g411 + 256u)];
	t1 = g411 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAF14:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	g411 = g154;
	S = (g411 - 1);
	C = 1;
	t0 = RAM[100];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t3 = t0;
	V = 0;
	C = 1;
	g295 = RAM[101];
	A = g295;
	Z = g295 == 0;
	N = g295 >> 7;
	g960 = g295;
	t4 = g960 - 160;
	t5 = t4;
	V = (((((((t5 ^ g295) & 128u) == 0u) | (((s8 )g295) < 0))&1))) ? 0 : 1;
	t1 = t4;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t6 = t5 & 256u;
	t2 = (t6 >> 8u) ^ 1;
	C = t2;
	if (t6 == 0u) {
		A = -94;
		Z = 0;
		N = 1;
		g1000 = (((((161 - t3))) + t2));
		if ((g1000 & 128u) == 0u) {
			if (((((((t0 ^ 128u))))) & 128u) == 0u) {
				goto bb18290;
			} else {
				g567 = 1;
				goto bb18291;
			}
		} else {
			goto bb18290;
		}
	} else {
		goto lAF27;
	}
}

bb18352:
{
	u8 t0;
	u8 t1;
	t0 = g498;
	V = t0;
	t1 = g930;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (((g864 >> 8) & 1) ^ 1);
	goto lAF27;
}

bb18291:
{
	u8 t0;
	u8 t1;
	t0 = g567;
	V = t0;
	t1 = ((g1000 >> 8) & 1) ^ 1;
	C = t1;
	A = -29;
	Z = 0;
	N = 1;
	g930 = (((226 - g960))) + t1;
	g864 = g930;
	if ((g864 & 128u) == 0u) {
		if (((((((g295 ^ 128u))))) & 128u) == 0u) {
			goto bb18351;
		} else {
			g498 = 1;
			goto bb18352;
		}
	} else {
		goto bb18351;
	}
}

bb18290:
{
	g567 = 0;
	goto bb18291;
}

bb18351:
{
	g498 = 0;
	goto bb18352;
}

lAF5C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAF3E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	t0 = C;
	if (t0 == 0) {
		goto lAF5C;
	} else {
		t1 = X;
		t5 = t1 - 84;
		t6 = t5;
		C = (((t6 >> 8) & 1) ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if ((t6 & 255u) == 0u) {
			t2 = Y;
			t7 = t2 - 201;
			t8 = t7;
			C = (((t8 >> 8) & 1) ^ 1);
			Z = ((t8 & 255u) == 0u);
			N = t7 >> 7;
			if ((t8 & 255u) == 0u) {
				t3 = S;
				RAM[t3 + 256u] = -81;
				t4 = t3 - 1;
				S = t4;
				RAM[t4 + 256u] = 74;
				g692 = t4;
				goto lAF84;
			} else {
				goto lAF5C;
			}
		} else {
			goto lAF5C;
		}
	}
}

lAF87:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	t0 = X;
	RAM[100] = t0;
	t1 = Y;
	RAM[99] = t1;
	t2 = A;
	RAM[101] = t2;
	Y = 0;
	Z = 1;
	N = 0;
	RAM[98] = 0;
	t3 = S;
	t4 = RAM[(((t3 + 1) + 256u))];
	t5 = t3 + 2;
	S = t5;
	t6 = RAM[(t5 + 256u)];
	t7 = (t4 + 1) + (t6 << 8);
	PC = t7;
	if ((t7 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB11C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB113:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	t0 = A;
	t5 = t0;
	t6 = t5 - 65;
	t7 = t6;
	t1 = (t7 >> 8) & 1;
	t2 = t1 ^ 1;
	C = t2;
	Z = ((t7 & 255u) == 0u);
	N = t6 >> 7;
	if (t1 == 0) {
		t8 = (t5 - 92) + t2;
		V = (((((((t8 ^ t0) & 128u) == 0u) | (((s8 )t0) > -1))&1))) ? 0 : 1;
		t3 = t8;
		A = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		C = 1;
		t9 = (t8 & 255) - 165;
		t10 = t9;
		V = (((((((t10 ^ t3) & 128u) == 0u) | (((s8 )t3) < 0))&1))) ? 0 : 1;
		t4 = t9;
		A = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		C = (((t10 >> 8) & 1) ^ 1);
		goto lB11C;
	} else {
		goto lB11C;
	}
}

lAE8D:
{
	u8 t0;
	u8 t1;
	t0 = C;
	if (t0 == 0) {
		goto lBCF3;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -82;
		RAM[(t1 - 1) + 256u] = -108;
		S = (t1 - 2);
		goto lB113;
	}
}

lB097:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = -103;
	S = (t0 - 2);
	goto lB113;
}

lB0A8:
{
	u8 t0;
	u8 t1;
	t0 = C;
	if (t0 == 0) {
		goto lB0AF;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -80;
		RAM[(t1 - 1) + 256u] = -84;
		S = (t1 - 2);
		goto lB113;
	}
}

lB0B3:
{
	u8 t0;
	u8 t1;
	t0 = C;
	if (t0 == 0) {
		goto lB0B0;
	} else {
		t1 = S;
		RAM[t1 + 256u] = -80;
		RAM[(t1 - 1) + 256u] = -73;
		S = (t1 - 2);
		goto lB113;
	}
}

lB123:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	A = 19;
	Y = -65;
	Z = 0;
	N = 1;
	t0 = RAM[(g43 + 256u)];
	t1 = g727 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB18F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g39;
	RAM[71] = g633;
	RAM[72] = t0;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb21619:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g637;
	V = t0;
	g633 = g941;
	A = g633;
	t1 = (g941 >> 8) & 1;
	C = t1;
	t2 = RAM[96];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t1 == 0) {
		g39 = t2;
		goto lB18F;
	} else {
		t3 = t2 + 1;
		Y = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		g39 = t3;
		goto lB18F;
	}
}

lB185:
{
	u8 t0;
	t0 = RAM[95];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 0;
	g941 = t0 + 2;
	if (((s8 )t0) < 0) {
		goto bb21618;
	} else {
		if (((t0 ^ g941) & 128u) == 0u) {
			goto bb21618;
		} else {
			g637 = 1;
			goto bb21619;
		}
	}
}

lB160:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	t0 = RAM[88];
	t1 = RAM[89];
	RAM[47] = t0;
	RAM[48] = (t1 + 1);
	t2 = RAM[69];
	t3 = RAM[95];
	t4 = RAM[96];
	RAM[(t4 << 8u) | t3] = t2;
	t5 = RAM[70];
	t6 = RAM[95];
	t7 = RAM[96];
	RAM[(((t7 << 8u) | t6) + 1u) & 65535u] = t5;
	A = 0;
	t8 = RAM[95];
	t9 = RAM[96];
	RAM[(((t9 << 8u) | t8) + 2u) & 65535u] = 0;
	t10 = RAM[95];
	t11 = RAM[96];
	RAM[(((t11 << 8u) | t10) + 3u) & 65535u] = 0;
	t12 = RAM[95];
	t13 = RAM[96];
	RAM[(((t13 << 8u) | t12) + 4u) & 65535u] = 0;
	t14 = RAM[95];
	t15 = RAM[96];
	RAM[(((t15 << 8u) | t14) + 5u) & 65535u] = 0;
	Y = 6;
	Z = 0;
	N = 0;
	t16 = RAM[95];
	t17 = RAM[96];
	RAM[(((t17 << 8u) | t16) + 6u) & 65535u] = 0;
	goto lB185;
}

bb21618:
{
	g637 = 0;
	goto bb21619;
}

lB1A0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g146;
	RAM[88] = g388;
	RAM[89] = t0;
	t1 = RAM[(g15 + 256u)];
	t2 = g501 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb21809:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g42;
	V = t0;
	g388 = g837;
	A = g388;
	t1 = (g837 >> 8) & 1;
	C = t1;
	t2 = RAM[96];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t1 == 0) {
		g146 = t2;
		goto lB1A0;
	} else {
		t3 = t2 + 1;
		Y = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		g146 = t3;
		goto lB1A0;
	}
}

bb21755:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g46;
	V = t0;
	t1 = g855;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g855 >> 8) & 1;
	C = t2;
	t3 = RAM[95];
	g837 = (((t3 + (g855 & 255)))) + t2;
	if (((t3 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g837) & 128u) == 0u) {
			goto bb21808;
		} else {
			g42 = 1;
			goto bb21809;
		}
	} else {
		goto bb21808;
	}
}

lB194:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	S = g501;
	t0 = RAM[11];
	t1 = (t0 >> 7);
	C = t1;
	t3 = t0 << 1;
	Z = ((t3 & 254u) == 0u);
	N = ((t0 >> 6) & 1);
	t2 = t3;
	A = t2;
	g855 = (t1 + 5) + (t3 & 254);
	if (((s8 )t2) < 0) {
		goto bb21754;
	} else {
		if (((t2 ^ g855) & 128u) == 0u) {
			goto bb21754;
		} else {
			g46 = 1;
			goto bb21755;
		}
	}
}

bb21754:
{
	g46 = 0;
	goto bb21755;
}

bb21808:
{
	g42 = 0;
	goto bb21809;
}

lB34B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb24608:
{
	u8 t0;
	u8 t1;
	t0 = g359;
	V = t0;
	t1 = g860;
	C = (g860 >> 8) & 1;
	RAM[72] = t1;
	Y = t1;
	A = g207;
	Z = g695;
	N = g533;
	goto lB34B;
}

bb24541:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g617;
	V = t0;
	g207 = g972;
	g695 = g207 == 0;
	g533 = (g207 >> 7);
	t1 = (g972 >> 8) & 1;
	C = t1;
	RAM[71] = g207;
	t2 = Y;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = RAM[89];
	g860 = (t3 + t2) + t1;
	if (((t3 ^ t2) & 128u) == 0u) {
		if (((t2 ^ g860) & 128u) == 0u) {
			goto bb24607;
		} else {
			g359 = 1;
			goto bb24608;
		}
	} else {
		goto bb24607;
	}
}

lB33E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[88];
	t2 = C;
	g972 = (t1 + t0) + (((s16 )(s8 )t2));
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g972) & 128u) == 0u) {
			goto bb24540;
		} else {
			g617 = 1;
			goto bb24541;
		}
	} else {
		goto bb24540;
	}
}

bb24540:
{
	g617 = 0;
	goto bb24541;
}

bb24607:
{
	g359 = 0;
	goto bb24608;
}

lB44F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	u8 t18;
	u16 t19;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = RAM[78];
	t3 = RAM[79];
	RAM[(t3 << 8u) | t2] = t1;
	t4 = RAM[(((t0 + 2) + 256u))];
	t5 = RAM[78];
	t6 = RAM[79];
	RAM[(((t6 << 8u) | t5) + 1u) & 65535u] = t4;
	t7 = RAM[(((t0 + 3) + 256u))];
	t8 = RAM[78];
	t9 = RAM[79];
	RAM[(((t9 << 8u) | t8) + 2u) & 65535u] = t7;
	t10 = RAM[(((t0 + 4) + 256u))];
	t11 = RAM[78];
	t12 = RAM[79];
	RAM[(((t12 << 8u) | t11) + 3u) & 65535u] = t10;
	t13 = RAM[(((t0 + 5) + 256u))];
	A = t13;
	Y = 4;
	Z = 0;
	N = 0;
	t14 = RAM[78];
	t15 = RAM[79];
	RAM[(((t15 << 8u) | t14) + 4u) & 65535u] = t13;
	t16 = RAM[(((t0 + 6) + 256u))];
	t17 = t0 + 7;
	S = t17;
	t18 = RAM[(t17 + 256u)];
	t19 = (t16 + 1) + (t18 << 8);
	PC = t19;
	if ((t19 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB480:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	t0 = X;
	RAM[98] = t0;
	t1 = Y;
	RAM[99] = t1;
	t2 = A;
	RAM[97] = t2;
	t3 = S;
	t4 = RAM[(((t3 + 1) + 256u))];
	t5 = t3 + 2;
	S = t5;
	t6 = RAM[(t5 + 256u)];
	t7 = (t4 + 1) + (t6 << 8);
	PC = t7;
	if ((t7 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB50B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	RAM[51] = g737;
	RAM[52] = g316;
	RAM[53] = g737;
	RAM[54] = g316;
	X = g737;
	t0 = RAM[(g664 + 256u)];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = RAM[(((g664 + 1) + 256u))];
	t2 = g664 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB601:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = RAM[35];
	X = t0;
	Y = 0;
	Z = 1;
	N = 0;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb28762:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g209;
	V = t0;
	t1 = g827;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g827 >> 8) & 1;
	C = t2;
	RAM[34] = t1;
	if (t2 == 0) {
		goto lB601;
	} else {
		t3 = g526 + 1;
		RAM[35] = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lB601;
	}
}

lB5F6:
{
	u8 t0;
	u8 t1;
	g526 = g399;
	t0 = g751;
	t1 = RAM[83];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = 0;
	g827 = t0 + t1;
	if (((t0 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g827) & 128u) == 0u) {
			goto bb28761;
		} else {
			g209 = 1;
			goto bb28762;
		}
	} else {
		goto bb28761;
	}
}

lB5BD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	t0 = RAM[34];
	t1 = RAM[35];
	t7 = (t1 << 8u) | t0;
	t2 = Y;
	t3 = RAM[(((t7 + t2) & 65535u))];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (((s8 )t3) < 0) {
		g399 = t1;
		g751 = t0;
		goto lB5F6;
	} else {
		t4 = t2 + 1;
		Y = t4;
		t5 = RAM[(((t7 + t4) & 65535u))];
		A = t5;
		Z = t5 == 0;
		N = t5 >> 7;
		if (((s8 )t5) < 0) {
			t6 = t2 + 2;
			Y = t6;
			Z = t6 == 0;
			N = t6 >> 7;
			goto lB5C7;
		} else {
			g399 = t1;
			g751 = t0;
			goto lB5F6;
		}
	}
}

lB561:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -75;
	RAM[(t0 - 1) + 256u] = 99;
	S = (t0 - 2);
	goto lB5BD;
}

lB5C7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	g663 = RAM[34];
	g546 = RAM[35];
	t7 = (g546 << 8u) | g663;
	t0 = Y;
	t1 = RAM[(((t7 + t0) & 65535u))];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		g399 = g546;
		g751 = g663;
		goto lB5F6;
	} else {
		g619 = RAM[(((t7 + (t0 + 1)) & 65535u))];
		X = g619;
		t2 = t0 + 2;
		Y = t2;
		g11 = RAM[(((t7 + t2) & 65535u))];
		A = g11;
		g970 = g11;
		t3 = RAM[52];
		t8 = g970 - t3;
		t9 = t8;
		t4 = (t9 >> 8) & 1;
		C = (t4 ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if (t4 == 0) {
			if ((t9 & 255u) == 0u) {
				t5 = RAM[51];
				t10 = g619 - t5;
				t11 = t10;
				t6 = (t11 >> 8) & 1;
				C = (t6 ^ 1);
				Z = ((t11 & 255u) == 0u);
				N = t10 >> 7;
				if (t6 == 0) {
					g399 = g546;
					g751 = g663;
					goto lB5F6;
				} else {
					goto lB5DC;
				}
			} else {
				g399 = g546;
				g751 = g663;
				goto lB5F6;
			}
		} else {
			goto lB5DC;
		}
	}
}

lB5B8:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -75;
	RAM[(t0 - 1) + 256u] = -70;
	S = (t0 - 2);
	goto lB5C7;
}

lB5DC:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = RAM[96];
	t4 = g970 - t0;
	t5 = t4;
	t1 = (t5 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if (t1 == 0) {
		if ((t5 & 255u) == 0u) {
			t2 = RAM[95];
			t6 = g619 - t2;
			t7 = t6;
			t3 = (t7 >> 8) & 1;
			C = (t3 ^ 1);
			Z = ((t7 & 255u) == 0u);
			N = t6 >> 7;
			if (t3 == 0) {
				goto lB5E6;
			} else {
				g399 = g546;
				g751 = g663;
				goto lB5F6;
			}
		} else {
			goto lB5E6;
		}
	} else {
		g399 = g546;
		g751 = g663;
		goto lB5F6;
	}
}

lB5E6:
{
	u8 t0;
	RAM[95] = g619;
	RAM[96] = g11;
	X = g546;
	RAM[78] = g663;
	RAM[79] = g546;
	t0 = RAM[83];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	RAM[85] = t0;
	g399 = g546;
	g751 = g663;
	goto lB5F6;
}

bb28761:
{
	g209 = 0;
	goto bb28762;
}

lB6A2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = RAM[(((g562 + 1) + 256u))];
	t1 = g562 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb29838:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g352;
	V = t0;
	t1 = g896;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g896 >> 8) & 1;
	C = t2;
	RAM[53] = t1;
	if (t2 == 0) {
		goto lB6A2;
	} else {
		t3 = RAM[54];
		t4 = t3 + 1;
		RAM[54] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		goto lB6A2;
	}
}

lB699:
{
	u8 t0;
	u8 t1;
	t0 = g428;
	C = 0;
	t1 = RAM[53];
	g896 = t1 + t0;
	if (((t1 ^ t0) & 128u) == 0u) {
		if (((t0 ^ g896) & 128u) == 0u) {
			goto bb29837;
		} else {
			g352 = 1;
			goto bb29838;
		}
	} else {
		goto bb29837;
	}
}

lB68C:
{
	g562 = g543;
	g497 = A;
	Y = g497;
	Z = g497 == 0;
	N = g497 >> 7;
	if (g497 == 0) {
		g428 = g497;
		goto lB699;
	} else {
		RAM[g562 + 256u] = g497;
		S = (g562 - 1);
		g483 = 0;
		goto lB690;
	}
}

lB4C3:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[111];
	X = t0;
	t1 = RAM[112];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -76;
	RAM[(t2 - 1) + 256u] = -55;
	t3 = t2 - 2;
	S = t3;
	RAM[34] = t0;
	RAM[35] = t1;
	g543 = t3;
	goto lB68C;
}

lB66A:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -74;
	RAM[(t0 - 1) + 256u] = 108;
	t1 = t0 - 2;
	S = t1;
	g543 = t1;
	goto lB68C;
}

lB67A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	t0 = g672;
	t1 = t0 - 1;
	t2 = RAM[111];
	t3 = RAM[112];
	t4 = RAM[(((t3 << 8u) | t2))];
	RAM[t1 + 256u] = t4;
	t5 = RAM[111];
	t6 = RAM[112];
	t10 = (t6 << 8u) | t5;
	t7 = RAM[(((t10 + 1u) & 65535u))];
	X = t7;
	t8 = RAM[(((t10 + 2u) & 65535u))];
	Y = t8;
	S = t1;
	t9 = RAM[(t1 + 256u)];
	A = t9;
	Z = t9 == 0;
	N = t9 >> 7;
	RAM[34] = t7;
	RAM[35] = t8;
	g543 = t1;
	goto lB68C;
}

lAA59:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[80];
	A = t0;
	t1 = RAM[81];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[111] = t0;
	RAM[112] = t1;
	t2 = S;
	RAM[t2 + 256u] = -86;
	t3 = t2 - 1;
	S = t3;
	RAM[t3 + 256u] = 99;
	g672 = t3;
	goto lB67A;
}

lB660:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -74;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 98;
	g672 = t1;
	goto lB67A;
}

lB725:
{
	A = g707;
	Z = g744;
	N = g401;
	*p20 = -73;
	RAM[g768 + 256u] = 40;
	S = g395;
	g543 = g395;
	goto lB68C;
}

bb30862:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g415;
	V = t0;
	t1 = g820;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g820 >> 8) & 1;
	C = t2;
	RAM[34] = t1;
	if (t2 == 0) {
		goto lB725;
	} else {
		t3 = RAM[35];
		t4 = t3 + 1;
		RAM[35] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		goto lB725;
	}
}

lB719:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g395 = S;
	g768 = g395 + 1;
	g707 = RAM[(g768 + 256u)];
	g744 = g707 == 0;
	g401 = (g707 >> 7);
	Y = g707;
	t0 = g395 + 2;
	S = t0;
	p20 = &RAM[(t0 + 256u)];
	t1 = *p20;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = 0;
	t2 = RAM[34];
	g820 = t2 + t1;
	if (((t2 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g820) & 128u) == 0u) {
			goto bb30861;
		} else {
			g415 = 1;
			goto bb30862;
		}
	} else {
		goto bb30861;
	}
}

bb30861:
{
	g415 = 0;
	goto bb30862;
}

lB690:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g483;
	t1 = RAM[34];
	t2 = RAM[35];
	t8 = (((g497 - t0) - 1));
	t3 = RAM[(((((t2 << 8u) | t1) + t8) & 65535u))];
	t4 = RAM[53];
	t5 = RAM[54];
	RAM[(((t5 << 8u) | t4) + t8) & 65535u] = t3;
	t6 = t0 + 1;
	if (t6 == g497) {
		Y = 0;
		S = g562;
		t7 = RAM[(g562 + 256u)];
		A = t7;
		Z = t7 == 0;
		N = t7 >> 7;
		g428 = t7;
		goto lB699;
	} else {
		g483 = t6;
		goto lB690;
	}
}

bb29837:
{
	g352 = 0;
	goto bb29838;
}

lB6D6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	RAM[34] = g691;
	RAM[35] = g298;
	t0 = RAM[(((g371 + 1) + 256u))];
	t1 = g371 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB6B1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	u8 t18;
	u16 t19;
	u16 t20;
	u16 t21;
	u16 t22;
	u16 t23;
	t0 = N;
	t1 = V;
	t2 = B;
	t3 = D;
	t4 = I;
	t5 = Z;
	t6 = C;
	g371 = S;
	RAM[g371 + 256u] = (((((((((((((((((t1 << 6) | (t0 << 7)))) | (t2 << 4)))) | (t3 << 3)))) | (t4 << 2)))) | t6))) | (t5 << 1));
	t7 = g371 - 1;
	t8 = RAM[34];
	t9 = RAM[35];
	t10 = RAM[(((t9 << 8u) | t8))];
	RAM[t7 + 256u] = t10;
	t11 = RAM[34];
	t12 = RAM[35];
	t19 = (t12 << 8u) | t11;
	g691 = RAM[(((t19 + 1u) & 65535u))];
	X = g691;
	g298 = RAM[(((t19 + 2u) & 65535u))];
	Y = g298;
	t13 = RAM[(t7 + 256u)];
	A = t13;
	S = g371;
	p19 = &RAM[(g371 + 256u)];
	t14 = *p19;
	N = t14 >> 7;
	V = ((t14 >> 6) & 1);
	B = ((t14 >> 4) & 1);
	D = ((t14 >> 3) & 1);
	I = ((t14 >> 2) & 1);
	t15 = (t14 >> 1) & 1;
	Z = t15;
	C = (t14 & 1);
	if (t15 == 0) {
		goto lB6D6;
	} else {
		t16 = RAM[52];
		t20 = g298 - t16;
		t21 = t20;
		C = (((t21 >> 8) & 1) ^ 1);
		Z = ((t21 & 255u) == 0u);
		N = t20 >> 7;
		if ((t21 & 255u) == 0u) {
			t17 = RAM[51];
			t22 = g691 - t17;
			t23 = t22;
			C = (((t23 >> 8) & 1) ^ 1);
			Z = ((t23 & 255u) == 0u);
			N = t22 >> 7;
			if ((t23 & 255u) == 0u) {
				*p19 = t13;
				S = t7;
				C = 0;
				t18 = RAM[51];
				g965 = t18 + t13;
				if (((t18 ^ t13) & 128u) == 0u) {
					if (((t13 ^ g965) & 128u) == 0u) {
						goto bb30263;
					} else {
						g166 = 1;
						goto bb30264;
					}
				} else {
					goto bb30263;
				}
			} else {
				goto lB6D6;
			}
		} else {
			goto lB6D6;
		}
	}
}

lB6D5:
{
	u8 t0;
	S = g371;
	t0 = RAM[(g371 + 256u)];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lB6D6;
}

bb30264:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g166;
	V = t0;
	t1 = g965;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g965 >> 8) & 1;
	C = t2;
	RAM[51] = t1;
	if (t2 == 0) {
		goto lB6D5;
	} else {
		t3 = RAM[52];
		t4 = t3 + 1;
		RAM[52] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		goto lB6D5;
	}
}

bb30263:
{
	g166 = 0;
	goto bb30264;
}

lB6EB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = RAM[(g18 + 256u)];
	t1 = g18 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB6DB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	t0 = g205;
	t1 = g630;
	g18 = g212;
	S = (g18 - 1);
	t2 = RAM[24];
	t6 = t1 - t2;
	t7 = t6;
	C = (((t7 >> 8) & 1) ^ 1);
	Z = ((t7 & 255u) == 0u);
	N = t6 >> 7;
	if ((t7 & 255u) == 0u) {
		t8 = t0;
		t3 = RAM[23];
		t9 = t8 - t3;
		t10 = t9;
		t4 = ((t10 >> 8) & 1) ^ 1;
		C = t4;
		Z = ((t10 & 255u) == 0u);
		N = t9 >> 7;
		if ((t10 & 255u) == 0u) {
			RAM[22] = t0;
			t11 = (t8 - 4) + t4;
			t12 = t11;
			V = (((((((t12 ^ t0) & 128u) == 0u) | (((s8 )t0) > -1))&1))) ? 0 : 1;
			t5 = t11;
			A = t5;
			C = (((t12 >> 8) & 1) ^ 1);
			RAM[23] = t5;
			Y = 0;
			Z = 1;
			N = 0;
			goto lB6EB;
		} else {
			goto lB6EB;
		}
	} else {
		goto lB6EB;
	}
}

lAA68:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g542;
	t1 = g710;
	t2 = g414;
	Z = t2;
	N = t1 >> 7;
	RAM[80] = t0;
	RAM[81] = t1;
	t3 = S;
	RAM[t3 + 256u] = -86;
	t4 = t3 - 1;
	S = t4;
	RAM[t4 + 256u] = 110;
	g205 = t0;
	g630 = t1;
	g212 = t4;
	goto lB6DB;
}

lAA4B:
{
	u8 t0;
	A = g745;
	Z = g745 == 0;
	N = g745 >> 7;
	Y = g198;
	t0 = g198 == 0;
	g542 = g745;
	g710 = g198;
	g414 = t0;
	goto lAA68;
}

lAA64:
{
	A = 97;
	Z = 0;
	N = 0;
	Y = 0;
	g542 = 97;
	g710 = 0;
	g414 = 1;
	goto lAA68;
}

lB6AA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g742;
	t1 = g568;
	RAM[34] = t1;
	RAM[35] = t0;
	t2 = S;
	RAM[t2 + 256u] = -74;
	t3 = t2 - 1;
	S = t3;
	RAM[t3 + 256u] = -80;
	g205 = t1;
	g630 = t0;
	g212 = t3;
	goto lB6DB;
}

lB037:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = A;
	RAM[97] = t0;
	t1 = X;
	RAM[98] = t1;
	t2 = Y;
	RAM[99] = t2;
	t3 = RAM[108];
	A = t3;
	t4 = RAM[109];
	Y = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	t5 = S;
	RAM[t5 + 256u] = -80;
	RAM[(t5 - 1) + 256u] = 67;
	S = (t5 - 2);
	g742 = t4;
	g568 = t3;
	goto lB6AA;
}

lB663:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[80];
	A = t0;
	t1 = RAM[81];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -74;
	RAM[(t2 - 1) + 256u] = 105;
	S = (t2 - 2);
	g742 = t1;
	g568 = t0;
	goto lB6AA;
}

lB66D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[111];
	A = t0;
	t1 = RAM[112];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -74;
	RAM[(t2 - 1) + 256u] = 115;
	S = (t2 - 2);
	g742 = t1;
	g568 = t0;
	goto lB6AA;
}

lB6A6:
{
	u8 t0;
	u8 t1;
	t0 = RAM[100];
	A = t0;
	t1 = RAM[101];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g742 = t1;
	g568 = t0;
	goto lB6AA;
}

lAB21:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = 35;
	S = (t0 - 2);
	goto lB6A6;
}

lAAB8:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[13];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	t2 = S;
	RAM[t2 + 256u] = -86;
	t3 = t2 - 1;
	S = t3;
	p4 = &RAM[(t3 + 256u)];
	if (t1 == 0) {
		*p4 = -66;
		t4 = t2 - 2;
		S = t4;
		Y = 1;
		Z = 0;
		N = 0;
		g235 = t4;
		goto lBDDF;
	} else {
		*p4 = -100;
		S = (t2 - 2);
		goto lAB21;
	}
}

lAAC2:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -60;
	S = (t0 - 2);
	goto lAB21;
}

lABCB:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -51;
	S = (t0 - 2);
	goto lAB21;
}

lB019:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = C;
	if (t0 == 0) {
		t1 = RAM[110];
		t2 = RAM[106];
		RAM[106] = ((((t1 | 127))) & t2);
		A = 105;
		Y = 0;
		Z = 1;
		N = 0;
		t3 = S;
		RAM[t3 + 256u] = -80;
		RAM[(t3 - 1) + 256u] = 41;
		t4 = t3 - 2;
		S = t4;
		RAM[36] = 105;
		g199 = 0;
		g37 = t4;
		goto lBC5D;
	} else {
		A = 0;
		RAM[13] = 0;
		t5 = RAM[77];
		t6 = t5 - 1;
		RAM[77] = t6;
		Z = (t5 == 1);
		N = t6 >> 7;
		t7 = S;
		RAM[t7 + 256u] = -80;
		RAM[(t7 - 1) + 256u] = 54;
		S = (t7 - 2);
		goto lB6A6;
	}
}

lB712:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[80];
	A = t0;
	t1 = RAM[81];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -73;
	RAM[(t2 - 1) + 256u] = 24;
	S = (t2 - 2);
	g742 = t1;
	g568 = t0;
	goto lB6AA;
}

lB764:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = RAM[(((t0 + 2) + 256u))];
	RAM[85] = t2;
	t3 = RAM[(((t0 + 5) + 256u))];
	X = t3;
	t4 = t0 + 6;
	t5 = RAM[(t4 + 256u)];
	RAM[80] = t5;
	t6 = t0 + 7;
	p21 = &RAM[(t6 + 256u)];
	t7 = *p21;
	RAM[81] = t7;
	*p21 = t2;
	RAM[t4 + 256u] = t1;
	Y = 0;
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	t8 = RAM[(t4 + 256u)];
	S = t6;
	t9 = RAM[(t6 + 256u)];
	t10 = (t8 + 1) + (t9 << 8);
	PC = t10;
	if ((t10 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB785:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	X = 0;
	RAM[13] = 0;
	t0 = A;
	Y = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB7E2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = RAM[113];
	X = t0;
	t1 = RAM[114];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[122] = t0;
	RAM[123] = t1;
	t2 = S;
	t3 = RAM[(((t2 + 1) + 256u))];
	t4 = t2 + 2;
	S = t4;
	t5 = RAM[(t4 + 256u)];
	t6 = (t3 + 1) + (t5 << 8);
	PC = t6;
	if ((t6 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lAC80:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -126;
	S = (t0 - 2);
	goto lB7E2;
}

lB7DD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Y = 0;
	Z = 1;
	N = 0;
	t3 = RAM[36];
	t4 = RAM[37];
	RAM[(t4 << 8u) | t3] = t2;
	goto lB7E2;
}

lB804:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = RAM[100];
	A = t0;
	t1 = RAM[101];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[20] = t1;
	RAM[21] = t0;
	t2 = S;
	t3 = RAM[(((t2 + 1) + 256u))];
	t4 = t2 + 2;
	S = t4;
	t5 = RAM[(t4 + 256u)];
	t6 = (t3 + 1) + (t5 << 8);
	PC = t6;
	if ((t6 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB827:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	t0 = X;
	A = t0;
	Y = 0;
	Z = 1;
	N = 0;
	t1 = RAM[20];
	t2 = RAM[21];
	RAM[(t2 << 8u) | t1] = t0;
	t3 = S;
	t4 = RAM[(((t3 + 1) + 256u))];
	t5 = t3 + 2;
	S = t5;
	t6 = RAM[(t5 + 256u)];
	t7 = (t4 + 1) + (t6 << 8);
	PC = t7;
	if ((t7 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB848:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB840:
{
	u8 t0;
	t0 = (g736 ^ g239) & g338;
	if (t0 == 0) {
		goto lB840;
	} else {
		A = t0;
		Z = t0 == 0;
		N = t0 >> 7;
		goto lB848;
	}
}

lB83C:
{
	u8 t0;
	u8 t1;
	g239 = X;
	RAM[74] = g239;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = RAM[20];
	t1 = RAM[21];
	g736 = RAM[(((t1 << 8u) | t0))];
	g338 = RAM[73];
	goto lB840;
}

lB8FB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g265;
	RAM[102] = t0;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB8F9:
{
	u8 t0;
	t0 = g44;
	RAM[97] = t0;
	g265 = t0;
	goto lB8FB;
}

lB8F7:
{
	A = 0;
	Z = 1;
	N = 0;
	g44 = 0;
	goto lB8F9;
}

lB7B0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Z;
	if (t0 == 0) {
		t1 = RAM[122];
		t2 = RAM[123];
		Y = t2;
		RAM[113] = t1;
		RAM[114] = t2;
		t3 = RAM[34];
		X = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		RAM[122] = t3;
		C = 0;
		t4 = A;
		g830 = t3 + t4;
		if (((t3 ^ t4) & 128u) == 0u) {
			if (((t4 ^ g830) & 128u) == 0u) {
				goto bb31789;
			} else {
				g210 = 1;
				goto bb31790;
			}
		} else {
			goto bb31789;
		}
	} else {
		goto lB8F7;
	}
}

lBF7B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		t1 = RAM[105];
		A = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		if (t1 == 0) {
			g44 = t1;
			goto lB8F9;
		} else {
			X = 78;
			Y = 0;
			Z = 1;
			N = 0;
			t2 = S;
			RAM[t2 + 256u] = -65;
			RAM[(t2 - 1) + 256u] = -118;
			S = (t2 - 2);
			goto lBBD4;
		}
	} else {
		goto lBFED;
	}
}

bb36572:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = g717;
	V = t0;
	t1 = g917;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (g917 >> 8) & 1;
	RAM[97] = t1;
	if (t1 == 0) {
		g265 = t1;
		goto lB8FB;
	} else {
		t2 = RAM[111];
		A = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		RAM[102] = t2;
		t3 = RAM[(((g766 + 1) + 256u))];
		t4 = g766 + 2;
		S = t4;
		t5 = RAM[(t4 + 256u)];
		t6 = (t3 + 1) + (t5 << 8);
		PC = t6;
		if ((t6 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	}
}

lBAC6:
{
	u8 t0;
	t0 = g137;
	g917 = ((((g881 & 255) + 128))) + (((s16 )(s8 )t0));
	if (((s8 )g552) > -1) {
		goto bb36571;
	} else {
		if (((g552 ^ g917) & 128u) == 0u) {
			goto bb36571;
		} else {
			g717 = 1;
			goto bb36572;
		}
	}
}

bb36571:
{
	g717 = 0;
	goto bb36572;
}

lBADA:
{
	u8 t0;
	t0 = g404;
	S = (t0 + 2);
	A = 0;
	Z = 1;
	N = 0;
	RAM[97] = 0;
	g265 = 0;
	goto lB8FB;
}

lB946:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB97D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g23;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB94D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = g240;
	t1 = RAM[98];
	RAM[98] = (t1 ^ -1);
	t2 = RAM[99];
	RAM[99] = (t2 ^ -1);
	t3 = RAM[100];
	RAM[100] = (t3 ^ -1);
	t4 = RAM[101];
	RAM[101] = (t4 ^ -1);
	t5 = RAM[112];
	A = (t5 ^ -1);
	t6 = -t5;
	RAM[112] = t6;
	Z = t5 == 0;
	N = t6 >> 7;
	if (t5 == 0) {
		g422 = t0;
		goto lB96F;
	} else {
		g23 = t0;
		goto lB97D;
	}
}

bb33373:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	RAM[t0 + 256u] = -72;
	RAM[(t0 - 1) + 256u] = -42;
	t1 = t0 - 2;
	S = t1;
	t2 = RAM[102];
	t3 = t2 ^ -1;
	A = t3;
	Z = (t2 == 0xff);
	N = t3 >> 7;
	RAM[102] = t3;
	g240 = t1;
	goto lB94D;
}

bb39509:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g839;
	A = t0;
	C = (((g843 >> 8) & 1) ^ 1);
	t1 = RAM[102];
	Z = t1 == 0;
	t2 = (t1 >> 7);
	N = t2;
	V = ((t1 >> 6) & 1);
	if (t2 == 0) {
		g681 = t0;
		goto lBCAF;
	} else {
		X = t0;
		A = -1;
		Z = 0;
		N = 1;
		RAM[104] = -1;
		t3 = S;
		RAM[t3 + 256u] = -68;
		RAM[(t3 - 1) + 256u] = -83;
		t4 = t3 - 2;
		S = t4;
		g240 = t4;
		goto lB94D;
	}
}

lBC9B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[97];
	A = t0;
	t1 = t0 == 0;
	Z = t1;
	t2 = (t0 >> 7);
	N = t2;
	if (t0 == 0) {
		RAM[98] = t0;
		RAM[99] = t0;
		RAM[100] = t0;
		RAM[101] = t0;
		Y = t0;
		Z = t1;
		N = t2;
		goto lBCF2;
	} else {
		C = 1;
		g839 = t0 - 160;
		g843 = g839;
		if (((g843 ^ t0) & 128u) == 0u) {
			goto bb39509;
		} else {
			goto bb39509;
		}
	}
}

lAA11:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = 19;
	S = (t0 - 2);
	goto lBC9B;
}

lB1BF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = RAM[97];
	A = t0;
	t4 = t0 - 144;
	t5 = t4;
	t1 = (t5 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if (t1 == 0) {
		A = -91;
		Y = -79;
		Z = 0;
		N = 1;
		t2 = S;
		RAM[t2 + 256u] = -79;
		RAM[(t2 - 1) + 256u] = -53;
		t3 = t2 - 2;
		S = t3;
		RAM[36] = -91;
		g199 = -79;
		g37 = t3;
		goto lBC5D;
	} else {
		goto lBC9B;
	}
}

lA9C7:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -55;
	S = (t0 - 2);
	goto lB1BF;
}

lAFEB:
{
	u8 t0;
	u8 t1;
	t0 = g104;
	RAM[11] = t0;
	t1 = S;
	RAM[t1 + 256u] = -81;
	RAM[(t1 - 1) + 256u] = -17;
	S = (t1 - 2);
	goto lB1BF;
}

lAFE6:
{
	u8 t0;
	Y = -1;
	t0 = RAM[160];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g104 = -1;
	goto lAFEB;
}

lAFE9:
{
	Y = 0;
	Z = 1;
	N = 0;
	g104 = 0;
	goto lAFEB;
}

lAFFF:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = 1;
	S = (t0 - 2);
	goto lB1BF;
}

bb48000_2e_lAED4_crit_edge:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = -42;
	S = (t0 - 2);
	goto lB1BF;
}

lBCCC:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = RAM[97];
	A = t0;
	t3 = t0 - 160;
	t4 = t3;
	t1 = (t4 >> 8) & 1;
	C = (t1 ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if (t1 == 0) {
		goto lBCF2;
	} else {
		t2 = S;
		RAM[t2 + 256u] = -68;
		RAM[(t2 - 1) + 256u] = -44;
		S = (t2 - 2);
		goto lBC9B;
	}
}

lBF8B:
{
	u8 t0;
	u8 t1;
	t0 = RAM[110];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (((s8 )t0) < 0) {
		t1 = S;
		RAM[t1 + 256u] = -65;
		RAM[(t1 - 1) + 256u] = -111;
		S = (t1 - 2);
		goto lBCCC;
	} else {
		goto lBF9E;
	}
}

lE00E:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 16;
	S = (t0 - 2);
	goto lBCCC;
}

lE27A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 124;
	S = (t0 - 2);
	goto lBCCC;
}

lBE32:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -66;
	RAM[(t0 - 1) + 256u] = 52;
	S = (t0 - 2);
	goto lBC9B;
}

lBE12:
{
	u8 t0;
	u8 t1;
	t0 = Z;
	if (t0 == 0) {
		t1 = N;
		if (t1 == 0) {
			goto lBE28;
		} else {
			goto lBE16;
		}
	} else {
		goto lBE32;
	}
}

lB96F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	t0 = g422;
	t1 = RAM[101];
	t2 = t1 + 1;
	RAM[101] = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0) {
		t3 = RAM[100];
		t4 = t3 + 1;
		RAM[100] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		if (t4 == 0) {
			t5 = RAM[99];
			t6 = t5 + 1;
			RAM[99] = t6;
			Z = t6 == 0;
			N = t6 >> 7;
			if (t6 == 0) {
				t7 = RAM[98];
				t8 = t7 + 1;
				RAM[98] = t8;
				Z = t8 == 0;
				N = t8 >> 7;
				g23 = t0;
				goto lB97D;
			} else {
				g23 = t0;
				goto lB97D;
			}
		} else {
			g23 = t0;
			goto lB97D;
		}
	} else {
		g23 = t0;
		goto lB97D;
	}
}

lBC23:
{
	u8 t0;
	u8 t1;
	t0 = g36;
	RAM[t0 + 256u] = -68;
	RAM[(t0 - 1) + 256u] = 37;
	t1 = t0 - 2;
	S = t1;
	g422 = t1;
	goto lB96F;
}

lBC1B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g470;
	t1 = RAM[97];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lBC1A;
	} else {
		t2 = RAM[112];
		t3 = (t2 >> 7);
		C = t3;
		t4 = t2 << 1;
		Z = ((t4 & 254u) == 0u);
		N = ((t2 >> 6) & 1);
		RAM[112] = t4;
		if (t3 == 0) {
			goto lBC1A;
		} else {
			g36 = t0;
			goto lBC23;
		}
	}
}

bb11344:
{
	u8 t0;
	u8 t1;
	t0 = g81;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -58;
	t1 = t0 - 2;
	S = t1;
	g470 = t1;
	goto lBC1B;
}

lAC8C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[14];
	A = t0;
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	t2 = S;
	RAM[t2 + 256u] = -84;
	RAM[(t2 - 1) + 256u] = -112;
	t3 = t2 - 2;
	S = t3;
	if (t1 == 0) {
		goto lBBD0;
	} else {
		g81 = t3;
		goto bb11344;
	}
}

lAE43:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = 69;
	t1 = t0 - 2;
	S = t1;
	g470 = t1;
	goto lBC1B;
}

lA778:
{
	u8 t0;
	u8 t1;
	t0 = RAM[102];
	t1 = RAM[98];
	RAM[98] = ((((t0 | 127))) & t1);
	A = -117;
	Y = -89;
	Z = 0;
	N = 1;
	RAM[34] = -117;
	RAM[35] = -89;
	goto lAE43;
}

lAE38:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g320;
	t1 = A;
	Y = t1;
	t2 = t0 + 1;
	t3 = RAM[(t2 + 256u)];
	RAM[34] = (t3 + 1);
	p7 = &RAM[(((t0 + 2) + 256u))];
	t4 = *p7;
	RAM[35] = t4;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	*p7 = t1;
	S = t2;
	goto lAE43;
}

lA7A2:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -92;
	t1 = t0 - 2;
	S = t1;
	g320 = t1;
	goto lAE38;
}

lADFA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g318;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = -4;
	S = (t0 - 2);
	t1 = Y;
	t8 = t1;
	t2 = RAM[(t8 + 41090u)];
	t3 = S;
	RAM[t3 + 256u] = t2;
	t4 = RAM[(t8 + 41089u)];
	RAM[(t3 - 1) + 256u] = t4;
	RAM[(t3 - 2) + 256u] = -82;
	RAM[(t3 - 3) + 256u] = 42;
	t5 = t3 - 4;
	S = t5;
	t6 = RAM[102];
	A = t6;
	t7 = RAM[(t8 + 41088u)];
	X = t7;
	Z = t7 == 0;
	N = t7 >> 7;
	g320 = t5;
	goto lAE38;
}

lADF9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = A;
	RAM[t0 + 256u] = t1;
	t2 = t0 - 1;
	S = t2;
	g318 = t2;
	goto lADFA;
}

lAF0F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = t0 + 2;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g318 = t1;
	goto lADFA;
}

lBBD4:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -69;
	RAM[(t0 - 1) + 256u] = -42;
	t1 = t0 - 2;
	S = t1;
	g470 = t1;
	goto lBC1B;
}

lB418:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = g282;
	t1 = 4 - t0;
	t2 = g246 - t0;
	t3 = RAM[71];
	t4 = RAM[72];
	t5 = RAM[(((((t4 << 8u) | t3) + t1) & 65535u))];
	RAM[t2 + 256u] = t5;
	if (((s8 )(t1 - 1)) < 0) {
		A = t5;
		t6 = RAM[72];
		Y = t6;
		Z = t6 == 0;
		N = t6 >> 7;
		RAM[(t2 - 1) + 256u] = -76;
		RAM[(t2 - 2) + 256u] = 34;
		S = (t2 - 3);
		goto lBBD4;
	} else {
		g282 = (t0 + 1);
		goto lB418;
	}
}

lBBCC:
{
	Y = 0;
	Z = 1;
	N = 0;
	goto lBBD4;
}

lBBCA:
{
	u8 t0;
	t0 = g391;
	S = (t0 - 1);
	X = 87;
	Z = 0;
	N = 0;
	goto lBBCC;
}

lE043:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g594;
	t1 = g693;
	RAM[113] = t1;
	RAM[114] = t0;
	t2 = S;
	RAM[t2 + 256u] = -32;
	t3 = t2 - 1;
	S = t3;
	RAM[t3 + 256u] = 73;
	g391 = t3;
	goto lBBCA;
}

lBA12:
{
	u8 t0;
	A = -63;
	Y = -71;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = 24;
	S = (t0 - 2);
	g594 = -71;
	g693 = -63;
	goto lE043;
}

lE2AD:
{
	A = -17;
	Y = -30;
	Z = 0;
	N = 1;
	g594 = -30;
	g693 = -17;
	goto lE043;
}

lE2A7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	p40 = &RAM[(t1 + 256u)];
	t2 = *p40;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (((s8 )t2) < 0) {
		*p40 = -30;
		RAM[t0 + 256u] = -84;
		S = (t0 - 1);
		goto lBFB4;
	} else {
		goto lE2AD;
	}
}

lE324:
{
	u8 t0;
	A = 62;
	Y = -29;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -29;
	RAM[(t0 - 1) + 256u] = 42;
	S = (t0 - 2);
	g594 = -29;
	g693 = 62;
	goto lE043;
}

lE316:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = RAM[97];
	A = t0;
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = t1 - 1;
	S = t2;
	t4 = t0 - 129;
	t5 = t4;
	t3 = (t5 >> 8) & 1;
	C = (t3 ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if (t3 == 0) {
		A = -68;
		Y = -71;
		Z = 0;
		N = 1;
		RAM[t2 + 256u] = -29;
		RAM[(t1 - 2) + 256u] = 35;
		S = (t1 - 3);
		goto lBB0F;
	} else {
		goto lE324;
	}
}

lE30E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[102];
	A = t0;
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	t2 = S;
	RAM[t2 + 256u] = t0;
	t3 = t2 - 1;
	S = t3;
	if (t1 == 0) {
		goto lE316;
	} else {
		RAM[t3 + 256u] = -29;
		RAM[(t2 - 2) + 256u] = 21;
		S = (t2 - 3);
		goto lBFB4;
	}
}

lE2B4:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -74;
	g391 = t1;
	goto lBBCA;
}

lE05D:
{
	u8 t0;
	u8 t1;
	t0 = g129;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 95;
	S = (t0 - 2);
	X = 92;
	t1 = RAM[22434];
	Z = t1 == 0;
	N = t1 >> 7;
	V = ((t1 >> 6) & 1);
	goto lBBCC;
}

lE033:
{
	u8 t0;
	u8 t1;
	A = -60;
	Y = -65;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 57;
	t1 = t0 - 2;
	S = t1;
	RAM[113] = -60;
	RAM[114] = -65;
	g129 = t1;
	goto lE05D;
}

lE04F:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 81;
	t1 = t0 - 2;
	S = t1;
	g129 = t1;
	goto lE05D;
}

lBBD0:
{
	u8 t0;
	u8 t1;
	t0 = RAM[73];
	X = t0;
	t1 = RAM[74];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	goto lBBD4;
}

lAD52:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = 84;
	S = (t0 - 2);
	goto lBBD0;
}

lE0F2:
{
	X = -117;
	Y = 0;
	Z = 1;
	N = 0;
	goto lBBD4;
}

lE2BE:
{
	u8 t0;
	X = 78;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -60;
	S = (t0 - 2);
	goto lBBD4;
}

lBC0C:
{
	u8 t0;
	u8 t1;
	t0 = g484;
	RAM[t0 + 256u] = -68;
	RAM[(t0 - 1) + 256u] = 14;
	t1 = t0 - 2;
	S = t1;
	g470 = t1;
	goto lBC1B;
}

lA9FC:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -2;
	t1 = t0 - 2;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

lBAE2:
{
	u8 t0;
	u8 t1;
	t0 = g613;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = -28;
	t1 = t0 - 2;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

lA9F2:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -12;
	t1 = t0 - 2;
	S = t1;
	g613 = t1;
	goto lBAE2;
}

lAA07:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = RAM[113];
	t1 = t0 + 1;
	Y = t1;
	t4 = t1 - 6;
	t5 = t4;
	C = (((t5 >> 8) & 1) ^ 1);
	Z = ((t5 & 255u) == 0u);
	N = t4 >> 7;
	if ((t5 & 255u) == 0u) {
		t2 = S;
		RAM[t2 + 256u] = -86;
		RAM[(t2 - 1) + 256u] = 16;
		t3 = t2 - 2;
		S = t3;
		g613 = t3;
		goto lBAE2;
	} else {
		g493 = t1;
		goto lA9ED;
	}
}

lBD5B:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -67;
	RAM[(t0 - 1) + 256u] = 93;
	t1 = t0 - 2;
	S = t1;
	g613 = t1;
	goto lBAE2;
}

bb40464:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g784;
	V = t0;
	t1 = g889;
	A = t1;
	Z = t1 == 0;
	t2 = (t1 >> 7);
	N = t2;
	C = (((g810 >> 8) & 1) ^ 1);
	RAM[94] = t1;
	if (t1 == 0) {
		goto lBD62;
	} else {
		if (t2 == 0) {
			goto lBD5B;
		} else {
			goto lBD52;
		}
	}
}

lBD49:
{
	u8 t0;
	u8 t1;
	t0 = g684;
	C = 1;
	t1 = RAM[93];
	g889 = ((((t0 - 1) - t1))) + 1;
	g810 = g889;
	if (((g810 ^ t0) & 128u) == 0u) {
		goto bb40463;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb40463;
		} else {
			g784 = 1;
			goto bb40464;
		}
	}
}

bb40348:
{
	u8 t0;
	u8 t1;
	t0 = g75;
	V = t0;
	t1 = g840;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = (((g873 >> 8) & 1) ^ 1);
	g684 = t1;
	goto lBD49;
}

lBD35:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[96];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	if (t1 == 0) {
		goto lBD47;
	} else {
		A = 0;
		Z = 1;
		N = 0;
		C = 1;
		t2 = RAM[94];
		g840 = -t2;
		g873 = g840;
		if ((g873 & 128u) == 0u) {
			goto bb40347;
		} else {
			if ((t2 & 128u) == 0u) {
				goto bb40347;
			} else {
				g75 = 1;
				goto bb40348;
			}
		}
	}
}

bb40347:
{
	g75 = 0;
	goto bb40348;
}

lBD47:
{
	u8 t0;
	t0 = RAM[94];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	g684 = t0;
	goto lBD49;
}

lBD0F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	t0 = A;
	t5 = t0;
	t6 = t5 - 46;
	t7 = t6;
	t1 = ((t7 >> 8) & 1) ^ 1;
	C = t1;
	Z = ((t7 & 255u) == 0u);
	N = t6 >> 7;
	if ((t7 & 255u) == 0u) {
		t3 = RAM[95];
		t10 = (t1 << 8) | t3;
		C = (t10 & 1);
		t4 = (t10 >> 1);
		RAM[95] = t4;
		Z = t4 == 0;
		N = ((t10 >> 8) & 1);
		t11 = t10 & 128;
		V = (t11 >> 7);
		if (t11 == 0) {
			goto lBD0A;
		} else {
			goto lBD47;
		}
	} else {
		t8 = t5 - 69;
		t9 = t8;
		C = (((t9 >> 8) & 1) ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if ((t9 & 255u) == 0u) {
			t2 = S;
			RAM[t2 + 256u] = -67;
			RAM[(t2 - 1) + 256u] = 25;
			S = (t2 - 2);
			PC = 115;
			goto not_found;
		} else {
			goto lBD47;
		}
	}
}

lBCF7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	t0 = g743;
	t1 = 10 - t0;
	RAM[(t1 + 93u) & 255u] = 0;
	t2 = t1 - 1;
	if (((s8 )t2) < 0) {
		X = t2;
		Z = (t1 == 1);
		N = t2 >> 7;
		t3 = C;
		if (t3 == 0) {
			goto lBD0D;
		} else {
			t4 = A;
			t5 = t4;
			t6 = t5 - 45;
			t7 = t6;
			C = (((t7 >> 8) & 1) ^ 1);
			Z = ((t7 & 255u) == 0u);
			N = t6 >> 7;
			if ((t7 & 255u) == 0u) {
				RAM[103] = t2;
				goto lBD0A;
			} else {
				t8 = t5 - 43;
				t9 = t8;
				C = (((t9 >> 8) & 1) ^ 1);
				Z = ((t9 & 255u) == 0u);
				N = t8 >> 7;
				if ((t9 & 255u) == 0u) {
					goto lBD0A;
				} else {
					goto lBD0F;
				}
			}
		}
	} else {
		g743 = (t0 + 1);
		goto lBCF7;
	}
}

lBCF3:
{
	Y = 0;
	X = 10;
	Z = 0;
	N = 0;
	g743 = 0;
	goto lBCF7;
}

lB7DA:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = -36;
	S = (t0 - 2);
	goto lBCF3;
}

lBD0D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = C;
	if (t0 == 0) {
		g181 = S;
		t1 = A;
		RAM[g181 + 256u] = t1;
		g563 = g181 - 1;
		S = g563;
		t2 = RAM[95];
		Z = t2 == 0;
		t3 = (t2 >> 7);
		N = t3;
		V = ((t2 >> 6) & 1);
		if (t3 == 0) {
			goto lBD71;
		} else {
			t4 = RAM[93];
			t5 = t4 + 1;
			RAM[93] = t5;
			Z = t5 == 0;
			N = t5 >> 7;
			goto lBD71;
		}
	} else {
		goto lBD0F;
	}
}

bb40463:
{
	g784 = 0;
	goto bb40464;
}

lBD5E:
{
	u8 t0;
	u8 t1;
	t0 = RAM[94];
	t1 = t0 - 1;
	RAM[94] = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	if (t0 == 1) {
		goto lBD62;
	} else {
		goto lBD5B;
	}
}

lBD71:
{
	u8 t0;
	RAM[g563 + 256u] = -67;
	RAM[(g181 - 2) + 256u] = 115;
	t0 = g181 - 3;
	S = t0;
	g613 = t0;
	goto lBAE2;
}

lBE21:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -66;
	RAM[(t0 - 1) + 256u] = 35;
	t1 = t0 - 2;
	S = t1;
	g613 = t1;
	goto lBAE2;
}

lBE1D:
{
	u8 t0;
	u8 t1;
	t0 = Z;
	if (t0 == 0) {
		t1 = N;
		if (t1 == 0) {
			goto lBE2F;
		} else {
			goto lBE21;
		}
	} else {
		goto lBE21;
	}
}

lBAFE:
{
	u8 t0;
	u8 t1;
	t0 = g704;
	RAM[(t0 - 1) + 256u] = -69;
	RAM[(t0 - 2) + 256u] = 0;
	t1 = t0 - 3;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

lBD52:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -67;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 84;
	g704 = t1;
	goto lBAFE;
}

lBD55:
{
	u8 t0;
	u8 t1;
	t0 = RAM[94];
	t1 = t0 + 1;
	RAM[94] = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lBD62;
	} else {
		goto lBD52;
	}
}

lBE28:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -66;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 42;
	g704 = t1;
	goto lBAFE;
}

lBE24:
{
	u8 t0;
	u8 t1;
	t0 = RAM[93];
	t1 = t0 - 1;
	RAM[93] = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	if (t0 == 1) {
		goto lBE28;
	} else {
		goto lBE16;
	}
}

lBD7E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g216;
	t1 = S;
	RAM[t1 + 256u] = t0;
	RAM[(t1 - 1) + 256u] = -67;
	RAM[(t1 - 2) + 256u] = -127;
	t2 = t1 - 3;
	S = t2;
	g484 = t2;
	goto lBC0C;
}

lBA20:
{
	u8 t0;
	u8 t1;
	t0 = S;
	p31 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p31;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	*p31 = -70;
	RAM[t0 + 256u] = 35;
	S = (t0 - 1);
	g216 = t1;
	goto lBD7E;
}

lBD74:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	p35 = &RAM[(t1 + 256u)];
	t2 = *p35;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	C = 1;
	t4 = t2 - 48;
	t5 = t4;
	V = (((((((t5 ^ t2) & 128u) == 0u) | (((s8 )t2) > -1))&1))) ? 0 : 1;
	t3 = t4;
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	C = (((t5 >> 8) & 1) ^ 1);
	*p35 = -67;
	RAM[t0 + 256u] = 122;
	S = (t0 - 1);
	g216 = t3;
	goto lBD7E;
}

lBF71:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = 115;
	t1 = t0 - 2;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

lE26B:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 109;
	t1 = t0 - 2;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

lE2B7:
{
	u8 t0;
	A = 0;
	Z = 1;
	N = 0;
	RAM[18] = 0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -67;
	S = (t0 - 2);
	goto lE26B;
}

lE277:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 121;
	t1 = t0 - 2;
	S = t1;
	g484 = t1;
	goto lBC0C;
}

bb43581:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g277;
	V = t0;
	t1 = g883;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t4 = g883 & 256u;
	C = (t4 >> 8u);
	if (t4 == 0u) {
		goto lE000;
	} else {
		t2 = S;
		RAM[t2 + 256u] = -65;
		RAM[(t2 - 1) + 256u] = -4;
		t3 = t2 - 2;
		S = t3;
		g36 = t3;
		goto lBC23;
	}
}

lBFF4:
{
	u8 t0;
	u8 t1;
	t0 = RAM[112];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = C;
	g883 = (t0 + 80) + (((s16 )(s8 )t1));
	if (((s8 )t0) < 0) {
		goto bb43580;
	} else {
		if (((t0 ^ g883) & 128u) == 0u) {
			goto bb43580;
		} else {
			g277 = 1;
			goto bb43581;
		}
	}
}

bb43580:
{
	g277 = 0;
	goto bb43581;
}

lB9BA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g168;
	C = 0;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb34790:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	t0 = g84;
	V = t0;
	t1 = g958;
	A = t1;
	Z = t1 == 0;
	t2 = (t1 >> 7);
	N = t2;
	t3 = (g958 >> 8) & 1;
	C = t3;
	if ((((((t2 == 0) ^ 1)&1)) | (t1 == 0))&1) {
		g121 = g429;
		g416 = g19;
		g600 = t1;
		goto lB985;
	} else {
		t7 = ((((g958 & 255) - 9))) + t3;
		t8 = t7;
		V = (((((((t8 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
		t4 = t7;
		t5 = (t8 >> 8) & 1;
		C = (t5 ^ 1);
		Y = t4;
		t6 = RAM[112];
		A = t6;
		Z = t6 == 0;
		N = t6 >> 7;
		if (t5 == 0) {
			g168 = g19;
			goto lB9BA;
		} else {
			g453 = g19;
			g444 = t4;
			g77 = t6;
			g506 = g429;
			goto lB9A6;
		}
	}
}

lB999:
{
	u8 t0;
	u8 t1;
	g19 = g140;
	g429 = g783;
	t0 = g314;
	t1 = C;
	g958 = (t0 + 8) + (((s16 )(s8 )t1));
	if (((s8 )t0) < 0) {
		goto bb34789;
	} else {
		if (((t0 ^ g958) & 128u) == 0u) {
			goto bb34789;
		} else {
			g84 = 1;
			goto bb34790;
		}
	}
}

lB897:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	u16 t12;
	t2 = g477;
	t3 = g413;
	t11 = t2 - 249;
	t12 = t11;
	C = (((t12 >> 8) & 1) ^ 1);
	Z = ((t12 & 255u) == 0u);
	t4 = t11;
	N = t4 >> 7;
	if (((s8 )t4) < 0) {
		t0 = S;
		RAM[t0 + 256u] = -72;
		RAM[(t0 - 1) + 256u] = 100;
		t1 = t0 - 2;
		S = t1;
		g140 = t1;
		g783 = t3;
		g314 = t2;
		goto lB999;
	} else {
		Y = t2;
		t5 = RAM[112];
		A = t5;
		p22 = &RAM[(((t3 + 1u) & 255u))];
		t6 = *p22;
		t7 = t6 & 1;
		C = t7;
		t8 = (t6 >> 1);
		Z = t8 == 0;
		N = 0;
		*p22 = t8;
		t9 = S;
		RAM[t9 + 256u] = -72;
		RAM[(t9 - 1) + 256u] = -94;
		t10 = t9 - 2;
		S = t10;
		g639 = t10;
		g345 = t2;
		g383 = t5;
		g611 = t7;
		g296 = t3;
		goto lB9B0;
	}
}

bb32762:
{
	u8 t0;
	u8 t1;
	t0 = g647;
	V = t0;
	t1 = g850;
	A = t1;
	C = (g850 >> 8) & 1;
	Y = 0;
	RAM[86] = 0;
	X = 97;
	Z = 0;
	N = 0;
	g477 = t1;
	g413 = 97;
	goto lB897;
}

bb32761:
{
	g647 = 0;
	goto bb32762;
}

lB985:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	t0 = g121;
	t1 = g416;
	t2 = g600;
	t8 = t0;
	p23 = &RAM[(((t8 + 4u) & 255u))];
	t3 = *p23;
	RAM[112] = t3;
	p24 = &RAM[(((t8 + 3u) & 255u))];
	t4 = *p24;
	*p23 = t4;
	p25 = &RAM[(((t8 + 2u) & 255u))];
	t5 = *p25;
	*p24 = t5;
	p26 = &RAM[(((t8 + 1u) & 255u))];
	t6 = *p26;
	*p25 = t6;
	t7 = RAM[104];
	Y = t7;
	Z = t7 == 0;
	N = t7 >> 7;
	*p26 = t7;
	g140 = t1;
	g783 = t0;
	g314 = t2;
	goto lB999;
}

lB983:
{
	u8 t0;
	u8 t1;
	t0 = g608;
	t1 = g760;
	X = 37;
	Z = 0;
	N = 0;
	g121 = 37;
	g416 = t0;
	g600 = t1;
	goto lB985;
}

lBA33:
{
	u8 t0;
	u8 t1;
	u8 t2;
	RAM[38] = 0;
	RAM[39] = 0;
	RAM[40] = 0;
	RAM[41] = 0;
	t0 = RAM[112];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = 65;
	t2 = t1 - 2;
	S = t2;
	if (t0 == 0) {
		g608 = t2;
		g760 = t0;
		goto lB983;
	} else {
		g59 = t0;
		goto lBA5E;
	}
}

lBA42:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[101];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = 70;
	t2 = t1 - 2;
	S = t2;
	if (t0 == 0) {
		g608 = t2;
		g760 = t0;
		goto lB983;
	} else {
		g59 = t0;
		goto lBA5E;
	}
}

lBA47:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[100];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = 75;
	t2 = t1 - 2;
	S = t2;
	if (t0 == 0) {
		g608 = t2;
		g760 = t0;
		goto lB983;
	} else {
		g59 = t0;
		goto lBA5E;
	}
}

lBA4C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[99];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = 80;
	t2 = t1 - 2;
	S = t2;
	if (t0 == 0) {
		g608 = t2;
		g760 = t0;
		goto lB983;
	} else {
		g59 = t0;
		goto lBA5E;
	}
}

lBCAF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	t0 = g681;
	X = 97;
	t10 = t0 - 249;
	t11 = t10;
	C = (((t11 >> 8) & 1) ^ 1);
	Z = ((t11 & 255u) == 0u);
	t1 = t10;
	N = t1 >> 7;
	if (((s8 )t1) < 0) {
		t2 = S;
		RAM[t2 + 256u] = -68;
		RAM[(t2 - 1) + 256u] = -73;
		t3 = t2 - 2;
		S = t3;
		g140 = t3;
		g783 = 97;
		g314 = t0;
		goto lB999;
	} else {
		Y = t0;
		t4 = RAM[102];
		t5 = RAM[98];
		t6 = t5 & 1;
		C = t6;
		t7 = (t5 >> 1) | (t4 & 128u);
		A = t7;
		Z = t7 == 0;
		N = t7 >> 7;
		RAM[98] = t7;
		t8 = S;
		RAM[t8 + 256u] = -68;
		RAM[(t8 - 1) + 256u] = -56;
		t9 = t8 - 2;
		S = t9;
		g639 = t9;
		g345 = t0;
		g383 = t7;
		g611 = t6;
		g296 = 97;
		goto lB9B0;
	}
}

lBCAE:
{
	u8 t0;
	t0 = X;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	g681 = t0;
	goto lBCAF;
}

bb34789:
{
	g84 = 0;
	goto bb34790;
}

lB9B0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	t0 = g639;
	t1 = g345;
	t2 = g383;
	t3 = g611;
	t4 = g296;
	t10 = t4;
	p28 = &RAM[(((t10 + 2u) & 255u))];
	t5 = *p28;
	t11 = (t3 << 8) | t5;
	*p28 = (t11 >> 1);
	p29 = &RAM[(((t10 + 3u) & 255u))];
	t6 = *p29;
	t12 = ((((t11 & 1) << 8))) | t6;
	*p29 = (t12 >> 1);
	p30 = &RAM[(((t10 + 4u) & 255u))];
	t7 = *p30;
	t13 = ((((t12 & 1) << 8))) | t7;
	*p30 = (t13 >> 1);
	t14 = ((((t13 & 1) << 8))) | t2;
	C = (t14 & 1);
	t8 = (t14 >> 1);
	A = t8;
	t9 = t1 + 1;
	Y = t9;
	Z = t9 == 0;
	N = t9 >> 7;
	if (t9 == 0) {
		g168 = t0;
		goto lB9BA;
	} else {
		g453 = t0;
		g444 = t9;
		g77 = t8;
		g506 = t4;
		goto lB9A6;
	}
}

lB9AC:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	u16 t4;
	t0 = g641;
	t2 = (g57 << 8) | t0;
	t3 = ((((t2 & 1) << 8))) | (t2 >> 1);
	t1 = t3 & 1;
	C = t1;
	t4 = (t3 >> 1);
	Z = ((t4 & 255u) == 0u);
	N = ((t3 >> 8) & 1);
	*p27 = t4;
	g639 = g417;
	g345 = g167;
	g383 = g76;
	g611 = t1;
	g296 = g38;
	goto lB9B0;
}

lB9A6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	g417 = g453;
	g167 = g444;
	g76 = g77;
	g38 = g506;
	p27 = &RAM[(((g38 + 1u) & 255u))];
	t0 = *p27;
	g57 = (t0 >> 7);
	C = g57;
	t3 = t0 << 1;
	Z = ((t3 & 254u) == 0u);
	N = ((t0 >> 6) & 1);
	t1 = t3;
	*p27 = t1;
	if (g57 == 0) {
		g641 = t1;
		goto lB9AC;
	} else {
		t2 = t1 | 1;
		*p27 = t2;
		Z = 0;
		N = t2 >> 7;
		g641 = t2;
		goto lB9AC;
	}
}

lBA8B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBA61:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g678 = g255;
	t0 = g771;
	g213 = g623;
	g591 = g290;
	g206 = g598;
	t1 = g156;
	g669 = g176;
	if (t1 == 0) {
		g579 = t0;
		g61 = g213;
		g696 = g591;
		g441 = g206;
		g285 = t1;
		goto lBA7D;
	} else {
		t2 = RAM[109];
		g969 = t2 + t0;
		if (((t2 ^ t0) & 128u) == 0u) {
			if (((t0 ^ g969) & 128u) == 0u) {
				goto bb35761;
			} else {
				g238 = 1;
				goto bb35762;
			}
		} else {
			goto bb35761;
		}
	}
}

lBA7D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	t0 = g579;
	t1 = g61;
	t2 = g696;
	t3 = g441;
	t4 = g285;
	t12 = (t4 << 8) | t3;
	t5 = (t12 >> 1);
	t13 = ((((t12 << 8) & 256))) | t2;
	t6 = (t13 >> 1);
	t14 = ((((t13 << 8) & 256))) | t1;
	t7 = (t14 >> 1);
	t15 = ((((t14 << 8) & 256))) | t0;
	t8 = (t15 >> 1);
	t9 = (((((((((t15 << 8) | g678)))) >> 1))));
	t10 = g669 & 1;
	t11 = (g669 >> 1);
	if (t11 == 0) {
		A = t11;
		Y = g669;
		Z = t11 == 0;
		N = 0;
		C = t10;
		RAM[38] = t5;
		RAM[39] = t6;
		RAM[40] = t7;
		RAM[41] = t8;
		RAM[112] = t9;
		goto lBA8B;
	} else {
		g255 = t9;
		g771 = t8;
		g623 = t7;
		g290 = t6;
		g598 = t5;
		g156 = t10;
		g176 = t11;
		goto lBA61;
	}
}

bb35963:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g495;
	V = t0;
	t1 = g817;
	t2 = (g817 >> 8) & 1;
	g579 = g644;
	g61 = g223;
	g696 = g680;
	g441 = t1;
	g285 = t2;
	goto lBA7D;
}

bb35896:
{
	u8 t0;
	u8 t1;
	t0 = g229;
	V = t0;
	g680 = g822;
	t1 = RAM[106];
	g817 = (t1 + g206) + ((((g822 >> 8) & 1)));
	if (((t1 ^ g206) & 128u) == 0u) {
		if (((g206 ^ g817) & 128u) == 0u) {
			goto bb35962;
		} else {
			g495 = 1;
			goto bb35963;
		}
	} else {
		goto bb35962;
	}
}

bb35829:
{
	u8 t0;
	u8 t1;
	t0 = g510;
	V = t0;
	g223 = g868;
	t1 = RAM[107];
	g822 = (t1 + g591) + ((((g868 >> 8) & 1)));
	if (((t1 ^ g591) & 128u) == 0u) {
		if (((g591 ^ g822) & 128u) == 0u) {
			goto bb35895;
		} else {
			g229 = 1;
			goto bb35896;
		}
	} else {
		goto bb35895;
	}
}

bb35762:
{
	u8 t0;
	u8 t1;
	t0 = g238;
	V = t0;
	g644 = g969;
	t1 = RAM[108];
	g868 = (t1 + g213) + ((((g969 >> 8) & 1)));
	if (((t1 ^ g213) & 128u) == 0u) {
		if (((g213 ^ g868) & 128u) == 0u) {
			goto bb35828;
		} else {
			g510 = 1;
			goto bb35829;
		}
	} else {
		goto bb35828;
	}
}

bb35761:
{
	g238 = 0;
	goto bb35762;
}

bb35828:
{
	g510 = 0;
	goto bb35829;
}

bb35895:
{
	g229 = 0;
	goto bb35896;
}

bb35962:
{
	g495 = 0;
	goto bb35963;
}

lBA5E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = g59;
	t1 = t0 & 1;
	C = t1;
	t2 = (t0 >> 1) | 128u;
	A = t2;
	Z = 0;
	N = 1;
	t3 = RAM[38];
	t4 = RAM[39];
	t5 = RAM[40];
	t6 = RAM[41];
	t7 = RAM[112];
	g255 = t7;
	g771 = t6;
	g623 = t5;
	g290 = t4;
	g598 = t3;
	g156 = t1;
	g176 = t2;
	goto lBA61;
}

lBA51:
{
	u8 t0;
	u8 t1;
	t0 = RAM[98];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -70;
	RAM[(t1 - 1) + 256u] = 85;
	S = (t1 - 2);
	g59 = t0;
	goto lBA5E;
}

lBA8C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u16 t13;
	u16 t14;
	t0 = g100;
	t1 = A;
	RAM[34] = t1;
	t2 = Y;
	RAM[35] = t2;
	t13 = (t2 << 8u) | t1;
	t3 = RAM[(((t13 + 4u) & 65535u))];
	RAM[109] = t3;
	t4 = RAM[(((t13 + 3u) & 65535u))];
	RAM[108] = t4;
	t5 = RAM[(((t13 + 2u) & 65535u))];
	RAM[107] = t5;
	t6 = RAM[(((t13 + 1u) & 65535u))];
	RAM[110] = t6;
	t7 = RAM[102];
	RAM[111] = (t6 ^ t7);
	RAM[106] = (t6 | 128u);
	Y = 0;
	t8 = RAM[t13];
	RAM[105] = t8;
	t9 = RAM[97];
	A = t9;
	Z = t9 == 0;
	N = t9 >> 7;
	t10 = RAM[(((t0 + 1) + 256u))];
	t11 = t0 + 2;
	S = t11;
	t12 = RAM[(t11 + 256u)];
	t14 = (t10 + 1) + (t12 << 8);
	PC = t14;
	if ((t14 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lB850:
{
	u8 t0;
	u8 t1;
	t0 = g492;
	RAM[t0 + 256u] = -72;
	RAM[(t0 - 1) + 256u] = 82;
	t1 = t0 - 2;
	S = t1;
	g100 = t1;
	goto lBA8C;
}

lBA0B:
{
	u8 t0;
	u8 t1;
	A = -68;
	Y = -71;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = 17;
	t1 = t0 - 2;
	S = t1;
	g492 = t1;
	goto lB850;
}

lE284:
{
	u8 t0;
	u8 t1;
	A = -22;
	Y = -30;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -118;
	t1 = t0 - 2;
	S = t1;
	g492 = t1;
	goto lB850;
}

lE32B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	p41 = &RAM[(t1 + 256u)];
	t2 = *p41;
	A = t2;
	t5 = t2 - 129;
	t6 = t5;
	t3 = (t6 >> 8) & 1;
	C = (t3 ^ 1);
	Z = ((t6 & 255u) == 0u);
	N = t5 >> 7;
	if (t3 == 0) {
		A = -32;
		Y = -30;
		Z = 0;
		N = 1;
		*p41 = -29;
		RAM[t0 + 256u] = 54;
		t4 = t0 - 1;
		S = t4;
		g492 = t4;
		goto lB850;
	} else {
		goto lE337;
	}
}

lB867:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -72;
	RAM[(t0 - 1) + 256u] = 105;
	t1 = t0 - 2;
	S = t1;
	g100 = t1;
	goto lBA8C;
}

lAD45:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	X = t0;
	t4 = t0;
	t1 = RAM[(t4 + 265u)];
	RAM[102] = t1;
	t2 = RAM[73];
	A = t2;
	t3 = RAM[74];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[t4 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = 81;
	S = (t0 - 2);
	goto lB867;
}

lB849:
{
	u8 t0;
	t0 = g535;
	S = (t0 - 1);
	A = 17;
	Y = -65;
	Z = 0;
	N = 1;
	goto lB867;
}

lBE2F:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -66;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 49;
	g535 = t1;
	goto lB849;
}

lBE2B:
{
	u8 t0;
	u8 t1;
	t0 = RAM[93];
	t1 = t0 + 1;
	RAM[93] = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		goto lBE2F;
	} else {
		goto lBE0B;
	}
}

lE28B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[102];
	A = t0;
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	t2 = S;
	RAM[t2 + 256u] = t0;
	t3 = t2 - 1;
	S = t3;
	if (t1 == 0) {
		goto lE29D;
	} else {
		RAM[t3 + 256u] = -30;
		t4 = t2 - 2;
		S = t4;
		RAM[t4 + 256u] = -110;
		g535 = t4;
		goto lB849;
	}
}

lBA19:
{
	u8 t0;
	A = -32;
	Y = -71;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = 31;
	S = (t0 - 2);
	goto lB867;
}

lE07D:
{
	u8 t0;
	u8 t1;
	t0 = g788;
	RAM[113] = g683;
	RAM[114] = t0;
	t1 = S;
	RAM[t1 + 256u] = -32;
	RAM[(t1 - 1) + 256u] = -125;
	S = (t1 - 2);
	goto lB867;
}

bb44230:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g161;
	V = t0;
	g683 = g847;
	A = g683;
	Z = g683 == 0;
	N = g683 >> 7;
	t2 = g847 & 256u;
	C = (t2 >> 8u);
	if (t2 == 0u) {
		g788 = g711;
		goto lE07D;
	} else {
		t1 = g711 + 1;
		Y = t1;
		Z = t1 == 0;
		N = t1 >> 7;
		g788 = t1;
		goto lE07D;
	}
}

lE073:
{
	u8 t0;
	t0 = RAM[113];
	A = t0;
	g711 = RAM[114];
	Y = g711;
	Z = g711 == 0;
	N = g711 >> 7;
	C = 0;
	g847 = t0 + 5;
	if (((s8 )t0) < 0) {
		goto bb44229;
	} else {
		if (((t0 ^ g847) & 128u) == 0u) {
			goto bb44229;
		} else {
			g161 = 1;
			goto bb44230;
		}
	}
}

bb44229:
{
	g161 = 0;
	goto bb44230;
}

lE0CC:
{
	u8 t0;
	A = -110;
	Y = -32;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = -46;
	S = (t0 - 2);
	goto lB867;
}

lE264:
{
	u8 t0;
	A = -32;
	Y = -30;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 106;
	S = (t0 - 2);
	goto lB867;
}

lE2A0:
{
	u8 t0;
	A = -22;
	Y = -30;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -90;
	S = (t0 - 2);
	goto lB867;
}

lE293:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[102];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (((s8 )t0) < 0) {
		goto lE2A0;
	} else {
		t1 = RAM[18];
		t2 = t1 ^ -1;
		A = t2;
		Z = (t1 == 0xff);
		N = t2 >> 7;
		RAM[18] = t2;
		goto lE29D;
	}
}

lBA28:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = 42;
	t1 = t0 - 2;
	S = t1;
	g100 = t1;
	goto lBA8C;
}

lBA24:
{
	A = -27;
	Y = -71;
	Z = 0;
	N = 1;
	goto lBA28;
}

lBDE7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	t0 = g508;
	t1 = Y;
	RAM[t1 + 255u] = t0;
	RAM[102] = t0;
	RAM[113] = t1;
	t2 = t1 + 1;
	Y = t2;
	A = 48;
	t3 = RAM[97];
	X = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t3 == 0) {
		RAM[t2 + 255u] = 48;
		g786 = t2;
		goto lBF07;
	} else {
		A = 0;
		t5 = t3 - 128;
		t6 = t5;
		t4 = (t6 >> 8) & 1;
		C = (t4 ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if (((((((t6 & 255u) == 0u) ^ 1)&1)) & (t4 == 0))&1) {
			g755 = 0;
			goto lBE09;
		} else {
			A = -67;
			Y = -67;
			Z = 0;
			N = 1;
			RAM[g465 + 256u] = -66;
			RAM[(g465 - 1) + 256u] = 6;
			S = (g465 - 2);
			goto lBA28;
		}
	}
}

lBDDF:
{
	u8 t0;
	u8 t1;
	g465 = g235;
	A = 32;
	t0 = RAM[102];
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	V = ((t0 >> 6) & 1);
	if (t1 == 0) {
		g508 = 32;
		goto lBDE7;
	} else {
		A = 45;
		Z = 0;
		N = 0;
		g508 = 45;
		goto lBDE7;
	}
}

lB468:
{
	u8 t0;
	u8 t1;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -76;
	RAM[(t0 - 1) + 256u] = 108;
	t1 = t0 - 2;
	S = t1;
	g235 = t1;
	goto lBDDF;
}

lBDD7:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -67;
	RAM[(t0 - 1) + 256u] = -39;
	t1 = t0 - 2;
	S = t1;
	g235 = t1;
	goto lBDDF;
}

lBFA6:
{
	u8 t0;
	A = 78;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = -84;
	S = (t0 - 2);
	goto lBA28;
}

lBFED:
{
	u8 t0;
	A = -65;
	Y = -65;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = -13;
	S = (t0 - 2);
	goto lBA28;
}

lBFAD:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = -81;
	S = (t0 - 2);
	goto lBFED;
}

lE04A:
{
	u8 t0;
	A = 87;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 78;
	S = (t0 - 2);
	goto lBA28;
}

lE052:
{
	A = 87;
	Y = 0;
	Z = 1;
	N = 0;
	goto lBA28;
}

lE070:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 114;
	S = (t0 - 2);
	goto lBA28;
}

lE06C:
{
	u8 t0;
	t0 = g560;
	RAM[113] = g544;
	Y = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lE070;
}

lE060:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[113];
	t1 = RAM[114];
	t2 = Y;
	t3 = RAM[(((((t1 << 8u) | t0) + t2) & 65535u))];
	RAM[103] = t3;
	g544 = t0 + 1;
	Y = g544;
	A = g544;
	Z = g544 == 0;
	N = g544 >> 7;
	if (g544 == 0) {
		t4 = t1 + 1;
		RAM[114] = t4;
		Z = t4 == 0;
		N = t4 >> 7;
		g560 = t4;
		goto lE06C;
	} else {
		g560 = t1;
		goto lE06C;
	}
}

lE084:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	A = 92;
	Y = 0;
	t0 = RAM[103];
	t1 = t0 - 1;
	RAM[103] = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	if (t0 == 1) {
		t2 = S;
		t3 = RAM[(((t2 + 1) + 256u))];
		t4 = t2 + 2;
		S = t4;
		t5 = RAM[(t4 + 256u)];
		t6 = (t3 + 1) + (t5 << 8);
		PC = t6;
		if ((t6 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		goto lE070;
	}
}

lE0C5:
{
	u8 t0;
	A = -115;
	Y = -32;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = -53;
	S = (t0 - 2);
	goto lBA28;
}

lBB0F:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -69;
	RAM[(t0 - 1) + 256u] = 17;
	t1 = t0 - 2;
	S = t1;
	g100 = t1;
	goto lBA8C;
}

lBA04:
{
	u8 t0;
	A = -37;
	Y = -71;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -70;
	RAM[(t0 - 1) + 256u] = 10;
	S = (t0 - 2);
	goto lBB0F;
}

lE2D5:
{
	A = 78;
	Y = 0;
	Z = 1;
	N = 0;
	goto lBB0F;
}

lBAF8:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBBA2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u16 t11;
	u16 t12;
	t0 = g160;
	t1 = g425;
	RAM[34] = t1;
	RAM[35] = t0;
	t11 = (t0 << 8u) | t1;
	t2 = RAM[(((t11 + 4u) & 65535u))];
	RAM[101] = t2;
	t3 = RAM[(((t11 + 3u) & 65535u))];
	RAM[100] = t3;
	t4 = RAM[(((t11 + 2u) & 65535u))];
	RAM[99] = t4;
	t5 = RAM[(((t11 + 1u) & 65535u))];
	RAM[102] = t5;
	RAM[98] = (t5 | 128u);
	Y = 0;
	t6 = RAM[t11];
	A = t6;
	Z = t6 == 0;
	N = t6 >> 7;
	RAM[97] = t6;
	RAM[112] = 0;
	t7 = S;
	t8 = RAM[(((t7 + 1) + 256u))];
	t9 = t7 + 2;
	S = t9;
	t10 = RAM[(t9 + 256u)];
	t12 = (t8 + 1) + (t10 << 8);
	PC = t12;
	if ((t12 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA78B:
{
	u8 t0;
	A = -68;
	Y = -71;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -111;
	S = (t0 - 2);
	g160 = -71;
	g425 = -68;
	goto lBBA2;
}

bb15466:
{
	u8 t0;
	u8 t1;
	t0 = g778;
	V = t0;
	C = (g838 >> 8) & 1;
	RAM[36] = g838;
	p5 = &RAM[(g174 + 256u)];
	t1 = *p5;
	A = t1;
	Y = 1;
	Z = 0;
	N = 0;
	*p5 = -83;
	RAM[g55 + 256u] = 68;
	S = (g174 - 2);
	g160 = 1;
	g425 = t1;
	goto lBBA2;
}

bb15412:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g31;
	V = t0;
	t1 = g885;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g885 >> 8) & 1;
	C = t2;
	RAM[g174 + 256u] = t1;
	g55 = g174 - 1;
	S = g55;
	g838 = ((((g885 & 255) + 6))) + t2;
	if (((s8 )t1) < 0) {
		goto bb15465;
	} else {
		if (((t1 ^ g838) & 128u) == 0u) {
			goto bb15465;
		} else {
			g778 = 1;
			goto bb15466;
		}
	}
}

bb15411:
{
	g31 = 0;
	goto bb15412;
}

bb15465:
{
	g778 = 0;
	goto bb15466;
}

lAFA0:
{
	u8 t0;
	u8 t1;
	t0 = RAM[100];
	A = t0;
	t1 = RAM[101];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g160 = t1;
	g425 = t0;
	goto lBBA2;
}

lAF71:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	u16 t15;
	t0 = C;
	if (t0 == 0) {
		goto lAFA0;
	} else {
		t1 = X;
		t7 = t1;
		t8 = t7 - 84;
		t9 = t8;
		C = (((t9 >> 8) & 1) ^ 1);
		Z = ((t9 & 255u) == 0u);
		N = t8 >> 7;
		if ((t9 & 255u) == 0u) {
			t2 = Y;
			t10 = t2 - 73;
			t11 = t10;
			C = (((t11 >> 8) & 1) ^ 1);
			Z = ((t11 & 255u) == 0u);
			N = t10 >> 7;
			if ((t11 & 255u) == 0u) {
				t3 = S;
				RAM[t3 + 256u] = -81;
				t4 = t3 - 1;
				S = t4;
				RAM[t4 + 256u] = 125;
				g692 = t4;
				goto lAF84;
			} else {
				goto lAFA0;
			}
		} else {
			t12 = t7 - 83;
			t13 = t12;
			C = (((t13 >> 8) & 1) ^ 1);
			Z = ((t13 & 255u) == 0u);
			N = t12 >> 7;
			if ((t13 & 255u) == 0u) {
				t5 = Y;
				t14 = t5 - 84;
				t15 = t14;
				C = (((t15 >> 8) & 1) ^ 1);
				Z = ((t15 & 255u) == 0u);
				N = t14 >> 7;
				if ((t15 & 255u) == 0u) {
					t6 = S;
					RAM[t6 + 256u] = -81;
					RAM[(t6 - 1) + 256u] = -100;
					S = (t6 - 2);
					PC = -73;
					goto not_found;
				} else {
					goto lAFA0;
				}
			} else {
				goto lAFA0;
			}
		}
	}
}

lBB07:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g120;
	t1 = g133;
	t2 = g159;
	RAM[111] = t0;
	t3 = S;
	RAM[t3 + 256u] = -69;
	RAM[(t3 - 1) + 256u] = 11;
	S = (t3 - 2);
	g160 = t1;
	g425 = t2;
	goto lBBA2;
}

lBB01:
{
	A = -7;
	Y = -70;
	X = 0;
	Z = 1;
	N = 0;
	g120 = 0;
	g133 = -70;
	g159 = -7;
	goto lBB07;
}

lE26E:
{
	u8 t0;
	u8 t1;
	A = -27;
	Y = -30;
	t0 = RAM[110];
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -30;
	RAM[(t1 - 1) + 256u] = 118;
	S = (t1 - 2);
	g120 = t0;
	g133 = -30;
	g159 = -27;
	goto lBB07;
}

lBF74:
{
	u8 t0;
	A = 17;
	Y = -65;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = 122;
	S = (t0 - 2);
	g160 = -65;
	g425 = 17;
	goto lBBA2;
}

lE2C5:
{
	u8 t0;
	A = 87;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -53;
	S = (t0 - 2);
	g160 = 0;
	g425 = 87;
	goto lBBA2;
}

lBBD7:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	u8 t18;
	u8 t19;
	u16 t20;
	t0 = X;
	RAM[34] = t0;
	t1 = Y;
	RAM[35] = t1;
	t2 = RAM[101];
	RAM[(((t1 << 8u) | t0) + 4u) & 65535u] = t2;
	t3 = RAM[100];
	t4 = RAM[34];
	t5 = RAM[35];
	RAM[(((t5 << 8u) | t4) + 3u) & 65535u] = t3;
	t6 = RAM[99];
	t7 = RAM[34];
	t8 = RAM[35];
	RAM[(((t8 << 8u) | t7) + 2u) & 65535u] = t6;
	t9 = RAM[102];
	t10 = RAM[98];
	t11 = RAM[34];
	t12 = RAM[35];
	RAM[(((t12 << 8u) | t11) + 1u) & 65535u] = ((((t9 | 127))) & t10);
	Y = 0;
	t13 = RAM[97];
	A = t13;
	Z = t13 == 0;
	N = t13 >> 7;
	t14 = RAM[34];
	t15 = RAM[35];
	RAM[(t15 << 8u) | t14] = t13;
	RAM[112] = 0;
	t16 = S;
	t17 = RAM[(((t16 + 1) + 256u))];
	t18 = t16 + 2;
	S = t18;
	t19 = RAM[(t18 + 256u)];
	t20 = (t17 + 1) + (t19 << 8);
	PC = t20;
	if ((t20 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBC02:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t0 = g661;
	t1 = 5 - t0;
	t8 = t1;
	t2 = RAM[(((t8 + 104u) & 255u))];
	RAM[(t8 + 96u) & 255u] = t2;
	t3 = t0 + 1;
	if (t3 == 5) {
		X = 0;
		A = t2;
		Z = (t1 == 1);
		N = 0;
		RAM[112] = 0;
		t4 = S;
		t5 = RAM[(((t4 + 1) + 256u))];
		t6 = t4 + 2;
		S = t6;
		t7 = RAM[(t6 + 256u)];
		t9 = (t5 + 1) + (t7 << 8);
		PC = t9;
		if ((t9 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		g661 = t3;
		goto lBC02;
	}
}

lBBFE:
{
	u8 t0;
	t0 = A;
	RAM[102] = t0;
	X = 5;
	Z = 0;
	N = 0;
	g661 = 0;
	goto lBC02;
}

lBBFC:
{
	u8 t0;
	t0 = RAM[110];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lBBFE;
}

lAFF0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[100];
	t1 = RAM[11];
	RAM[7] = (t0 ^ t1);
	t2 = RAM[101];
	t3 = t2 ^ t1;
	A = t3;
	Z = (t1 == t2);
	N = t3 >> 7;
	RAM[8] = t3;
	t4 = S;
	RAM[t4 + 256u] = -81;
	RAM[(t4 - 1) + 256u] = -2;
	S = (t4 - 2);
	goto lBBFC;
}

lBF9E:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = -96;
	S = (t0 - 2);
	goto lBBFE;
}

lBF99:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = Z;
	if (t0 == 0) {
		goto lBF9E;
	} else {
		t1 = Y;
		A = t1;
		t2 = RAM[7];
		Y = t2;
		Z = t2 == 0;
		N = t2 >> 7;
		goto lBF9E;
	}
}

lBC1A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBC11:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g294;
	t1 = 6 - t0;
	t4 = t1;
	t2 = RAM[(((t4 + 96u) & 255u))];
	RAM[(t4 + 104u) & 255u] = t2;
	t3 = t0 + 1;
	if (t3 == 6) {
		X = 0;
		A = t2;
		Z = (t1 == 1);
		N = 0;
		RAM[112] = 0;
		goto lBC1A;
	} else {
		g294 = t3;
		goto lBC11;
	}
}

lBC11_2e_preheader:
{
	X = 6;
	Z = 0;
	N = 0;
	g294 = 0;
	goto lBC11;
}

lE000:
{
	u8 t0;
	u8 t1;
	t0 = A;
	RAM[86] = t0;
	t1 = S;
	RAM[t1 + 256u] = -32;
	RAM[(t1 - 1) + 256u] = 4;
	S = (t1 - 2);
	goto lBC11_2e_preheader;
}

lBC38:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g534;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBC2B:
{
	u8 t0;
	u8 t1;
	t0 = g775;
	t1 = RAM[97];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	if (t1 == 0) {
		g534 = t0;
		goto lBC38;
	} else {
		g460 = t0;
		goto lBC2F;
	}
}

lA79F:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -95;
	t1 = t0 - 2;
	S = t1;
	g775 = t1;
	goto lBC2B;
}

lA795:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = A;
	t2 = t0 - 169;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		t1 = S;
		RAM[t1 + 256u] = -89;
		RAM[(t1 - 1) + 256u] = -101;
		S = (t1 - 2);
		PC = 115;
		goto not_found;
	} else {
		goto lA79F;
	}
}

lB9EA:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -71;
	RAM[(t0 - 1) + 256u] = -20;
	t1 = t0 - 2;
	S = t1;
	g775 = t1;
	goto lBC2B;
}

lBFA1:
{
	u8 t0;
	u8 t1;
	t0 = Y;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = t0;
	RAM[(t1 - 1) + 256u] = -65;
	RAM[(t1 - 2) + 256u] = -91;
	S = (t1 - 3);
	goto lB9EA;
}

lBC39:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -68;
	RAM[(t0 - 1) + 256u] = 59;
	t1 = t0 - 2;
	S = t1;
	g775 = t1;
	goto lBC2B;
}

lBC5D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u8 t12;
	u8 t13;
	u8 t14;
	u8 t15;
	u8 t16;
	u8 t17;
	u8 t18;
	u8 t19;
	u16 t20;
	u16 t21;
	u16 t22;
	u16 t23;
	u16 t24;
	u16 t25;
	u16 t26;
	u16 t27;
	u16 t28;
	t0 = g199;
	g261 = g37;
	RAM[37] = t0;
	t1 = RAM[36];
	t20 = (t0 << 8u) | t1;
	t2 = RAM[t20];
	A = t2;
	Y = 1;
	X = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0){
		g775 = g261;
		goto lBC2B;
	} else {
		t3 = RAM[(((t20 + 1u) & 65535u))];
		g86 = RAM[102];
		t4 = t3 ^ g86;
		A = t4;
		Z = (g86 == t3);
		N = t4 >> 7;
		if (((s8 )t4) < 0) {
			g460 = g261;
			goto lBC2F;
		} else {
			t5 = RAM[97];
			t21 = t2 - t5;
			t22 = t21;
			t6 = ((t22 >> 8) & 1) ^ 1;
			C = t6;
			Z = ((t22 & 255u) == 0u);
			N = t21 >> 7;
			if ((t22 & 255u) == 0u) {
				t7 = t3 | 128u;
				A = t7;
				t8 = RAM[98];
				t23 = t7 - t8;
				t24 = t23;
				t9 = ((t24 >> 8) & 1) ^ 1;
				C = t9;
				Z = ((t24 & 255u) == 0u);
				N = t23 >> 7;
				if ((t24 & 255u) == 0u) {
					Y = 2;
					t10 = RAM[(((t20 + 2u) & 65535u))];
					A = t10;
					t11 = RAM[99];
					t25 = t10 - t11;
					t26 = t25;
					t12 = ((t26 >> 8) & 1) ^ 1;
					C = t12;
					Z = ((t26 & 255u) == 0u);
					N = t25 >> 7;
					if ((t26 & 255u) == 0u) {
						Y = 3;
						t13 = RAM[(((t20 + 3u) & 65535u))];
						A = t13;
						t14 = RAM[100];
						t27 = t13 - t14;
						t28 = t27;
						t15 = ((t28 >> 8) & 1) ^ 1;
						C = t15;
						Z = ((t28 & 255u) == 0u);
						N = t27 >> 7;
						if ((t28 & 255u) == 0u) {
							Y = 4;
							t16 = RAM[112];
							t17 = ((((((((((((((127 - t16)))))) >> 8u))))) & 1))) ^ 1;
							C = t17;
							t18 = RAM[(((t20 + 4u) & 65535u))];
							A = t18;
							Z = t18 == 0;
							N = t18 >> 7;
							t19 = RAM[101];
							g908 = ((((t18 - 1) - t19))) + t17;
							g853 = g908;
							if (((g853 ^ t18) & 128u) == 0u) {
								goto bb39415;
							} else {
								if (((t19 ^ t18) & 128u) == 0u) {
									goto bb39415;
								} else {
									g3 = 1;
									goto bb39416;
								}
							}
						} else {
							g787 = t15;
							goto lBC92;
						}
					} else {
						g787 = t12;
						goto lBC92;
					}
				} else {
					g787 = t9;
					goto lBC92;
				}
			} else {
				g787 = t6;
				goto lBC92;
			}
		}
	}
}

lAD55:
{
	u8 t0;
	u8 t1;
	Y = 1;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = 89;
	t1 = t0 - 2;
	S = t1;
	g199 = 1;
	g37 = t1;
	goto lBC5D;
}

lBE0B:
{
	u8 t0;
	u8 t1;
	A = -72;
	Y = -67;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -66;
	RAM[(t0 - 1) + 256u] = 17;
	t1 = t0 - 2;
	S = t1;
	RAM[36] = -72;
	g199 = -67;
	g37 = t1;
	goto lBC5D;
}

lBE09:
{
	u8 t0;
	t0 = g755;
	RAM[93] = t0;
	goto lBE0B;
}

lBE07:
{
	A = -9;
	Z = 0;
	N = 1;
	g755 = -9;
	goto lBE09;
}

lBE16:
{
	u8 t0;
	u8 t1;
	A = -77;
	Y = -67;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -66;
	RAM[(t0 - 1) + 256u] = 28;
	t1 = t0 - 2;
	S = t1;
	RAM[36] = -77;
	g199 = -67;
	g37 = t1;
	goto lBC5D;
}

lBF92:
{
	u8 t0;
	u8 t1;
	A = 78;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -65;
	RAM[(t0 - 1) + 256u] = -104;
	t1 = t0 - 2;
	S = t1;
	RAM[36] = 78;
	g199 = 0;
	g37 = t1;
	goto lBC5D;
}

lE097:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = -103;
	t1 = t0 - 2;
	S = t1;
	g775 = t1;
	goto lBC2B;
}

lBC31:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g408;
	t1 = g649;
	t2 = C;
	t3 = (((((((((t1 << 1) | (((s16 )(s8 )t2)))))) >> 8))));
	C = t3;
	A = -1;
	Z = 0;
	N = 1;
	if (t3 == 0) {
		A = 1;
		Z = 0;
		N = 0;
		g534 = t0;
		goto lBC38;
	} else {
		g534 = t0;
		goto lBC38;
	}
}

lBC2F:
{
	u8 t0;
	u8 t1;
	t0 = g460;
	t1 = RAM[102];
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	g408 = t0;
	g649 = t1;
	goto lBC31;
}

lBC92:
{
	u8 t0;
	u8 t1;
	t0 = g787;
	A = g86;
	Z = g86 == 0;
	N = g86 >> 7;
	if (t0 == 0){
		g408 = g261;
		g649 = g86;
		goto lBC31;
	} else {
		t1 = g86 ^ -1;
		A = t1;
		Z = (g86 == 0xff);
		N = t1 >> 7;
		g408 = g261;
		g649 = t1;
		goto lBC31;
	}
}

bb39416:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g3;
	V = t0;
	t1 = g908;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = ((g853 >> 8) & 1) ^ 1;
	C = t2;
	if (t1 == 0){
		goto lBCBA;
	} else {
		g787 = t2;
		goto lBC92;
	}
}

bb39415:
{
	g3 = 0;
	goto bb39416;
}

lBC58:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = RAM[102];
	C = (t0 & 1);
	t1 = (t0 >> 1);
	Z = t1 == 0;
	N = 0;
	RAM[102] = t1;
	t2 = S;
	t3 = RAM[(((t2 + 1) + 256u))];
	t4 = t2 + 2;
	S = t4;
	t5 = RAM[(t4 + 256u)];
	t6 = (t3 + 1) + (t5 << 8);
	PC = t6;
	if ((t6 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBCBA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBCB8:
{
	u8 t0;
	t0 = Y;
	RAM[104] = t0;
	goto lBCBA;
}

lBCC9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = Y;
	RAM[104] = t0;
	t1 = S;
	t2 = RAM[(((t1 + 1) + 256u))];
	t3 = t1 + 2;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	t5 = (t2 + 1) + (t4 << 8);
	PC = t5;
	if ((t5 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBCF2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBD62:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = RAM[103];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (((s8 )t0) < 0) {
		goto lBFB4;
	} else {
		t1 = S;
		t2 = RAM[(((t1 + 1) + 256u))];
		t3 = t1 + 2;
		S = t3;
		t4 = RAM[(t3 + 256u)];
		t5 = (t2 + 1) + (t4 << 8);
		PC = t5;
		if ((t5 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	}
}

lBF0C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	A = 0;
	Y = 1;
	Z = 0;
	N = 0;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

bb43015:
{
	u8 t0;
	u16 t1;
	t0 = g648;
	V = t0;
	C = (g858 >> 8) & 1;
	t1 = g729;
	RAM[t1 + 259u] = g858;
	RAM[t1 + 258u] = g527;
	A = 0;
	Z = 1;
	N = 0;
	RAM[t1 + 260u] = 0;
	goto lBF0C;
}

lBEEF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	t0 = g682;
	t1 = g722;
	t2 = g52;
	g527 = t0 + 48;
	t6 = (t2 - 11) + (((s16 )(s8 )t1));
	t7 = t6;
	t3 = (((((((t7 ^ t2) & 128u) == 0u) | (((s8 )t2) > -1))&1))) ? 0 : 1;
	t4 = t6;
	t8 = t7 & 256u;
	t5 = (t8 >> 8u) ^ 1;
	if (t8 == 0u){
		g682 = (t0 + 1);
		g722 = t5;
		g52 = t4;
		goto lBEEF;
	} else {
		X = g527;
		Z = t4 == 0;
		N = t4 >> 7;
		A = t4;
		C = t5;
		V = t3;
		g858 = ((((t6 & 255) + 58))) + t5;
		if (((s8 )t4) < 0) {
			goto bb43014;
		} else {
			if (((t4 ^ g858) & 128u) == 0u) {
				goto bb43014;
			} else {
				g648 = 1;
				goto bb43015;
			}
		}
	}
}

lBEE3:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g348;
	t1 = g180;
	t2 = g729;
	RAM[t2 + 257u] = t1;
	RAM[t2 + 256u] = 69;
	A = t0;
	X = 47;
	Z = 0;
	N = 0;
	C = 1;
	g682 = 0;
	g722 = 1;
	g52 = t0;
	goto lBEEF;
}

lBED3:
{
	u8 t0;
	u8 t1;
	g729 = g632;
	A = 43;
	t0 = RAM[94];
	X = t0;
	Z = t0 == 0;
	t1 = (t0 >> 7);
	N = t1;
	if (t0 == 0){
		g786 = g729;
		goto lBF07;
	} else {
		if (t1 == 0){
			g348 = t0;
			g180 = 43;
			goto lBEE3;
		} else {
			A = 0;
			Z = 1;
			N = 0;
			C = 1;
			g904 = -t0;
			g882 = g904;
			if ((g882 & 128u) == 0u) {
				goto bb42841;
			} else {
				if ((t0 & 128u) == 0u) {
					goto bb42841;
				} else {
					g486 = 1;
					goto bb42842;
				}
			}
		}
	}
}

lBEC6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	u16 t5;
	u16 t6;
	t0 = g423;
	t1 = g379 - t0;
	t2 = RAM[(t1 + 255u)];
	t4 = t2;
	if (((t4 - 48) & 255u) == 0u) {
		g423 = (t0 + 1);
		goto lBEC6;
	} else {
		t3 = t1 - 1;
		Y = t3;
		A = t2;
		t5 = t4 - 46;
		t6 = t5;
		C = (((t6 >> 8) & 1) ^ 1);
		Z = ((t6 & 255u) == 0u);
		N = t5 >> 7;
		if ((t6 & 255u) == 0u) {
			g632 = t3;
			goto lBED3;
		} else {
			Y = t1;
			Z = (g379 == t0);
			N = t1 >> 7;
			g632 = t1;
			goto lBED3;
		}
	}
}

lBEC4:
{
	u16 t0;
	t0 = g895;
	A = g192;
	C = (((t0 >> 8) & 1) ^ 1);
	V = g101;
	X = g192;
	Y = g379;
	Z = g379 == 0;
	N = g379 >> 7;
	g423 = 0;
	goto lBEC6;
}

lBE6A:
{
	u8 t0;
	u8 t1;
	g45 = g494;
	g487 = g739;
	t0 = RAM[101];
	g912 = g487;
	t1 = RAM[(g912 + 48921u)];
	g834 = t1 + t0;
	if (((t1 ^ t0) & 128u) == 0u) {
		goto bb41974;
	} else {
		goto bb41974;
	}
}

bb42205:
{
	g91 = (g947 >> 8) & 1;
	RAM[98] = g947;
	g119 = g45 + 1;
	if (g91 == 0){
		if ((g119 >> 7) == 0) {
			g494 = g119;
			g739 = g487;
			goto lBE6A;
		} else {
			goto lBE90;
		}
	} else {
		if ((g119 >> 7) == 0) {
			goto lBE90;
		} else {
			g494 = g119;
			g739 = g487;
			goto lBE6A;
		}
	}
}

bb42128:
{
	u8 t0;
	u8 t1;
	RAM[99] = g869;
	t0 = RAM[98];
	t1 = RAM[(g912 + 48918u)];
	g947 = (t1 + t0) + ((((g869 >> 8) & 1)));
	if (((t1 ^ t0) & 128u) == 0u) {
		goto bb42205;
	} else {
		goto bb42205;
	}
}

bb42051:
{
	u8 t0;
	u8 t1;
	RAM[100] = g851;
	t0 = RAM[99];
	t1 = RAM[(g912 + 48919u)];
	g869 = (t1 + t0) + ((((g851 >> 8) & 1)));
	if (((t1 ^ t0) & 128u) == 0u) {
		goto bb42128;
	} else {
		goto bb42128;
	}
}

bb41974:
{
	u8 t0;
	u8 t1;
	RAM[101] = g834;
	t0 = RAM[100];
	t1 = RAM[(g912 + 48920u)];
	g851 = (t1 + t0) + ((((g834 >> 8) & 1)));
	if (((t1 ^ t0) & 128u) == 0u) {
		goto bb42051;
	} else {
		goto bb42051;
	}
}

lBEB2:
{
	u8 t0;
	u16 t1;
	u16 t2;
	u16 t3;
	g379 = g92;
	RAM[113] = g379;
	t0 = RAM[71];
	g192 = (g224 & 128u) ^ 128u;
	t1 = t0;
	t2 = t1 - 36;
	if ((t2 & 255u) == 0u) {
		g895 = t2;
		goto lBEC4;
	} else {
		t3 = t1 - 60;
		if ((t3 & 255u) == 0u) {
			g895 = t3;
			goto lBEC4;
		} else {
			g494 = g192;
			g739 = t0;
			goto lBE6A;
		}
	}
}

bb42362:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	g101 = g331;
	g224 = g975;
	RAM[71] = (g487 + 4);
	t0 = RAM[113];
	t1 = t0 + 1;
	RAM[t1 + 255u] = (g224 & 127);
	t2 = RAM[93];
	RAM[93] = (t2 - 1);
	if (t2 == 1){
		t3 = t0 + 2;
		RAM[t3 + 255u] = 46;
		g92 = t3;
		goto lBEB2;
	} else {
		g92 = t1;
		goto lBEB2;
	}
}

lBE97:
{
	u8 t0;
	u8 t1;
	t0 = g107;
	t1 = g98;
	g975 = (t1 + 47) + (((s16 )(s8 )t0));
	if (((s8 )t1) < 0) {
		goto bb42361;
	} else {
		if (((t1 ^ g975) & 128u) == 0u) {
			goto bb42361;
		} else {
			g331 = 1;
			goto bb42362;
		}
	}
}

lBE90:
{
	u8 t0;
	if (g91 == 0){
		g107 = g91;
		g98 = g119;
		goto lBE97;
	} else {
		t0 = -2 - g45;
		g888 = (t0 + 10) + g91;
		if (((s8 )g119) > -1) {
			goto bb42314;
		} else {
			goto bb42314;
		}
	}
}

bb42314:
{
	u8 t0;
	u8 t1;
	t0 = g888;
	t1 = (g888 >> 8) & 1;
	g107 = t1;
	g98 = t0;
	goto lBE97;
}

bb42361:
{
	g331 = 0;
	goto bb42362;
}

lBE6A_2e_preheader:
{
	u8 t0;
	t0 = g266;
	X = 128u;
	Z = 0;
	N = 1;
	g494 = 128u;
	g739 = t0;
	goto lBE6A;
}

lAF4B:
{
	u8 t0;
	u8 t1;
	t0 = Y;
	RAM[94] = t0;
	RAM[113] = (t0 - 1);
	RAM[93] = 6;
	Y = 36;
	Z = 0;
	N = 0;
	t1 = S;
	RAM[t1 + 256u] = -81;
	RAM[(t1 - 1) + 256u] = 88;
	S = (t1 - 2);
	g266 = 36;
	goto lBE6A_2e_preheader;
}

lBE66:
{
	Y = 0;
	Z = 1;
	N = 0;
	g266 = 0;
	goto lBE6A_2e_preheader;
}

lBE48:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u16 t8;
	u16 t9;
	t0 = g175;
	t1 = g313;
	t2 = g728;
	t8 = (t2 - 3) + (((s16 )(s8 )t1));
	t9 = t8;
	V = (((((((t9 ^ t2) & 128u) == 0u) | (((s8 )t2) > -1))&1))) ? 0 : 1;
	C = (((t9 >> 8) & 1) ^ 1);
	RAM[94] = t8;
	RAM[93] = t0;
	A = t0;
	t3 = t0 == 0;
	Z = t3;
	t4 = (t0 >> 7);
	N = t4;
	if ((((((t0 == 0) ^ 1)&1)) & (t4 == 0))&1) {
		goto lBE66;
	} else {
		t5 = RAM[113];
		t6 = t5 + 1;
		Y = t6;
		RAM[t6 + 255u] = 46;
		A = t0;
		Z = t3;
		N = t4;
		if (t0 == 0){
			g720 = t6;
			goto lBE64;
		} else {
			A = 48;
			t7 = t5 + 2;
			Y = t7;
			Z = t7 == 0;
			N = t7 >> 7;
			RAM[t7 + 255u] = 48;
			g720 = t7;
			goto lBE64;
		}
	}
}

bb41618:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	t0 = g685;
	V = t0;
	t1 = g964;
	A = t1;
	Z = t1 == 0;
	t2 = (t1 >> 7);
	N = t2;
	C = (g964 >> 8) & 1;
	if (t2 == 0){
		t5 = g964 & 255;
		t6 = t5 - 11;
		t7 = t6;
		t3 = (t7 >> 8) & 1;
		t4 = t3 ^ 1;
		C = t4;
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if (t3 == 0){
			g175 = 1;
			g313 = t4;
			g728 = t1;
			goto lBE48;
		} else {
			g982 = (t5 + 255) + t4;
			if (((s8 )t1) > -1) {
				goto bb41696;
			} else {
				if (((t1 ^ g982) & 128u) == 0u) {
					goto bb41696;
				} else {
					g556 = 1;
					goto bb41697;
				}
			}
		}
	} else {
		g687 = 1;
		g17 = t1;
		goto lBE47;
	}
}

lBE35:
{
	u8 t0;
	X = 1;
	t0 = RAM[93];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 0;
	g964 = t0 + 10;
	if (((s8 )t0) < 0) {
		goto bb41617;
	} else {
		if (((t0 ^ g964) & 128u) == 0u) {
			goto bb41617;
		} else {
			g685 = 1;
			goto bb41618;
		}
	}
}

bb41617:
{
	g685 = 0;
	goto bb41618;
}

lBE47:
{
	u8 t0;
	u8 t1;
	t0 = g687;
	t1 = g17;
	C = 1;
	g175 = t0;
	g313 = 1;
	g728 = t1;
	goto lBE48;
}

bb41697:
{
	u8 t0;
	u8 t1;
	t0 = g556;
	V = t0;
	t1 = g982;
	C = (g982 >> 8) & 1;
	X = t1;
	A = 2;
	Z = 0;
	N = 0;
	g687 = t1;
	g17 = 2;
	goto lBE47;
}

bb41696:
{
	g556 = 0;
	goto bb41697;
}

lBE64:
{
	u8 t0;
	t0 = g720;
	RAM[113] = t0;
	goto lBE66;
}

bb42842:
{
	u8 t0;
	u8 t1;
	t0 = g486;
	V = t0;
	t1 = g904;
	C = (((g882 >> 8) & 1) ^ 1);
	X = t1;
	A = 45;
	Z = 0;
	N = 0;
	g348 = t1;
	g180 = 45;
	goto lBEE3;
}

bb42841:
{
	g486 = 0;
	goto bb42842;
}

bb43014:
{
	g648 = 0;
	goto bb43015;
}

lBF07:
{
	u8 t0;
	t0 = g786;
	A = 0;
	Z = 1;
	N = 0;
	RAM[t0 + 256u] = 0;
	goto lBF0C;
}

lBFBE:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lBFB0:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = t2 & 1;
	C = t3;
	t4 = (t2 >> 1);
	Z = t4 == 0;
	N = 0;
	A = t4;
	if (t3 == 0){
		goto lBFBE;
	} else {
		goto lBFB4;
	}
}

lBFB4:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[97];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0){
		goto lBFBE;
	} else {
		t1 = RAM[102];
		t2 = t1 ^ -1;
		A = t2;
		Z = (t1 == 0xff);
		N = t2 >> 7;
		RAM[102] = t2;
		goto lBFBE;
	}
}

lE030:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -32;
	RAM[(t0 - 1) + 256u] = 50;
	S = (t0 - 2);
	goto lBFB4;
}

lE29D:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = -97;
	S = (t0 - 2);
	goto lBFB4;
}

lE2CC:
{
	u8 t0;
	u8 t1;
	RAM[102] = 0;
	t0 = RAM[18];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -30;
	RAM[(t1 - 1) + 256u] = -44;
	RAM[(t1 - 2) + 256u] = t0;
	S = (t1 - 3);
	goto lE29D;
}

lE337:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (((s8 )t2) < 0) {
		goto lBFB4;
	} else {
		t3 = RAM[(((t0 + 2) + 256u))];
		t4 = t0 + 3;
		S = t4;
		t5 = RAM[(t4 + 256u)];
		t6 = (t3 + 1) + (t5 << 8);
		PC = t6;
		if ((t6 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	}
}

lE042:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE130:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = 70;
	t1 = t0 - 2;
	t2 = RAM[783];
	RAM[t1 + 256u] = t2;
	t3 = RAM[780];
	A = t3;
	t4 = RAM[781];
	X = t4;
	t5 = RAM[782];
	Y = t5;
	S = t1;
	t6 = RAM[(t1 + 256u)];
	N = t6 >> 7;
	V = ((t6 >> 6) & 1);
	B = ((t6 >> 4) & 1);
	D = ((t6 >> 3) & 1);
	I = ((t6 >> 2) & 1);
	Z = ((t6 >> 1) & 1);
	C = (t6 & 1);
	t7 = RAM[20];
	t8 = RAM[21];
	t9 = (t8 << 8) | t7;
	PC = t9;
	if ((t9 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE194:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE20D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE209:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = Z;
	if (t0 == 0){
		goto lE20D;
	} else {
		t1 = S;
		t2 = t1 + 2;
		S = t2;
		t3 = RAM[(t2 + 256u)];
		A = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lE20D;
	}
}

lE386:
{
	u8 t0;
	u8 t1;
	u16 t2;
	X = 128u;
	Z = 0;
	N = 1;
	t0 = RAM[768];
	t1 = RAM[769];
	t2 = (t1 << 8) | t0;
	PC = t2;
	if ((t2 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lA6C9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	Y = 1;
	RAM[15] = 1;
	t0 = RAM[95];
	t1 = RAM[96];
	t2 = RAM[(((((t1 << 8u) | t0) + 1u) & 65535u))];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0){
		goto lE386;
	} else {
		t3 = S;
		RAM[t3 + 256u] = -90;
		t4 = t3 - 1;
		S = t4;
		RAM[t4 + 256u] = -45;
		g125 = t4;
		goto lA82C;
	}
}

lA6BB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	S = (t0 + 2);
	t1 = RAM[20];
	t2 = RAM[21];
	t3 = t1 | t2;
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	if (t3 == 0){
		A = -1;
		Z = 0;
		N = 1;
		RAM[20] = -1;
		RAM[21] = -1;
		goto lA6C9;
	} else {
		goto lA6C9;
	}
}

lE39D:
{
	X = -5;
	Z = 0;
	N = 1;
	S = -5;
	goto lE386;
}

lE421:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = S;
	t1 = RAM[(((t0 + 1) + 256u))];
	t2 = t0 + 2;
	S = t2;
	t3 = RAM[(t2 + 256u)];
	t4 = (t1 + 1) + (t3 << 8);
	PC = t4;
	if ((t4 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE40E:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = X;
	RAM[55] = t0;
	t1 = Y;
	RAM[56] = t1;
	RAM[51] = t0;
	RAM[52] = t1;
	Y = 0;
	A = 0;
	t2 = RAM[43];
	t3 = RAM[44];
	RAM[(t3 << 8u) | t2] = 0;
	t4 = RAM[43];
	t5 = t4 + 1;
	RAM[43] = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	if (t5 == 0){
		t6 = RAM[44];
		t7 = t6 + 1;
		RAM[44] = t7;
		Z = t7 == 0;
		N = t7 >> 7;
		goto lE421;
	} else {
		goto lE421;
	}
}

lE4B6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = RAM[(((g676 + 2) + 256u))];
	t1 = g676 + 3;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	t3 = (t0 + 1) + (t2 << 8);
	PC = t3;
	if ((t3 + 4294926336u) > 17590u) {
		goto not_found;
	} else {
		goto bb48000;
	}
}

lE4B1:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	t0 = A;
	X = t0;
	t1 = t0 == 0;
	t2 = (t0 >> 7);
	g676 = S;
	t3 = g676 + 1;
	S = t3;
	t4 = RAM[(t3 + 256u)];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	t5 = C;
	if (t5 == 0){
		goto lE4B6;
	} else {
		A = t0;
		Z = t1;
		N = t2;
		goto lE4B6;
	}
}

not_found:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u16 t9;
	u16 t10;
	u16 t11;
	u16 t12;
	u16 t13;
	u16 t14;
	t9 = PC;
	t10 = t9;
	t3 = RAM[t10];
	if (t3 == 76){
		t4 = RAM[(((t10 + 1u) & 65535u))];
		t5 = RAM[(((t10 + 2u) & 65535u))];
		t13 = (t5 << 8) | t4;
		PC = t13;
		if ((t13 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		t14 = kernal_dispatch(&PC, &A, &X, &Y, &S, &N, &V, &B, &D, &I, &Z, &C);
		if (t14 == 0u){
			return 0; /* continuation */
			//    goto bb1885;
		} else {
			t6 = S;
			t7 = t6 + 1;
			S = t7;
			t8 = RAM[(t7 + 256u)];
			PC = t8;
			t0 = S;
			t1 = t0 + 1;
			S = t1;
			t2 = RAM[(t1 + 256u)];
			t11 = PC;
			t12 = (t11 + 1) + (t2 << 8);
			PC = t12;
			if ((t12 + 4294926336u) > 17590u) {
				goto not_found;
			} else {
				goto bb48000;
			}
		}
	}
}

lA47B:
{
	u8 t0;
	A = 128u;
	Z = 0;
	N = 1;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = 127;
	S = (t0 - 2);
	PC = -112;
	goto not_found;
}

lA486:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	RAM[122] = t0;
	t1 = Y;
	RAM[123] = t1;
	t2 = S;
	RAM[t2 + 256u] = -92;
	RAM[(t2 - 1) + 256u] = -116;
	S = (t2 - 2);
	PC = 115;
	goto not_found;
}

lA562:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -91;
	RAM[(t0 - 1) + 256u] = 100;
	RAM[(t0 - 2) + 256u] = -31;
	RAM[(t0 - 3) + 256u] = 20;
	S = (t0 - 4);
	PC = -49;
	goto not_found;
}

lA483:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = -123;
	S = (t0 - 2);
	X = 0;
	Z = 1;
	N = 0;
	goto lA562;
}

lA560:
{
	X = 0;
	Z = 1;
	N = 0;
	goto lA562;
}

lABF9:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g605;
	t1 = t0 - 1;
	S = t1;
	t2 = RAM[19];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (t2 == 0){
		RAM[t1 + 256u] = -85;
		RAM[(t0 - 2) + 256u] = -1;
		t3 = t0 - 3;
		S = t3;
		A = 63;
		Z = 0;
		N = 0;
		g358 = t3;
		goto lAB47;
	} else {
		goto lA560;
	}
}

lABD6:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -85;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -40;
	g605 = t1;
	goto lABF9;
}

lABD1:
{
	A = 44;
	Z = 0;
	N = 0;
	RAM[511] = 44;
	goto lABD6;
}

lAC4A:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -84;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 76;
	g605 = t1;
	goto lABF9;
}

lA660:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = 98;
	S = (t0 - 2);
	PC = -25;
	goto not_found;
}

lA6AA:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -84;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA792:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -108;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA7E4:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = -26;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lA82C:
{
	u8 t0;
	t0 = g125;
	RAM[(t0 - 1) + 256u] = -88;
	RAM[(t0 - 2) + 256u] = 46;
	S = (t0 - 3);
	PC = -31;
	goto not_found;
}

lA7AE:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -89;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -80;
	g125 = t1;
	goto lA82C;
}

lA7A5:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[74];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[73];
	RAM[(t1 - 1) + 256u] = t2;
	A = -127;
	Z = 0;
	N = 1;
	RAM[(t1 - 2) + 256u] = -127;
	S = (t1 - 3);
	goto lA7AE;
}

bb15675:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = g244;
	V = t0;
	t1 = g894;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = ((g913 >> 8) & 1) ^ 1;
	C = t2;
	if (t1 == 0){
		A = g307;
		Z = g754;
		N = g185;
		g829 = (g307 + 17) + t2;
		if (((s8 )g307) < 0) {
			goto bb15802;
		} else {
			if (((g897 ^ g829) & 128u) == 0u) {
				goto bb15802;
			} else {
				g269 = 1;
				goto bb15803;
			}
		}
	} else {
		t3 = RAM[(g897 + 271u)];
		RAM[57] = t3;
		t4 = RAM[(g897 + 272u)];
		RAM[58] = t4;
		t5 = RAM[(g897 + 274u)];
		RAM[122] = t5;
		t6 = RAM[(g897 + 273u)];
		A = t6;
		Z = t6 == 0;
		N = t6 >> 7;
		RAM[123] = t6;
		goto lA7AE;
	}
}

lAD5A:
{
	u8 t0;
	u8 t1;
	g307 = S;
	X = g307;
	g754 = g307 == 0;
	Z = g754;
	g185 = (g307 >> 7);
	N = g185;
	C = 1;
	t0 = A;
	g897 = g307;
	t1 = RAM[(g897 + 265u)];
	g894 = ((((t0 - 1) - t1))) + 1;
	g913 = g894;
	if (((g913 ^ t0) & 128u) == 0u) {
		goto bb15674;
	} else {
		if (((t1 ^ t0) & 128u) == 0u) {
			goto bb15674;
		} else {
			g244 = 1;
			goto bb15675;
		}
	}
}

bb15674:
{
	g244 = 0;
	goto bb15675;
}

lAD80:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = A;
	t2 = t0 - 44;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		t1 = S;
		RAM[t1 + 256u] = -83;
		RAM[(t1 - 1) + 256u] = -122;
		S = (t1 - 2);
		PC = 115;
		goto not_found;
	} else {
		goto lA7AE;
	}
}

lA871:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = N;
	t1 = V;
	t2 = B;
	t3 = D;
	t4 = I;
	t5 = Z;
	t6 = C;
	t7 = S;
	RAM[t7 + 256u] = (((((((((((((((((t1 << 6) | (t0 << 7)))) | (t2 << 4)))) | (t3 << 3)))) | (t4 << 2)))) | t6))) | (t5 << 1));
	A = 0;
	Z = 1;
	N = 0;
	RAM[(t7 - 1) + 256u] = -88;
	RAM[(t7 - 2) + 256u] = 118;
	S = (t7 - 3);
	PC = -112;
	goto not_found;
}

lA897:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -88;
	RAM[(t0 - 1) + 256u] = -103;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA888:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[123];
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[122];
	RAM[(t1 - 1) + 256u] = t2;
	t3 = RAM[58];
	RAM[(t1 - 2) + 256u] = t3;
	t4 = RAM[57];
	RAM[(t1 - 3) + 256u] = t4;
	A = -115;
	Z = 0;
	N = 1;
	RAM[(t1 - 4) + 256u] = -115;
	S = (t1 - 5);
	goto lA897;
}

lA92B:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = 45;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA940:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = 66;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA99F:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -95;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

bb11130:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g631;
	V = t0;
	t1 = g870;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = (g870 >> 8) & 1;
	C = t2;
	RAM[20] = t1;
	if (t2 == 0) {
		goto lA99F;
	} else {
		t3 = g774 + 1;
		RAM[21] = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		goto lA99F;
	}
}

bb11013:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	u16 t4;
	u16 t5;
	t0 = g385;
	V = t0;
	t2 = g802 & 255;
	t3 = t2 << 1;
	t1 = t3;
	RAM[20] = t1;
	t4 = ((((g922 << 1) & 510))) | g217;
	t5 = (t4 >> 8);
	C = t5;
	g774 = t4;
	RAM[21] = g774;
	A = t1;
	Z = t1 == 0;
	N = ((t2 >> 6) & 1);
	g870 = ((((g993 & 255) + (t3 & 254)))) + t5;
	if (((g993 ^ t3) & 128u) == 0u) {
		if (((t1 ^ g870) & 128u) == 0u) {
			goto bb11129;
		} else {
			g631 = 1;
			goto bb11130;
		}
	} else {
		goto bb11129;
	}
}

bb10946:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g215;
	V = t0;
	t1 = g802;
	g217 = (t1 >> 7);
	t2 = (g802 >> 8) & 1;
	C = t2;
	RAM[20] = t1;
	A = g349;
	Z = g349 == 0;
	N = g201;
	g922 = (((g959 + (g985 & 255)))) + t2;
	if (((g373 ^ g349) & 128u) == 0u) {
		if (((g349 ^ g922) & 128u) == 0u) {
			goto bb11012;
		} else {
			g385 = 1;
			goto bb11013;
		}
	} else {
		goto bb11012;
	}
}

bb10945:
{
	g215 = 0;
	goto bb10946;
}

bb11012:
{
	g385 = 0;
	goto bb11013;
}

bb11129:
{
	g631 = 0;
	goto bb11130;
}

lAA14:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[100];
	X = t0;
	t1 = RAM[99];
	Y = t1;
	t2 = RAM[101];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	PC = -37;
	goto not_found;
}

lAA1D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g396;
	t1 = g719;
	t2 = RAM[34];
	t3 = RAM[35];
	t4 = RAM[(((((t3 << 8u) | t2) + t0) & 65535u))];
	A = t4;
	Z = t4 == 0;
	N = t4 >> 7;
	RAM[(t1 - 1) + 256u] = -86;
	RAM[(t1 - 2) + 256u] = 33;
	S = (t1 - 3);
	PC = 128;
	goto not_found;
}

lA9ED:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g493;
	RAM[113] = t0;
	t1 = S;
	RAM[t1 + 256u] = -87;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = -15;
	g396 = t0;
	g719 = t2;
	goto lAA1D;
}

lA9F5:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[113];
	t1 = t0 + 1;
	RAM[113] = t1;
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = S;
	RAM[t2 + 256u] = -87;
	t3 = t2 - 1;
	S = t3;
	RAM[t3 + 256u] = -5;
	g396 = t1;
	g719 = t3;
	goto lAA1D;
}

lAA90:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	t0 = N;
	t1 = V;
	t2 = B;
	t3 = D;
	t4 = I;
	t5 = Z;
	t6 = C;
	t7 = S;
	RAM[t7 + 256u] = (((((((((((((((((t1 << 6) | (t0 << 7)))) | (t2 << 4)))) | (t3 << 3)))) | (t4 << 2)))) | t6))) | (t5 << 1));
	t8 = X;
	RAM[19] = t8;
	RAM[(t7 - 1) + 256u] = -86;
	RAM[(t7 - 2) + 256u] = -107;
	RAM[(t7 - 3) + 256u] = -31;
	RAM[(t7 - 4) + 256u] = 26;
	t9 = A;
	RAM[(t7 - 5) + 256u] = t9;
	RAM[(t7 - 6) + 256u] = -28;
	RAM[(t7 - 7) + 256u] = -80;
	S = (t7 - 8);
	PC = -55;
	goto not_found;
}

lAA9D:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -97;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lAAF8:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	t0 = g686;
	t1 = g593;
	t2 = g587;
	t3 = V;
	t4 = B;
	t5 = D;
	t6 = I;
	t7 = S;
	RAM[t7 + 256u] = (((((((((((((((((t3 << 6) | (t2 << 7)))) | (t4 << 4)))) | (t5 << 3)))) | (t6 << 2)))) | t0))) | (t1 << 1));
	C = 1;
	RAM[(t7 - 1) + 256u] = -86;
	RAM[(t7 - 2) + 256u] = -4;
	S = (t7 - 3);
	PC = -16;
	goto not_found;
}

bb12987:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g511;
	V = t0;
	t1 = g976;
	A = t1;
	t2 = t1 == 0;
	Z = t2;
	t3 = (t1 >> 7);
	N = t3;
	t4 = (g976 >> 8) & 1;
	C = t4;
	if (t1 == 0) {
		g686 = t4;
		g593 = t2;
		g587 = t3;
		goto lAAF8;
	} else {
		g405 = t1;
		goto lAB0E;
	}
}

lAAEE:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	t0 = g138;
	t1 = g276;
	t6 = (t1 - 11) + (((s16 )(s8 )t0));
	t7 = t6;
	t2 = (((((((t7 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
	t3 = t6;
	t8 = t7 & 256u;
	t4 = (t8 >> 8u) ^ 1;
	if (t8 == 0u) {
		g138 = t4;
		g276 = t3;
		goto lAAEE;
	} else {
		C = t4;
		V = t2;
		t5 = t3 ^ -1;
		A = t5;
		Z = (t3 == 0xff);
		N = t5 >> 7;
		g976 = (t5 + 1) + t4;
		if (((s8 )t3) > -1) {
			goto bb12986;
		} else {
			if (((t5 ^ g976) & 128u) == 0u) {
				goto bb12986;
			} else {
				g511 = 1;
				goto bb12987;
			}
		}
	}
}

lAAEC:
{
	u8 t0;
	t0 = Y;
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	C = 1;
	g138 = 1;
	g276 = t0;
	goto lAAEE;
}

bb12986:
{
	g511 = 0;
	goto bb12987;
}

lAAFD:
{
	u8 t0;
	u8 t1;
	t0 = Y;
	RAM[9] = t0;
	t1 = S;
	RAM[t1 + 256u] = -85;
	RAM[(t1 - 1) + 256u] = 1;
	RAM[(t1 - 2) + 256u] = -73;
	RAM[(t1 - 3) + 256u] = -99;
	S = (t1 - 4);
	PC = 115;
	goto not_found;
}

lAB13:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = 21;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

bb13175:
{
	u8 t0;
	u8 t1;
	u16 t2;
	t0 = g558;
	V = t0;
	t1 = g887;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	t2 = g989 & 256u;
	C = ((t2 >> 8u) ^ 1);
	if (t2 == 0u) {
		g405 = t1;
		goto lAB0E;
	} else {
		goto lAB13;
	}
}

bb13174:
{
	g558 = 0;
	goto bb13175;
}

lAB10:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = X;
	t1 = t0 - 1;
	X = t1;
	Z = (t0 == 1);
	N = t1 >> 7;
	if (t0 == 1) {
		goto lAB13;
	} else {
		t2 = S;
		RAM[t2 + 256u] = -85;
		RAM[(t2 - 1) + 256u] = 27;
		t3 = t2 - 2;
		S = t3;
		g658 = t3;
		goto lAB3B;
	}
}

lAB0F:
{
	u8 t0;
	u8 t1;
	t0 = X;
	t1 = t0 + 1;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	goto lAB10;
}

lAB0E:
{
	u8 t0;
	t0 = g405;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lAB0F;
}

lAB47:
{
	u8 t0;
	t0 = g358;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = 73;
	RAM[(t0 - 2) + 256u] = -31;
	RAM[(t0 - 3) + 256u] = 14;
	S = (t0 - 4);
	PC = -46;
	goto not_found;
}

lA451:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = 83;
	t1 = t0 - 2;
	S = t1;
	A = 63;
	Z = 0;
	N = 0;
	g358 = t1;
	goto lAB47;
}

lA456:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	t6 = g939;
	t0 = RAM[34];
	t1 = RAM[35];
	t2 = RAM[(((((t1 << 8u) | t0) + t6) & 65535u))];
	t3 = S;
	RAM[t3 + 256u] = t2;
	t4 = t2 & 127;
	A = t4;
	Z = t4 == 0;
	N = 0;
	RAM[(t3 - 1) + 256u] = -92;
	RAM[(t3 - 2) + 256u] = 93;
	t5 = t3 - 3;
	S = t5;
	g358 = t5;
	goto lAB47;
}

lA454:
{
	Y = 0;
	Z = 1;
	N = 0;
	g939 = 0u;
	goto lA456;
}

lA6F3:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -11;
	t1 = t0 - 2;
	S = t1;
	g358 = t1;
	goto lAB47;
}

lA6EF:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g259;
	t1 = RAM[73];
	Y = t1;
	t2 = t0 & 127;
	A = t2;
	Z = t2 == 0;
	N = 0;
	goto lA6F3;
}

lA6ED:
{
	A = 32;
	Z = 0;
	N = 0;
	g259 = 32;
	goto lA6EF;
}

lA737:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = Y;
	t1 = t0 + 1;
	Y = t1;
	t2 = RAM[(t1 + 41118u)];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	if (((s8 )t2) < 0) {
		g259 = t2;
		goto lA6EF;
	} else {
		t3 = S;
		RAM[t3 + 256u] = -89;
		RAM[(t3 - 1) + 256u] = 63;
		t4 = t3 - 2;
		S = t4;
		g358 = t4;
		goto lAB47;
	}
}

lA737_2e_loopexit:
{
	u8 t0;
	u8 t1;
	u8 t2;
	bool t3;
	t0 = g789;
	t1 = g102;
	t3 = g795&1;
	t2 = g454;
	Y = t2;
	Z = t3;
	N = t1;
	A = t0;
	X = g731;
	goto lA737;
}

lA72C:
{
	u8 t0;
	u8 t1;
	u8 t2;
	g699 = g150;
	t0 = g381;
	g496 = g112;
	t1 = g769 - g699;
	g731 = t1 - 1;
	t2 = (g731 >> 7);
	if (t1 == 1) {
		g789 = t0;
		g102 = t2;
		g795 = t1 == 1;
		g454 = g496;
		goto lA737_2e_loopexit;
	} else {
		g237 = 0;
		goto lA72F;
	}
}

lA72F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g237;
	t1 = (t0 + g496) + 1;
	t2 = RAM[(t1 + 41118u)];
	t3 = (t2 >> 7);
	if (((s8 )t2) < 0) {
		t4 = g699 + 1;
		if (t3 == 0) {
			g789 = t2;
			g102 = t3;
			g795 = t2 == 0;
			g454 = t1;
			goto lA737_2e_loopexit;
		} else {
			g150 = t4;
			g381 = t2;
			g112 = t1;
			goto lA72C;
		}
	} else {
		g237 = (t0 + 1);
		goto lA72F;
	}
}

lA71A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	u16 t6;
	u16 t7;
	u16 t8;
	u16 t9;
	t0 = N;
	if (t0 == 0) {
		goto lA6F3;
	} else {
		t1 = A;
		t5 = t1;
		t6 = t5 - 255;
		t7 = t6;
		C = (((t7 >> 8) & 1) ^ 1);
		Z = ((t7 & 255u) == 0u);
		N = t6 >> 7;
		if ((t7 & 255u) == 0u) {
			goto lA6F3;
		} else {
			t2 = RAM[15];
			Z = t2 == 0;
			t3 = (t2 >> 7);
			N = t3;
			V = ((t2 >> 6) & 1);
			if (t3 == 0) {
				C = 1;
				t8 = t5 - 127;
				t9 = t8;
				V = (((((((t9 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
				g769 = t8;
				A = g769;
				C = (((t9 >> 8) & 1) ^ 1);
				X = g769;
				t4 = Y;
				RAM[73] = t4;
				Y = -1;
				Z = 0;
				N = 1;
				g150 = 0;
				g381 = g769;
				g112 = -1;
				goto lA72C;
			} else {
				goto lA6F3;
			}
		}
	}
}

lA740:
{
	u8 t0;
	t0 = Z;
	if (t0 == 0) {
		goto lA737;
	} else {
		goto lA742;
	}
}

lAAD7:
{
	u8 t0;
	u8 t1;
	A = 13;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -37;
	t1 = t0 - 2;
	S = t1;
	g358 = t1;
	goto lAB47;
}

lA44A:
{
	u8 t0;
	A = 0;
	Z = 1;
	N = 0;
	RAM[19] = 0;
	t0 = S;
	RAM[t0 + 256u] = -92;
	RAM[(t0 - 1) + 256u] = 80;
	S = (t0 - 2);
	goto lAAD7;
}

lA6D4:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -90;
	RAM[(t0 - 1) + 256u] = -42;
	S = (t0 - 2);
	goto lAAD7;
}

lAB44:
{
	u8 t0;
	t0 = RAM[16297];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g358 = g10;
	goto lAB47;
}

lAB3B:
{
	u8 t0;
	u8 t1;
	g10 = g658;
	t0 = RAM[19];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	if (t0 == 0) {
		A = 29;
		Z = 0;
		N = 0;
		goto lAB44;
	} else {
		A = 32;
		t1 = RAM[7593];
		Z = t1 == 0;
		N = t1 >> 7;
		V = ((t1 >> 6) & 1);
		goto lAB44;
	}
}

lAAC5:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -86;
	RAM[(t0 - 1) + 256u] = -57;
	t1 = t0 - 2;
	S = t1;
	g658 = t1;
	goto lAB3B;
}

lAC00:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = 2;
	t1 = t0 - 2;
	S = t1;
	g658 = t1;
	goto lAB3B;
}

lAB7E:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = A;
	t2 = t0 - 35;
	t3 = t2;
	C = (((t3 >> 8) & 1) ^ 1);
	Z = ((t3 & 255u) == 0u);
	N = t2 >> 7;
	if ((t3 & 255u) == 0u) {
		t1 = S;
		RAM[t1 + 256u] = -85;
		RAM[(t1 - 1) + 256u] = -124;
		S = (t1 - 2);
		PC = 115;
		goto not_found;
	} else {
		goto lAB92;
	}
}

lABB7:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -71;
	S = (t0 - 2);
	PC = -52;
	goto not_found;
}

lABB5:
{
	u8 t0;
	t0 = RAM[19];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lABB7;
}

lAC18:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	t0 = A;
	RAM[73] = t0;
	t1 = Y;
	RAM[74] = t1;
	t2 = RAM[122];
	A = t2;
	t3 = RAM[123];
	RAM[75] = t2;
	RAM[76] = t3;
	t4 = RAM[67];
	X = t4;
	t5 = RAM[68];
	Y = t5;
	Z = t5 == 0;
	N = t5 >> 7;
	RAM[122] = t4;
	RAM[123] = t5;
	t6 = S;
	RAM[t6 + 256u] = -84;
	RAM[(t6 - 1) + 256u] = 46;
	S = (t6 - 2);
	PC = 121;
	goto not_found;
}

lAC51:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = 83;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lAC4D:
{
	u8 t0;
	u8 t1;
	t0 = X;
	RAM[122] = t0;
	t1 = Y;
	RAM[123] = t1;
	goto lAC51;
}

lAC38:
{
	u8 t0;
	t0 = A;
	RAM[512] = t0;
	X = -1;
	Y = 1;
	Z = 0;
	N = 0;
	goto lAC4D;
}

lAC91:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -109;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lAC9D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = RAM[122];
	t1 = RAM[123];
	RAM[67] = t0;
	RAM[68] = t1;
	t2 = RAM[75];
	A = t2;
	t3 = RAM[76];
	Y = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[122] = t2;
	RAM[123] = t3;
	t4 = S;
	RAM[t4 + 256u] = -84;
	RAM[(t4 - 1) + 256u] = -81;
	S = (t4 - 2);
	PC = 121;
	goto not_found;
}

lACD4:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = -42;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

bb15803:
{
	u8 t0;
	u8 t1;
	t0 = g269;
	V = t0;
	t1 = g829;
	A = t1;
	C = (g829 >> 8) & 1;
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	RAM[t1 + 256u] = -83;
	RAM[(t1 - 1) + 256u] = 127;
	S = (t1 - 2);
	PC = 121;
	goto not_found;
}

bb15802:
{
	g269 = 0;
	goto bb15803;
}

lADB8:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = -70;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lADB4:
{
	A = 0;
	Z = 1;
	N = 0;
	RAM[77] = 0;
	goto lADB8;
}

lAE8A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -82;
	RAM[(t0 - 1) + 256u] = -116;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lAE86:
{
	A = 0;
	Z = 1;
	N = 0;
	RAM[13] = 0;
	goto lAE8A;
}

lAEA5:
{
	PC = 115;
	goto not_found;
}

lAF84:
{
	u8 t0;
	t0 = g692;
	RAM[(t0 - 1) + 256u] = -81;
	RAM[(t0 - 2) + 256u] = -122;
	S = (t0 - 3);
	PC = -34;
	goto not_found;
}

lAFD6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u16 t4;
	t0 = g63;
	t1 = g324;
	t4 = t1;
	t2 = RAM[(t4 + 40938u)];
	RAM[85] = t2;
	t3 = RAM[(t4 + 40939u)];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[86] = t3;
	RAM[t0 + 256u] = -81;
	RAM[(t0 - 1) + 256u] = -30;
	S = (t0 - 2);
	PC = 84;
	goto not_found;
}

lAFCA:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	p10 = &RAM[(((t0 + 1) + 256u))];
	t1 = *p10;
	Y = t1;
	t2 = X;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	*p10 = t2;
	S = t0;
	g63 = t0;
	g324 = t1;
	goto lAFD6;
}

lAFD4:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = S;
	t1 = t0 + 1;
	S = t1;
	t2 = RAM[(t1 + 256u)];
	A = t2;
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	g63 = t1;
	g324 = t2;
	goto lAFD6;
}

lB085:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = -121;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lB08B:
{
	u8 t0;
	t0 = g670;
	X = 0;
	Z = 1;
	N = 0;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = -113;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lA9A5:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -87;
	RAM[(t0 - 1) + 256u] = -89;
	t1 = t0 - 2;
	S = t1;
	g670 = t1;
	goto lB08B;
}

lA742:
{
	u8 t0;
	A = 128u;
	Z = 0;
	N = 1;
	RAM[16] = 128u;
	t0 = S;
	RAM[t0 + 256u] = -89;
	RAM[(t0 - 1) + 256u] = 72;
	S = (t0 - 2);
	goto lA9A5;
}

lAC15:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -84;
	RAM[(t0 - 1) + 256u] = 23;
	t1 = t0 - 2;
	S = t1;
	g670 = t1;
	goto lB08B;
}

lAC0F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g12;
	RAM[17] = t0;
	t1 = X;
	RAM[67] = t1;
	t2 = Y;
	RAM[68] = t2;
	goto lAC15;
}

lAB92:
{
	u8 t0;
	X = 1;
	Y = 2;
	RAM[513] = 0;
	A = 64;
	Z = 0;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -85;
	RAM[(t0 - 1) + 256u] = -97;
	S = (t0 - 2);
	g12 = 64;
	goto lAC0F;
}

lAC06:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[65];
	X = t0;
	t1 = RAM[66];
	Y = t1;
	A = -104;
	t2 = RAM[169];
	Z = t2 == 0;
	N = t2 >> 7;
	V = ((t2 >> 6) & 1);
	g12 = -104;
	goto lAC0F;
}

lAD24:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = 38;
	t1 = t0 - 2;
	S = t1;
	g670 = t1;
	goto lB08B;
}

lAD87:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -83;
	RAM[(t0 - 1) + 256u] = -119;
	S = (t0 - 2);
	goto lAD24;
}

lB3BC:
{
	u8 t0;
	u8 t1;
	A = 128u;
	Z = 0;
	N = 1;
	RAM[16] = 128u;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -62;
	t1 = t0 - 2;
	S = t1;
	g670 = t1;
	goto lB08B;
}

lB092:
{
	u8 t0;
	u8 t1;
	t0 = A;
	RAM[69] = t0;
	t1 = S;
	RAM[t1 + 256u] = -80;
	RAM[(t1 - 1) + 256u] = -106;
	S = (t1 - 2);
	PC = 121;
	goto not_found;
}

lB081:
{
	u8 t0;
	u8 t1;
	t0 = A;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -80;
	RAM[(t1 - 1) + 256u] = -124;
	S = (t1 - 2);
	RAM[12] = t0;
	goto lB092;
}

lB090:
{
	u8 t0;
	t0 = X;
	RAM[12] = t0;
	goto lB092;
}

lB3E6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = A;
	t1 = t0 | 128u;
	A = t1;
	Z = 0;
	N = 1;
	RAM[16] = t1;
	t2 = S;
	RAM[t2 + 256u] = -77;
	RAM[(t2 - 1) + 256u] = -20;
	S = (t2 - 2);
	goto lB092;
}

lB0B0:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -80;
	RAM[(t0 - 1) + 256u] = -78;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lB0AF:
{
	u8 t0;
	t0 = A;
	X = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	goto lB0B0;
}

lB0D4:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	t1 = t0 | 128u;
	A = t1;
	X = t1;
	Z = 0;
	N = 1;
	t2 = S;
	RAM[t2 + 256u] = -80;
	RAM[(t2 - 1) + 256u] = -38;
	S = (t2 - 2);
	PC = 115;
	goto not_found;
}

lB1DB:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = Y;
	t1 = S;
	RAM[t1 + 256u] = t0;
	t2 = RAM[70];
	RAM[(t1 - 1) + 256u] = t2;
	t3 = RAM[69];
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[(t1 - 2) + 256u] = t3;
	RAM[(t1 - 3) + 256u] = -79;
	RAM[(t1 - 4) + 256u] = -27;
	RAM[(t1 - 5) + 256u] = -79;
	RAM[(t1 - 6) + 256u] = -76;
	S = (t1 - 7);
	PC = 115;
	goto not_found;
}

lB1E6:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u8 t6;
	u8 t7;
	u8 t8;
	u8 t9;
	u8 t10;
	u8 t11;
	u16 t12;
	t0 = S;
	t1 = t0 + 1;
	t2 = RAM[(t1 + 256u)];
	RAM[69] = t2;
	t3 = t0 + 2;
	t4 = RAM[(t3 + 256u)];
	RAM[70] = t4;
	t5 = t0 + 3;
	t12 = t5;
	p12 = &RAM[(t12 + 256u)];
	t6 = *p12;
	X = t5;
	p13 = &RAM[(t12 + 258u)];
	t7 = *p13;
	*p12 = t7;
	p14 = &RAM[(t12 + 257u)];
	t8 = *p14;
	RAM[t3 + 256u] = t8;
	t9 = RAM[100];
	*p13 = t9;
	t10 = RAM[101];
	A = t10;
	*p14 = t10;
	t11 = t6 + 1;
	Y = t11;
	Z = t11 == 0;
	N = t11 >> 7;
	RAM[t1 + 256u] = -78;
	RAM[t0 + 256u] = 4;
	S = (t0 - 1);
	PC = 121;
	goto not_found;
}

lB39E:
{
	u8 t0;
	C = 1;
	t0 = S;
	RAM[t0 + 256u] = -77;
	RAM[(t0 - 1) + 256u] = -95;
	S = (t0 - 2);
	PC = -16;
	goto not_found;
}

lB43B:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = S;
	t1 = t0 + 1;
	t2 = RAM[(t1 + 256u)];
	RAM[78] = t2;
	p17 = &RAM[(((t0 + 2) + 256u))];
	t3 = *p17;
	A = t3;
	Z = t3 == 0;
	N = t3 >> 7;
	RAM[79] = t3;
	*p17 = -76;
	RAM[t1 + 256u] = 67;
	S = t0;
	PC = 121;
	goto not_found;
}

lB737:
{
	u8 t0;
	A = -1;
	Z = 0;
	N = 1;
	RAM[101] = -1;
	t0 = S;
	RAM[t0 + 256u] = -73;
	RAM[(t0 - 1) + 256u] = 61;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lB7CD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	t0 = g450;
	RAM[37] = t0;
	Y = 0;
	t1 = RAM[(((t0 << 8u) | g191))];
	t2 = S;
	RAM[t2 + 256u] = t1;
	A = 0;
	Z = 1;
	N = 0;
	t3 = RAM[36];
	t4 = RAM[37];
	RAM[(t4 << 8u) | t3] = 0;
	RAM[(t2 - 1) + 256u] = -73;
	RAM[(t2 - 2) + 256u] = -39;
	S = (t2 - 3);
	PC = 121;
	goto not_found;
}

bb31790:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = g210;
	V = t0;
	g191 = g830;
	A = g191;
	t1 = (g830 >> 8) & 1;
	C = t1;
	RAM[36] = g191;
	t2 = RAM[35];
	X = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	RAM[123] = t2;
	if (t1 == 0) {
		g450 = t2;
		goto lB7CD;
	} else {
		t3 = t2 + 1;
		X = t3;
		Z = t3 == 0;
		N = t3 >> 7;
		g450 = t3;
		goto lB7CD;
	}
}

bb31789:
{
	g210 = 0;
	goto bb31790;
}

lB830:
{
	u8 t0;
	u8 t1;
	t0 = X;
	RAM[73] = t0;
	X = 0;
	Z = 1;
	N = 0;
	t1 = S;
	RAM[t1 + 256u] = -72;
	RAM[(t1 - 1) + 256u] = 54;
	S = (t1 - 2);
	PC = 121;
	goto not_found;
}

lBD0A:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -67;
	RAM[(t0 - 1) + 256u] = 12;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lBD30:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -67;
	RAM[(t0 - 1) + 256u] = 50;
	S = (t0 - 2);
	PC = 115;
	goto not_found;
}

lBD2E:
{
	u8 t0;
	u8 t1;
	u16 t2;
	u16 t3;
	t0 = g777;
	t1 = RAM[96];
	t2 = (t0 << 8) | t1;
	C = (t2 & 1);
	t3 = (t2 >> 1);
	Z = ((t3 & 255u) == 0u);
	N = ((t2 >> 8) & 1);
	RAM[96] = t3;
	goto lBD30;
}

bb41064:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = g93;
	V = t0;
	t1 = g914;
	A = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	C = 1;
	t3 = (g914 & 255) - 48;
	t4 = t3;
	V = (((((((t4 ^ t1) & 128u) == 0u) | (((s8 )t1) > -1))&1))) ? 0 : 1;
	t2 = t3;
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	C = (((t4 >> 8) & 1) ^ 1);
	RAM[94] = t2;
	goto lBD30;
}

bb40953:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u16 t5;
	t0 = g281;
	V = t0;
	t5 = g978 << 1;
	t1 = (t5 & 510);
	A = t1;
	C = 0;
	Y = 0;
	Z = 1;
	N = 0;
	t2 = RAM[122];
	t3 = RAM[123];
	t4 = RAM[(((t3 << 8u) | t2))];
	g914 = t4 + (t5 & 254);
	if (((t4 ^ t1) & 128u) == 0u) {
		if (((t1 ^ g914) & 128u) == 0u) {
			goto bb41063;
		} else {
			g93 = 1;
			goto bb41064;
		}
	} else {
		goto bb41063;
	}
}

bb40952:
{
	g281 = 0;
	goto bb40953;
}

bb41063:
{
	g93 = 0;
	goto bb41064;
}

lE11E:
{
	u8 t0;
	t0 = g627;
	RAM[(t0 - 1) + 256u] = -31;
	RAM[(t0 - 2) + 256u] = 32;
	S = (t0 - 3);
	PC = -58;
	goto not_found;
}

lAB8D:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	RAM[19] = t0;
	t1 = S;
	RAM[t1 + 256u] = -85;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = -111;
	g627 = t2;
	goto lE11E;
}

lABAD:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	RAM[19] = t0;
	t1 = S;
	RAM[t1 + 256u] = -85;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = -79;
	g627 = t2;
	goto lE11E;
}

lE159:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = RAM[45];
	X = t0;
	t1 = RAM[46];
	Y = t1;
	A = 43;
	Z = 0;
	N = 0;
	t2 = S;
	RAM[t2 + 256u] = -31;
	RAM[(t2 - 1) + 256u] = 97;
	S = (t2 - 2);
	PC = -40;
	goto not_found;
}

lE16F:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = RAM[10];
	A = t0;
	t1 = RAM[43];
	X = t1;
	t2 = RAM[44];
	Y = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = S;
	RAM[t3 + 256u] = -31;
	RAM[(t3 - 1) + 256u] = 119;
	S = (t3 - 2);
	PC = -43;
	goto not_found;
}

lE1C1:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -61;
	S = (t0 - 2);
	PC = -64;
	goto not_found;
}

lE1CA:
{
	u8 t0;
	u8 t1;
	t0 = RAM[73];
	A = t0;
	Z = t0 == 0;
	N = t0 >> 7;
	t1 = S;
	RAM[t1 + 256u] = -31;
	RAM[(t1 - 1) + 256u] = -50;
	S = (t1 - 2);
	PC = -61;
	goto not_found;
}

lE1D4:
{
	u8 t0;
	t0 = g72;
	A = 0;
	Z = 1;
	N = 0;
	RAM[(t0 - 1) + 256u] = -31;
	RAM[(t0 - 2) + 256u] = -40;
	S = (t0 - 3);
	PC = -67;
	goto not_found;
}

lE156:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = 88;
	g72 = t1;
	goto lE1D4;
}

lE16A:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = g95;
	RAM[10] = t0;
	t1 = S;
	RAM[t1 + 256u] = -31;
	t2 = t1 - 1;
	S = t2;
	RAM[t2 + 256u] = 110;
	g72 = t2;
	goto lE1D4;
}

lE165:
{
	u8 t0;
	A = 1;
	t0 = RAM[169];
	Z = t0 == 0;
	N = t0 >> 7;
	V = ((t0 >> 6) & 1);
	g95 = 1;
	goto lE16A;
}

lE168:
{
	A = 0;
	Z = 1;
	N = 0;
	g95 = 0;
	goto lE16A;
}

lE1D9:
{
	u8 t0;
	X = 1;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -33;
	S = (t0 - 2);
	PC = -70;
	goto not_found;
}

lE1EC:
{
	u8 t0;
	u8 t1;
	Y = 0;
	Z = 1;
	N = 0;
	t0 = X;
	RAM[73] = t0;
	t1 = S;
	RAM[t1 + 256u] = -31;
	RAM[(t1 - 1) + 256u] = -14;
	S = (t1 - 2);
	PC = -70;
	goto not_found;
}

lE1F9:
{
	u8 t0;
	u8 t1;
	t0 = X;
	A = t0;
	Y = t0;
	t1 = RAM[73];
	X = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	PC = -70;
	goto not_found;
}

lE206:
{
	u8 t0;
	t0 = g256;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 8;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lE1E0:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -30;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE1E6:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -24;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE1F3:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	RAM[(t0 - 1) + 256u] = -11;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE22E:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 48;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE242:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 68;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE251:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 83;
	t1 = t0 - 2;
	S = t1;
	g256 = t1;
	goto lE206;
}

lE211:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 19;
	S = (t0 - 2);
	PC = 121;
	goto not_found;
}

lE21E:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 32;
	S = (t0 - 2);
	goto lE211;
}

lE219:
{
	u8 t0;
	t0 = g300;
	A = 0;
	Z = 1;
	N = 0;
	RAM[(t0 - 1) + 256u] = -30;
	RAM[(t0 - 2) + 256u] = 29;
	S = (t0 - 3);
	PC = -67;
	goto not_found;
}

lE1BE:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -64;
	g300 = t1;
	goto lE219;
}

lE1C7:
{
	u8 t0;
	u8 t1;
	t0 = S;
	RAM[t0 + 256u] = -31;
	t1 = t0 - 1;
	S = t1;
	RAM[t1 + 256u] = -55;
	g300 = t1;
	goto lE219;
}

lE224:
{
	u8 t0;
	u8 t1;
	t0 = X;
	RAM[73] = t0;
	A = t0;
	X = 1;
	Y = 0;
	Z = 1;
	N = 0;
	t1 = S;
	RAM[t1 + 256u] = -30;
	RAM[(t1 - 1) + 256u] = 45;
	S = (t1 - 2);
	PC = -70;
	goto not_found;
}

lE23F:
{
	u8 t0;
	t0 = S;
	RAM[t0 + 256u] = -30;
	RAM[(t0 - 1) + 256u] = 65;
	S = (t0 - 2);
	PC = -70;
	goto not_found;
}

lE234:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	u16 t4;
	t0 = X;
	RAM[74] = t0;
	Y = 0;
	t1 = RAM[73];
	A = t1;
	t3 = t0 - 3;
	t4 = t3;
	t2 = (t4 >> 8) & 1;
	C = (t2 ^ 1);
	Z = ((t4 & 255u) == 0u);
	N = t3 >> 7;
	if (t2 == 0) {
		Y = -1;
		Z = 0;
		N = 1;
		goto lE23F;
	} else {
		goto lE23F;
	}
}

lE248:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	t0 = X;
	Y = t0;
	t1 = RAM[74];
	X = t1;
	t2 = RAM[73];
	A = t2;
	Z = t2 == 0;
	N = t2 >> 7;
	t3 = S;
	RAM[t3 + 256u] = -30;
	RAM[(t3 - 1) + 256u] = 80;
	S = (t3 - 2);
	PC = -70;
	goto not_found;
}

lE25D:
{
	u8 t0;
	u8 t1;
	t0 = RAM[34];
	X = t0;
	t1 = RAM[35];
	Y = t1;
	Z = t1 == 0;
	N = t1 >> 7;
	PC = -67;
	goto not_found;
}

lE3E2:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u16 t3;
	t0 = g377;
	t1 = 28 - t0;
	t3 = t1;
	t2 = RAM[(t3 + 58274u)];
	RAM[(t3 + 115u) & 255u] = t2;
	if (((s8 )(t1 - 1)) < 0) {
		RAM[83] = 3;
		A = 0;
		RAM[104] = 0;
		RAM[19] = 0;
		RAM[24] = 0;
		RAM[509] = 1;
		RAM[508] = 1;
		X = 25;
		Z = 0;
		N = 0;
		RAM[22] = 25;
		C = 1;
		RAM[g335 + 256u] = -28;
		RAM[(g439 - 3) + 256u] = 5;
		S = (g439 - 4);
		PC = -100;
		goto not_found;
	} else {
		g377 = (t0 + 1);
		goto lE3E2;
	}
}

lE397:
{
	g439 = S;
	RAM[g439 + 256u] = -29;
	RAM[(g439 - 1) + 256u] = -103;
	g335 = g439 - 2;
	S = g335;
	RAM[84] = 76;
	RAM[784] = 76;
	RAM[785] = 72;
	RAM[786] = -78;
	RAM[5] = -111;
	RAM[6] = -77;
	A = -86;
	Y = -79;
	RAM[3] = -86;
	RAM[4] = -79;
	X = 28;
	Z = 0;
	N = 0;
	g377 = 0;
	goto lE3E2;
}

lE406:
{
	u8 t0;
	u8 t1;
	u8 t2;
	t0 = X;
	RAM[43] = t0;
	t1 = Y;
	RAM[44] = t1;
	C = 1;
	t2 = S;
	RAM[t2 + 256u] = -28;
	RAM[(t2 - 1) + 256u] = 13;
	S = (t2 - 2);
	PC = -103;
	goto not_found;
}

lE455:
{
	u8 t0;
	u8 t1;
	u8 t2;
	u8 t3;
	u8 t4;
	u8 t5;
	u16 t6;
	u16 t7;
	t0 = g33;
	t1 = 11 - t0;
	t6 = t1;
	t2 = RAM[(t6 + 58439u)];
	RAM[t6 | 768u] = t2;
	t3 = t1 - 1;
	if (((s8 )t3) < 0) {
		X = t3;
		A = t2;
		Z = (t1 == 1);
		N = t3 >> 7;
		t4 = RAM[(((g596 - 1) + 256u))];
		S = g596;
		t5 = RAM[(g596 + 256u)];
		t7 = (t4 + 1) + (t5 << 8);
		PC = t7;
		if ((t7 + 4294926336u) > 17590u) {
			goto not_found;
		} else {
			goto bb48000;
		}
	} else {
		g33 = (t0 + 1);
		goto lE455;
	}
}
