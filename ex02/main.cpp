#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main()
{
	{
	std::cout << "\n=== USING MUTANTSTACK ===\n" << std::endl; 
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
	}
	{
	std::cout << "\n=== USING LISTS ===\n" << std::endl; 
	std::list<int> my_list;

	my_list.push_back(5);
	my_list.push_back(17);
	
	std::cout << *my_list.rbegin() << std::endl;
	
	my_list.pop_back();
	
	std::cout << my_list.size() << std::endl;
	
	my_list.push_back(3);
	my_list.push_back(5);
	my_list.push_back(737);
	//[...]
	my_list.push_back(0);
	
	std::list<int>::iterator it = my_list.begin();
	std::list<int>::iterator ite = my_list.end();
	
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	}
}
