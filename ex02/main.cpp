#include "MutantStack.hpp"

#include <iostream>

int	main(void)
{
	MutantStack<int> mt;

	mt.push(0);
	mt.push(1);
	mt.push(2);
	mt.push(3);

	std::cout << *mt.begin() << std::endl;
}
