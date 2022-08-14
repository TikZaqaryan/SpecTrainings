#include <iostream>
int main()
{
	int n;
	int sum = 0;
	int m;
	std::cout << "Enter the number :";
	std::cin >> n;
	while (n > 0)
	{
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}
