#include <iostream>

using namespace std;

char func(unsigned char ch);
char func(char ch);


char func(unsigned char ch) {
	return ch - 1;
}


char func(char ch) {
	return ch + 1;
}

int main()
{
	cout << func('c');
	cout << func(88);
	return 0;
}