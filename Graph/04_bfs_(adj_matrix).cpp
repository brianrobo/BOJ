#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define	MAX_NODE_NUM	6

int a[MAX_NODE_NUM + 1][MAX_NODE_NUM + 1];
bool check[MAX_NODE_NUM + 1];


void dfs(int x) {
	check[x] = true;
	cout << x <<  " ";

	for (int i = 1; i <= MAX_NODE_NUM; i++) {
		if (a[x][i] == 1 && check[i] == false) {
			dfs(i);
		}
	}
}

void bfs(int x) {
	queue<int> q;
	check[x] = true;
	q.push(x);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 1; i <= MAX_NODE_NUM; i++) { //(repeating mistake1) "< MAX_NONE_NUM"
			if (a[x][i] == 1 && check[i] == false) {
				check[i] = true;
				q.push(i);
			}
		}
	}
}


int main(void) {
	/*
	(input sample) 
	1
	6 8
	1 2
	1 5
	2 3
	2 4
	2 5
	5 4
	4 3
	4 6	
	*/

	//
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//

	// 1. rep graph by adj. matrix
	int T;
	cin >> T;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int u, v;
		cin >> u >> v;
		a[u][v] = a[v][u] = 1; //(wik01) short coding
	}

	// 2. init check array before dfs
	for (int i = 1; i <= MAX_NODE_NUM; i++) {
		check[i] = false;
	}

	// 3. bfs
	bfs(1);	

	return 0;
}