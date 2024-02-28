//4. Extend the `Shape` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
//Implement the `displayDetails()` function in each derived class to print information specific to the shape.
// Create an array of `Shape` pointers, pointing to objects of different shapes.
// Demonstrate polymorphism by calling the `displayDetails()` function for each object.

#include<iostream>
using namespace std;


class Shape
{
	public :
	virtual void displayDetails()
	{
		cout<<"Shape"<<endl<<endl;
		
	}
};
class Circle : public Shape
{
	public :
	virtual void displayDetails()
	{
		cout<<"Circle area = pi * r * r "<<endl<<endl;
	}
};
class Rectangle : public Shape
{
	public :
	virtual void displayDetails()
	{
			cout<<"Rectangle area = l * w "<<endl<<endl;
	}
};
int main()
{
	 Shape *s1[3];
	 
	 Shape s;
	 s.displayDetails();
	 Circle c1;
	 Rectangle r1;
	 
	 s1[0]= &c1;
	 s1[1]=&r1;
	
	
	 
	 s1[0]->displayDetails();
	 s1[1]->displayDetails();
	

	return 0;
	
}
