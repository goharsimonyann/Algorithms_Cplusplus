
#include <iostream>

void minusFive(int n)
{
	if (n <= 0)
	{
		std::cout << n << " ";
		return;
	}
	else
	{
		std::cout << n << " ";
		minusFive(n - 5);
	}
	std::cout << n << " ";
}

int main()
{
	int n;
	std::cin >> n;
	minusFive(n);
	return 0;
}
