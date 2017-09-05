#include <iostream>
using namespace std;


/* fib
D[0] = 0;
D[1] = 1;
D[N] = D[N-1] + D[N-2]
*/


int memo[100];

int fib(int n) {
	if (n <= 1) {
		//return 0;  <--:(  why dont' i check and debug by real value?
		return n;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

int fib2(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		if (memo[n] > 0) return memo[n]; // correct me - because min of fib is 0;

		memo[n] = fib2(n - 1) + fib2(n - 2);
		return memo[n];
	}
}

/*
 :(  - I again forgot the solution.

 Think, I find the solution from minimum one
 from 0~n, step by step.

*/
int d[100];
int fib3(int n) {  

	d[0] = 0;
	d[1] = 1;	

	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}

	return d[n];
}

int main(void) {
	
	int input;
	cout << "input the n : ";
	cin >> input;

	while (input >= 0) {
		//cout << "fib(" << input << ") : " << fib(input) << endl;		
		//cout << "fib(" << input << ") : " << fib2(input) << endl;
		cout << "fib(" << input << ") : " << fib3(input) << endl;
		cout << "input the n : ";
		cin >> input;
	}

	return 0;
}