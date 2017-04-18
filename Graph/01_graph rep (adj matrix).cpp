#include <iostream>
using namespace std;

#define MAX_NODE_NUM	6

int a[MAX_NODE_NUM + 1][MAX_NODE_NUM + 1]; //(wik1) init by 0 defauly.

int main(void) {
	// (tip1) how to prepare the input/output
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u][v] = 1; a[v][u] = 1; //(wik2) symetric by diagonal(draw the matrix by note & pen)
	}

	return 0;
}