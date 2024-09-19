#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

template <typename T>
int	easyfind(T &cont, int needle)
{
	if (find(cont.begin(), cont.end(), needle) == cont.end())
		return (404);
	std::cout << needle << " was found!" << std::endl;
	return (0);
}

#endif