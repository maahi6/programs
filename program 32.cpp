#include<iostream>
using namespace std;
int main()
{
	int n = 1;
	double sum = 0.0;
	do
	{
		sum += 1.0/n;
		n += 2;
	}
		while ( n <= 100);
	
	cout << " Sum of the series: " << sum << endl;
	
	return 0;
}