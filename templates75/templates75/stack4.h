#pragma once
#include <vector>

template <typename T>
class Stack {
private:
	std::vector<T> elems;
public:
	// делаем конструктор по умолчанию, так как он не создастся  
	// автоматически из-за конструктора копирования ниже.
	Stack() = default;
	// инициализация стека одним элементом (не надо использовать <T> в cpp).
	Stack(T const& elem) : elems({ elem })
	{ }; // обязательно {elem}, так как мы инициализируем контейнер одним элементом, иначе это будет размер контейнера
	
	T const& top() const;
};

template <typename T>
T const& Stack<T>::top() const {
	return elems.back();
}