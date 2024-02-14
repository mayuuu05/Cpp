//Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
//- use only one method named calculate() in the child class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition

#include<iostream>
using namespace std;

class Operations
{
	protected :
		int x,y,z,a,b;
		
};
class Operations_2O : public Operations
{
	public :
		void calculate(int x,int y)
		{
		    this->x = x;
		    this->y = y;
		    cout << "\tDivision is       : " << x/y << endl;
				
		}
		void calculate(int x,int y,int z)
		{
		    this->x = x;
		    this->y = y;
		    this->z = z;
		    
		    cout << "\tSubtraction is    : " << x-y-z << endl;	
		}
		void calculate(int x,int y,int z,int a)
		{
		    this->x = x;
		    this->y = y;
		    this->z = z;
		    this->a = a;
		    cout << "\tMultiplication is : " << x*y*z*a << endl;		
		}
		void calculate(int x,int y,int z,int a,int b)
		{
		    this->x = x;
		    this->y = y;
		    this->z = z;
		    this->a = a;
		    this->b = b;
		    cout << "\tAddition is       : " << x+y+z+a+b << endl;		
		}
};
int main()
{
	Operations_2O o1;
	cout << endl << "--------------Arithmetic operations ----------------" << endl << endl;
	o1.calculate(400,200);
	o1.calculate(400,200,100);
	o1.calculate(1,2,3,4);
	o1.calculate(10,20,30,40,50);
	
	return 0;
}