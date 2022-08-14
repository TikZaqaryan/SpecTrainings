#include <iostream>
int main()
{
	int n;
	int r;
	int sum = 0;
	int tmp;
	std::cin >> n;
	tmp = n;
	while (n > 0)
	{
		r = n % 10;
		sum = (sum * 10) + r;
		n = n / 10;
	}
	if(tmp == sum)
	{
		std::cout << "Number is palindrome";
	}
	else
	{
		std::cout << "Number is nor palindrome";
	}
	return 0;
}

