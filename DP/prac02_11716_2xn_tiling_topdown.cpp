#include <iostream>
using namespace std;
/*
   D[1] = 1
   D[2] = 2
   D[n] = D[n-1] + D[n-2]

*/

/*
int go(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		return go(n - 1) + go(n - 2);
	}
}
*/

int memo[10001];

/*
int go(int n) {
	if (memo[n] > 0) return memo[n];

	if (n <= 2) {
		return n;
	}
	else {
		//return go(n - 1) + go(n - 2);
		memo[n] = go(n - 1) + go(n - 2);
		return memo[n];
	}
}
*/

/*
again, I see the past uploading code..
*/
int go(int n) {
	if (n == 1) return 0;

	if (n == 2) return 2;

	if (memo[n] > 0) return memo[n];

	memo[n] = (go(n - 1) + go(n - 2)) % 10007;	
	return memo[n];
}

int main(void) {

	int n;
	cin >> n;

	int out;
	out = go(n);

	cout << out;

	return 0;
}