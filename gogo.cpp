#include <iostream>

int main()
{
	int x{5};
	int y{7};

	std::cout << x + y << '\n';
	x = 10;

	std::cout << x - y << '\n';
	return 0;
}