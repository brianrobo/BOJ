#include <iostream>
using namespace std;

//queue - real reference

struct Queue {
	int data[10000];
	int begin;
	int end; //(wik1) This is the next idx of the last item. So the push is applied to end idx.

	Queue() {
		cout << "Init the Queue" << endl;
		begin = 0;
		end = 0;
	}

	void push(int num) {
		data[end] = num;
		end++;
	}

	int pop() {
		if (empty()) {
			return -1;
		}

		begin++;
		return data[begin - 1];
	}

	bool empty() {
		if (begin == end) { //[TODO] need to be specializing
			return true;
		}
		else {
			return false;
		}
	}

	int size() {
		return end - begin;
	}

	int front() {
		return data[begin];
	}

	void print() {
		for (int i = begin; i < end; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
};


int main(void) {

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);

	q.print();

	cout << "front is : " << q.front() << endl;
	cout << "size  is : " << q.size() << endl;

	cout << "pop   is : " << q.pop() << endl;

	q.print();
	cout << "front is : " << q.front() << endl;
	cout << "size  is : " << q.size() << endl;

	return 0;
}