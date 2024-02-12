//Q.1 Write a Program that defines a shape class with a constructor that gives
// value to width and height. Then define two sub-classes triangle and rectangle,
//  that calculate the area of the shape area (). In the main, define two objects a 
//  triangle and a rectangle, and then call the area() function using these two objects.

#include<iostream>
using namespace std;

class Shape
{
	protected :
		int width,height; 
		public :	
  	Shape()
  	{
  		cout << "Enter Width : ";
  		cin >> width ;
  		cout << "Enter height : ";
  		cin >> height;
  	}
  };

class Triangle : public Shape
{
	public :
	void triangleArea()
	{
  		int triangleArea =  (width * height) * 1/2 ;
  		cout << endl << "=> Triangle area is = " << triangleArea << endl << endl;
	}
};

class Rectangle : public Shape
{
  	public :
  	void rectangleArea()
  	{
    		int rectangleArea = width * height;
    		cout << endl << "=> Rectangle area is =  " << rectangleArea ;
  	}
};
int main()
{
  	Triangle t1;
  	t1.triangleArea();
  	
  	Rectangle r1;
  	r1.rectangleArea();
  
  	return 0;
}
