//5. Define a class `Calculator` with methods that perform arithmetic operations.
// Implement exception handling to deal with division by zero and other possible errors.
//  Create an object of the `Calculator` class and demonstrate exception handling for various scenarios.

#include<iostream>
using namespace std;

class Calculator
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
		 		if(b==0 || b<0 || a<0)
		 		{
					
					throw b;
					throw a;
				}	
				
				else
				{
					cout <<  "Divison is : " << a/b << endl;
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
	Calculator c1;
	c1.set();
	c1.get();
	
	return 0;
}
