#include<iostream>
using namespace std;
int main()
{
	int num;

	int fact = 1;
	cout << " enter a num=" << endl;
	cin >> num;
	
	do
	{
	
	  fact *= num;
	  num --;
   }
    while( num > 0);
   cout << "the factorial is=" << fact << endl;
   return 0;
   
}
	  
	  