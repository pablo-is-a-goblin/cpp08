#include "Span.hpp"

#include <iostream>
#include <algorithm>
#include <limits.h>

//	SPANS

unsigned int	Span::shortestSpan(void)
{
	if (this->_nums.size() < 2)
		throw Span::InsufficientNumbersToSpan();
	
	std::sort(this->_nums.begin(), this->_nums.end());

	int min = INT_MAX;

	for (unsigned int i = 0; i < this->_nums.size() - 1; i++)
	{
		if (this->_nums[i + 1] - this->_nums[i] < min)
			min = this->_nums[i + 1] - this->_nums[i];
	}
	return (min);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_nums.size() < 2)
		throw Span::InsufficientNumbersToSpan();

	std::sort(this->_nums.begin(), this->_nums.end());

	return (*(--this->_nums.end()) - *this->_nums.begin());
}

//	ADDING NUMBERS

void	Span::addNumber(int number)
{
	if (this->_nums.size() == this->N)
		throw Span::FilledSpanException();
	this->_nums.push_back(number);
}

//	EXCEPTIONS

const char	*Span::InsufficientNumbersToSpan::what(void) const throw()
{
	return (RED "There are not enough numbers here to calculate a span" NC);
}

const char	*Span::DifferentSizeSpanAssignment::what(void) const throw()
{
	return (RED "Tried to use '=' with Spans of different sizes" NC);
}

const char	*Span::FilledSpanException::what(void) const throw()
{
	return (RED "Insuficient space" NC);
}

//	Constructor

Span::Span(unsigned int size) : N(size)
{
	std::cout << GREEN "Span size constructor called" NC << std::endl;
}

//	OCCF

Span::Span(void) : N(0)
{
	std::cout << GREEN "Span default constructor called" NC << std::endl;
}

Span::Span(const Span &other) : N(other.N)
{
	std::cout << YELOW "Span copy constructor called" NC << std::endl;
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	std::cout << YELOW "Span copy assignment operator called" NC << std::endl;
	if (this->N != other.N)
		throw DifferentSizeSpanAssignment();
	this->_nums = other._nums;
	return (*this);
}

Span::~Span()
{
	std::cout << RED "Span destrucutor called" NC << std::endl;
}
