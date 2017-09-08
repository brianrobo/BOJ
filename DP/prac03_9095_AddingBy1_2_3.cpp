#include <iostream>
using namespace std;
/*
     so D[n] = D[n-1] + D[n-2] + D[n-3]

     D[0] = 0
     D[1] = 1
     D[2] = 2
     D[3] = 4
*/


int memo[11];

int go(int n) {

	if (n <= 2) return n;

	if (n == 3) return 4; // <-- This is my stuck point, the order affect numbers..

	if (memo[n] > 0) return memo[n];

	memo[n] = go(n - 1) + go(n - 2) + go(n - 3);
	return memo[n];

}

int main(void) {

	int T;
	cin >> T;

	//while (--T) {
	while (T--) {
		int input;
		cin >> input;
		cout << go(input) << endl;
	}

	return 0;
}
