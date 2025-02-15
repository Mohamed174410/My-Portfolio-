#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void ClearAndDrawFixedObject(char x[][320], int rHero, int chero, int drawkey, int& flagCarrot1, int& flagCarrot2, int& flagCarrot3, int& flagCarrot4, int& flagCarrot5, int& flagCarrot6, int& flagCarrot7, int& flagCarrot8, int flagdrawhouse) {
	for (int r = 0; r < 24; r++) {
		for (int c = 0; c < 320; c++) {
			x[r][c] = ' ';
		}
	}
	//clouds
	x[2][1] = '(', x[1][2] = '_', x[2][3] = ')', x[2][4] = ')', x[2][5] = '_', x[3][5] = ')', x[3][4] = '_';
	x[4][4] = ')', x[4][3] = '_', x[4][2] = '(', x[3][1] = '_', x[3][0] = '(', x[2][10] = '(', x[1][11] = '_', x[1][12] = '_', x[2][13] = ')', x[1][14] = '_', x[2][15] = '(', x[1][16] = '_', x[2][17] = ')', x[3][9] = '-', x[3][10] = '-';
	x[4][8] = '(', x[5][9] = '-', x[5][10] = '-', x[6][11] = '(', x[6][12] = '_', x[6][13] = '_', x[6][14] = ')', x[6][15] = '(', x[6][16] = '_', x[6][17] = ')', x[5][17] = '_', x[5][18] = ')', x[4][18] = ')', x[3][17] = '-', x[3][18] = '-';
	x[2][26] = '_', x[2][27] = '(', x[1][28] = '_', x[2][29] = ')', x[1][30] = '_', x[1][31] = '_', x[2][32] = '(', x[1][33] = '_', x[2][34] = ')', x[2][35] = '_', x[3][36] = ')', x[4][35] = '-', x[5][36] = ')', x[6][36] = ')';
	x[3][25] = '(', x[4][25] = '-', x[4][24] = '_', x[5][23] = '(', x[6][25] = '(';
	x[3][44] = '(', x[3][45] = '_', x[4][46] = '(', x[4][47] = '_', x[4][48] = ')', x[3][48] = '_', x[3][49] = ')', x[2][49] = '_', x[2][45] = '(', x[1][46] = '_', x[2][47] = '_', x[2][48] = ')';//cloud 5
	x[1][67] = '_', x[1][69] = '_', x[1][70] = '_', x[1][72] = '_', x[1][73] = '_', x[1][74] = '_', x[2][66] = '(', x[2][68] = ')', x[2][71] = '(', x[2][75] = ')', x[2][76] = ')', x[2][77] = '_', x[2][78] = '_';
	x[3][64] = '(', x[3][63] = '_'; x[3][79] = ')', x[4][78] = '-', x[4][62] = '(', x[4][61] = '_', x[5][60] = '(', x[5][79] = ')', x[6][61] = '(', x[6][62] = '_', x[6][63] = '_', x[6][64] = ')', x[6][65] = '(', x[6][72] = ')', x[6][73] = '(', x[6][79] = ')';
	x[2][81] = '(', x[1][82] = '_', x[2][83] = ')', x[2][84] = ')', x[2][85] = '_', x[3][85] = ')', x[3][84] = '_';
	x[4][84] = ')', x[4][83] = '_', x[4][82] = '(', x[3][81] = '_', x[3][80] = '(', x[2][90] = '(', x[1][91] = '_', x[1][92] = '_', x[2][93] = ')', x[1][94] = '_', x[2][95] = '(', x[1][96] = '_', x[2][97] = ')', x[3][89] = '-', x[3][90] = '-';
	x[4][88] = '(', x[5][89] = '-', x[5][90] = '-', x[6][91] = '(', x[6][92] = '_', x[6][93] = '_', x[6][94] = ')', x[6][95] = '(', x[6][96] = '_', x[6][97] = ')', x[5][97] = '_', x[5][98] = ')', x[4][98] = ')', x[3][97] = '-', x[3][98] = '-';
	x[2][106] = '_', x[2][107] = '(', x[1][108] = '_', x[2][109] = ')', x[1][110] = '_', x[1][111] = '_', x[2][112] = '(', x[1][113] = '_', x[2][114] = ')', x[2][115] = '_', x[3][116] = ')', x[4][115] = '-', x[5][116] = ')', x[6][116] = ')';
	x[3][105] = '(', x[4][105] = '-', x[4][104] = '_', x[5][103] = '(', x[6][105] = '(';
	x[1][147] = '_', x[1][149] = '_', x[1][150] = '_', x[1][152] = '_', x[1][153] = '_', x[1][154] = '_', x[2][146] = '(', x[2][148] = ')', x[2][151] = '(', x[2][155] = ')', x[2][156] = ')', x[2][157] = '_', x[2][158] = '_';
	x[3][144] = '(', x[3][143] = '_'; x[3][159] = ')', x[4][158] = '-', x[4][142] = '(', x[4][141] = '_', x[5][140] = '(', x[5][159] = ')', x[6][141] = '(', x[6][142] = '_', x[6][143] = '_', x[6][144] = ')', x[6][145] = '(', x[6][152] = ')', x[6][153] = '(', x[6][159] = ')';
	x[2][161] = '(', x[1][162] = '_', x[2][163] = ')', x[2][164] = ')', x[2][165] = '_', x[3][165] = ')', x[3][164] = '_';
	x[4][164] = ')', x[4][163] = '_', x[4][162] = '(', x[3][161] = '_', x[3][160] = '(', x[2][170] = '(', x[1][171] = '_', x[1][172] = '_', x[2][173] = ')', x[1][174] = '_', x[2][175] = '(', x[1][176] = '_', x[2][177] = ')', x[3][169] = '-', x[3][170] = '-';
	x[4][168] = '(', x[5][169] = '-', x[5][170] = '-', x[6][171] = '(', x[6][172] = '_', x[6][173] = '_', x[6][174] = ')', x[6][175] = '(', x[6][176] = '_', x[6][177] = ')', x[5][177] = '_', x[5][178] = ')', x[4][178] = ')', x[3][177] = '-', x[3][178] = '-';
	/*x[2][186] = '_', x[2][187] = '(', x[1][188] = '_', x[2][189] = ')', x[1][190] = '_', x[1][191] = '_', x[2][192] = '(', x[1][193] = '_', x[2][194] = ')', x[2][195] = '_', x[3][196] = ')', x[4][195] = '-', x[5][196] = ')', x[6][196] = ')';
	x[3][185] = '(', x[4][185] = '-', x[4][184] = '_', x[5][183] = '(', x[6][185] = '(';
	x[3][204] = '(', x[3][205] = '_', x[4][206] = '(', x[4][207] = '_', x[4][208] = ')', x[3][208] = '_', x[3][209] = ')', x[2][209] = '_', x[2][205] = '(', x[1][206] = '_', x[2][207] = '_', x[2][208] = ')';
	*/x[1][227] = '_', x[1][229] = '_', x[1][230] = '_', x[1][232] = '_', x[1][233] = '_', x[1][234] = '_', x[2][226] = '(', x[2][228] = ')', x[2][231] = '(', x[2][235] = ')', x[2][236] = ')', x[2][237] = '_', x[2][238] = '_';
	x[3][224] = '(', x[3][223] = '_'; x[3][239] = ')', x[4][238] = '-', x[4][222] = '(', x[4][221] = '_', x[5][220] = '(', x[5][239] = ')', x[6][221] = '(', x[6][222] = '_', x[6][223] = '_', x[6][224] = ')', x[6][225] = '(', x[6][232] = ')', x[6][233] = '(', x[6][239] = ')';
	x[2][241] = '(', x[1][242] = '_', x[2][243] = ')', x[2][244] = ')', x[2][245] = '_', x[3][245] = ')', x[3][244] = '_';
	x[4][244] = ')', x[4][243] = '_', x[4][242] = '(', x[3][241] = '_', x[3][240] = '(', x[2][250] = '(', x[1][251] = '_', x[1][252] = '_', x[2][253] = ')', x[1][254] = '_', x[2][255] = '(', x[1][256] = '_', x[2][257] = ')', x[3][249] = '-', x[3][250] = '-';
	x[4][248] = '(', x[5][249] = '-', x[5][250] = '-', x[6][251] = '(', x[6][252] = '_', x[6][253] = '_', x[6][254] = ')', x[6][255] = '(', x[6][256] = '_', x[6][257] = ')', x[5][257] = '_', x[5][258] = ')', x[4][258] = ')', x[3][257] = '-', x[3][258] = '-';
	x[2][266] = '_', x[2][267] = '(', x[1][268] = '_', x[2][269] = ')', x[1][270] = '_', x[1][271] = '_', x[2][272] = '(', x[1][273] = '_', x[2][274] = ')', x[2][275] = '_', x[3][276] = ')', x[4][275] = '-', x[5][276] = ')', x[6][276] = ')';
	x[3][265] = '(', x[4][265] = '-', x[4][264] = '_', x[5][263] = '(', x[6][265] = '(';
	x[3][284] = '(', x[3][285] = '_', x[4][286] = '(', x[4][287] = '_', x[4][288] = ')', x[3][288] = '_', x[3][289] = ')', x[2][289] = '_', x[2][285] = '(', x[1][286] = '_', x[2][287] = '_', x[2][288] = ')';
	x[1][307] = '_', x[1][309] = '_', x[1][310] = '_', x[1][312] = '_', x[1][313] = '_', x[1][314] = '_', x[2][306] = '(', x[2][308] = ')', x[2][311] = '(', x[2][315] = ')', x[2][316] = ')', x[2][317] = '_', x[2][318] = '_';
	x[3][304] = '(', x[3][303] = '_'; x[3][319] = ')', x[4][318] = '-', x[4][302] = '(', x[4][301] = '_', x[5][300] = '(', x[5][319] = ')', x[6][301] = '(', x[6][302] = '_', x[6][303] = '_', x[6][304] = ')', x[6][305] = '(', x[6][312] = ')', x[6][313] = '(', x[6][319] = ')';

	int r = 6;
	for (int c = 26; c < 36; c++) {
		x[r][c] = '_';
	}
	for (int c = 66; c < 72; c++) {
		x[r][c] = '_';
	}
	for (int c = 74; c < 79; c++) {
		x[r][c] = '_';
	}
	for (int c = 106; c < 116; c++) {
		x[r][c] = '_';
	}
	for (int c = 146; c < 152; c++) {
		x[r][c] = '_';
	}
	for (int c = 154; c < 159; c++) {
		x[r][c] = '_';
	}
	//for (int c = 186; c < 196; c++) {
	//	x[r][c] = '_';
	//}
	for (int c = 226; c < 232; c++) {
		x[r][c] = '_';
	}
	for (int c = 234; c < 239; c++) {
		x[r][c] = '_';
	}
	x[6][29] = ')', x[6][30] = '(';
	x[6][109] = ')', x[6][110] = '(';
	//x[6][189] = ')', x[6][190] = '(';
	// score and lives
	if (chero > 13) {
		x[0][chero + 4] = 'S', x[0][chero + 5] = 'c', x[0][chero + 6] = 'o', x[0][chero + 7] = 'r', x[0][chero + 8] = 'e', x[0][chero + 9] = ':', x[0][chero + 26] = 'E', x[0][chero + 27] = 'n', x[0][chero + 28] = 'e', x[0][chero + 29] = 'm', x[0][chero + 30] = 'y', x[0][chero + 31] = ' ', x[0][chero + 32] = 'L', x[0][chero + 33] = 'i', x[0][chero + 34] = 'f', x[0][chero + 35] = 'e', x[0][chero + 36] = ':', x[0][chero + 51] = 'L', x[0][chero + 52] = 'i', x[0][chero + 53] = 'v', x[0][chero + 54] = 'e', x[0][chero + 55] = 's', x[0][chero + 56] = ':';
	}
	else {
		x[0][6] = 'S', x[0][7] = 'c', x[0][8] = 'o', x[0][9] = 'r', x[0][10] = 'e', x[0][11] = ':', x[0][28] = 'E', x[0][29] = 'n', x[0][30] = 'e', x[0][31] = 'm', x[0][32] = 'y', x[0][33] = ' ', x[0][34] = 'L', x[0][35] = 'i', x[0][36] = 'f', x[0][37] = 'e', x[0][38] = ':', x[0][53] = 'L', x[0][54] = 'i', x[0][55] = 'v', x[0][56] = 'e', x[0][57] = 's', x[0][58] = ':';
	}
	//Traps and carrots
	x[20][9] = 201, x[20][10] = 205, x[20][11] = 205, x[20][12] = 187; //trap 1
	if (flagCarrot1 == 0) {
		x[20][15] = 245;//carrot 1
	}
	else if (flagCarrot1 == 1)
	{
		x[20][15] = ' ';
		x[0][chero + 10] = 240;

	}
	x[20][20] = 201, x[20][21] = 205, x[20][22] = 205, x[20][23] = 187; //trap 2
	if (flagCarrot2 == 0) {
		x[20][25] = 245;//carrot 2
		x[0][chero + 11] = 240;
	}
	if (flagCarrot2 == 1)
	{
		x[20][25] = ' ';
		x[0][chero + 12] = 240;
	}
	x[20][32] = 201, x[20][33] = 205, x[20][34] = 205, x[20][35] = 187;//trap 3

	//Ladder and carrots
	x[20][40] = 186, x[19][40] = 201, x[19][41] = 205, x[19][42] = 205, x[19][43] = 205, x[19][44] = 188, x[18][44] = 201, x[18][45] = 205, x[18][46] = 205, x[18][47] = 205, x[18][48] = 188, x[17][48] = 201, x[17][49] = 205, x[17][50] = 205, x[17][51] = 205, x[17][52] = 188, x[16][52] = 201, x[16][53] = 205, x[16][54] = 205, x[16][55] = 205, x[16][56] = 188, x[15][56] = 201, x[15][57] = 205, x[15][58] = 205, x[15][59] = 205, x[15][60] = 187, x[16][60] = 186, x[17][60] = 186, x[18][60] = 186, x[19][60] = 186, x[20][60] = 186;
	if (flagCarrot3 == 0) {
		x[18][42] = 245;//carrot 3
	}
	if (flagCarrot3 == 1)
	{
		x[18][42] = ' ';
		x[0][chero + 13] = 240;

	}

	if (flagCarrot4 == 0) {
		x[16][50] = 245;//carrot 4
	}
	if (flagCarrot4 == 1)
	{
		x[16][50] = ' ';
		x[0][chero + 14] = 240;

	}
	if (flagCarrot5 == 0) {
		x[14][58] = 245;//carrot 5
	}
	if (flagCarrot5 == 1)
	{
		x[14][58] = ' ';
		x[0][chero + 15] = 240;

	}
	r = 21;
	int CtGrass = 0;
	for (int c = 0; c < 320; c++) {
		CtGrass++;
		if (CtGrass % 2 == 0) {
			x[r][c] = 126;
		}
		else {
			x[r][c] = 94;
		}
	}
	//Ladder 2
	int c = 88;
	int z = 0;
	for (int r = 11; r < 21; r++) {
		z++;
		if (z % 2 != 0) {
			x[r][c] = 186;
		}
		else {
			x[r][c] = 204;
		}
	}
	c = 91;
	z = 0;
	for (int r = 11; r < 21; r++) {
		z++;
		if (z % 2 != 0) {
			x[r][c] = 186;

		}
		else {
			x[r][c] = 185;
			x[r][90] = 205;
			x[r][89] = 205;
		}
	}
	//obstacle in level 2
	for (r = 19; r < 21; r++) {
		for (c = 92; c < 114; c++) {
			x[r][c] = 232;
		}
	}
	if (drawkey == 1) {
		x[rHero + 4][chero + 5] = 251;
	}
	//obstacle in level3 
	x[20][210] = '_', x[20][211] = '/', x[20][212] = 126, x[20][213] = '\\', x[20][214] = '_', x[20][215] = '/', x[20][216] = 126, x[20][217] = '\\', x[20][218] = '_', x[20][219] = '/', x[20][220] = 126, x[20][221] = '\\', x[20][222] = '_', x[20][223] = '/', x[20][224] = 126, x[20][225] = '\\', x[20][226] = '_';
	//Draw house
	if (flagdrawhouse == 1) {
		x[20][300] = '|', x[20][304] = '|', x[20][306] = '|', x[20][310] = '|', x[20][313] = '|';
		x[19][300] = '|', x[19][301] = '[', x[19][302] = ']', x[19][304] = '|', x[19][306] = '|', x[19][308] = '[', x[19][309] = ']', x[19][310] = '|', x[19][311] = '[', x[19][312] = ']', x[19][313] = '|';
		x[18][300] = '|', x[18][304] = '|', x[18][306] = '|', x[18][310] = '|', x[18][313] = '|';
		int k = 17;
		for (int i = 300; i < 311; i++) {
			x[k][i] = '/';
		}
		x[17][313] = '\\';
		k = 16;
		for (int i = 301; i < 312; i++) {
			x[k][i] = '/';
		}
		x[16][312] = '\\';
		k = 15;
		for (int i = 302; i < 312; i++) {
			x[k][i] = '_';
		}
	}
}

void CoutMatToScreen(char x[][320], int cHero)
{
	system("cls");
	if (cHero > 13) {
		for (int r = 0; r < 24; r++) {
			for (int c = cHero - 5; c < cHero + 80 - 5; c++)
			{
				cout << x[r][c];
			}
		}
	}
	else {
		for (int r = 0; r < 24; r++) {
			for (int c = 0; c < 80; c++)
			{
				cout << x[r][c];
			}
		}
	}

}
void DrawHero(char x[][320], int rHero, int cHero)
{
	x[rHero][cHero] = '\\', x[rHero][cHero + 1] = '\\', x[rHero + 1][cHero + 1] = '\\', x[rHero + 1][cHero + 2] = '\\', x[rHero + 1][cHero + 3] = '_', x[rHero + 2][cHero + 4] = '\\', x[rHero + 3][cHero + 4] = '/';
	x[rHero + 3][cHero + 3] = '_', x[rHero + 3][cHero + 1] = '(', x[rHero + 2][cHero + 1] = '(', x[rHero + 2][cHero + 2] = 147, x[rHero + 4][cHero + 1] = '/', x[rHero + 5][cHero] = '/', x[rHero + 6][cHero - 1] = '/';
	x[rHero + 7][cHero - 1] = 123, x[rHero + 7][cHero] = '\\', x[rHero + 7][cHero + 1] = 34, x[rHero + 7][cHero + 2] = 34, x[rHero + 7][cHero + 3] = ')', x[rHero + 7][cHero + 4] = '_', x[rHero + 6][cHero + 2] = '_', x[rHero + 6][cHero + 3] = '/', x[rHero + 5][cHero + 4] = '_', x[rHero + 5][cHero + 5] = '_', x[rHero + 4][cHero + 3] = '\\';
}
void MoveHero(int& rHero, int& cHero, char userMove, char x[][320], int& flagjump, int& flagjumpright, int& flagjumpleft, int& flagsinglebullet, int& flagcatchgun, int& ctsinglebullet, int& openbarricade)
{


	if (userMove == 'w')
	{
		rHero--;
	}
	if (rHero + 8 < 21) {
		if (userMove == 's')
		{
			rHero++;
		}
	}
	if (userMove == 'a')
	{
		if (cHero - 1 != 60 || rHero + 7 != 20) { //to not go through ladder 1
			cHero--;
		}
	}
	if (userMove == 'd')
	{
		if (openbarricade == 0) { //if the barricade is closed 
			if (cHero + 5 < 193) { // and the hero is standing before the barricade
				if (cHero + 4 == 44 || cHero + 4 == 48 || cHero + 4 == 52 || cHero + 4 == 56) {
					if (x[rHero + 7][cHero + 5] == ' ') {
						cHero++;
					}
				}
				else {
					cHero++;
				}


			}
		}
		if (openbarricade == 1) { // if the barricade is open
			cHero++;   // then he can move through it freely
		}

	}
	if (userMove == ' ') {
		flagjump = 1;
	}
	if (userMove == 'l') {
		flagjumpright = 1;
	}
	if (userMove == 'k') {
		flagjumpleft = 1;
	}
	if (flagcatchgun == 1) {
		if (userMove == 'v') {
			flagsinglebullet = 1;
			ctsinglebullet = 5; // resetting the bulletcount when it is +5 from the rGun
		}
	}
}
void carrotcollecting(char x[][320], int& rHero, int& cHero, int& flagCarrot1, int& flagCarrot2, int& flagCarrot3, int& flagCarrot4, int& flagCarrot5) {
	if (rHero + 7 == 20 && cHero + 3 == 15 || rHero + 7 == 20 && cHero + 2 == 15 || rHero + 7 == 20 && cHero + 1 == 15 || rHero + 7 == 20 && cHero == 15) {
		flagCarrot1 = 1;

	}
	if (rHero + 7 == 20 && cHero + 3 == 25 || rHero + 7 == 20 && cHero + 2 == 25 || rHero + 7 == 20 && cHero + 1 == 25 || rHero + 7 == 20 && cHero == 25 || rHero + 7 == 20 && cHero - 1 == 25 || rHero + 7 == 20 && cHero - 2 == 25) {
		flagCarrot2 = 1;
	}

	if (rHero + 7 == 18 && cHero + 3 == 42 || rHero + 7 == 18 && cHero + 2 == 42 || rHero + 7 == 18 && cHero + 1 == 42 || rHero + 7 == 18 && cHero == 42) {
		flagCarrot3 = 1;

	}
	if (rHero + 7 == 16 && cHero + 3 == 50 || rHero + 7 == 16 && cHero + 2 == 50 || rHero + 7 == 16 && cHero + 1 == 50 || rHero + 7 == 16 && cHero == 50) {
		flagCarrot4 = 1;
	}
	if (rHero + 7 == 14 && cHero + 3 == 58 || rHero + 7 == 14 && cHero + 2 == 58 || rHero + 7 == 14 && cHero + 1 == 58 || rHero + 7 == 14 && cHero == 58) {
		flagCarrot5 = 1;
	}

}
void Jump(int& rHero, int& cHero, int& flagjump, int& ctjump, int& dirjump, int& flagjumpright, int& flagjumpleft, int& flagcheckgravityjump, int& ctstayinsky) {
	if (flagjump == 1) {
		if (ctjump <= 3) {
			dirjump = -1;
		}
		if (ctjump > 4) {
			dirjump = 1;
			flagcheckgravityjump = 1;
		}
		if (ctjump == 4) {
			ctstayinsky++;
		}
		if (ctstayinsky == 2) {
			ctjump++;
			ctstayinsky = 0;
		}
		if (ctjump != 4) {
			rHero += dirjump;
			ctjump++;
		}
		if (ctjump == 5) {
			flagjump = 0;
			ctjump = 0;
		}
	}
}
void JumpLeftRight(int& rHero, int& cHero, int& flagjumpright, int& flagjumpleft, int& ctjumpright, int& ctjumpleft, int& flagcheckgravityjump) {
	if (ctjumpright < 7) {
		if (flagjumpright == 1) {
			cHero++;
			rHero--;
			ctjumpright++;
		}
	}
	if (ctjumpright == 7) {
		if (flagjumpright == 1) {
			cHero++;
			ctjumpright++;
		}
	}
	if (ctjumpright > 7 && ctjumpright < 15) {
		if (flagjumpright == 1) {
			cHero++;
			rHero++;
			ctjumpright++;
			flagcheckgravityjump = 1;
		}
	}
	if (ctjumpright == 15) {
		flagjumpright = 0;
		ctjumpright = 0;
	}
	if (ctjumpleft < 7) {
		if (flagjumpleft == 1) {
			cHero--;
			rHero--;
			ctjumpleft++;
		}
	}
	if (ctjumpleft == 7) {
		if (flagjumpleft == 1) {
			cHero--;
			ctjumpleft++;
		}
	}
	if (ctjumpleft > 7 && ctjumpleft < 15) {
		if (flagjumpleft == 1) {
			cHero--;
			rHero++;
			ctjumpleft++;
			flagcheckgravityjump = 1;
		}
	}
	if (ctjumpleft == 11) {
		flagjumpleft = 0;
		ctjumpleft = 0;
	}
}
void CheckGravity(char x[][320], int& rHero, int cHero, int& ctjump, int& flagjump, int& flagcheckgravityjump, int& flagjumpright, int& flagjumpleft, int& ctjumpright, int& ctjumpleft) {
	if (flagcheckgravityjump == 1) {
		if (x[rHero + 8][cHero] != ' ' || x[rHero + 8][cHero + 1] != ' ' || x[rHero + 8][cHero + 2] != ' ' || x[rHero + 8][cHero + 3] != ' ') {
			if (flagjump == 1) {
				flagjump = 0;
				ctjump = 0;
			}
			if (flagjumpright == 1) {
				flagjumpright = 0;
				ctjumpright = 0;
			}
			if (flagjumpleft == 1) {
				flagjumpleft = 0;
				ctjumpleft = 0;
			}
		}
		flagcheckgravityjump = 0;
	}
	if (flagjump == 0) {
		if (x[rHero + 8][cHero] == ' ' && x[rHero + 8][cHero + 1] == ' ' && x[rHero + 8][cHero + 2] == ' ' && x[rHero + 8][cHero + 3] == ' ') {
			rHero++;
		}

	}
}
void randcBomb(int min, int max, int& cBomb, int& flagrandbomb)
{
	if (flagrandbomb == 1) {
		cBomb = ((rand() % ((max - min) + 1)) + min);
		flagrandbomb = 0;
	}
}
void RandomBombs(char x[][320], int& rBomb, int cBomb, int& flagrandombomb) {
	x[rBomb][cBomb] = 235;
	rBomb++;
	if (rBomb == 21) {
		flagrandombomb = 1;
		rBomb = 7;
	}
}
void DrawElevator(char x[][320], int rElevator, int cElevator) {
	x[rElevator][cElevator] = 201;
	int k = 1;
	for (int z = 38; z < 47; z++) {
		x[rElevator][cElevator + k] = 205;
		k++;
	}
	x[rElevator][cElevator + 10] = 187, x[rElevator + 1][cElevator + 10] = 186, x[rElevator + 2][cElevator + 10] = 186, x[rElevator + 3][cElevator + 10] = 186, x[rElevator + 4][cElevator + 10] = 186, x[rElevator + 5][cElevator + 10] = 186, x[rElevator + 6][cElevator + 10] = 186;
	x[rElevator + 7][cElevator + 10] = 188, x[rElevator + 7][cElevator + 5] = 205, x[rElevator + 7][cElevator + 4] = 205, x[rElevator + 7][cElevator + 3] = 205, x[rElevator + 7][cElevator + 2] = 205, x[rElevator + 7][cElevator + 1] = 205, x[rElevator + 7][cElevator] = 200;
	x[rElevator + 6][cElevator] = 186, x[rElevator + 5][cElevator] = 186, x[rElevator + 4][cElevator] = 186, x[rElevator + 3][cElevator] = 186, x[rElevator + 2][cElevator] = 186, x[rElevator + 1][cElevator] = 186, x[rElevator + 7][cElevator + 6] = 205, x[rElevator + 7][cElevator + 7] = 205, x[rElevator + 7][cElevator + 8] = 205, x[rElevator + 7][cElevator + 9] = 205;
}
void MoveElevator(int& rElevator, int cElevator, int& DirElevator, int cHero, int& rHero) {
	if (DirElevator == 1) {
		if (rElevator == 13) {
			DirElevator = -1;
		}
	}
	else {
		if (rElevator == 4) {
			DirElevator = 1;
		}
	}
	rElevator += DirElevator;
	if (cHero > 118 && cHero < 125) {
		rHero = rElevator;     // if the hero is within the parameters of the elevator then he moves with it
		rHero += DirElevator;

	}
}

void DrawGun(char x[][320], int& rGun, int& cGun, int rHero, int cHero, int& flagcatchgun) {
	if (rHero == 4 && cHero > 117 && cHero < 126) {
		flagcatchgun = 1;
	}
	if (flagcatchgun == 1) {
		rGun = rHero + 3;
		cGun = cHero + 6;
	}
	x[rGun][cGun] = '_', x[rGun][cGun + 1] = '_', x[rGun][cGun + 2] = ',', x[rGun][cGun + 3] = '_', x[rGun + 1][cGun - 1] = '|';
	x[rGun + 2][cGun - 1] = '|', x[rGun + 2][cGun] = '_', x[rGun + 2][cGun + 1] = '|', x[rGun + 1][cGun + 1] = '_', x[rGun + 1][cGun + 2] = '_', x[rGun + 1][cGun + 3] = '_', x[rGun + 1][cGun + 4] = '}';
}
void DrawMovingBoard(char x[][320], int rMovingBoard, int cMovingBoard) {
	for (int i = cMovingBoard; i < cMovingBoard + 7; i++) {
		x[rMovingBoard][i] = '_';
	}
}
void MovingBoard(int rHero, int& cHero, int rMovingBoard, int& cMovingBoard, int& dirmovingboard) {
	if (cMovingBoard == 92) { //board moves forward until..
		dirmovingboard = 1; // adding to the columns each time to move forward
	}
	if (cMovingBoard + 6 == 114) {  // until it meets the end then starts to go backwards
		dirmovingboard = -1; // minusing from the column each time to go backwards
	}
	if (rHero + 8 == rMovingBoard && cHero + 1 >= cMovingBoard && cHero + 1 < cMovingBoard + 6) {
		cHero += dirmovingboard;
	}
	cMovingBoard += dirmovingboard;
}
void SingleBullet(char x[][320], int rGun, int& cGun, int& flagsinglebullet, int& flagcatchgun, int& ctsinglebullet, int cHero, int cFox, int& flagfoxdie, int rPig, int cPig, int& flagPigDie, int& DrawKey) {
	if (flagsinglebullet == 1 && flagcatchgun == 1) {
		x[rGun + 1][cGun + ctsinglebullet] = 175; //placing the bullet
		ctsinglebullet++; // adding the count bullet so it moves forward each time  
	}
	if (cGun + ctsinglebullet == cHero + 80) { // if the bullet meets the end of the screen
		flagsinglebullet = 0; // the bullet stops
		ctsinglebullet = 5; // reseting the count (starting point is 5)
	}
	if (x[rGun + 1][(cGun + ctsinglebullet) + 1] != ' ') { //stopping the bullet if there is a surface in front of it 
		if (cGun + ctsinglebullet + 1 == cFox) { // if the column of the bullet meets the column of the fox
			flagfoxdie = 1; // then the fox dies and disappears
		}
		if (cGun + ctsinglebullet == cPig || cGun + ctsinglebullet == cPig - 1 || cGun + ctsinglebullet == cPig - 2 || cGun + ctsinglebullet == cPig - 3)
		{
			flagPigDie = 1;
			if (flagPigDie == 1) {
				flagcatchgun = 0;
				DrawKey = 1;
			}
		}
		flagsinglebullet = 0;
		ctsinglebullet = 5;
	}
}
void DrawFox(char x[][320], int rFox, int cFox, int flagfoxdie, int rGun, int cGun, int rHero, int cHero, int& flagdrawmoney, int& openbarricade) {
	if (flagfoxdie == 0) {
		x[rFox][cFox] = '|', x[rFox][cFox + 1] = '\\', x[rFox][cFox + 2] = '_', x[rFox][cFox + 3] = '/', x[rFox][cFox + 4] = '|', x[rFox][cFox + 5] = '_', x[rFox][cFox + 6] = '_', x[rFox][cFox + 7] = '_', x[rFox][cFox + 8] = '_', x[rFox][cFox + 9] = '_', x[rFox][cFox + 10] = '_', x[rFox][cFox + 11] = '_', x[rFox][cFox + 12] = ',', x[rFox][cFox] = 92;
		x[rFox + 1][cFox] = '(', x[rFox + 1][cFox + 2] = 7, x[rFox + 1][cFox + 2] = 34, x[rFox + 1][cFox + 3] = 7, x[rFox + 1][cFox + 4] = ')', x[rFox + 1][cFox + 5] = 126, x[rFox + 1][cFox + 6] = 126, x[rFox + 1][cFox + 12] = ')', x[rFox + 2][cFox + 1] = '\\', x[rFox + 2][cFox + 2] = 'O', x[rFox + 2][cFox + 3] = '/', x[rFox + 2][cFox + 4] = '\\', x[rFox + 2][cFox + 6] = '/';
		x[rFox + 2][cFox + 7] = '-', x[rFox + 2][cFox + 8] = '-', x[rFox + 2][cFox + 9] = '-', x[rFox + 2][cFox + 10] = 126, x[rFox + 2][cFox + 11] = '\\', x[rFox + 2][cFox + 12] = '\\';
		x[rFox + 3][cFox + 3] = '_', x[rFox + 3][cFox + 4] = '//', x[rFox + 3][cFox + 5] = '//', x[rFox + 3][cFox + 10] = '_', x[rFox + 3][cFox + 11] = '//', x[rFox + 3][cFox + 12] = '//';
	}
	if (flagfoxdie == 1) { // if the fox dies
		if (rHero + 7 == rFox + 3 && cHero + 3 == cFox + 3) { // and the hero reaches where the money is  
			flagdrawmoney = 0; //the money disappeaers 
			openbarricade = 1; // and the barricade opens once you claim the reward 
		}
		if (flagdrawmoney == 1) { // if the reard is still not selected then the money is still displayed on screen
			x[rFox + 3][cFox + 3] = '$', x[rFox + 3][cFox + 4] = '$', x[rFox + 3][cFox + 5] = '$';
		}
	}
}
void MoveFox(int cHero, int& cFox, int& flagfoxmove, int& flagfoxdie) {
	if (cHero > 127) { // when the cHero passes a specific point
		flagfoxmove = 1;// then we activate the chase 
		if (flagfoxmove == 1 && flagfoxdie == 0) { // if the fox is moving and its not dead or stopped
			cFox--;// then the fox starts chasing 
		}

	}
}
void DrawPig(char x[][320], int& rPig, int& cPig, int  flagPigDie) {
	if (flagPigDie == 0) {
		x[rPig][cPig] = 87, x[rPig][cPig + 1] = 87, x[rPig][cPig + 3] = 87, x[rPig][cPig + 4] = 87, x[rPig - 1][cPig - 3] = '(', x[rPig - 1][cPig - 2] = 'o', x[rPig - 1][cPig - 1] = 'o';
		x[rPig - 1][cPig] = ')', x[rPig - 1][cPig + 1] = '_', x[rPig - 1][cPig + 2] = '_', x[rPig - 1][cPig + 3] = '_', x[rPig - 1][cPig + 4] = '/', x[rPig - 2][cPig - 2] = 249, x[rPig - 2][cPig - 1] = 249, x[rPig - 2][cPig + 4] = '\\', x[rPig - 1][cPig + 5] = 57;
		x[rPig - 3][cPig - 3] = '^', x[rPig - 3][cPig] = '^', x[rPig - 3][cPig + 1] = '_', x[rPig - 3][cPig + 2] = '_', x[rPig - 3][cPig + 3] = '_';
	}

}
void MovePig(char x[][320], int& rPig, int& DirPig, int& cHero, int& flagPigDie) {
	if (cHero > 150) {
		if (flagPigDie == 0) {
			if (DirPig == 1) {
				if (rPig == 20)
				{
					DirPig = -1;
				}
			}
			else {
				if (rPig - 3 == 10) {
					DirPig = 1;
				}
			}
			rPig += DirPig;
		}
	}
}
void DrawBarricade(char x[][320], int openbarricade) {
	if (openbarricade == 0) {
		for (int i = 20; i > 10; i--) {
			x[i][193] = 219;
		}
	}
}
void Drawstands(char x[][320], int rHero, int cHero, int& ctstandsdisappear, int& drawstand1, int& drawstand2, int& drawstand3) {
	/*if (cHero >= 210 && cHero <= 226 && rHero + 8 == 18) {
		ctstandsdisappear++;
		if (ctstandsdisappear == 100) {
			drawstand1 = 0;
			ctstandsdisappear = 0;
		}
	}
	if (cHero >= 210 && cHero <= 226 && rHero + 8 == 15) {
		ctstandsdisappear++;
		if (ctstandsdisappear == 100) {
			drawstand2 = 0;
			ctstandsdisappear = 0;
		}
	}
	if (cHero >= 210 && cHero <= 226 && rHero + 8 == 12) {
		ctstandsdisappear++;
		if (ctstandsdisappear == 100) {
			drawstand3 = 0;
			ctstandsdisappear = 0;
		}
	}
	*/
	if (drawstand1 == 1) {
		x[18][210] = 205, x[18][211] = 205, x[18][212] = 205, x[18][213] = 205, x[18][214] = 205, x[18][215] = 205, x[18][216] = 205;//Stand1
	}
	if (drawstand2 == 1) {
		x[15][220] = 205, x[15][221] = 205, x[15][222] = 205, x[15][223] = 205, x[15][224] = 205, x[15][225] = 205, x[15][226] = 205;//Stand2
	}
	if (drawstand3 == 1) {
		x[12][210] = 205, x[12][211] = 205, x[12][212] = 205, x[12][213] = 205; x[12][214] = 205, x[12][215] = 205, x[12][216] = 205;//Stand3
	}
	/*if (cHero < 210 || cHero>226) {
		drawstand1 = 1;
		drawstand2 = 1;
		drawstand3 = 1;
		ctstandsdisappear = 0;
	}
	*/
}
void DrawGun2(char x[][320], int rHero, int cHero, int rMovingBoard2, int cMovingBoard2, int& DrawKey, int& flagcatchgun2) {
	if (DrawKey == 1 && cHero == cMovingBoard2 + 4 && rHero + 8 == rMovingBoard2) {
		flagcatchgun2 = 1;
		DrawKey = 0;
	}
	if (flagcatchgun2 == 1) {
		x[rHero + 4][cHero + 5] = 209, x[rHero + 4][cHero + 6] = 209, x[rHero + 4][cHero + 7] = 205, x[rHero + 4][cHero + 8] = '-';
	}
	else {
		x[rMovingBoard2 - 1][cMovingBoard2 + 4] = 209, x[rMovingBoard2 - 1][cMovingBoard2 + 5] = 209, x[rMovingBoard2 - 1][cMovingBoard2 + 6] = 205, x[rMovingBoard2 - 1][cMovingBoard2 + 7] = '-';
	}
}
void DrawMovingBoard2(char x[][320], int rHero, int& cHero, int rMovingBoard2, int& cMovingBoard2, int& DirMovingBoard2) {
	x[rMovingBoard2][cMovingBoard2] = '/', x[rMovingBoard2][cMovingBoard2 + 1] = '/', x[rMovingBoard2][cMovingBoard2 + 2] = '/', x[rMovingBoard2][cMovingBoard2 + 3] = '/', x[rMovingBoard2][cMovingBoard2 + 4] = '/';
	x[rMovingBoard2][cMovingBoard2 + 5] = '/', x[rMovingBoard2][cMovingBoard2 + 6] = '/', x[rMovingBoard2][cMovingBoard2 + 7] = '/', x[rMovingBoard2][cMovingBoard2 + 8] = '/', x[rMovingBoard2][cMovingBoard2 + 9] = '/';
	if (cMovingBoard2 == 180) {
		DirMovingBoard2 = 1;
	}
	if (cMovingBoard2 == 200) {
		DirMovingBoard2 = -1;
	}
	if (rHero + 8 == rMovingBoard2 && cHero + 1 >= cMovingBoard2 && cHero + 1 < cMovingBoard2 + 10) {
		cHero += DirMovingBoard2;
	}
	cMovingBoard2 += DirMovingBoard2;
}
void DrawHeroLifeBar(char x[][320], int cHero, int& Removebar, int& FlagEndGame) {
	if (Removebar == 6) {
		FlagEndGame == 1;
	}
	if (cHero > 13) {
		if (Removebar < 6) {
			x[0][cHero + 58] = 219;
		}
		if (Removebar < 5) {
			x[0][cHero + 59] = 219;
		}
		if (Removebar < 4) {
			x[0][cHero + 60] = 219;
		}
		if (Removebar < 3) {
			x[0][cHero + 61] = 219;
		}
		if (Removebar < 2) {
			x[0][cHero + 62] = 219;
		}
		if (Removebar < 1) {
			x[0][cHero + 63] = 219;
		}
	}
	else {
		if (Removebar < 6) {
			x[0][60] = 219;
		}
		if (Removebar < 5) {
			x[0][61] = 219;
		}
		if (Removebar < 4) {
			x[0][62] = 219;
		}
		if (Removebar < 3) {
			x[0][63] = 219;
		}
		if (Removebar < 2) {
			x[0][64] = 219;
		}
		if (Removebar < 1) {
			x[0][65] = 219;
		}
	}
}
void Checkpoints(char x[][320], int rHero, int  cHero, int& Currentpoint) {
	if (cHero + 1 == 3 && rHero + 7 == 20) {
		Currentpoint = cHero;
	}
	if (cHero + 1 == 81 && rHero + 7 == 20) {
		Currentpoint = cHero;
	}
	if (cHero + 1 == 185 && rHero + 7 == 20) {
		Currentpoint = cHero;
	}
	x[20][3] = 219;
	x[20][81] = 219;
	x[20][185] = 219;
}
void CheckBar(char x[][320], int& rHero, int& cHero, int& Removebar, int Currentpoint, int& cFox, int& flagfoxmove, int& ctsinglebullet, int cGun, int flagfoxdie, int& rBomb, int& cBomb, int& ctTouch) {
	if (rHero + 7 == 20 && cHero >= 9 && cHero <= 12) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 19 && cHero >= 9 && cHero <= 12) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 20 && cHero >= 20 && cHero <= 23) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 19 && cHero >= 20 && cHero <= 23) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 20 && cHero >= 32 && cHero <= 35) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 19 && cHero >= 32 && cHero <= 35) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 18 && cHero >= 92 && cHero <= 114) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 7 == 20 && cHero >= 210 && cHero <= 226) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero + 8 == 20 && cHero >= 210 && cHero <= 226) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (cGun + ctsinglebullet + 3 == cFox && flagfoxdie == 0) {
		Removebar++;
		cHero = Currentpoint; // killing and removing bar if fox touches hero
		cFox = 186;
		flagfoxmove = 0;     //resetting
		ctsinglebullet = 5;
	}
	if (rHero + 7 == 20 && cHero >= 92 && cHero <= 114) {
		Removebar++;
		cHero = Currentpoint;
	}
	if (rHero == rBomb && cHero == cBomb || rHero == rBomb && cHero + 1 == cBomb || rHero + 1 == rBomb && cHero + 2 == cBomb || rHero + 2 == rBomb && cHero + 1 == cBomb || rHero + 2 == rBomb && cHero + 2 == cBomb || rHero + 2 == rBomb && cHero + 3 == cBomb || rHero + 3 == rBomb && cHero == cBomb || rHero + 3 == rBomb && cHero + 1 == cBomb || rHero + 3 == rBomb && cHero + 2 == cBomb || rHero + 3 == rBomb && cHero + 3 == cBomb || rHero + 4 == rBomb && cHero == cBomb || rHero + 4 == rBomb && cHero + 1 == cBomb || rHero + 4 == rBomb && cHero + 2 == cBomb || rHero + 5 == rBomb && cHero == cBomb || rHero + 5 == rBomb && cHero + 1 == cBomb || rHero + 5 == rBomb && cHero + 2 == cBomb || rHero + 5 == rBomb && cHero + 3 == cBomb || rHero + 5 == rBomb && cHero + 4 == cBomb) {
		ctTouch++;
	}
	if (ctTouch == 3) { // if 3 bombs touched the hero from the top of his head then he dies 
		Removebar++;
		cHero = Currentpoint;
		ctTouch = 0;
	}
	//if (rHero + 7 > 21) {   // if The hero passes the ground then he dies
	//	Removebar++;
	//	cHero = Currentpoint;
	//	rHero = 13;
	//}
}
void DrawMissFarmer(char x[][320], int& rFarmer, int& cFarmer, int flagdrawmissfarmer) {
	if (flagdrawmissfarmer == 1) {
		x[rFarmer][cFarmer] = '_', x[rFarmer][cFarmer + 1] = '/', x[rFarmer][cFarmer + 2] = 'L', x[rFarmer][cFarmer + 3] = '\\', x[rFarmer][cFarmer + 4] = '_';
		x[rFarmer - 1][cFarmer + 1] = '\\', x[rFarmer - 1][cFarmer + 2] = '|', x[rFarmer - 1][cFarmer + 3] = '/';
		x[rFarmer - 2][cFarmer] = '|', x[rFarmer - 2][cFarmer + 1] = '_', x[rFarmer - 2][cFarmer + 2] = '_', x[rFarmer - 2][cFarmer + 3] = '_', x[rFarmer - 2][cFarmer + 4] = '|';
		x[rFarmer - 3][cFarmer - 6] = '(', x[rFarmer - 3][cFarmer - 5] = '-', x[rFarmer - 3][cFarmer - 4] = '-', x[rFarmer - 3][cFarmer - 3] = '-', x[rFarmer - 3][cFarmer - 2] = '|', x[rFarmer - 3][cFarmer - 1] = '_', x[rFarmer - 3][cFarmer] = '\\', x[rFarmer - 3][cFarmer + 4] = '|';
		x[rFarmer - 4][cFarmer - 6] = '(', x[rFarmer - 4][cFarmer - 5] = '-', x[rFarmer - 4][cFarmer - 4] = '-', x[rFarmer - 4][cFarmer - 3] = '-', x[rFarmer - 4][cFarmer - 2] = '|', x[rFarmer - 4][cFarmer - 1] = '_', x[rFarmer - 4][cFarmer] = '|', x[rFarmer - 4][cFarmer + 4] = '|';
		x[rFarmer - 5][cFarmer - 1] = '|', x[rFarmer - 5][cFarmer] = '/', x[rFarmer - 5][cFarmer + 4] = '\\';
		x[rFarmer - 6][cFarmer - 1] = '|', x[rFarmer - 6][cFarmer] = '|', x[rFarmer - 6][cFarmer + 1] = ')', x[rFarmer - 6][cFarmer + 2] = '_', x[rFarmer - 6][cFarmer + 3] = '(', x[rFarmer - 6][cFarmer + 4] = '_', x[rFarmer - 6][cFarmer + 5] = '\\', x[rFarmer - 6][cFarmer + 6] = '|';
		x[rFarmer - 7][cFarmer - 1] = '|', x[rFarmer - 7][cFarmer] = '(', x[rFarmer - 7][cFarmer + 4] = ')', x[rFarmer - 7][cFarmer + 5] = '\\'; x[rFarmer - 7][cFarmer + 6] = '\\';
		x[rFarmer - 8][cFarmer - 1] = '/', x[rFarmer - 8][cFarmer + 1] = '\\', x[rFarmer - 8][cFarmer + 2] = '_', x[rFarmer - 8][cFarmer + 3] = '/', x[rFarmer - 8][cFarmer + 5] = '\\', x[rFarmer - 8][cFarmer + 6] = '\\';
		x[rFarmer - 9][cFarmer] = '_', x[rFarmer - 9][cFarmer + 1] = '\\', x[rFarmer - 9][cFarmer + 2] = '_', x[rFarmer - 9][cFarmer + 3] = '/', x[rFarmer - 9][cFarmer + 4] = '_';
		x[rFarmer - 10][cFarmer] = '(', x[rFarmer - 10][cFarmer + 1] = '/', x[rFarmer - 10][cFarmer + 3] = '\\', x[rFarmer - 10][cFarmer + 4] = ')';
		x[rFarmer - 11][cFarmer] = '_', x[rFarmer - 11][cFarmer + 1] = ')', x[rFarmer - 11][cFarmer + 2] = '_', x[rFarmer - 11][cFarmer + 3] = '(', x[rFarmer - 11][cFarmer + 4] = '_';
		x[rFarmer - 12][cFarmer + 1] = '_', x[rFarmer - 12][cFarmer + 2] = '_', x[rFarmer - 12][cFarmer + 3] = '_';
	}
}
void MultipleBullets(char x[][320], char UMove, int& rHero, int& cHero, int& flagmultiplebullets, int activebullets[], int& currentbullet, int rmultiplebullets[], int cmultiplebullets[], int& flagcatchgun2) {
	if (UMove == 'b' && flagcatchgun2 == 1) {
		activebullets[currentbullet] = 1;
		rmultiplebullets[currentbullet] = rHero + 4;
		cmultiplebullets[currentbullet] = cHero + 9;
		currentbullet++;
	}

}
void drawmultibullets(char x[][320], int& currentbullet, int activebullets[], int rmultiplebullets[], int cmultiplebullets[]) {
	for (int i = 0; i < currentbullet; i++)
	{
		if (activebullets[i] == 1)
		{
			x[rmultiplebullets[i]][cmultiplebullets[i]] = '*';  // Draw the bullet
			if (x[rmultiplebullets[i]][cmultiplebullets[i] + 1] != ' ')
			{
				activebullets[i] = 0;  // Deactivate bullet if it hits something
			}
		}
	}
}
void movemultiplebullets(char x[][320], int& currentbullet, int activebullets[], int rmultiplebullets[], int cmultiplebullets[])
{
	for (int i = 0; i < currentbullet; i++)
	{
		if (activebullets[i] == 1)
		{
			cmultiplebullets[i]++;  // Move bullet to the right
		}
	}
}
void DrawLazerFarmer(char x[][320], int& cHero, int rFarmer, int cFarmer, int& ctLazerFarmer, int& flagdrawfarmerlazer, int& Removebar) {
	if (flagdrawfarmerlazer == 1) {
		if (cHero >= 230) {
			ctLazerFarmer++;
			if (ctLazerFarmer > 40) {
				for (int i = cHero + 4; i < 276; i++) {
					x[rFarmer - 3][i] = 220;
				}
				if (ctLazerFarmer == 80) {
					Removebar++;
					ctLazerFarmer = 0;
				}
			}
		}
	}
};
void CheckBulletHitFarmer(int cmultiplebullets[], int currentbullet, int& RemoveBarFarmer) {
	for (int i = 0; i < currentbullet; i++) {
		if (cmultiplebullets[i] > 281) {
			RemoveBarFarmer++;
		}
	}
}
void DrawEnemyLifeBar(char x[][320], int cHero, int RemoveBarFarmer, int& flagdrawmissfarmer, int& flagdrawfarmerlazer, int& flagcatchgun2, int& flagdrawlazerhero) {
	if (RemoveBarFarmer == 6) {
		flagdrawmissfarmer = 0;
		flagdrawfarmerlazer = 0;
		flagcatchgun2 = 0;
		flagdrawlazerhero = 1;
	}
	if (cHero > 13) {
		if (RemoveBarFarmer < 6) {
			x[0][cHero + 37] = 219;
		}
		if (RemoveBarFarmer < 5) {
			x[0][cHero + 38] = 219;
		}
		if (RemoveBarFarmer < 4) {
			x[0][cHero + 39] = 219;
		}
		if (RemoveBarFarmer < 3) {
			x[0][cHero + 40] = 219;
		}
		if (RemoveBarFarmer < 2) {
			x[0][cHero + 41] = 219;
		}
		if (RemoveBarFarmer < 1) {
			x[0][cHero + 42] = 219;
		}
	}
	else {
		if (RemoveBarFarmer < 6) {
			x[0][39] = 219;
		}
		if (RemoveBarFarmer < 5) {
			x[0][40] = 219;
		}
		if (RemoveBarFarmer < 4) {
			x[0][41] = 219;
		}
		if (RemoveBarFarmer < 3) {
			x[0][42] = 219;
		}
		if (RemoveBarFarmer < 2) {
			x[0][43] = 219;
		}
		if (RemoveBarFarmer < 1) {
			x[0][44] = 219;
		}
	}
}
void LazerHero(char x[][320], char UMove, int rHero, int cHero, int& flagdrawlazerhero, int& DrawLazer) {
	if (flagdrawlazerhero == 1 && UMove == 'n') {
		DrawLazer = 1;
	}
}
void DrawLazerHero(char x[][320], int rHero, int cHero, int& DrawLazer, int flagdrawlazerhero, int& ctlazerhero, int& flagdrawhouse) {
	if (flagdrawlazerhero == 1) {
		x[rHero + 5][cHero + 5] = 205, x[rHero + 5][cHero + 6] = 205, x[rHero + 5][cHero + 7] = '-';
	}
	if (DrawLazer == 1) {
		for (int i = cHero + 8;; i++) {
			x[rHero + 5][i] = 223;
			if (x[rHero + 5][i + 1] != ' ') {
				break;
			}
			if (rHero + 5 >= 15 && rHero + 5 <= 20 && i == 298) {
				flagdrawhouse = 0;
			}
		}
		ctlazerhero++;
		if (ctlazerhero == 5) {
			DrawLazer = 0;
			ctlazerhero = 0;
		}
	}
}
void DrawBunnies(char x[][320], int flagdrawhouse) {
	if (flagdrawhouse == 0) {
		x[20][305] = '*', x[20][306] = '\\', x[20][307] = ')', x[20][308] = ')', x[20][309] = '_';
		x[19][306] = '/', x[19][307] = 'r', x[19][308] = 'r';
		x[18][306] = '(', x[18][307] = '"', x[18][308] = '>', x[17][307] = '/', x[17][308] = '/';
		x[20][310] = '*', x[20][311] = '\\', x[20][312] = ')', x[20][313] = ')', x[20][314] = '_';
		x[19][311] = '/', x[19][312] = 'r', x[19][313] = 'r';
		x[18][311] = '(', x[18][312] = '"', x[18][313] = '>', x[17][314] = '/', x[17][315] = '/';
	}
}


void main() {
	char x[24][320];
	int rHero = 13, cHero = 2;
	int rFox = 17, cFox = 186;
	int rPig = 20, cPig = 203, DirPig = 1;
	int rFarmer = 20, cFarmer = 283;
	int rGun = 4, cGun = 121;
	int min = 62, max = 78;
	int rBomb = 7, cBomb = 62;
	int rElevator = 13, cElevator = 117, DirElevator = 1;
	int rMovingBoard2 = 12, cMovingBoard2 = 200, DirMovingBoard2 = 1;
	int flagcatchgun = 0;
	int flagCarrot1 = 0, flagCarrot2 = 0, flagCarrot3 = 0, flagCarrot4 = 0, flagCarrot5 = 0, flagCarrot6 = 0, flagCarrot7 = 0, flagCarrot8 = 0;
	int flagjump = 0;
	int ctjump = 0;
	int dirjump = 1;
	int flagjumpright = 0;
	int flagjumpleft = 0;
	int flagcheckgravityjump = 0;
	int flagrandbomb = 0;
	int ctstayinsky = 0;
	int ctjumpright = 0;
	int ctjumpleft = 0;
	int dirmovingboard = 1;
	int rMovingBoard = 15, cMovingBoard = 92;
	int flagsinglebullet = 0;
	int ctsinglebullet = 0;
	int flagfoxmove = 0;
	int flagfoxdie = 0;
	int flagPigDie = 0;
	int openbarricade = 0;
	int flagdrawmoney = 1;
	int DrawKey = 0;
	int ctstandsdisappear = 0;
	int drawstand1 = 1, drawstand2 = 1, drawstand3 = 1;
	int flagcatchgun2 = 0;
	int flagmultiplebullets = 0;
	int flagdrawhouse = 1;
	int CurrentPoint;
	int Removebar = 0;
	int drawmultiplebullets = 0;
	int ctmultiplebullets = 9;
	int ctTouch = 0;
	int cmultiplebullets[100];
	int rmultiplebullets[100];
	int activebullets[100];
	int currentbullet = 0;
	int ctLazerFarmer = 0;
	int flagdrawmissfarmer = 1;
	int RemoveBarFarmer = 0;
	int flagdrawfarmerlazer = 1;
	int flagdrawlazerhero = 0;
	int DrawLazer = 0;
	int ctlazerhero = 0;
	int FlagEndGame = 0;
	char UMove;
	if (FlagEndGame == 1) {
		for (;;)
		{
			for (; !_kbhit();)
			{
				ClearAndDrawFixedObject(x, rHero, cHero, DrawKey, flagCarrot1, flagCarrot2, flagCarrot3, flagCarrot4, flagCarrot5, flagCarrot6, flagCarrot7, flagCarrot8, flagdrawhouse);
				DrawHero(x, rHero, cHero);
				DrawMissFarmer(x, rFarmer, cFarmer, flagdrawmissfarmer);
				drawmultibullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
				movemultiplebullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
				CheckBulletHitFarmer(cmultiplebullets, currentbullet, RemoveBarFarmer);
				DrawEnemyLifeBar(x, cHero, RemoveBarFarmer, flagdrawmissfarmer, flagdrawfarmerlazer, flagcatchgun2, flagdrawlazerhero);
				LazerHero(x, rHero, cHero, flagdrawlazerhero, flagdrawlazerhero, DrawLazer);
				DrawLazerHero(x, rHero, cHero, DrawLazer, flagdrawlazerhero, ctlazerhero, flagdrawhouse);
				DrawBunnies(x, flagdrawhouse);
				MoveFox(cHero, cFox, flagfoxmove, flagfoxdie);
				DrawFox(x, rFox, cFox, flagfoxdie, rGun, cGun, rHero, cHero, flagdrawmoney, openbarricade);
				DrawLazerFarmer(x, cHero, rFarmer, cFarmer, ctLazerFarmer, flagdrawfarmerlazer, Removebar);
				Drawstands(x, rHero, cHero, ctstandsdisappear, drawstand1, drawstand2, drawstand3);
				DrawGun2(x, rHero, cHero, rMovingBoard2, cMovingBoard2, DrawKey, flagcatchgun2);
				DrawMovingBoard2(x, rHero, cHero, rMovingBoard2, cMovingBoard2, DirMovingBoard2);
				MovePig(x, rPig, DirPig, cHero, flagPigDie);
				DrawPig(x, rPig, cPig, flagPigDie);
				DrawHeroLifeBar(x, cHero, Removebar, FlagEndGame);
				Checkpoints(x, rHero, cHero, CurrentPoint);
				CheckBar(x, rHero, cHero, Removebar, CurrentPoint, cFox, flagfoxmove, ctsinglebullet, cGun, flagfoxdie, rBomb, cBomb, ctTouch);
				DrawBarricade(x, openbarricade);
				randcBomb(min, max, cBomb, flagrandbomb);
				DrawGun(x, rGun, cGun, rHero, cHero, flagcatchgun);
				RandomBombs(x, rBomb, cBomb, flagrandbomb);
				DrawElevator(x, rElevator, cElevator);
				MoveElevator(rElevator, cElevator, DirElevator, cHero, rHero);
				carrotcollecting(x, rHero, cHero, flagCarrot1, flagCarrot2, flagCarrot3, flagCarrot4, flagCarrot5);
				DrawMovingBoard(x, rMovingBoard, cMovingBoard);
				MovingBoard(rHero, cHero, rMovingBoard, cMovingBoard, dirmovingboard);
				Jump(rHero, cHero, flagjump, ctjump, dirjump, flagjumpright, flagjumpleft, flagcheckgravityjump, ctstayinsky);
				JumpLeftRight(rHero, cHero, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft, flagcheckgravityjump);
				SingleBullet(x, rGun, cGun, flagsinglebullet, flagcatchgun, ctsinglebullet, cHero, cFox, flagfoxdie, rPig, cPig, flagPigDie, DrawKey);
				CheckGravity(x, rHero, cHero, ctjump, flagjump, flagcheckgravityjump, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft);
				CoutMatToScreen(x, cHero);

			}

			UMove = _getch();
			MoveHero(rHero, cHero, UMove, x, flagjump, flagjumpright, flagjumpleft, flagsinglebullet, flagcatchgun, ctsinglebullet, openbarricade);
			DrawHero(x, rHero, cHero);
			MultipleBullets(x, UMove, rHero, cHero, flagmultiplebullets, activebullets, currentbullet, rmultiplebullets, cmultiplebullets, flagcatchgun2);
			movemultiplebullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
			drawmultibullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
			LazerHero(x, UMove, rHero, cHero, flagdrawlazerhero, DrawLazer);
			DrawLazerHero(x, rHero, cHero, DrawLazer, flagdrawlazerhero, ctlazerhero, flagdrawhouse);
			CheckGravity(x, rHero, cHero, ctjump, flagjump, flagcheckgravityjump, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft);

		}
	}
}