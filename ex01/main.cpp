#include "Span.hpp"

#include <iostream>
#include <vector>

int main(void)
{
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
	return 0;
}
