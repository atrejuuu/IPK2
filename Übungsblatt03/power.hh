#include <iostream>
namespace power {

int recursive(int basis, int exponent)
{
int solution;

	if(exponent == 0)
	{
	return 1;
	}
solution = basis*recursive(basis, exponent-1);

return solution;
	
}

int iterative(int basis, int exponent) 
{
	int i = 1;
	int x = basis;
	
	if( exponent <= 0 ) 
	{
		if( exponent < 0 )
		{
			std::cout << "Exponent ist ungültig" << std::endl;
			return 0;
		}
			if( exponent == 0 )
			{
				return 1;
			}
	}
	
	while (i < exponent) 
	{
		x = x*basis;
		i = i+1;
	}
return x;
}
} // end namespace power
