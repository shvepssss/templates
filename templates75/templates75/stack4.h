#pragma once
#include <vector>

template <typename T>
class Stack {
private:
	std::vector<T> elems;
public:
	// ������ ����������� �� ���������, ��� ��� �� �� ���������  
	// ������������� ��-�� ������������ ����������� ����.
	Stack() = default;
	// ������������� ����� ����� ��������� (�� ���� ������������ <T> � cpp).
	Stack(T const& elem) : elems({ elem })
	{ }; // ����������� {elem}, ��� ��� �� �������������� ��������� ����� ���������, ����� ��� ����� ������ ����������
	
	T const& top() const;
};

template <typename T>
T const& Stack<T>::top() const {
	return elems.back();
}