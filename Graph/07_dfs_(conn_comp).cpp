#include <iostream>
#include <queue>

using namespace std;

int a[11][11];
bool check[11];
bool used_node[11];


void dfs(int x) {
	check[x] = true;
	cout << x << " ";

	for (int i = 1; i <= 10; i++) {
		if (a[x][i] == 1 && check[i] == false) {
			dfs(i);
		}
	}
}



void bfs(int s) {
	queue<int> q;
	check[s] = true;
	q.push(s);

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 1; i <= 10; i++) {
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
	6 5
	1 2
	2 5
	5 1
	3 4
	4 6	
	*/

	//
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//

	for (int i = 1; i <= 10; i++) {
		check[i] = false;
		used_node[i] = false;
	}

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int u, v;
		cin >> u >> v;

		a[u][v] = a[v][u] = 1;
		used_node[u] = used_node[v] = true;
	}



	//dfs(1);
	//bfs(1);
	//(wik1) Below logic is same as solution but I need to know
	//       the node is practically used or not. so I provide the used_node information.
	int cc = 0;
	for (int i = 1; i <= 10; i++) {
		//if (check[i] == false) {
		if (check[i] == false && used_node[i] == true) {
			dfs(i);
			cout << endl;
			cc++;
		}
	}



	cout << "connected component is " << cc << endl;

	return 0;
}