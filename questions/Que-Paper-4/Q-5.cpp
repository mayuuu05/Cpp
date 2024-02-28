//5. Define a class `MathOperations` with a method that performs division. Implement exception handling to handle
// the case of division by zero and negative numbers.
// Create an object of the `MathOperations` class and demonstrate exception handling for different scenarios.

#include<iostream>
using namespace std;

class MathOperations
{
	int a,b;
	public:
		void set()
		{
			cout << "Enter value of a : ";
			cin >> a;
			
			cout << "Enter value of b : ";
			cin >> b;
			
		}
		void get()
		{
			try
	 		{
		 		if(b==0 && b<0 && a<0)
		 		{
					cout <<  "Divison is : " << a/b << endl;
					
	
				}	
				
				else
				{
					throw b;
				}
			
			}
			 catch(...)
			 {
			 	cout << "Value can't divide by Zero !!!" << endl;
			 	cout << "Negative numbers are not allowed !!!" << endl;
			 
			 }
		}
	 	
		 	
		 
};
int main()
{
	MathOperations m1;
	m1.set();
	m1.get();
	
	return 0;
}
