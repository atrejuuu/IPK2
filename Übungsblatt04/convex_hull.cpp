#include <iostream>
#include <vector>
#include <fstream>
#include <array>
#include <string>

std::vector<std::array<double, 2>> read_points_from_file(std::string filename)
{
std::vector<std::array<double, 2>> points_vector;
std::array<double, 2> points;
double numbers;
int i = 0;

std::ifstream file;
file.open(filename);

while(file >> numbers)
{
	if (i < 2)
	{
		points[i] = numbers;
		i++;
			if (i == 2)
			{
			points_vector.push_back(points);
			i=0;
			}
	}
}
return points_vector;
}

int main(int argc, char** argv)
{
std::vector<std::array<double, 2>> vec_filled;
std::string name_of_file = "points.txt";
vec_filled = read_points_from_file(name_of_file);
std::cout << vec_filled.size() << std::endl;
}

