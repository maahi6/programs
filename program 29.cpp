#include<iostream>
using namespace std;
int main()
{
	int num;
	int i = 1;
	cout << " enter a num=";
	cin >> num;
	
	while ( i<= 10)
	{
	 num *= i ;
		i++;
		
	}
	cout << " the table of a number is :" << num << endl;
	
	return 0;
}