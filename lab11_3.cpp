#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    
    int count =0;
    float sum =0;
    float sim =0;
    ifstream source("score.txt");
    string x;
	while(getline(source,x))
	{
	sum +=atof(x.c_str());
	sim +=pow((atof(x.c_str())),2);
	count++;
	}
	cout<<"Number of data = " << count <<endl;
	cout << setprecision(3);
	float sam;
	sam=(1.00/count)*sum;
	float som;
	som=pow((1.00/count*sim)-pow(sam,2) ,0.5);
	
	cout <<"Mean = " << sam <<endl;
	cout <<"Standard deviation = " << som;
	}
    
    
    
    
    
