//Q.2 Write a Program to overload + operator to find sum from given 2 numbers.

#include<iostream>
using namespace std;

class Addition
{
	int x,y;
	public :
		void set()
		{
			cout << endl << "Entre the value of x : ";
			cin >> x;
			
			cout << "Entre the value of y : ";
			cin >> y;
		}
		
		void get()
		{
			cout << endl << "x : " << x << endl;
			cout << "y : " << y << endl;
		}
		
		Addition operator +(Addition &a2)
		{
			int a,b;
			Addition temp;
			
			a = x + a2.x;
			b = y + a2.y;
			
		    cout << "Addition is => " << endl ; 
			
			temp.x = a;
			temp.y = b;
			
			return temp;
		}
};


int main()
{
	Addition a1,a2,a3;
	
	a1.set();
	a2.set();
	
	a3 = a1 + a2;
	
	a3.get();
	
	return 0;
}