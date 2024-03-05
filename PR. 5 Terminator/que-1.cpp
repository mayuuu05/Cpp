//Q.1 Write a Program to create a class that illustrates the 
//concept of handling all types of exceptions using general exceptions.

#include<iostream>
using namespace std;

class Divison
{
	int a,b;
	public:
	void set()
	{
		cout<<"Enter the value of a:";
		cin>>a;
		cout<<"Enter the value of b:";
		cin>>b;
		
		try
		{
			if(b==0 || b<0 || a<0)
			{
				throw b;
				throw a;
			}
			else
			{
				cout<<"division :"<<a/b<<endl;
			}
		}
		catch(...)
		{
			cout<<"Value can't divide by zero !!  (invalid input)";
			cout<<"Negative numbers are not allowed !!  (invalid input)";
		}
	}
	
};

int main()
{
	Divison d1;
	d1.set();


		
	return 0;
}

