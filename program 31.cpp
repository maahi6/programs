#include<iostream>
using namespace std;
int main()
{
	int n = 1;
	double sum = 0.0;
	
	while ( n <= 100)
	{
		sum += 1.0/n;
		n += 1;
	}
	cout << " Sum of the series: " << sum << endl;
	
	return 0;
}
	