#include <iostream>
using namespace std;

// time out
/*
int go(int n) {	

	if (n == 1) return 0;

	int min;
	min = 1 + go(n - 1);

	//if (n % 2) {
	if (n % 2 == 0) {		
		int temp = 1 + go(n / 2);
		if (min > temp) {
			min = temp;
		}
	}

	//if (n % 3) {  <-- (me) :( - Why I didn't check exact meaning and logic...(again failure)
	if (n % 3 == 0) {		
		int temp = 1 + go(n / 3);
		if (min > temp) {
			min = temp;
		}
	}

	return min;
}
*/


int memo[1000000];
int go2(int n) {

	if (n == 1) return 0;

	if (memo[n] > 0) return memo[n];

	memo[n] = 1 + go2(n - 1);

	if (n % 2 == 0) {
		int temp = 1 + go2(n / 2);
		if (memo[n] > temp) {
			memo[n] = temp;
		}
	}

	if (n % 3 == 0) {
		int temp = 1 + go2(n / 3);
		if (memo[n] > temp) {
			memo[n] = temp;
		}
	}

	return memo[n];
}


int main(void) {

	//make 1 (min operation cnt)
	int n;
	cin >> n;	
	cout << go2(n);

	return 0;
}