#include<iostream>
using namespace std;
int main()
{
	int num=1;
	int sum=0;
	
	while(num<=5)
	{ 
		
	    sum  += num;
		num++;
	}
	cout << " the sum of first five numbers = " << sum << endl;
	
	return 0;
}