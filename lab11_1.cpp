#include<iostream>
using namespace std;

int main(){


    int a = 0,b = 0,c = 0,d = 0,f = 0;
	int count[5] = {a,b,c,d,f};
	int x = 0;
	int t = 0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << x + 1 << "]: ";
		cin >> grade; 
		if(grade == 'A')
		{
		    count[0] += 1;
		    t += 1;
		}
		else if(grade == 'B') 
		{
		    count[1] += 1;
		    t += 1;
		}
		else if(grade == 'C') 
		{
		    count[2] += 1;
		    t += 1;
		}
		else if(grade == 'D') 
		{
		    count[3] += 1;
		    t += 1;
		}
		else if(grade == 'F') 
		{
		    count[4] += 1;
		    t += 1;
		}
		else
		{ 
		    if(grade != '0')
		        {
		        cout << "Wrong input. Please input again.\n";
		        continue;
		        }
		        else 
		            break;
		}
		x++;
	}while(grade != '0');
	
	
	cout << "In total " << t << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";
	
	
	return 0;
}