#include<iostream>
using namespace std;
int main()
{
	int num;

	int fact = 1;
	cout << " enter a num=" << endl;
	cin >> num;
	
	while( num > 0)
	{
	
	  fact *= num;
	  num --;
   }
   
   cout << "the factorial is =" << fact << endl;
   return 0;
   
}
	  
	  