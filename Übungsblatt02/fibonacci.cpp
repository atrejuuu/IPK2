#include <iostream>
#include <cmath>

long fibo(int number)
{
long fibo1 = 0;
long fibo2 = 1;
long fiboloesung;
long i;

std::cout << "fibo1 = 0 \nfibo2 = 1" << std::endl;

for(i=3; i <= number; i++)
{
		fiboloesung = fibo1 + fibo2;
		fibo1 = fibo2;
		fibo2 = fiboloesung;
		std::cout << "fibo" << i << " = " << fiboloesung << std::endl;
}
return 0;
}


int main(int argc, char** argv)
{
int number;

std::cout << "Gebe eine Zahl ein: " << std::endl;
std::cin >> number;
fibo(number);
}
