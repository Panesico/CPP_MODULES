#include "Harl.hpp"

std::string	normalize(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (std::isalpha(str[i]))
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
	}
	return (str);
}

int main()
{
	Harl harl;

	std::string str;
	std::cout << "Please enter one of these: <Debug> <Info> <Warning> <ERROR>" << std::endl;
	std::getline(std::cin, str);
	str = normalize(str);
	harl.complain(str);
}