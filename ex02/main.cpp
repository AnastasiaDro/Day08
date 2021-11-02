//
// Created by  Anastasia on 31.10.2021.
//
#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	println("PUSHING 5 and 17 to MutantStack");
	mstack.push(5);
	mstack.push(17);

	print("The top is ");
	std::cout << mstack.top() << std::endl;

	println("Let's pop");
	mstack.pop();

	print("The top is ");
	std::cout << mstack.top() << std::endl;

	print("The size of stack is ");
	std::cout << mstack.size() << std::endl;

	println("Pushing 3, 5, 737, 0 to mstack");

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	println("Initialize the iterator");
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	println("----Printing our stack: ");
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	println("\nGenerating a new parent std::stack by copy constructor");

	std::stack<int> s(mstack);
	print("the top of stack is ");
	std::cout << s.top() << std::endl;

	println("Generate new MutantStack by operator =");
	MutantStack<int> mSecStack;
	mSecStack = mstack;
	MutantStack<int>::iterator itSec = mSecStack.begin();
	MutantStack<int>::iterator itSecEnd = mSecStack.end();
	++itSec;
	--itSec;
	println("----Printing our new MutantStack: ");
	while (itSec != itSecEnd)
	{
		std::cout << *itSec << std::endl;
		++itSec;
	}
	itSec = mSecStack.begin();

	println("\nLets's check the list work");
	std::list<int> mList;
	println("filling it");
	while (itSec != itSecEnd)
	{
		mList.push_back(*itSec);
		++itSec;
	}
	std::list<int>::iterator litb = mList.begin();
	std::list<int>::iterator lite = mList.end();
	println("printing list");
	while (litb != lite)
	{
		std::cout << *litb << std::endl;
		++litb;
	}

	return 0;

}
