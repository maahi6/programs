#include<iostream>
using namespace std;
int main()
{
	
	int product = 1;
	
	for( int n = 1; n <= 10 , n++)
	{
		product *= n;
    }
		 
		 cout << " the product of  odd numbers from 1 to 10 = "<< product << endl; 
	
	return 0;
}