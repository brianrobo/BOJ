/*
D[n] = min times operations which make 'n' to '1'
       by using 3 operations(/3, /2, -1).

D[n] = min(1+D[n/3], 1+D[n/2], 1+D[n-1])
*/


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

(WIK) The reason why don't check from (n/3) case.
      if I start with (n/3), later I can't check the more min times one.
      But acturally, this problem don't care the check sequence,
      calc all 3 cases and use most min one. but if so, (n-1) case also use if-clause.
*/


int memo[1000000];
int go2(int n) {

	if (n == 1) return 0;

	if (memo[n] > 0) return memo[n];

	memo[n] = 1 + go2(n - 1);  // <-- in here memo[n] definitely assigned once. so belows no need to check "memo[n] > 0"

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
