#include <string>
#include <cstring>
#include <iostream>

using namespace std;

// макс из двух любого типа
template<typename T>
T max(T a, T b) {
	return b < a ? a : b;
}

// макс из двух указателей, определяемое значением, на которое указывают указатели
template<typename T>
T* max(T* a, T* b) {
	return *b < *a ? a : b;
}

// макс из строк в стиле с
char const* max(char const* a, char const* b) {
	return std::strcmp(b, a) < 0 ? a : b;
}

int main() {
	int a = 7;
	int b = 42;
	auto m1 = ::max(a, b); // макс из двух любого типа
	cout << m1 << endl;

	string s1 = "hey";
	string s2 = "you";
	auto m2 = ::max(s1, s2); // макс из двух любого типа
	cout << m2 << endl;

	int* p1 = &b;
	int* p2 = &a;
	int* m3 = ::max(p1, p2); // макс из двух указателей
	cout << *m3 << endl;

	char const* x = "hello";
	char const* y = "world";
	auto m4 = ::max(x, y); // макс из строк в стиле с
	cout << m4 << endl;
}