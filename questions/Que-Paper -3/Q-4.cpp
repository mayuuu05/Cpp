//4. Extend the `Animal` hierarchy from Question 3 to include a virtual function `displayDetails()`.
// Implement the `displayDetails()` function in each derived class to print information specific to the animal.
//  Create an array of `Animal` pointers, pointing to objects of different animals. 
//Demonstrate polymorphism by calling the `displayDetails()` function for each object.

#include<iostream>
using namespace std;

class Animal
{
	public :
	virtual void displayDetails()=0;
	
};
class Dog : public Animal
{
	public :
	virtual void displayDetails()
	{
		cout << "Dog sound barks !!" << endl;
		
	}
};
class Cat : public Animal
{
	public:
	virtual void displayDetails()
	{
		cout << "Cat sound meow !!" << endl;
	}
};

int main()
{
	Animal *a1[2];
	Dog d1;
	Cat c1;
	
	a1[0] = &d1;
	a1[1]= &c1;
	
	for(int i =0; i<2 ; i++)
	{
		a1[i]->displayDetails();
		
	}
	
	
	return 0;
}
