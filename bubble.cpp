#include <iostream>
int main ()
{
	int tmp;
	int count = 0;
	const int size = 10;
	int arr[size] = {10,2,6,15,27,14,43,7,56,1};
	std::cout << "Input list::" << std::endl;
	for (int i = 0 ; i < size ; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	for(int i = 0 ; i < size ; ++i)
	{
		for(int j = i + 1 ; j < size ; ++j)
		{
			if(arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
		count ++;
	}
	std::cout << "The sorted list of elements::" << std::endl;
	for (int i = 0 ; i < size ; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}
