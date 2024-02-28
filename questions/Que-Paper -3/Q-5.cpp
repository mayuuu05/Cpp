//5. Overload the `-` operator for a class `Complex` representing a Complex number
// (For example, a complex number looks like 4 + 7j). Create two `Complex` objects
//  and demonstrate the use of the overloaded `-` operator to subtract them.

//complex Number


#include<iostream>
using namespace std;

class Complex
{
	int a,b;
	public :
		void set()
		{
			cout << "Enter a : ";
			cin >> a;
			
			cout << "Enter b : ";
			cin >> b;	
		}
		void get()
		{
			cout << a << " + " << b << "j" << endl; 	
		}
		Complex operator-(Complex &c2)
		{
			Complex temp;
			temp.a = this->a - c2.a;
			temp.b = this->b - c2.b;
			return temp;	
		}	
};

int main()
{
	Complex c1,c2,c3;
	
	c1.set();
	c2.set();
	
	c1.get();
	c2.get();
	
	c3 = c1 - c2;
	cout << "------------" << endl;
	c3.get();
	
	return 0;
}


