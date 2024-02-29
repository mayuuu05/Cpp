#include<iostream>
using namespace std;

class Shape
{
	protected :
		string color;
		int area;
		
		public :
			virtual void areaCalculation()=0;
			
			void setting()
			{
				cout << "Ener color : ";
				cin >> color;
				
			}
			void geting()
			{
				cout << "Color is  : " << endl;
			}
			
};
class Circle : public Shape
{
	int radius = 10;
	float pi = 3.14;
	public :
		void set1()
		{
			cout << endl << "Enter radius : ";
			cin >> radius;
			
		}
		void areaCalculation()
		{
			cout << "\t[Circle]" << endl << endl ;
			set1();
			cout << "Circle area is = " << pi * radius * radius << endl;
		}
};
class Rectangle : public Shape
{
	int length;
	int width;
	public :
		void set2()
		{
			cout << "Enter length : ";
			cin >> length;
			cout << "Enter width : ";
			cin >> width;
		}
		void areaCalculation()
		{
		
			cout << endl << "\t[Rectangle]" << endl << endl ;
			set2();
			cout << "Rectangle area is = " << length * width << endl;
		}
};

int main()
{
	Circle c1;
	c1.areaCalculation();
	
	Rectangle r1;
	r1.areaCalculation();
	return 0;
}