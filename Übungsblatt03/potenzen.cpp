#include <iostream>
#include "power.hh"

int main(int argc, char** argv){
	int basis;
	int exponent;
	int solution;
	
	std::cout << "Gebe die Basis ein: " << std::endl;
	std::cin >> basis;
	std::cout << "Gebe den Exponent ein: " << std::endl;
	std::cin >> exponent;
	
	solution = power::iterative(basis,exponent);
	std::cout << "Ergebnis: " << solution << std::endl;
}
