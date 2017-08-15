#include <iostream>
using namespace std;

/*
f(0)=0;
f(1)=1
f(n)=f(n-1)+f(n-2)
*/


int memo[100];

int fib(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		if (memo[n] > 0) {
			return memo[n];
		}
		memo[n] = fib(n - 1) + fib(n - 2);
		return memo[n];		
	}
}

int d[100];

int fib_bottom_up(int n) {
	// to solve the smaller problem..
	d[0] = 0;
	d[1] = 1;

	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}

	return d[n];
}

int main(void) {

	int result;

	int n = 10;
	result = fib(n);

	cout << "fib(" << n << ")" << "is " << result << endl;

	return 0;
}
