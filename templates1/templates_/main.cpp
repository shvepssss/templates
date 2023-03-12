#include "main.h"
#include <iostream>

using namespace std;

int maxx(int a, int b) {
	cout << "ok" << endl;
	return b < a? a : b;
}

int main()
{
	int a = 5;
	int b = 4;
	cout << ::maxx(a, b) << endl;
	string s1 = "axaxaxaxxa", s2 = "love";
	cout << ::maxx(s1, s2) << endl;
	double x = 3.3, y = 7.7;
	cout << ::maxx(x, y) << endl;
	return 0;
}