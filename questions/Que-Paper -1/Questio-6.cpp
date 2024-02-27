//6. Define a class `Calculator` with a method that performs division.
// Implement exception handling to handle the case of division by zero. 
// Create an object of the `Calculator` class and demonstrate exception handling for division by zero.


#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	public:
	void set()
	{
		cout<<"enter the value of a:";
		cin>>a;
		cout<<"enter the value of b:";
		cin>>b;
		
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout<<"division :"<<a/b<<endl;
			}
		}
		catch(...)
		{
			cout<<"value can't divide by zero !!";
		}
	}
	
};

int main()
{
	Calculator c1;
	c1.set();


		
	return 0;
}


