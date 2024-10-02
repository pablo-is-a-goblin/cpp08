#include "Span.hpp"

#include <iostream>
#include <vector>
#include <deque>

int main(void)
{
	{
		std::cout << "\n=== SUBJECT TEST ===\n" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n=== BIG TEST ===\n" << std::endl;

		srand(time(0));
		Span sp = Span(BIG_SIZE);

		for (int i = 0; i < BIG_SIZE; i++)
			sp.addNumber(rand() - rand());
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\n=== TESTING INSERT MEHTOD ===\n" << std::endl;
		Span sp = Span(5);
		std::vector<int> vec;
	
		vec.push_back(-1);
		vec.push_back(1);
		vec.push_back(1);
		vec.push_back(3);
		vec.push_back(5);
	
		sp.insert(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
