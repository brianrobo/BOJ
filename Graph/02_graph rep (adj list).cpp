#include <iostream>
#include <vector>
using namespace std;

#define MAX_NODE_NUM	6

//vector<int> a[]; (wik2) This is wrong notation, it cause compile error!
//                        I confused the python's list like "c[]". vector is same as array.   
vector<int> a[MAX_NODE_NUM + 1];


int main(void) {
	//
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v); a[v].push_back(u); //(wik1) it looks same as python's list.
	}

	return 0;
}