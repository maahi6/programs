#include<iostream>
using namespace std;
int main()
{
	char vowel;
	
	cout << " enter a vowel=";
	cin >> vowel;
	
	switch(vowel)
	{
		case 'a':
			cout << " a is a vowel ";
			break;
		case 'e':
		    cout << " e is a vowel ";
			break;
		case 'i':
		    cout << " i s a vowel ";
			break;
		case 'o':
		    cout << " o is a vowel ";
			break;
		case 'u':
			cout << " u is a vowel ";
		    break;
		default:
		    cout << " consonant ";			 		
	}
	    return 0;
}