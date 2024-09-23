#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private:
	const unsigned int N;
	std::vector<int> _nums;
public:
	Span(unsigned int size);
//	FUNCS
	void	addNumber(int number);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	insert(std::vector<int>::iterator first, std::vector<int>::iterator last);

//	EXEPCTIONS
	class FilledSpanException : public std::exception {
		virtual const char *what() const throw();
	};
	class DifferentSizeSpanAssignment : public std::exception {
		virtual const char *what() const throw();
	};
	class InsufficientNumbersToSpan : public std::exception {
		virtual const char *what() const throw();
	};


//	OCCF
	Span();
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
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
