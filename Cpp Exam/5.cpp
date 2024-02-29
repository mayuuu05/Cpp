#include<iostream>
using namespace std;
class Calculator
{
	int a,b;
	public :
		void set()
		{
			cout << endl << "Enter the value of a :" ;
			cin >> a;
			cout << "Enter the value of b :" ;
			cin >> b;
		}
		void get()
		{
			try 
			{
				if(b==0 || a<0 || b<0) 
				{
					throw a;
					throw b;
				}
				else
				{
					cout << "Divison is : " << a/b;
					
				}
			}
			catch(...)
			{
				cout << endl << "\t[Error]" << endl << endl;
				cout << "Value can't divide by Zero !!" << endl;
				cout << "Negative numbers are not allowed !!" << endl;
				cout << "Invalid input" << endl;
				
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