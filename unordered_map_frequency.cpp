#include <iostream>
#include <unordered_map>

 
void Frequency(int arr[], int n)
{
	std::unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    
    for (auto x : map)
       std::cout << x.first << " " << x.second << std::endl;
}
 
int main()
{
    const int size = 8;
    int arr[size];
    for (int i = 0 ; i < size ; ++i)
    {
	    std::cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}
