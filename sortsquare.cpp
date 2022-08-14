#include <iostream>
#include <algorithm>

void sortSquare(int arr[] , int n)
{
	for (int i = 0 ; i < n ; ++i)
	{
		arr[i] = arr[i] * arr[i];
	}
std::sort(arr , arr + n);
}
	

int main()
{
	const int size = 6;
	int arr[size];
	for(int i = 0 ; i < size ; ++i)
	{
		std::cin >> arr[i];
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Before sort " << std::endl;
	for (int i = 0; i < n ; ++i)
	{
		std::cout << arr[i] << " ";
	}
		sortSquare (arr,n);
		std::cout << "After sort" << " ";
	for (int i = 0 ; i < n ; ++i)
		{
			std::cout << arr[i] << " " ;
		}
	return 0;
}
