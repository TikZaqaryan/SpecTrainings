#include <iostream>
void selectionSort(int arr[] , int size)
{
	int min_in;
	for (int i = 0 ; i < size ; ++i)
	{
		min_in = i;
		for ( int j = i + 1; j < size ; j++)
		{
			if(arr[j] < arr[min_in])
			{
				min_in = j;
			}
			std::swap (arr[i] , arr[min_in]);
		}
	}
}
int main ()
{
	const int size = 6;
	int arr[size] = {55,33,51,78,2,63};
	int n = sizeof(arr) / sizeof(int);
	std::cout << "The sorted array is :: " << std::endl;
	selectionSort(arr,n);
	return 0;
}

