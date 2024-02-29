#include<iostream>
using namespace std;

class Vehical
{
	public :
		virtual void startEngine() = 0;
		virtual void drive() = 0;
		
};
class Car : public Vehical
{
	public :
	virtual void startEngine()
	{
		cout << endl  << "\t[Car]"<< endl << endl;
		cout << "Car's Engine start !" << endl;
	}
	virtual void drive()
	{
	
		cout << "Car is being driven !" << endl;
	}
};
class Bike : public Vehical
{
	public :
	void startEngine()
	{
		cout << endl  << "\t[Bike]"<< endl << endl;
		cout << "Bike's Engine start !" << endl;
		
	}
	void drive()
	{
		cout << "Bike is being driven !" << endl;
	}
};

int main()
{
	Vehical *v1[2];
	
	Car c1;
	Bike b1;
	
	v1[0] = &c1;
	v1[1] = &b1;
	
	for(int i=0 ; i<2 ; i++)
	{
		v1[i]->startEngine();
		v1[i]->drive();
	}
	
	
	
	
	return 0;
}