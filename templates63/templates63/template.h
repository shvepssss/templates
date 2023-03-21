#pragma once
#include <vector>

template <typename T>
class Stack
{
private:
	std::vector<T> elems;

public:
	void printOn(std::ostream& strm) const
	{
		for (T const& elem : elems) {
			strm << elem << ' ';
		}
	}

	/* свободная функция */
	friend std::ostream& operator<< (std::ostream& strm, Stack<T> const& s) {
		s.printOn(strm);
		return strm;
	}

	void push(T const& elem) {
		elems.push_back(elem);
	}
};