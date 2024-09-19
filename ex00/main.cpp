#include "easyfind.hpp"

#include <vector>
#include <deque>
#include <list>

int main(void)
{
	{
		std::cout << "\n=== TESTING WITH VECTOR ===\n" << std::endl;
		std::vector<int> vector;

		for (int i = 0; i < 10; i++)
			vector.push_back(i);

		if (easyfind(vector, 9))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(vector, 0))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(vector, 5))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(vector, -1))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(vector, 10))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(vector, 42))
			std::cout << "Error: was not found" << std::endl;
	}
	{
		std::cout << "\n=== TESTING WITH DEQUE ===\n" << std::endl;
		std::deque<int> deque;

		for (int i = 0; i < 10; i++)
		{
			deque.push_front(-i);
			deque.push_back(i);
		}

		if (easyfind(deque, 9))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(deque, -9))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(deque, 0))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(deque, -10))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(deque, 10))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(deque, -42))
			std::cout << "Error: was not found" << std::endl;
	}
	{
		std::cout << "\n=== TESTING WITH LIST ===\n" << std::endl;
		std::list<int> list;

		for (int i = 0; i < 10; i++)
		{
			list.push_front(-i);
			list.push_back(i);
		}

		if (easyfind(list, 9))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(list, -9))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(list, 1))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(list, -10))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(list, 10))
			std::cout << "Error: was not found" << std::endl;
		if (easyfind(list, -42))
			std::cout << "Error: was not found" << std::endl;
	}
}
