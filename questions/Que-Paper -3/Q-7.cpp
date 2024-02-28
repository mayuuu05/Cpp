//7. Define an abstract class `Shape` with pure virtual functions `area()` and `draw()`.
// Implement concrete classes `Circle` and `Rectangle` that inherit from `Shape`. 
// Demonstrate polymorphism by creating an array of `Shape` pointers pointing to objects of both 
// `Circle` and `Rectangle`. Call the `area()` and `draw()` functions for each object.


#include<iostream>
using namespace std;

class Shape
{
	protected:
	const float pi=3.14;
	int r=10;
	int l=10;
	int w=20;
	
	public :
	virtual void area()=0;
	virtual void draw()=0;
};
class Circle : public Shape
{

	public:
	virtual void area()
	{
		cout << "\t [Circle]" << endl << endl;
		cout << "\tCircle area : " << pi*r*r << endl;
	}
	virtual void draw()
	{
		cout << "\tDrawing circle." << endl << endl;
	}
};
class Rectangle : public Shape
{

	public:
	virtual void area()
	{
		cout << "------------------------------------" <<endl;
		cout <<endl << "\t[Reactangle]" << endl << endl;
		cout << "\tRectangle area : " << l*w << endl;
	}
	virtual void draw()
	{
		cout << "\tDrawing rectangle." << endl;
	}
};

int main()
{
	Shape *s1[2];
	
	Circle c1;
	Rectangle r1;
	
	s1[0]=&c1;
	s1[1]=&r1;
	
	for(int i=0 ; i<2 ; i++)
	{
		s1[i]->area();
		s1[i]->draw();
	}
		return 0;
}
