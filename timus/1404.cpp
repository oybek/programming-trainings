
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstring>
#include <climits>
#include <iomanip>
#include <iostream>
#include <algorithm>

#define INF INT_MAX-1
#define SQR(x) ((x)*(x))

using namespace std;

string s;

int main() {
	cin >> s;
	for (string::iterator it = s.begin(); it != s.end(); ++it)
		*it -= 'a';
	for (string::iterator it = s.begin(); it != s.end(); ++it)
		if (*it < 5) {
			*it += 26;
			*it -= 5;
		} else {
			*it -= 5;
		}
	for (int i = 0; i < int(s.size()); ++i) {
	}
	cout << s << endl;

	return 0;
}

