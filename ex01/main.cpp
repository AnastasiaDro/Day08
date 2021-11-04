#include <iostream>
#include "Span.hpp"


int main() {

	std::cout << "-----#0 BASIC TEST------" << std::endl;
	std::cout << "span: 5, 5, 3, 17, 9, 11" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);

	//Adding values by itertors
	std::vector<int> vect;
	vect.push_back(17);
	vect.push_back(9);
	vect.push_back(11);
	//multiple adding method
	sp.addNumberS(vect.begin(), vect.end());
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	std::cout << "\n-----#1 OUT OF RANGE EXCEPTION TEST------" << std::endl;
	std::cout	<< "n is " << sp.getN()
				<< "\n"
				<< "and the vect size is "
				<< sp.getVectSize()
				<< std::endl;
	std::cout << "trying to add one more" << std::endl;
	try {
		sp.addNumber(1);
	} catch (std::range_error &e) {
		std::cout << "Range error catched!" << std::endl;
	}

	std::cout << "\n-----#2 TOO SMALL VECT EXCEPTION------" << std::endl;
	Span mSpan(2);
	mSpan.addNumber(-9);
	std::cout << "trying to calculate span when there is only one digit in the vect" << std::endl;
	std::cout << "SHORTEST: ";
	try {
		mSpan.shortestSpan();
	} catch (Span::TooSmallVectExeption &e) {
		std::cout << "TooSmallVectExeption catched" << std::endl;
	}
	std::cout << "LONGEST: ";
	try {
		mSpan.longestSpan();
	} catch (Span::TooSmallVectExeption &e) {
		std::cout << "TooSmallVectExeption catched" << std::endl;
	}
	return 0;
}
