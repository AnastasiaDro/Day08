//
// Created by  Anastasia on 31.10.2021.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <stack>
#include <iostream>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>  {
public:
	MutantStack() : std::stack<T>() {}

	~MutantStack() {}
	MutantStack(const MutantStack &orig) : std::stack<T, Container>(orig) {
		this->c = orig.c;
	}
	MutantStack &operator=(const MutantStack &orig)
	{
		if (this == &orig)
			return *this;
		this->c = orig.c;
		return *this;
	}



	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void)
	{
		return std::stack<T>::c.begin();
	}
	iterator end(void)
	{
		return std::stack<T>::c.end();
	}
};

void println(std::string str);
void print(std::string str);



#endif //DAY08_MUTANTSTACK_HPP
