#include <iostream>
using namespace std;

float func(float i);
double func(double i);


float func(float i) {
	return i;
}


double func(double i) {
	return -i;
}


int main() {
	cout << func(3.1415926535897);
	cout << func(3);
	return 0;
}