#include <iostream>
int squaresum(int n)
{
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += (i * i);
    return sum;
}
  
int main()
{
    int n = 100;
    cout << squaresum(n) << endl;
    return 0;
}
