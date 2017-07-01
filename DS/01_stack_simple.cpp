#include <iostream>
using namespace std;

//stack simple
int mydata[10];
int mysize = 0;

void push(int num) {
	mydata[mysize] = num;
	mysize += 1; // (impo) I forgot this :(
}

int pop() {
	mysize -= 1;
	return mydata[mysize];

}

void print() {
	if (mysize > 0) {
		for (int i = 0; i < mysize; i++) {
			cout << mydata[i] << " ";
		}
		cout << endl;
	}
}

int main(void) {

	push(1);
	push(2);
	push(3);

	print();

	int x;
	x = pop();
	cout << x << endl;
	x = pop();
	cout << x << endl;

	return 0;
}