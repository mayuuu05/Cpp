//2 Write a Program to overload ++ operator to increment value from given 2 numbers.

#include<iostream>
using namespace std;

class Increment
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
			cout << endl << "x is : " << x  << endl;
			cout << "y is : " << y << endl;
		}
		
		Increment operator +(Increment &i2)
		{
			Increment temp;
			int a,b;
			
			x++ ;
			y++ ;
			
			a = x;
			b = y;
			
			temp.x = a;
			temp.y = b;
			
			return temp;
		}
};


int main()
{
	Increment i1,i2,i3;
	
	i1.set();	
	i3 = i1 + i2;

	i3.get();
	
	return 0;
}