#include<iostream>
using namespace std;
int main ()
{
	int number;
	
	
	cout <<  "enter the number =" << endl;
	cin >> number;
	
	if( number >= 0 )   
	{	
	cout << " the number is positive " << endl;
    } 
      else if ( number < 0)
      {
	cout << " the number is negative " << endl;
      }
      else  if ( number == 0 )
      {
	cout << " the number is zero " << endl;
      }
	return 0; 
}

