#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define	MAX_NODE_NUM	6

vector<int> a[MAX_NODE_NUM+1];
bool check[MAX_NODE_NUM + 1];


//dfs
void dfs(int x) {
	check[x] = true;
	cout << x << " ";
	for (int i = 0; i < a[x].size(); i++) { //(mist02) (a[x].size())
		int y = a[x][i];
		if (check[y] == false) {
			dfs(y);
		}
	}
}

//bfs
void bfs(int x) {
	queue<int> q;	
	check[x] = true;
	q.push(x);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 0; i < a[x].size(); i++) {
			int y = a[x][i];
			if (check[y] == false) {//(mistake01) : "y == false"
				check[y] = true; //(mistake02) omit this line.
				q.push(y);
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

	// 1. rep graph by adj. list
	int T;
	cin >> T;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;		
		a[u].push_back(v); a[v].push_back(u); //(wik1) In case of undir. graph, should set the v case too.
	}

	// 2. init check array before dfs
	for (int i = 1; i <= MAX_NODE_NUM; i++) {
		check[i] = false;
	}

	// 3. bfs
	bfs(1);	

	return 0;
}