#include <iostream>
#include <fstream>
int main ()
{
	std::fstream file("mytext.txt");
	char ch;
	int i;
	int c = 0;
	int sp = 0;
	while (file)
	{
		file.get(ch);
		i = ch;
		if((i > 63 && i < 91) || (i > 96 && i < 123))
		{
			c++;
		}
		else
		{
			if(ch == ' ')
			{
				sp++;
			}
		}
	}
	std::cout << "THe number of characters are" << c << std::endl;
	std::cout << "The number of white spaces are" << sp << std::endl;
}
