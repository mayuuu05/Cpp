//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods

#include<iostream>
using namespace std;

class X
{
	protected :
		int a, b, c;	
};
class Y : public X
{
	protected : 
	    int cube1, cube2, cube3;
		int sum=0;
	public :
		void set()
		{
			cout << "Enter the value of a : ";
			cin >> a;
			
			cout << "Enter the value of b : ";
			cin >> b;
			
			cout << "Enter the value of c : ";
			cin >> c;
		}
		void cube()
		{
			cube1 = a*a*a;
			cube2 = b*b*b;
			cube3 = c*c*c;
			
			cout << endl << "CUBE 1 = " << cube1;
			cout << endl << "CUBE 2 = " << cube2;
			cout << endl << "CUBE 3 = " << cube3;
			
			sum = cube1 + cube2 + cube3;
			
		}
		void get()
		{
			cout << endl <<endl << "sum of all three numbers cubes : " << endl ;
			cout << cube1 << " + " << cube2 << " + " << cube3 << " = " << sum;
		}
		
};

int main()
{
	Y y1;
	y1.set();
	y1.cube();
	y1.get();
	
	return 0;
}
