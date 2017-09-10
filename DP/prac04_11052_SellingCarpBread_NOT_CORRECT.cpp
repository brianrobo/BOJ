#include <iostream>
using namespace std;

/*
Let's 
D[N] : Max benefit when sold the N breads.
P[j] : Price when sold j set breads.

D[N] =   Max( P[j] + D[N-j] )
                1<= j <= 10,000
*/

int P[10000+1]; // use 1 base index.

/*
int go(int n) {

	int max = 0;
	for (int j = 1; j <= n; j++) {
		int temp = P[j] + go(n - j);
		if (temp > max) { max = temp; }
	}
	return max;
}
*/
int memo[1001];
int go2(int n) {

	if (memo[n] > 0) return memo[n];

	int max = 0;
	for (int j = 1; j <= n; j++) {
		//int temp = P[j] + go2(n - j);
		int temp;
		if (memo[n - j] > 0) {
			temp = P[j] + memo[n - j];
		}
		else {
			temp = P[j] + go2(n - j);
		}

		if (temp > max) { max = temp; }
	}
	return max;
}


int main(void) {

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> P[i];
	}

	//cout << go(N) << endl;
	cout << go2(N) << endl;

	return 0;
}