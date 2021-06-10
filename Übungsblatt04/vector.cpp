#include <vector>
#include <iostream>
#include <utility>
#include <cmath>

void reversed_swap(std::vector<double>& v)
{
	for(int i = 0; i < v.size()/2; i++)
	{
	std::swap(v[i],v[(v.size()-1)-i]);
	}
}

void rounded(std::vector<double>& v)
{
	for(int i = 0; i < v.size(); i++)
	{
		v[i] = std::round(v[i]);
	}
}

std::vector<double> reversed(const std::vector<double>& v)
{
	std::vector<double> reversedvector = v;
	
		for(int i = 0; i < v.size(); i++)
		{	
			reversedvector[i] = v[(v.size()-1)-i];
		}
return reversedvector;
}

std::pair<double,double> minmax_func(std::vector<double> n)
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

void ausgabe(std::vector<double> n)
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
	std::vector<double> v3 = { 4, 4.3, 5.5, 6.7, 2, 9.4, 10 }; // ungerader vector
	std::vector<double> v4 = { 5, 2.743, 1.23, 87, 99, 72.5 }; // gerader vector
	
std::cout << "Ausgabe von v1:" << std::endl; // Aufgabe 1 a)
ausgabe(v1);
std::cout << "Ausgabe von v2:" << std::endl;
ausgabe(v2); // Werte ohne Zuweisung bekommen den Wert 0
std::cout << "Ausgabe von v3:" << std::endl;
ausgabe(v3);
std::cout << "Ausgabe von v4:" << std::endl;
ausgabe(v4);

std::pair<double,double> minmax_loesung = minmax_func(v3); // Aufgabe 1 b)
std::cout << "Min: " << minmax_loesung.first << std::endl;
std::cout << "Max: " << minmax_loesung.second << std::endl;

std::pair<double,double> minmax_loesung2 = minmax_func(v4); // Aufgabe 1 b)
std::cout << "Min: " << minmax_loesung2.first << std::endl;
std::cout << "Max: " << minmax_loesung2.second << std::endl;

std::cout << "Ausgabe von reversed vector: " << std::endl; // Aufgabe 1 c)
ausgabe(reversed(v3));
ausgabe(reversed(v1));
ausgabe(reversed(v2));
ausgabe(reversed(v4));

std::cout << "Ausgabe von rounded vector: " << std::endl; // Aufgabe 1 d)
rounded(v3);
ausgabe(v3);
rounded(v4);
ausgabe(v4);

std::cout << "Ausgabe von reversed_swap vector: " << std::endl; // Aufgabe 1 e)
reversed_swap(v3);
ausgabe(v3);
reversed_swap(v4);
ausgabe(v4);
}
	
	
