#include "stack3.h"
#include <deque>
#include <iostream>

using namespace std;
/**
* Аргументы шаблона класса по умолчанию.
*/
int main() {
	Stack<int> vecInt;
	vecInt.push(3);
	cout << vecInt.top() << endl;

	Stack<double, deque<double>> deqDouble;
	deqDouble.push(7.7);
	cout << deqDouble.top() << endl;
}