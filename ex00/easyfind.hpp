//
// Created by Cesar Erebus on 10/26/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template<typename T>
bool &easyfind(T t, int i) const
{
	T<int>::iterator it;
	it = find(t.begin(), t.end(), i);
	if (t.end != i && it == t.end)
		return -1;
	return it;
}

#endif //DAY08_EASYFIND_HPP
