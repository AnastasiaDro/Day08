#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
	std::vector<int> vect;

	std::list<int> list;
	vect.reserve(10);
	for (int i = 0; i < 5; ++i) {
		vect.push_back(i);
		list.push_back(i + 1);
	}
	std::vector<int>::const_iterator vectPos = easyfind(vect, 2);
	std::list<int>::const_iterator listPos = easyfind(list, 2);
	std::cout << *vectPos << std::endl;
	std::cout << *listPos << std::endl;

	return 0;
}
