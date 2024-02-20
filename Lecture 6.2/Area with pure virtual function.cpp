//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations

#include<iostream>
using namespace std;

class Shape
{
	protected :
		int length,width,base,height,radius;
		const float pi = 3.14;
	public:
	virtual void calculate() = 0;
	
};
class Circle : public Shape
{
	
	public:
	void setter1()
	{
		cout << endl;
		cout << "\t[Circle area]" << endl << endl;
		cout << " Enter radius : " ;
		cin >> radius;
		
	}
	void calculate()
	{
		cout << endl;
		cout << "=>  Area of Circle is = " << pi*radius*radius << endl;
	}
};
class Triangle : public Shape
{
	public:
	void setter2()
	{
		cout << endl;
		cout <<  "-----------------------------------------" << endl << endl;
		cout << "\t[Triangle area]" << endl << endl;
		cout << " Enter base   : " ;
		cin >> base;
		
		cout << "  Enter height : " ;
		cin >> height;
		
	}
	void calculate()
	{
		cout << endl;
		cout << "=>  Area of Triangle is = " << height*base/2 << endl  ;
	}
	
};
class Rectangle : public Shape
{
	public:
	void setter3()
	{
		cout << endl;
		cout <<  "-----------------------------------------" << endl << endl;
		cout << "\t[Rectangle area]" << endl << endl;
		cout << " Enter length : " ;
		cin >> length;
		
		cout << "  Enter width  : " ;
		cin >> width;
	}
	void calculate()
	{
		cout << endl;
		cout << "=>  Area of Rectangle is = " << length*width  << endl;
	}
};

int main()
{
	Circle c1;
	c1.setter1();
	c1.calculate();
	
	Triangle t1;
	t1.setter2();
	t1.calculate();
	
	Rectangle r1;
	r1.setter3();
	r1.calculate();
	
	
	return 0;
}