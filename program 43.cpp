#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int n;
	cout << " enter a positive integer(n) =";
	cin >> n;
	
	for( int n=1; n <= 10; n++)
	  sum += n*n;
	  
	  cout << " Sum of the series from 1 to n =" << sum << endl;
	  
	  return 0;
}