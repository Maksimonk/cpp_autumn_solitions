#include <iostream>
using namespace std;

int func(int i);
int func(int i, int j = 1);


int func(int i) {
	return i;
}


int func(int i, int j) {
	return i * j;
}

int main() {
	cout << func(4, 5);
	cout << func(10);
	return 0;
}