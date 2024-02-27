//6. Define a class `MathOperations` with a method that performs a division operation. 
//Implement exception handling to handle invalid inputs.
// Create an object of the `MathOperations` class and demonstrate exception handling for invalid inputs.

#include<iostream>
using namespace std;

class MathOperations
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
			cout<<"value can't divide by zero !!  (invalid input)";
		}
	}
	
};

int main()
{
	MathOperations m1;
	m1.set();


		
	return 0;
}

