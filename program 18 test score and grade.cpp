#include<iostream>
using namespace std;
int main ()
{ 
int score = 4;


switch(score)
{
	case 1:
    	cout << " score   >=  90 = " << 'A' << endl;
	break;
	
	case 2:
    	cout << " score = 80 - 90 = " << 'B' << endl;
	break;
	
	case 3: 
    	cout << " score = 70 - 79 = " << 'C' << endl;
	break;
	
	case 4:
		cout << " score = 60 - 69 = " << 'D' << endl;
	break;
		
    case 5:
    	cout << " score > 50 = " << 'F' << endl;
   	break;
    	
	default :
		cout << " invalid score ";
		
}
}
