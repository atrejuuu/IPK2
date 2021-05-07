#include <iostream>
#include <cmath>

void collatz(int number)
{
	while (number != 1)
	{	
		if (number%2 == 0)
		{
			number = number/2;
		}
			else 
			{
				number = 3*number+1;
			}
		std::cout << number << std::endl;
	}
}




int main (int argc, char** argv)
{
	int number;
	
std::cout << "Gebe eine Zahl ein: " << std::endl;
std::cin >> number;

collatz(number);

}
