

#include <iostream>
#include <fstream>

int main()
{
	std::fstream  fin("xndir4.txt");
        char ch;
        int i;
	int c = 0; 
	int sp = 0;
        while(fin)
        {
                fin.get(ch);
                i = ch;
                if((i > 63 && i < 91) || (i > 96 && i < 123))
		{
                        c++;
		}
                else
		{
                        if(ch== ' ')
			{
                                sp++;
			}
		}
        }
	std::cout<<"\n No. of Characters in a File : " << c;
	std::cout<<"\n Space between the Words     : " << sp;
        return 0;
}
