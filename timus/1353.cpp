
#include <iostream>
#include <algorithm>
using namespace std;

/*
TODO: use memoization
int backtrack(int n, int s, int deep) {
	if (deep == 10)
		return (s == 0);

	int c = 0, m = min(s, 9);
	for (int i = 0; i <= m; ++i) {
		c += backtrack(10*n+i, s-i, deep+1);
	}

	return c;
}
*/

int main() {
	int S, a[41];
	a[1] = 9;
	a[2] = 45;
	a[3] = 165;
	a[4] = 495;
	a[5] = 1287;
	a[6] = 3003;
	a[7] = 6435;
	a[8] = 12870;
	a[9] = 24310;
	a[10] = 43749;
	a[11] = 75501;
	a[12] = 125565;
	a[13] = 202005;
	a[14] = 315315;
	a[15] = 478731;
	a[16] = 708444;
	a[17] = 1023660;
	a[18] = 1446445;
	a[19] = 2001285;
	a[20] = 2714319;
	a[21] = 3612231;
	a[22] = 4720815;
	a[23] = 6063255;
	a[24] = 7658190;
	a[25] = 9517662;
	a[26] = 11645073;
	a[27] = 14033305;
	a[28] = 16663185;
	a[29] = 19502505;
	a[30] = 22505751;
	a[31] = 25614639;
	a[32] = 28759500;
	a[33] = 31861500;
	a[34] = 34835625;
	a[35] = 37594305;
	a[36] = 40051495;
	a[37] = 42126975;
	a[38] = 43750575;
	a[39] = 44865975;
	a[40] = 45433800;

	cin >> S;
	if (S == 1) { cout << 10; return 0; }
	if (S == 81) { cout << 1; return 0; }

	if (S > 40) S = (40 - S%41);
	cout << a[S];

	return 0;
}
