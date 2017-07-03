#include <iostream>
using namespace std;

struct Queue {
	int data[10000];
	int begin;
	int end;

	Queue() {
		cout << "Init Queue" << endl;
		begin = 0;
		end = 0;
	}

	void push(int num) {
		data[end] = num;
		end++;
	}

	int pop() {
		begin++;
		return data[begin - 1];
	}

	int front() {
		return data[begin];
	}

	bool empty() {
		if (begin == end) {
			return true;
		}
		else {
			return false;
		}
	}

	int size() {
		return end - begin;
	}

	void print() {
		if (empty()) {
			cout << "|------------" << endl;
			cout << "Queue is empty" << endl;
			cout << "size is " << size() << endl;
			cout << "begin is " << begin << endl;
			cout << "end is " << end << endl;
			cout << "front is " << front() << endl;
			cout << "-------------|" << endl;
		}
		else {
			cout << "|------------" << endl;
			for (int i = begin; i < end; i++) {
				cout << data[i] << " ";
			}
			cout << endl;
			cout << "size is " << size() << endl;
			cout << "begin is " << begin << endl;
			cout << "end is " << end << endl;
			cout << "front is " << front() << endl;
			cout << "-------------|" << endl;
		}
	}

};

int n, m;
int a[10][10] = { 0, };
bool check[10] = { false, };

void bfs(int s) {
	Queue q;
	q.push(s);
	check[s] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 1; i <= n; i++) {
			if (a[x][i] == 1 && check[i] == false) {
				q.push(i);
				check[i] = true;
			}
		}
	}


}

int main(void) {

	/*
	Queue q;
	q.push(1);
	q.print();
	q.push(2);
	q.push(3);
	q.print();

	int x;
	x = q.pop();
	cout << x << " is poped."<< endl;
	x = q.pop();
	cout << x << " is poped." << endl;
	q.print();
	*/


	/*
	(input sample)
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


	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int v, u;
		cin >> v >> u;
		a[v][u] = a[u][v] = 1;
	}

	bfs(1);

	return 0;
}