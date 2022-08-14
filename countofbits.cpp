#include <iostream>
int count_of_bits(int);
int main ()
{
	int x = count_of_bits(16);
	std::cout << x << std::endl;
	std::cout << sizeof(int) * 8 - x << std::endl;
}
int count_of_bits(int x)
{
	int count = 0;
	while (x != 0)
	{
		count += x % 2;
		x /= 2;
	}
	return count;
}
