#include "Span.hpp"

#include <iostream>

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
