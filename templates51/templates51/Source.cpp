#include <string>
#include <cstring>
#include <iostream>

using namespace std;

// ���� �� ���� ������ ����
template<typename T>
T max(T a, T b) {
	return b < a ? a : b;
}

// ���� �� ���� ����������, ������������ ���������, �� ������� ��������� ���������
template<typename T>
T* max(T* a, T* b) {
	return *b < *a ? a : b;
}

// ���� �� ����� � ����� �
char const* max(char const* a, char const* b) {
	return std::strcmp(b, a) < 0 ? a : b;
}

int main() {
	int a = 7;
	int b = 42;
	auto m1 = ::max(a, b); // ���� �� ���� ������ ����
	cout << m1 << endl;

	string s1 = "hey";
	string s2 = "you";
	auto m2 = ::max(s1, s2); // ���� �� ���� ������ ����
	cout << m2 << endl;

	int* p1 = &b;
	int* p2 = &a;
	int* m3 = ::max(p1, p2); // ���� �� ���� ����������
	cout << *m3 << endl;

	char const* x = "hello";
	char const* y = "world";
	auto m4 = ::max(x, y); // ���� �� ����� � ����� �
	cout << m4 << endl;
}