//
// Created by  Anastasia on 31.10.2021.
//

#ifndef DAY08_SPAN_HPP
#define DAY08_SPAN_HPP


#include <vector>

class Span {
private:
	unsigned int n;
	std::vector <int> vect;
	Span();
public:
	Span(int N);
	Span(const Span &orig);
	~Span();
	Span &operator=(const Span &orig);


	void addNumber(int num);
	int shortestSpan();
	int longestSpan();

};


#endif //DAY08_SPAN_HPP
