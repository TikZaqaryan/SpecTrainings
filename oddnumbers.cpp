#include <iostream>
int countOdd(int L , int R)
{
	int N = (R - L) / 2;
	if(R % 2 != 0 || L % 2 != 0)
	{
		N += 1;
	}
	return N;
}
int main ()
{
	int L;
	int R;
	std::cout << "please enter the circle";
	std::cin >> L >> R;
	int odds = countOdd(L,R);
	std::cout << "The odd numbers are" << odds << std::endl;
	return 0;
}
