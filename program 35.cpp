#include<iostream>

int main()
{
	for(int i = 1; i <= 7; i++ )
	{
		std::cout << i << " \t" <<( 1 << ( i-1 )) << std::endl;
		
	}
	return 0;
}