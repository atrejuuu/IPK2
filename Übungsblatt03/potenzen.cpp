#include <iostream>
#include "power.hh"

int main(int argc, char** argv){
	int basis;
	int exponent;
	int solution;
	int solution2;
	int solution3;
	
	std::cout << "Gebe die Basis ein: " << std::endl;
	std::cin >> basis;
	std::cout << "Gebe den Exponent ein: " << std::endl;
	std::cin >> exponent;
	
	solution = power::iterative(basis,exponent);
	solution2 = power::recursive(basis,exponent);
	solution3 = power::fastexpo(basis,exponent);
	std::cout << "Ergebnis iterativ: " << solution << " Ergebnis rekursiv: " << solution2 << " Ergebnis fastexpo: " << solution3 << std::endl;
}
