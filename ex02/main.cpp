//
// Created by  Anastasia on 31.10.2021.
//
#include <iostream>
#include "MutantStack.hpp"

int main()
{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);

		MutantStack<int> mSecStack;
		mSecStack = mstack;

		MutantStack<int>::iterator itSec = mSecStack.begin();
		MutantStack<int>::iterator itSecEnd = mSecStack.end();
		++itSec;
		--itSec;
		while (itSec != itSecEnd)
		{
			std::cout << *itSec << std::endl;
			++itSec;
		}
		return 0;

}
