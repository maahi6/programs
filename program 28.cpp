#include<iostream>
using namespace std;
int main()
{
	int a,b,d;
	cout << "enter two numbers=";
	cin >> a >> b;
	
	d = a;
    a = b;
    b = d;
    
    cout << " first number =" << a << endl;
    cout << " second number=" << b << endl;
    
    return 0;
}