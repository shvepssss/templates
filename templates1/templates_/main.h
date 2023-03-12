#pragma once
#include <type_traits>

template<typename T1, typename T2,
typename RT= std::common_type_t<T1, T2>>
 RT maxx(T1 a, T2 b)
{
	return a < b ? b : a;
}


