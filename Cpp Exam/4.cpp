#include<iostream>
using namespace std;
class Shape
{
	public :
	virtual void displayDetails()
	{
		cout << endl << "------------Shape information------------" << endl << endl ;
	}		
};
class Circle : public Shape
{
	public:
	void displayDetails()
	{
		cout << endl << "\t[Circle]" << endl << endl ;
		cout << "Circle drawing " << endl;
		cout << "Circle area's formula is = pi * radius * radius "<< endl;
	}

};
class Rectangle : public Shape
{
	public:
	void displayDetails()
	{
		cout << endl << "\t[Rectangle]" << endl << endl ;
		cout << "Rectangle drawing " << endl;
		cout << "Rectangle area's formula is = length * width "<< endl;
	}
};

int main()
{
	Shape *s1[2];
	Shape s;
	s.displayDetails();
	
	Circle c1;
	Rectangle r1;
	
	s1[0] = &c1;
	s1[1] = &r1;
	
	for(int i=0 ; i<2 ; i++)
	{
		s1[i]->displayDetails();
	}
	return 0;
}