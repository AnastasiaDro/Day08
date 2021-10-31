//
// Created by  Anastasia on 31.10.2021.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N) : n(N) {}

Span::Span(const Span &orig) {
	*this = orig;
}

Span &Span::operator=(const Span &orig) {
	if(this == &orig)
		return *this;
	this->n = orig.n;
	this->vect = orig.vect;
	return *this;
}

void Span::addNumber(int num) {
	if (this->vect.size() == this->n)
		throw std::range_error("Span is full!");
	this->vect.push_back(num);
}

int Span::shortestSpan() {
	if(this->vect.size() <= 1)
		throw Span::TooSmallVectExeption();
	std::vector<int>::iterator itNext;
	std::vector<int> tmp;
	tmp.assign(vect.begin(), vect.end());
	std::sort(tmp.begin(), tmp.end());
	itNext = tmp.begin() + 1;
	return (*itNext - *tmp.begin());
}

int Span::longestSpan() {
	if(this->vect.size() <= 1)
		throw Span::TooSmallVectExeption();
	int min = *(std::min_element(this->vect.begin(), this->vect.end()));
	int max = *(std::max_element(this->vect.begin(), this->vect.end()));
	int res = max - min;
	return (res);
}

Span::~Span() {}

unsigned int Span::getN() const {
	return n;
}

unsigned int Span::getVectSize() {
	return this->vect.size();
}


const char *Span::TooSmallVectExeption::what() const throw() {
	return "Span calculation is impossible! Only one value in the arr!";
}

