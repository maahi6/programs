#include<iostream>
using namespace std;
int main()
{
	int a , b , n;
	cin >> n;
	
	a = n/100;
	n = n % 100;
	b = n/10;
	n = n % 10;
	
	cout << n << b << a;
	 return 0; 

}