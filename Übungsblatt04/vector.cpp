#include <vector>
#include <iostream>
#include <utility>

std::pair<double,double> minmax_func(std::vector<double>& n)
{
	double min = n[0];
	double max = n[0];
	std::pair<double,double> minmax;
	int i;
	
	for(i=1; i < n.size(); i++)
	{
		if(n[i] < min)
		{
			min = n[i];
		}
	
		if(n[i] > max)
		{
			max =n[i];
		}
	}
minmax = std::make_pair(min,max);
return minmax;	
}

void ausgabe(std::vector<double>& n)
{
	for(int i=0; i < n.size(); i++)
	{
		std::cout << n[i] << " ";
	}
std::cout << "\n";
}


int main(int argc, char** argv)
{
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = { 4, 4.3, 5.5, 6.7, 2, 9.4 };

std::cout << "Ausgabe von v1:" << std::endl; // Aufgabe 1 a)
ausgabe(v1);
std::cout << "Ausgabe von v2:" << std::endl;
ausgabe(v2); // Werte ohne Zuweisung bekommen den Wert 0
std::cout << "Ausgabe von v3:" << std::endl;
ausgabe(v3);

std::pair<double,double> minmax_loesung = minmax_func(v3); // Aufgabe 1 b)
std::cout << "Min: " << minmax_loesung.first << std::endl;
std::cout << "Max: " << minmax_loesung.second << std::endl;
}
	
	
