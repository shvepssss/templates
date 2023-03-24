#pragma once
#include <vector>

using namespace std;

template <typename T, typename cont = vector <T>>
class Stack {
private:
	cont elems;
public:
	void pop();
	void push(T const& elem);
	T const& top() const;
	bool isEmpty() const {
		return elems.empty();
	};
};

template <typename T, typename cont>
void Stack<T, cont>::pop() {
	assert(!isEmpty());
	elems.pop_back();
}

template <typename T, typename cont>
void Stack<T, cont>::push(T const& elem) {
	elems.push_back(elem);
}

template <typename T, typename cont>
T const& Stack<T, cont>::top() const {
	return elems.back();
}