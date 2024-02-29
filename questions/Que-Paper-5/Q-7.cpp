//7. Define an abstract class `Vehicle` with pure virtual functions `startEngine()` and `drive()`. 
//Implement concrete classes `Car` and `Bike` that inherit from `Vehicle`. 
//Demonstrate polymorphism by creating an array of `Vehicle` pointers, pointing to objects of both `Car`
// and `Bike`. Call the `startEngine()` and `drive()` functions for each object.

#include<iostream>
using namespace std;

class Vehicle
{
	public :
		virtual void startEngine()=0;
		virtual void drive()=0;
		
};
class Car : public Vehicle
{
	public:
	void startEngine()
	{
		cout << endl << "Car's engine started!" << endl;
	}
	void drive()
	{
	 	cout << "Car is being driven." << endl << endl << endl;
	}
};
class Bike : public Vehicle
{
	public:
	void startEngine()
	{
		cout << "Bike's engine started." << endl;
	}
	void drive()
	{
	 	cout << "Bike is being driven." << endl;

	}
};
int main()
{
	Vehicle *v1[2];
	
	Car c1;
	Bike b1;
	
	v1[0]=&c1;
	v1[1]=&b1;
	
	for(int i=0 ;  i<2 ; i++)
	{
		v1[i]->startEngine();
		v1[i]->drive();
	}
	
	return 0;
}
