#include <iostream>
#include "template.h"

using namespace std;


int main() {
	Stack<int> intStack;
	intStack.push(7);
	intStack.push(8);
	cout << intStack << endl;
	return 0;
}