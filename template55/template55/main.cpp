template <typename T1, typename T2>
constexpr auto max(T1 a, T2 b) {
	return b < a? a : b;
}

int main() {
	// ��� ��� �� ���������� ������� ��������� ��������� �� ����� ����������, ����� ������������ �� ��� ���������� �������
	int a[::max(sizeof(char), 1000u)];
}