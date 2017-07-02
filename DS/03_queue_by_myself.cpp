#include <iostream>
using namespace std;

//queue - by myself

struct Queue {
	int data[10000];
	int size;

	Queue() {
		cout << "Init the Queue" << endl;
		size = 0;
	}

	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	void push(int num) {
		data[size] = num;
		//size =+ 1; (impo1) mis-use. 
		size += 1;
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			int retVal = data[0];
			for (int i = 0; i < size - 1; i++) { //need to check "size-1"
				data[i] = data[i + 1];
			}
			size -= 1; // (impo2) I omit this :(
			return retVal;
		}
	}

	void print() {
		if (empty()) {
			cout << "queue is empty!" << endl;
		}
		else {
			for (int i = 0; i < size; i++) {
				cout << data[i] << " ";
			}
			cout << endl;
		}
	}
};


int main(void) {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);

	q.print();

	int x;
	x = q.pop();
	cout << x << endl;

	q.print();

	return 0;
}