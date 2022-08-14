#include <iostream>
#include <fstream>

int main() {

int n=0;
int sum=0;
int total=0;

std::fstream file("xndir1.txt");
while(file >> n)
{
    sum += n;
    total++;
}

std::cout<<"sum: " << sum << std::endl;
return 0;
}
