template <typename T1, typename T2>
constexpr auto max(T1 a, T2 b) {
	return b < a? a : b;
}

int main() {
	// так как мы используем функцию получени€ максимума во врем€ компил€ции, можем использовать ее при объ€влении массива
	int a[::max(sizeof(char), 1000u)];
}