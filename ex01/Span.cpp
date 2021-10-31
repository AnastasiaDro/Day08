//
// Created by  Anastasia on 31.10.2021.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(int N) : n(N) {}

Span &Span::operator=(const Span &orig) {
	if(this == &orig)
		return *this;
	this->n = orig.n;
	this->vect = orig.vect;
	return *this;
}

void Span::addNumber(int num) {
	if (this->vect.size() == this->n)
		throw std::range_error("Array is full!");
	this->vect.push_back(num);
}

int Span::shortestSpan() {

	return ;
}

int Span::longestSpan() {
	int min = *(std::min_element(this->vect.begin(), this->vect.end()));
	int max = *(std::max_element(this->vect.begin(), this->vect.end()));
	int res = max - min;
	return (res);
}






