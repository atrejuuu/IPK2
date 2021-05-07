#include <cmath>
#include <iostream>


double mitternachtsformel(double a, double b, double c)
{
	
	double root;
	double x1;
	double x2;
	double radikand;
	
	radikand = b*b - 4 * a * c;
	
	if ( radikand < 0 ) 
	{
		std::cout << "Diskriminante negativ: Keine Lösung!" << std::endl;
		return 0;
	}
		if ( radikand == 0 ) 
		{
			x1 = -b/2*a;
			return x1;
		}
			else 
			{
				root = std::sqrt(radikand);
				x1 = (-b + root) / 2*a;
				x2 = (-b - root) / 2*a;
				std::cout << "Ergebnis: " << "x1 = " << x1 << " " << "x2 = " << x2 << std::endl;
			}
return 0;
}

int main(int argc, char** argv)
{
	double a;
	double b;
	double c;
	
	std::cout << "Bestimme Koeffizient a: " << std::endl;
	std::cin >> a;
	
	std::cout << "Bestimme Koeffizient b: " << std::endl;
	std::cin >> b;
	
	std::cout << "Bestimme Koeffizient c: " << std::endl;
	std::cin >> c;
	
	double endsolution = mitternachtsformel(a,b,c);
	
		if ( endsolution != 0 ) 
		{
		std::cout << "Ergebnis: x1 = " << endsolution << std::endl;
		}
}
