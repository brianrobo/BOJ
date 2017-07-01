#include <iostream>
using namespace std;

//stack with structure

struct Stack {
	int data[10000];
	int size;

	Stack() {
		cout << "Stack constructor called" << endl;
		size = 0;
	}

	void push(int num) {
		//[TODO] overflow checking
		data[size] = num;
		size += 1; // <-- (impo1) I forgot this. :(
	}

	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	int pop() {
		if (empty()) {
			return -1; // <-- (impo2) I forgot this. :(
		}
		else {
			size -= 1;
			return data[size];
		}

	}

	int top() {
		if (empty()) {
			return -1; //[TODO] define the meaningful value.
		}
		else {
			//return data[--size]; // <-- (impo3) wow, this is real change the size value :((
			return data[size - 1];
		}

	}

	void print() {
		if (empty()) {
			cout << "stack is empty!";
		}
		else {
			for (int i = 0; i < size; i++) {
				cout << data[i] << " ";
			}
		}
		cout << endl;
	}

};


int main(void) {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);

	s.print();

	int x;
	x = s.pop();
	cout << x << endl;
	x = s.pop();
	cout << x << endl;
	x = s.pop();
	cout << x << endl;

	s.print();

	x = s.pop();
	cout << x << endl;

	return 0;
}