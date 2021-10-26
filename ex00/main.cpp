#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
	std::cout << "Hello, World!" << std::endl;
	std::vector<int> vect;

	vect.reserve(10);
for (int i = 0; i < 5; ++i) {
		vect.push_back(i);
	}
	int find = easyfind(vect, 2);
	return 0;
}
