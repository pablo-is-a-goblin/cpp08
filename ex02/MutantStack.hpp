#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <algorithm>

template <class T,  class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
//	ITERATORS

	typedef typename Container::iterator iterator;

	iterator begin(void) {
		return this->c.begin();
	};

	iterator end(void) {
		return this->c.end();
	};

	iterator rbegin(void) {
		return this->c.rbegin();
	};

	iterator rend(void) {
		return this->c.rend();
	};

//	OCCF
	MutantStack(void) : std::stack<T, Container>() {};
	MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {};
	MutantStack &operator=(const MutantStack &other) {
		std::stack<T, Container>::operator=(other);
		return (*this);	
	};
	~MutantStack(void) {};
};

# ifndef COLOR_DEF
#  define COLOR_DEF
#  define NC "[0m"
#  define GREEN "[38;5;40m"
#  define YELOW "[38;5;220m"
#  define RED "[38;5;124m"
#  define BLUE "[38;5;32m"
#  define ORAN "[38;5;202m"
#  define PURP "[38;5;91m"
# endif

#endif
