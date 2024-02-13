//Q.2 Write a Program to demonstrate the use of a scope resolution operator to solve ambiguity errors.

#include<iostream>
using namespace std;

class A
{
	protected :
		int a = 10;
		
};
class B
{
	protected :
		int a = 20;
};
class C : public A , public B
{
	public :
		void print()
		{
			cout << A::a;
		}
};

int main()
{
	C C1;
	C1.print();
	
	return 0;
}
