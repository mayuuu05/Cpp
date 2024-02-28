//3. Define a base class `Shape` with private attributes `color` and `area`.
// Implement public methods for setting and getting these attributes.
//  Derive two classes, `Circle` and `Rectangle`, from the `Shape` class.
//   Implement methods to calculate the area specific to each shape.
//    Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
#include<iostream>
using namespace std;

class Shape
{
	protected :
	string color;
	int area;
	virtual void  calculation ()=0;
	
	
	public :
		void setting()
		{
		 cout <<endl <<"Enter colour of shape :";
		 cin >> color;
		 	
		}
		void getting()
		{
		cout<< "color is : "<< color << endl;	
		}
};

class Circle : public Shape
{

    
	int r;
	const float pi=3.14;
	public:
	void   calculation ()
	{
		cout  << endl << "\t[Circle]"<< endl ;
		setting();
		cout << "Enter radius : ";
		cin >> r;
		getting();
		area=pi*r*r;
		cout<<"circle area is :" << area;
		
	}

};

class Rectangle : public Shape
{
	int l;
	int w;
	public:
		
	void   calculation ()
	{
		cout  << endl << endl<< "\t[Rectangle]"<< endl ;
		setting();
		cout << "Enter length : ";
		cin >> l;
		cout << "Enter width : ";
		cin >> w;
		
		area=l*w;
		getting();
		cout<<"Rectangle area is :" << area;
	
	}
};

int main()
{	
  	Circle c1;
  	c1.calculation();
  	
  	Rectangle r1;
  	r1.calculation();
	
	return 0;
}
