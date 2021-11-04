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
	std::vector<int>::iterator vectPos = easyfind(vect, 2);
	std::cout << *vectPos << std::endl;
	std::list<int>::iterator listPos = easyfind(list, 2);
	std::cout << *listPos << std::endl;

	try {
		easyfind(vect, 6); // 0 - 4
	} catch (std::range_error &e) {
		std::cout << "VECTOR: cannot find the value!" << std::endl;
	}

	try {
		easyfind(list, 6); // 1 - 5
	} catch (std::range_error &e) {
		std::cout << "LIST: cannot find the value!" << std::endl;
	}

	return 0;
}
