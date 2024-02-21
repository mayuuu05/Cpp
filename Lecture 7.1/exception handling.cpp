//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero

#include<iostream>
using namespace std;

int main()
{
	//- a number cannot be divided by zero
	int x,y;
	cout << "Enter x    : ";
	cin >> x;
	cout << "Enter y    : ";
	cin >> y;

    try
    {
    	if(y==0)
    	{
    		throw y;
		}
		else
		{
			cout << "Divison is : " << x/y <<  << endl;
		}
	}
	catch(...)
	{
		cout << "Value can't divide by Zero !!!" << endl;
	}
	return 0;
	
}