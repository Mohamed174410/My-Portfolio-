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
	x[2][1] = '(', x[1][2] = ' ', x[2][3] = ')', x[2][4] = ')', x[2][5] = ' ', x[3][5] = ')', x[3][4] = '_';
	x[4][4] = ')', x[4][3] = ' ', x[4][2] = '(', x[3][1] = ' ', x[3][0] = '(', x[2][10] = '(', x[1][11] = ' ', x[1][12] = ' ', x[2][13] = ')', x[1][14] = ' ', x[2][15] = '(', x[1][16] = ' ', x[2][17] = ')', x[3][9] = '-', x[3][10] = '-';
	x[4][8] = '(', x[5][9] = '-', x[5][10] = '-', x[6][11] = '(', x[6][12] = ' ', x[6][13] = ' ', x[6][14] = ')', x[6][15] = '(', x[6][16] = ' ', x[6][17] = ')', x[5][17] = ' ', x[5][18] = ')', x[4][18] = ')', x[3][17] = '-', x[3][18] = '-';
	x[2][26] = ' ', x[2][27] = '(', x[1][28] = ' ', x[2][29] = ')', x[1][30] = ' ', x[1][31] = ' ', x[2][32] = '(', x[1][33] = ' ', x[2][34] = ')', x[2][35] = ' ', x[3][36] = ')', x[4][35] = '-', x[5][36] = ')', x[6][36] = ')';
	x[3][25] = '(', x[4][25] = '-', x[4][24] = '_', x[5][23] = '(', x[6][25] = '(';
	x[3][44] = '(', x[3][45] = ' ', x[4][46] = '(', x[4][47] = ' ', x[4][48] = ')', x[3][48] = ' ', x[3][49] = ')', x[2][49] = ' ', x[2][45] = '(', x[1][46] = ' ', x[2][47] = ' ', x[2][48] = ')';//cloud 5
	x[1][67] = ' ', x[1][69] = ' ', x[1][70] = ' ', x[1][72] = ' ', x[1][73] = ' ', x[1][74] = ' ', x[2][66] = '(', x[2][68] = ')', x[2][71] = '(', x[2][75] = ')', x[2][76] = ')', x[2][77] = ' ', x[2][78] = ' ';
	x[3][64] = '(', x[3][63] = ' '; x[3][79] = ')', x[4][78] = '-', x[4][62] = '(', x[4][61] = ' ', x[5][60] = '(', x[5][79] = ')', x[6][61] = '(', x[6][62] = ' ', x[6][63] = ' ', x[6][64] = ')', x[6][65] = '(', x[6][72] = ')', x[6][73] = '(', x[6][79] = ')';
	x[2][81] = '(', x[1][82] = ' ', x[2][83] = ')', x[2][84] = ')', x[2][85] = ' ', x[3][85] = ')', x[3][84] = '_';
	x[4][84] = ')', x[4][83] = ' ', x[4][82] = '(', x[3][81] = ' ', x[3][80] = '(', x[2][90] = '(', x[1][91] = ' ', x[1][92] = ' ', x[2][93] = ')', x[1][94] = ' ', x[2][95] = '(', x[1][96] = ' ', x[2][97] = ')', x[3][89] = '-', x[3][90] = '-';
	x[4][88] = '(', x[5][89] = '-', x[5][90] = '-', x[6][91] = '(', x[6][92] = ' ', x[6][93] = ' ', x[6][94] = ')', x[6][95] = '(', x[6][96] = ' ', x[6][97] = ')', x[5][97] = ' ', x[5][98] = ')', x[4][98] = ')', x[3][97] = '-', x[3][98] = '-';
	x[2][106] = ' ', x[2][107] = '(', x[1][108] = ' ', x[2][109] = ')', x[1][110] = ' ', x[1][111] = ' ', x[2][112] = '(', x[1][113] = ' ', x[2][114] = ')', x[2][115] = ' ', x[3][116] = ')', x[4][115] = '-', x[5][116] = ')', x[6][116] = ')';
	x[3][105] = '(', x[4][105] = '-', x[4][104] = '_', x[5][103] = '(', x[6][105] = '(';
	x[1][147] = ' ', x[1][149] = ' ', x[1][150] = ' ', x[1][152] = ' ', x[1][153] = ' ', x[1][154] = ' ', x[2][146] = '(', x[2][148] = ')', x[2][151] = '(', x[2][155] = ')', x[2][156] = ')', x[2][157] = ' ', x[2][158] = ' ';
	x[3][144] = '(', x[3][143] = ' '; x[3][159] = ')', x[4][158] = '-', x[4][142] = '(', x[4][141] = ' ', x[5][140] = '(', x[5][159] = ')', x[6][141] = '(', x[6][142] = ' ', x[6][143] = ' ', x[6][144] = ')', x[6][145] = '(', x[6][152] = ')', x[6][153] = '(', x[6][159] = ')';
	x[2][161] = '(', x[1][162] = ' ', x[2][163] = ')', x[2][164] = ')', x[2][165] = ' ', x[3][165] = ')', x[3][164] = '_';
	x[4][164] = ')', x[4][163] = ' ', x[4][162] = '(', x[3][161] = ' ', x[3][160] = '(', x[2][170] = '(', x[1][171] = ' ', x[1][172] = ' ', x[2][173] = ')', x[1][174] = ' ', x[2][175] = '(', x[1][176] = ' ', x[2][177] = ')', x[3][169] = '-', x[3][170] = '-';
	x[4][168] = '(', x[5][169] = '-', x[5][170] = '-', x[6][171] = '(', x[6][172] = ' ', x[6][173] = ' ', x[6][174] = ')', x[6][175] = '(', x[6][176] = ' ', x[6][177] = ')', x[5][177] = ' ', x[5][178] = ')', x[4][178] = ')', x[3][177] = '-', x[3][178] = '-';
	/*x[2][186] = ' ', x[2][187] = '(', x[1][188] = ' ', x[2][189] = ')', x[1][190] = ' ', x[1][191] = ' ', x[2][192] = '(', x[1][193] = ' ', x[2][194] = ')', x[2][195] = ' ', x[3][196] = ')', x[4][195] = '-', x[5][196] = ')', x[6][196] = ')';
	x[3][185] = '(', x[4][185] = '-', x[4][184] = '_', x[5][183] = '(', x[6][185] = '(';
	x[3][204] = '(', x[3][205] = ' ', x[4][206] = '(', x[4][207] = ' ', x[4][208] = ')', x[3][208] = ' ', x[3][209] = ')', x[2][209] = ' ', x[2][205] = '(', x[1][206] = ' ', x[2][207] = ' ', x[2][208] = ')';
	*/x[1][227] = ' ', x[1][229] = ' ', x[1][230] = ' ', x[1][232] = ' ', x[1][233] = ' ', x[1][234] = ' ', x[2][226] = '(', x[2][228] = ')', x[2][231] = '(', x[2][235] = ')', x[2][236] = ')', x[2][237] = ' ', x[2][238] = ' ';
	x[3][224] = '(', x[3][223] = ' '; x[3][239] = ')', x[4][238] = '-', x[4][222] = '(', x[4][221] = ' ', x[5][220] = '(', x[5][239] = ')', x[6][221] = '(', x[6][222] = ' ', x[6][223] = ' ', x[6][224] = ')', x[6][225] = '(', x[6][232] = ')', x[6][233] = '(', x[6][239] = ')';
	x[2][241] = '(', x[1][242] = ' ', x[2][243] = ')', x[2][244] = ')', x[2][245] = ' ', x[3][245] = ')', x[3][244] = '_';
	x[4][244] = ')', x[4][243] = ' ', x[4][242] = '(', x[3][241] = ' ', x[3][240] = '(', x[2][250] = '(', x[1][251] = ' ', x[1][252] = ' ', x[2][253] = ')', x[1][254] = ' ', x[2][255] = '(', x[1][256] = ' ', x[2][257] = ')', x[3][249] = '-', x[3][250] = '-';
	x[4][248] = '(', x[5][249] = '-', x[5][250] = '-', x[6][251] = '(', x[6][252] = ' ', x[6][253] = ' ', x[6][254] = ')', x[6][255] = '(', x[6][256] = ' ', x[6][257] = ')', x[5][257] = ' ', x[5][258] = ')', x[4][258] = ')', x[3][257] = '-', x[3][258] = '-';
	x[2][266] = ' ', x[2][267] = '(', x[1][268] = ' ', x[2][269] = ')', x[1][270] = ' ', x[1][271] = ' ', x[2][272] = '(', x[1][273] = ' ', x[2][274] = ')', x[2][275] = ' ', x[3][276] = ')', x[4][275] = '-', x[5][276] = ')', x[6][276] = ')';
	x[3][265] = '(', x[4][265] = '-', x[4][264] = '_', x[5][263] = '(', x[6][265] = '(';
	x[3][284] = '(', x[3][285] = ' ', x[4][286] = '(', x[4][287] = ' ', x[4][288] = ')', x[3][288] = ' ', x[3][289] = ')', x[2][289] = ' ', x[2][285] = '(', x[1][286] = ' ', x[2][287] = ' ', x[2][288] = ')';
	x[1][307] = ' ', x[1][309] = ' ', x[1][310] = ' ', x[1][312] = ' ', x[1][313] = ' ', x[1][314] = ' ', x[2][306] = '(', x[2][308] = ')', x[2][311] = '(', x[2][315] = ')', x[2][316] = ')', x[2][317] = ' ', x[2][318] = ' ';
	x[3][304] = '(', x[3][303] = ' '; x[3][319] = ')', x[4][318] = '-', x[4][302] = '(', x[4][301] = ' ', x[5][300] = '(', x[5][319] = ')', x[6][301] = '(', x[6][302] = ' ', x[6][303] = ' ', x[6][304] = ')', x[6][305] = '(', x[6][312] = ')', x[6][313] = '(', x[6][319] = ')';



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
	}
	x[18][18] = 205, x[18][19] = 205, x[18][20] = 205, x[18][21] = 205, x[18][22] = 205, x[18][23] = 205, x[18][24] = 205, x[18][24] = 205;
	int c = 26;
	int z = 0;
	for (int r = 12; r < 18; r++) {
		z++;
		if (z % 2 != 0) {
			x[r][c] = 186;
		}
		else {
			x[r][c] = 204;
		}
	}
	c = 29;
	z = 0;
	for (int r = 12; r < 18; r++) {
		z++;
		if (z % 2 != 0) {
			x[r][c] = 186;

		}
		else {
			x[r][c] = 185;
			x[r][27] = 205;
			x[r][28] = 205;
		}
	}
	x[11][31] = 205, x[11][32] = 205, x[11][33] = 205, x[11][34] = 205, x[11][35] = 205, x[11][36] = 205, x[11][37] = 205, x[11][37] = 205; //ladder
	x[20][42] = 201, x[20][43] = 205, x[20][44] = 205, x[20][45] = 187; //trap 1
	x[20][55] = 201, x[20][56] = 205, x[20][57] = 205, x[20][58] = 187; //trap 1
	x[20][70] = 201, x[20][71] = 205, x[20][72] = 205, x[20][73] = 187; //trap 1
	x[16][260] = 205, x[16][259] = 205, x[16][258] = 205, x[16][257] = 205, x[16][256] = 205, x[16][255] = 205, x[16][254] = 205, x[16][260] = 205, x[16][261] = 205, x[16][262] = 205, x[16][263] = 205, x[16][264] = 205, x[16][265] = 205, x[16][266] = 205, x[16][267] = 205, x[16][268] = 205;

}
void randcBomb(int min, int max, int& cBomb, int& flagrandbomb)
{
	if (flagrandbomb == 1) {
		cBomb = ((rand() % ((max - min) + 1)) + min);
		flagrandbomb = 0;
	}
}
void RandomBombs(char x[][320], int& rBomb, int cBomb, int& flagrandombomb, int rHero , int cHero , int &health , int &flagendgame) {
	x[rBomb][cBomb] = 235;
	rBomb++;
	if (rBomb == 21) {
		flagrandombomb = 1;
		rBomb = 7;
	}
	if (rHero == rBomb && cHero == cBomb || rHero+1==rBomb && cHero+1==cBomb || rHero+2==rBomb &&cHero+1==cBomb)
	{
		health++;
	}
	if (health == 7)
	{
		flagendgame = 1;
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
	x[rHero - 3][cHero + 2] = '|';
	x[rHero - 3][cHero + 1] = '|';
	x[rHero - 3][cHero + 5] = '|';
	x[rHero - 3][cHero + 6] = '|';
	x[rHero - 2][cHero + 1] = '\\';
	x[rHero - 2][cHero + 2] = '\\';
	x[rHero - 2][cHero + 3] = '(';
	x[rHero - 2][cHero + 4] = ')';
	x[rHero - 2][cHero + 5] = '/';
	x[rHero - 2][cHero + 6] = '/';
	x[rHero - 1][cHero + 0] = '/';
	x[rHero - 1][cHero + 1] = '/';
	x[rHero - 1][cHero + 2] = '(';
	x[rHero - 1][cHero + 3] = '_';
	x[rHero - 1][cHero + 4] = '_';
	x[rHero - 1][cHero + 5] = ')';
	x[rHero - 1][cHero + 6] = '\\';
	x[rHero - 1][cHero + 7] = '\\';
	x[rHero - 0][cHero + 0] = '|';
	x[rHero - 0][cHero + 1] = '|';
	x[rHero - 0][cHero + 6] = '|';
	x[rHero - 0][cHero + 7] = '|';

}
void MoveHero(int& rHero, int& cHero, char userMove, char x[][320], int& flagjump, int& doubleflagjumpright, int& doubleflagjumpleft, int& flagsinglebullet, int& flagcatchgun, int& ctsinglebullet, int& openbarricade, int& flagjumpright, int& flagjumpleft)
{
	if (userMove == 'w')
	{
		rHero--;
	}
	if (rHero < 21) {
		if (userMove == 's')
		{
			rHero++;
		}
	}
	if (userMove == 'a')
	{
		cHero--;
	}
	if (userMove == 'd')
	{
		cHero++;
	}
	if (userMove == ' ') {
		flagjump = 1;
	}
	if (userMove == 'l') {
		doubleflagjumpright = 1;
	}
	if (userMove == 'k') {
		doubleflagjumpleft = 1;
	}
	if (userMove == 'g')
	{
		flagjumpright = 1;
	}
	if (userMove == 'h')
	{
		flagjumpleft = 1;
	}
	if (flagcatchgun == 1) {
		if (userMove == 'v') {
			flagsinglebullet = 1;
			ctsinglebullet = 5; // resetting the bulletcount when it is +5 from the rGun
		}
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

void MoveElevator(int& rElevator, int& cElevator, int& DirElevator, int& cHero, int& rHero, int flagcatchgun) {
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
	cElevator -= DirElevator;

	if (flagcatchgun == 0)
	{
		if (cHero > 105 && cHero < 125)
		{
			rHero = rElevator + 3;     // if the hero is within the parameters of the elevator then he moves with it
			cHero = cElevator + 1;
			rHero += DirElevator;
			cHero += DirElevator;

		}
	}
}

void DrawGun(char x[][320], int& rGun, int& cGun, int rHero, int cHero, int& flagcatchgun) {
	if (rHero == 6 && cHero > 117 && cHero < 126) {
		flagcatchgun = 1;
	}
	if (flagcatchgun == 1) {
		rGun = rHero - 2;
		cGun = cHero + 9;
	}
	x[rGun][cGun] = '-', x[rGun][cGun + 1] = '-', x[rGun][cGun + 2] = ',', x[rGun][cGun + 3] = '_', x[rGun + 1][cGun - 1] = '|';
	x[rGun + 2][cGun - 1] = '|', x[rGun + 2][cGun] = '-', x[rGun + 2][cGun + 1] = '|', x[rGun + 1][cGun + 1] = '-', x[rGun + 1][cGun + 2] = '|', x[rGun + 1][cGun + 3] = '|', x[rGun + 1][cGun + 4] = '}';
}

void SingleBullet(char x[][320], int rGun, int& cGun, int& flagsinglebullet, int& flagcatchgun, int& ctsinglebullet, int cHero, int cFox, int& flagfoxdie, int rPig, int cPig, int& flagenemy1die, int& DrawPrize) {
	if (flagsinglebullet == 1 && flagcatchgun == 1) {
		x[rGun - ctsinglebullet + 7][cGun + ctsinglebullet] = 175; //placing the bullet
		ctsinglebullet++; // adding the count bullet so it moves forward each time  
	}
	//if (cGun + ctsinglebullet == cHero + 80) { // if the bullet meets the end of the screen
		//flagsinglebullet = 0; // the bullet stops
		//ctsinglebullet = 5; // reseting the count (starting point is 5)
	//}
	if (x[rGun + 1][(cGun + ctsinglebullet) + 1] != ' ') { //stopping the bullet if there is a surface in front of it 
		if (cGun + ctsinglebullet + 1 == cFox) { // if the column of the bullet meets the column of the fox
			flagfoxdie = 1; // then the fox dies and disappears
		}


		if ((cGun + ctsinglebullet == cPig && rGun == rPig) || (cGun + ctsinglebullet == cPig && rGun == rPig + 1) || (cGun + ctsinglebullet == cPig && rGun == rPig + 2) || (cGun + ctsinglebullet == cPig && rGun == rPig + 3) || (cGun + ctsinglebullet == cPig && rGun == rPig + 4) || (cGun + ctsinglebullet == cPig && rGun == rPig - 1) || (cGun + ctsinglebullet == cPig - 1 && rGun == rPig + 1) || cGun + ctsinglebullet == cPig - 2 || cGun + ctsinglebullet == cPig - 3 || cGun + ctsinglebullet == cPig + 2 || cGun + ctsinglebullet == cPig + 1)
		{
			flagenemy1die = 1;
			if (flagenemy1die == 1) {
				DrawPrize = 1;
			}
		}
		flagsinglebullet = 0;
		ctsinglebullet = 5;
	}
}


void MultipleBullets(char x[][320], char UMove, int& rHero, int& cHero, int& flagmultiplebullets, int activebullets[], int& currentbullet, int rmultiplebullets[], int cmultiplebullets[], int& flagcatchgun2) {
	if (UMove == 'b' && flagcatchgun2 == 1) {
		activebullets[currentbullet] = 1;
		rmultiplebullets[currentbullet] = rHero;
		cmultiplebullets[currentbullet] = cHero + 15;
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
			cmultiplebullets[i]++;  // Move bullet to the right
		}
	}
}


void CheckGravity(char x[][320], int& rHero, int cHero, int& ctjump, int& flagjump, int& flagcheckgravityjump, int& flagjumpright, int& flagjumpleft, int& ctjumpright, int& ctjumpleft) {
	if (flagcheckgravityjump == 1) {
		if (x[rHero + 1][cHero] != ' ' || x[rHero + 1][cHero + 1] != ' ' || x[rHero + 1][cHero + 2] != ' ' || x[rHero + 1][cHero + 3] != ' ' || x[rHero + 1][cHero + 4] != ' ' || x[rHero + 1][cHero + 5] != ' ' || x[rHero + 1][cHero + 6] != ' ' || x[rHero + 1][cHero + 7] != ' ') {
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
		if (x[rHero + 1][cHero] == ' ' && x[rHero + 1][cHero + 1] == ' ' && x[rHero + 1][cHero + 2] == ' ' && x[rHero + 1][cHero + 3] == ' ' && x[rHero + 1][cHero + 4] == ' ' && x[rHero + 1][cHero + 5] == ' ' && x[rHero + 1][cHero + 6] == ' ' && x[rHero + 1][cHero + 7] == ' ') {
			rHero++;
		}

	}
}


void Enemy1(char x[][320], int rEnemy1, int cEnemy1, int flagenemy1die, int cHero)
{

	if (flagenemy1die == 1 )
	{
		x[rEnemy1 - 2][cEnemy1 + 7] = '.';
		x[rEnemy1 - 2][cEnemy1 + 8] = '^';
		x[rEnemy1 - 2][cEnemy1 + 9] = '.';
		x[rEnemy1 - 1][cEnemy1 + 5] = ',';
		x[rEnemy1 - 1][cEnemy1 + 6] = '-';
		x[rEnemy1 - 1][cEnemy1 + 7] = '.';
		x[rEnemy1 - 1][cEnemy1 + 8] = '|';
		x[rEnemy1 - 1][cEnemy1 + 9] = ',';
		x[rEnemy1 - 1][cEnemy1 + 10] = '-';
		x[rEnemy1 - 1][cEnemy1 + 11] = '.';
		x[rEnemy1 - 0][cEnemy1 + 8] = 'v';
	}




	if (flagenemy1die == 0)
	{
		x[rEnemy1 - 7][cEnemy1 + 3] = '_';
		x[rEnemy1 - 7][cEnemy1 + 4] = 'O';
		x[rEnemy1 - 7][cEnemy1 + 5] = '_';
		x[rEnemy1 - 6][cEnemy1 + 1] = '/';
		x[rEnemy1 - 6][cEnemy1 + 7] = '\\';
		x[rEnemy1 - 5][cEnemy1 + 0] = '|';
		x[rEnemy1 - 5][cEnemy1 + 1] = '=';
		x[rEnemy1 - 5][cEnemy1 + 2] = '=';
		x[rEnemy1 - 5][cEnemy1 + 3] = '/';
		x[rEnemy1 - 5][cEnemy1 + 4] = '=';
		x[rEnemy1 - 5][cEnemy1 + 5] = '\\';
		x[rEnemy1 - 5][cEnemy1 + 6] = '=';
		x[rEnemy1 - 5][cEnemy1 + 7] = '=';
		x[rEnemy1 - 5][cEnemy1 + 8] = '|';
		x[rEnemy1 - 4][cEnemy1 + 0] = '|';
		x[rEnemy1 - 4][cEnemy1 + 3] = 'O';
		x[rEnemy1 - 4][cEnemy1 + 5] = 'O';
		x[rEnemy1 - 4][cEnemy1 + 8] = '|';
		x[rEnemy1 - 3][cEnemy1 + 1] = '\\';
		x[rEnemy1 - 3][cEnemy1 + 4] = 'V';
		x[rEnemy1 - 3][cEnemy1 + 7] = '/';
		x[rEnemy1 - 2][cEnemy1 + 1] = '/';
		x[rEnemy1 - 2][cEnemy1 + 2] = '`';
		x[rEnemy1 - 2][cEnemy1 + 3] = '-';
		x[rEnemy1 - 2][cEnemy1 + 4] = '-';
		x[rEnemy1 - 2][cEnemy1 + 5] = '-';
		x[rEnemy1 - 2][cEnemy1 + 6] = '\'';
		x[rEnemy1 - 2][cEnemy1 + 7] = '\\';
		x[rEnemy1 - 1][cEnemy1 + 1] = 'O';
		x[rEnemy1 - 1][cEnemy1 + 2] = '\'';
		x[rEnemy1 - 1][cEnemy1 + 3] = '_';
		x[rEnemy1 - 1][cEnemy1 + 4] = ':';
		x[rEnemy1 - 1][cEnemy1 + 5] = '_';
		x[rEnemy1 - 1][cEnemy1 + 6] = '`';
		x[rEnemy1 - 1][cEnemy1 + 7] = 'O';
		x[rEnemy1 - 0][cEnemy1 + 2] = '-';
		x[rEnemy1 - 0][cEnemy1 + 3] = '-';
		x[rEnemy1 - 0][cEnemy1 + 5] = '-';
		x[rEnemy1 - 0][cEnemy1 + 6] = '-';
	}
}

void MoveEnemy(char x[][320], int& rEnemy, int& DirEnemy, int& cHero, int& flagEnemyDie) {
	if (cHero > 150) {
		if (flagEnemyDie == 0) {
			if (DirEnemy == 1) {
				if (rEnemy == 20)
				{
					DirEnemy = -1;
				}
			}
			else {
				if (rEnemy - 3 == 10) {
					DirEnemy = 1;
				}
			}
			rEnemy += DirEnemy;
		}
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
void DoubleJumpLeftRight(int& rHero, int& cHero, int& flagjumpright, int& flagjumpleft, int& ctjumpright, int& ctjumpleft, int& flagcheckgravityjump) {
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
			//flagcheckgravityjump = 1;
		}
	}
	if (ctjumpright >= 15 && ctjumpright < 22)
	{
		if (flagjumpright == 1) {
			cHero++;
			rHero--;
			ctjumpright++;
		}
	}
	if (ctjumpright == 22)
	{
		if (flagjumpright == 1) {
			cHero++;
			ctjumpright++;
		}
	}
	if (ctjumpright > 22 && ctjumpright < 28)
	{
		if (flagjumpright == 1) {
			cHero++;
			rHero++;
			ctjumpright++;
			flagcheckgravityjump = 1;
		}
	}
	if (ctjumpright == 28) {
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
			//flagcheckgravityjump = 1;
		}
	}
	if (ctjumpleft >= 15 && ctjumpleft < 22)
	{
		if (flagjumpleft == 1) {
			cHero--;
			rHero--;
			ctjumpleft++;
		}
	}
	if (ctjumpleft == 22)
	{
		if (flagjumpleft == 1) {
			cHero--;
			ctjumpleft++;
		}
	}
	if (ctjumpleft > 22 && ctjumpleft < 28)
	{
		if (flagjumpleft == 1) {
			cHero--;
			rHero++;
			ctjumpleft++;
			flagcheckgravityjump = 1;
		}
	}
	if (ctjumpleft == 28) {
		flagjumpleft = 0;
		ctjumpleft = 0;
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


void Laser(char x[][320], int rowLaser, int columnLaser, int cHero, int& Health, int& FlagLaser,int &flagendgame)
{
	x[rowLaser + 1][columnLaser + 3] = 186;
	x[rowLaser + 2][columnLaser + 3] = 186;
	x[rowLaser + 3][columnLaser + 3] = 186;
	x[rowLaser + 4][columnLaser + 3] = 186;
	x[rowLaser + 5][columnLaser + 3] = 186;
	x[rowLaser + 6][columnLaser + 3] = 186;
	x[rowLaser + 7][columnLaser + 3] = 186;
	x[rowLaser + 8][columnLaser + 3] = 186;
	x[rowLaser + 9][columnLaser + 3] = 186;
	x[rowLaser + 10][columnLaser + 3] = 186;
	x[rowLaser + 11][columnLaser + 3] = 186;
	x[rowLaser + 12][columnLaser + 3] = 186;
	x[rowLaser + 13][columnLaser + 3] = 186;

	if (columnLaser + 3 == cHero || columnLaser + 3 == cHero + 1 || columnLaser + 3 == cHero + 2 || columnLaser + 3 == cHero + 3 || columnLaser + 3 == cHero + 4 || columnLaser + 3 == cHero + 5 || columnLaser + 3 == cHero + 6)
	{
		Health++;
	}
	if (Health == 7)
	{
		flagendgame = 1;
	}
}


void CatEnemy(char x[][320], int rEnemy2, int cEnemy2,int cHero)
{
	if (cHero < 275)
	{
		x[rEnemy2 - 3][cEnemy2 + 2] = '/';
		x[rEnemy2 - 3][cEnemy2 + 3] = '\\';
		x[rEnemy2 - 3][cEnemy2 + 4] = '_';
		x[rEnemy2 - 3][cEnemy2 + 5] = '/';
		x[rEnemy2 - 3][cEnemy2 + 6] = '\\';
		x[rEnemy2 - 3][cEnemy2 + 9] = '(';
		x[rEnemy2 - 2][cEnemy2 + 1] = '(';
		x[rEnemy2 - 2][cEnemy2 + 3] = '^';
		x[rEnemy2 - 2][cEnemy2 + 4] = '.';
		x[rEnemy2 - 2][cEnemy2 + 5] = '^';
		x[rEnemy2 - 2][cEnemy2 + 7] = ')';
		x[rEnemy2 - 2][cEnemy2 + 9] = '_';
		x[rEnemy2 - 2][cEnemy2 + 10] = ')';
		x[rEnemy2 - 1][cEnemy2 + 3] = '\\';
		x[rEnemy2 - 1][cEnemy2 + 4] = '"';
		x[rEnemy2 - 1][cEnemy2 + 5] = '/';
		x[rEnemy2 - 1][cEnemy2 + 8] = '(';
		x[rEnemy2 - 0][cEnemy2 + 1] = '(';
		x[rEnemy2 - 0][cEnemy2 + 3] = '|';
		x[rEnemy2 - 0][cEnemy2 + 5] = '|';
		x[rEnemy2 - 0][cEnemy2 + 7] = ')';
	}
}

void CatLaser(char x[][320], int rowLaser, int columnLaser, int cHero, int& Health , int &flagendgame ,int rHero)
{
	x[rowLaser][columnLaser + 3] = 205;
	x[rowLaser][columnLaser + 4] = 205;
	x[rowLaser][columnLaser + 5] = 205;
	x[rowLaser][columnLaser + 6] = 205;
	x[rowLaser][columnLaser + 7] = 205;
	x[rowLaser][columnLaser + 8] = 205;
	x[rowLaser][columnLaser + 9] = 205;
	x[rowLaser][columnLaser + 10] = 205;
	x[rowLaser][columnLaser + 11] = 205;
	x[rowLaser][columnLaser + 12] = 205;
	x[rowLaser][columnLaser + 1] = 205;
	x[rowLaser][columnLaser + 2] = 205;
	x[rowLaser][columnLaser + 0] = 205;
	x[rowLaser][columnLaser - 1] = 205;
	x[rowLaser][columnLaser - 2] = 205;
	x[rowLaser][columnLaser - 3] = 205;
	x[rowLaser][columnLaser - 4] = 205;
	x[rowLaser][columnLaser - 5] = 205;
	x[rowLaser][columnLaser - 6] = 205;
	x[rowLaser][columnLaser - 7] = 205;

	if (columnLaser - 7 == cHero && rowLaser ==rHero-2 || columnLaser - 7 == cHero + 1 && rowLaser == rHero-2 || columnLaser - 7 == cHero + 2 && rowLaser == rHero-2 || columnLaser - 7 == cHero + 3 && rowLaser == rHero-2 || columnLaser - 7 == cHero + 4 && rowLaser == rHero-2  || columnLaser - 7 == cHero + 5 && rowLaser == rHero-2 || columnLaser - 7 == cHero + 6 && rowLaser == rHero)
	{
		Health++;
	}
	if (Health == 7)
	{
		flagendgame = 1;
	}
}

void DrawHeroLifeBar(char x[][320], int cHero, int& Removebar, int& FlagEndGame) {
	if (x[0][cHero + 58] == ' ') {
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

void DrawInsect(char x[][320], int rscore, int cscore)
{
	x[rscore - 2][cscore + 0] = '\\';
	x[rscore - 2][cscore + 1] = '(';
	x[rscore - 2][cscore + 2] = '"';
	x[rscore - 2][cscore + 3] = ')';
	x[rscore - 2][cscore + 4] = '/';
	x[rscore - 1][cscore + 0] = '-';
	x[rscore - 1][cscore + 1] = '(';
	x[rscore - 1][cscore + 3] = ')';
	x[rscore - 1][cscore + 4] = '-';
	x[rscore - 0][cscore + 0] = '/';
	x[rscore - 0][cscore + 1] = '(';
	x[rscore - 0][cscore + 2] = '_';
	x[rscore - 0][cscore + 3] = ')';
	x[rscore - 0][cscore + 4] = '\\';
}
void ClearScreenGameOver(char x[][320]) {
	for (int r = 0; r < 24; r++) {
		for (int c = 0; c < 80; c++) {
			x[r][c] = ' ';
		}
	}
}void DrawGameOver(char x[][320]) {
	x[6][12] = '_', x[6][13] = '_', x[6][14] = '_';
	x[7][11] = '(', x[7][14] = '_', x[7][15] = '`', x[7][16] = '\\';
	x[8][11] = '|', x[8][13] = '(', x[8][15] = '(', x[8][16] = '_', x[8][17] = ')';
	x[9][11] = '|', x[9][13] = '|', x[9][14] = '_', x[9][15] = '_', x[9][16] = '_', x[9][18] = '/';
	x[10][11] = '|', x[10][13] = '(', x[10][14] = '_', x[10][15] = ',', x[10][17] = '(';
	x[11][11] = '(', x[11][12] = '_', x[11][13] = '_', x[11][14] = '_', x[11][15] = '_', x[11][16] = '/', x[11][17] = '`';
	x[8][21] = '_', x[8][23] = '_', x[8][26] = '_', x[8][27] = '_', x[8][28] = '_', x[8][30] = '_', x[8][31] = '_', x[8][32] = '_', x[8][36] = '_', x[8][37] = '_';
	x[9][19] = '*', x[9][20] = '_', x[9][21] = '`', x[9][23] = '/', x[9][24] = '*', x[9][26] = '_', x[9][28] = '`', x[9][30] = '_', x[9][32] = '`', x[9][33] = '\\', x[9][34] = '/', x[9][35] = '*', x[9][36] = '_', x[9][37] = '_', x[9][38] = '`', x[9][39] = '\\';
	x[10][19] = '(', x[10][20] = '_', x[10][21] = '|', x[10][23] = '|', x[10][25] = '(', x[10][27] = ')', x[10][29] = '(', x[10][31] = ')', x[10][33] = '(', x[10][36] = '_', x[10][37] = '_', x[10][38] = '_', x[10][39] = '/';
	x[11][18] = '\\', x[11][19] = '_', x[11][20] = '_', x[11][21] = ',', x[11][22] = '_', x[11][23] = '(', x[11][24] = '_', x[11][25] = ')', x[11][27] = '(', x[11][28] = '_', x[11][29] = ')', x[11][31] = '(', x[11][32] = '_', x[11][33] = '`', x[11][34] = '\\', x[11][35] = '_', x[11][36] = '_', x[11][37] = '_', x[11][38] = '_', x[11][39] = ')';
	x[8][46] = '_', x[8][50] = '_', x[8][54] = '_', x[8][58] = '_', x[8][59] = '_', x[8][62] = '_', x[8][64] = '_', x[8][65] = '_';
	x[9][44] = '/', x[9][45] = '*', x[9][46] = '_', x[9][47] = '`', x[9][48] = '\\', x[9][49] = '(', x[9][51] = ')', x[9][53] = '(', x[9][55] = ')', x[9][56] = '/', x[9][57] = '*', x[9][58] = '_', x[9][59] = '_', x[9][60] = '`', x[9][61] = '(', x[9][63] = '*', x[9][64] = '_', x[9][65] = '_', x[9][66] = ')';
	x[10][43] = '(', x[10][45] = '(', x[10][46] = '_', x[10][47] = ')', x[10][49] = '|', x[10][51] = '\\', x[10][52] = '_', x[10][53] = '/', x[10][55] = '(', x[10][58] = '_', x[10][59] = '_', x[10][60] = '_', x[10][61] = '|', x[10][63] = '|';
	x[11][43] = '`', x[11][44] = '\\', x[11][45] = '_', x[11][46] = '_', x[11][47] = '_', x[11][48] = '/', x[11][49] = '`', x[11][50] = '\\', x[11][51] = '_', x[11][52] = '_', x[11][53] = '_', x[11][54] = '/', x[11][55] = '`', x[11][56] = '\\', x[11][57] = '_', x[11][58] = '_', x[11][59] = '_', x[11][60] = '_', x[11][61] = '(', x[11][62] = '_', x[11][63] = ')';

}
void CoutMatToScreenGameOver(char x[][320]) {
	system("cls");
	for (int r = 0; r < 24; r++) {
		for (int c = 0; c < 80; c++) {
			cout << x[r][c];
		}
		cout << endl;  // Ensure each row is printed on a new line
	}
}

int main() {
	char x[24][320];
	int rHero = 13, cHero = 5;
	int rowLaser = 6;
	int columnLaser = 233;
	int rFox = 17, cFox = 186;
	int rFarmer = 20, cFarmer = 283;
	int rGun = 5, cGun = 126;
	int min = 62, max = 78;
	int rBomb = 7, cBomb = 62;
	int rElevator = 13, cElevator = 112, DirElevator = 1;
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
	int flagenemy1die = 0;
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
	int flagdrawlazerhero = 1;
	int DrawLazer = 0;
	int ctlazerhero = 0;
	int FlagEndGame = 0;
	int flagdoublejumpright = 0;
	int flagdoublejumpleft = 0;

	int rEnemy1 = 20, cEnemy1 = 200;
	int DirEnemy1 = 1;
	int timerLaser = 0;
	int FlagLaser = 0;
	char UMove;

	int colCat = 275;
	int rowCat = 20;

	int rowLaserCat = 18;
	int colLaserCat = 263;

	int rscore1 = 20;
	int cscore1 = 48;

	int rscore2 = 20;
	int cscore2 = 61;

	int rscore3 = 20;
	int cscore3 = 76;

	int flagant1 = 0;
	int flagant2 = 0;
	int flagant3 = 0;


	for (;;)
	{
		for (; !_kbhit();)
		{
			timerLaser++;
			if (FlagEndGame == 0) {
				ClearAndDrawFixedObject(x, rHero, cHero, DrawKey, flagCarrot1, flagCarrot2, flagCarrot3, flagCarrot4, flagCarrot5, flagCarrot6, flagCarrot7, flagCarrot8, flagdrawhouse);
				DrawHero(x, rHero, cHero);
				drawmultibullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
				movemultiplebullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
				//DrawEnemyLifeBar(x, cHero, RemoveBarFarmer, flagdrawmissfarmer, flagdrawfarmerlazer, flagcatchgun2, flagdrawlazerhero);


			   // LazerHero(x, rHero, cHero, flagdrawlazerhero, flagdrawlazerhero, DrawLazer);
				//DrawLazerHero(x, rHero, cHero, DrawLazer, flagdrawlazerhero, ctlazerhero, flagdrawhouse);
				DrawHeroLifeBar(x, cHero, Removebar, FlagEndGame);
				//Checkpoints(x, rHero, cHero, CurrentPoint);
				//CheckBar(x, rHero, cHero, Removebar, CurrentPoint, cFox, flagfoxmove, ctsinglebullet, cGun, flagfoxdie, rBomb, cBomb, ctTouch, FlagEndGame);
				MoveEnemy(x, rEnemy1, DirEnemy1, cHero, flagenemy1die);
				randcBomb(min, max, cBomb, flagrandbomb);
				DrawGun(x, rGun, cGun, rHero, cHero, flagcatchgun);
				RandomBombs(x, rBomb, cBomb, flagrandbomb , rHero , cHero , Removebar , FlagEndGame);
				DrawElevator(x, rElevator, cElevator);
				MoveElevator(rElevator, cElevator, DirElevator, cHero, rHero, flagcatchgun);

				Enemy1(x, rEnemy1, cEnemy1, flagenemy1die , cHero);
				//carrotcollecting(x, rHero, cHero, flagCarrot1, flagCarrot2, flagCarrot3, flagCarrot4, flagCarrot5);
				//DrawMovingBoard(x, rMovingBoard, cMovingBoard);
				//MovingBoard(rHero, cHero, rMovingBoard, cMovingBoard, dirmovingboard);
				Jump(rHero, cHero, flagjump, ctjump, dirjump, flagjumpright, flagjumpleft, flagcheckgravityjump, ctstayinsky);
				DoubleJumpLeftRight(rHero, cHero, flagdoublejumpright, flagdoublejumpleft, ctjumpright, ctjumpleft, flagcheckgravityjump);
				JumpLeftRight(rHero, cHero, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft, flagcheckgravityjump);
				SingleBullet(x, rGun, cGun, flagsinglebullet, flagcatchgun, ctsinglebullet, cHero, cFox, flagfoxdie, rEnemy1, cEnemy1, flagenemy1die, DrawKey);
				CheckGravity(x, rHero, cHero, ctjump, flagjump, flagcheckgravityjump, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft);

				if (timerLaser % 10 == 0)
				{
					Laser(x, rowLaser, columnLaser, cHero, Removebar, FlagLaser,FlagEndGame);
				}

				CatEnemy(x, rowCat, colCat ,cHero);

				if (timerLaser % 15 == 0)
				{
					CatLaser(x, rowLaserCat, colLaserCat, cHero, Removebar , FlagEndGame, rHero);
				}

				if (cHero + 3 != 48 && flagant1 == 0)
				{
					DrawInsect(x, rscore1, cscore1);
				}
				else {
					flagant1 = 1;
				}

				if (cHero + 3 != 61 && flagant2 == 0)
				{
					DrawInsect(x, rscore2, cscore2);
				}
				else {
					flagant2 = 1;
				}

				if (cHero + 3 != 74 && flagant3 == 0)
				{
					DrawInsect(x, rscore3, cscore3);
				}
				else {
					flagant3 = 1;
				}
				CoutMatToScreen(x, cHero);
			}
			if (FlagEndGame == 1) {
				ClearScreenGameOver(x);
				DrawGameOver(x);
				CoutMatToScreenGameOver(x);
			}
		}

		UMove = _getch();
		MoveHero(rHero, cHero, UMove, x, flagjump, flagdoublejumpright, flagdoublejumpleft, flagsinglebullet, flagcatchgun, ctsinglebullet, openbarricade, flagjumpright, flagjumpleft);
		DrawHero(x, rHero, cHero);

	}
	MultipleBullets(x, UMove, rHero, cHero, flagmultiplebullets, activebullets, currentbullet, rmultiplebullets, cmultiplebullets, flagcatchgun);
	movemultiplebullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
	drawmultibullets(x, currentbullet, activebullets, rmultiplebullets, cmultiplebullets);
	//LazerHero(x, UMove, rHero, cHero, flagdrawlazerhero, DrawLazer);
	//DrawLazerHero(x, rHero, cHero, DrawLazer, flagdrawlazerhero, ctlazerhero, flagdrawhouse);
	//CheckGravity(x, rHero, cHero, ctjump, flagjump, flagcheckgravityjump, flagjumpright, flagjumpleft, ctjumpright, ctjumpleft);

}
