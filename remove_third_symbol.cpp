#include <iostream>
#include <string>
std::string string_rem(std::string str)
{
	std::string tmp;
	for (int i = 0 ; i < str.size() ; i += 3)
	{
		tmp.push_back(str[i]);
		tmp.push_back(str[i+1]);
	}
	str = tmp;
	return str;
}
int main ()
{
	std::string str;
	std::getline (std::cin,str);
	std::string res = string_rem(str);
	std::cout << res;
}

