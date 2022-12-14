#include <iostream>
void insertionSort(int arr[], int n) 
{ 
    int key; 
    for (int i = 1; i < n; i++)
    { 
        key = arr[i]; 
       int j = i - 1;
        
       while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        std::cout << arr[i] << " " << std::endl;
} 
  
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
}
