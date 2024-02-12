//Q.4 WAP to solve ambiguity error.
#include<iostream>
using namespace std;

class A
{
	protected :
		int a = 30;
		
};
class B : public A
{
	protected :
		int a = 30;
};
class C : public B
{
	protected :
		int b = 30;
};
class D : public C
{
	protected :
		int b = 10;
	public :
		void print()
		{
			cout << "Gun is ready !!";
			cout << endl << A::a + B::a + C::b + D::b;
		}
};

int main()
{
	D d1;
	d1.print();
	
	return 0;
}
