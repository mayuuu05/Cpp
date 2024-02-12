//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

#include<iostream>
using namespace std;

class Set
{
	protected :
		int n;
		public :
			void set()
			{
				cout << "Enter any number : ";
				cin >> n;
			}
};
class Square : public Set
{
		public :
		void getSquare()
		{
			cout << "Square is = " << n*n << endl << endl ;
		}
};
class Cube : public Set
{
	public :
		void getCube()
		{
			cout << "Cube is = " << n*n*n ;
		}
};
int main()
{
	Square S1;
	S1.set();
	S1.getSquare();
	
	Cube c1;
	c1.set();
	c1.getCube();
	
	return 0;
}