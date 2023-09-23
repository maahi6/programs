#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout <<" enter three numbers = ";
	cin >> a >> b >> c;
	
	if (a < b)
	  if (a < c)
	  cout << " a is a smallest number " << endl;
	  
	  else 
	    cout << " c is a smallest number " << endl;
	
	else 
	  if(b < c) 
	  cout << " b is a smallest number " << endl;
	else
	   cout << " c is a smallest number " << endl;
	   
	   return 0;    
}