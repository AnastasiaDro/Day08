//
// Created by Cesar Erebus on 10/26/21.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template<typename T>
typename T::iterator easyfind(T t, int i)
{
	typename T::iterator it;

	it = find(t.begin(), t.end(), i);
	if (*t.end() != i && it == t.end())
		throw std::range_error("Number not found");
	return (it);
}

#endif //DAY08_EASYFIND_HPP
