#include <iostream>
namespace power {
int fastexpo(int basis, int exponent)
{
	int y;
	int x = basis;
	int i = 1;
	
if(exponent %2 == 0)
{
	exponent = exponent/2;
	
	while(i < exponent)
	{
		x = x*basis;
		i = i+1;
	}
	x = x*x;
return x;
}
if(exponent %2 == 1)
{
	y = basis*fastexpo(basis, exponent-1);
	return y;
}
return 0;
}

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
