#include <cstring>
#include <iostream>

using namespace std;

// макс из двух значений ссылок
template<typename T>
T const& max(T const& a, T const& b) {
	return b < a ? a : b;
}

// макс из строк в стиле с
char const* max(char const* a, char const* b) {
	return std::strcmp(b, a) < 0 ? a : b;
}

// макс из 3
template<typename T>
T const& max(T const& a, T const& b, T const& c) {
	return max(max(a, b), c);
}

int main() {
	// везде проблема висячих ссылок. после ретурна ссылка становится недействительна
	auto m1 = ::max(7, 42, 68);
	cout << m1 << endl;
	char const* s1 = "dbsmef";
	char const* s2 = "dbsme";
	char const* s3 = "dbsm";
	auto m2 = ::max(s1, s2, s3);
	cout << m2 << endl;
}