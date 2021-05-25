#include <iostream>
#include "power.hh"

double root_iterative(double q, int n, int steps)
{
	double a_k = 1;
	int i=1;
	
	if( n <= 0 )
	{
		std::cout << "Eingabe ungültig" << std::endl;
		return 0;
	}
		while(i <= steps)
		{
			a_k = (q/power::iterative(a_k,n-1) - a_k) * 1/n + a_k;
			i = i+1;
		}
return a_k;
}
void test_root(double q, int n, int steps)
{
	double a_k = 1;
	int i=1;
	double differenz;
	
	if( n <= 0 )
	{
		std::cout << "Eingabe ungültig" << std::endl;
	}
	
	while(i <= steps)
	{
		a_k = (q/power::iterative(a_k,n-1) - a_k) * 1/n + a_k;
		differenz = q - power::iterative(a_k,n);
		std::cout << "Ergebnis: " << a_k << " Für Basis: " << q << " Für n'te Wurzel: " << n << " Für Step:" << i << " ist die Genauigkeit: " << differenz << std::endl;
		i = i+1;
	}
}
		
int main(int argc, char** argv)
{
double basis;
int wurzel;
int steps;
double solution;

	std::cout << "Gebe eine Basis ein: " << std::endl;
	std::cin >> basis;
	std::cout << "Gebe die n'te Wurzel an: " << std::endl;
	std::cin >> wurzel;
	std::cout << "Gebe die Anzahl der Schritte an: " << std::endl;
	std::cin >> steps;

test_root(basis,wurzel,steps);


solution = root_iterative(basis,wurzel,steps);
std::cout << "Ergebnis: " << solution << std::endl;
	
}
