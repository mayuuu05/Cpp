//Q.1 Write a Program to overload + operator to find which object contains a higher value from given 2 numbers.

#include<iostream>
using namespace std;

class Lessthan
{
	int x,y;
	public :
		void set()
		{
			cout << "Emter the value of x : ";
			cin >> x;
			cout << "Emter the value of y : ";
			cin >> y;	
		}
		void get()
		{
			cout << "x is : " << x  << endl;
			cout << "y is : " << y << endl;
		}
		Lessthan operator < (Lessthan &o2)
		{
			Lessthan higher_value;
			
			if(o2.x < x)
			{
				higher_value.x = x;
				higher_value.y = y;
				cout << endl << "Higher value from first object =>  " << endl;
			}
			else
			{
				higher_value.x = o2.x;
				higher_value.y = o2.y;
				cout << endl << "Higher value from second object => " << endl;
			}
			
			return higher_value; 
		}
};

int main()
{
	Lessthan l1,l2,l3;
	cout << endl << "First object value : " << endl;
	l1.set();
	cout << endl << "Second object value : " << endl;
	l2.set();
	
	l3 = l1 < l2 ;
	
	l3.get();
	
	return 0;
}