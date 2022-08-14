#include <iostream>
int main ()
{
	int n;
	int sum = 0;
	int mul = 1;
	int m;
	int res;
	std::cout << "Enter the number:" << std::endl;
	std::cin >> n;
	while (n > 0)
	{
		m = n % 10;
		sum = sum + m;
		mul = mul * m;
		n = n / 10;
	}
	res = mul - sum;
	std::cout << res;
}
