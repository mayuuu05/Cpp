//3. Define a base class `Vehicle` with private attributes `model` and `speed`. 
//Implement public member functions for setting and getting these attributes.
// Derive two classes, `Car` and `Bike`, from the `Vehicle` class. Implement 
// methods to calculate the time taken for a certain distance based on the speed of each vehicle.
// Demonstrate abstraction by calling the time calculation methods for both `Car` and `Bike`.

#include<iostream>
using namespace std;
class Vehicle
{
	protected:
    int speed,model;
    	int distance,time;
    
    virtual void calculation()= 0;
	
	public:
		void setting()
		{
			cout << "Enter model(In year) : ";
			cin >> model;	

		}
		void getting()
		{
			cout << "Model : " << model ;
			cout << "Speed : " << speed;
		}
	
};
class Car : public Vehicle
{

	public :
		void calculation()
		{
			cout << endl << "[Car]" << endl << endl;

			cout << "Enter how much distance you have cover : ";
			cin >> distance;
			
			cout << "Enter speed : ";
			cin >> speed;
			
			time = distance/speed;
			cout << "Car timing = " << time << endl;
			
		}
};
class Bike : public Vehicle
{
	public:
		void calculation()
		{
			cout << endl << "[Bike]" << endl << endl;
			cout << "Enter how much distance you have cover : ";
			cin >> distance;
			
			cout << "Enter speed   : ";
			cin >> speed;
			
			time = distance/speed;
			cout << "Bike timing = " << time << endl;

		}
};
int main()
{
	Car c1;
	c1.calculation();
	Bike b1;
	b1.calculation();
	
	
	return 0;
}
