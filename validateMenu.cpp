#include "validateMenu.h"
#include <iostream>

void validateMenu(int &i)
{
	while (!std::cin || (i < 1 && i > 4))
	{
		std::cin.clear();
		std::cin.sync();
		std::cout << "\nInvalid input! Try again: ";
		std::cin >> i;
	}
}