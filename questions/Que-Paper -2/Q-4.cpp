//4. Extend the `Vehicle` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
//Implement the `displayDetails()` function in each derived class to print information specific to the vehicle.
// Create an array of `Vehicle` pointers, pointing to objects of different vehicles.
// Demonstrate polymorphism by calling the `displayDetails()` function for each object.

//4. Extend the `Vehicle` hierarchy from Question 3 to include a virtual function `displayDetails()`. 
//Implement the `displayDetails()` function in each derived class to print information specific to the vehicle.
// Create an array of `Vehicle` pointers, pointing to objects of different vehicles.
// Demonstrate polymorphism by calling the `displayDetails()` function for each object.

#include<iostream>
using namespace std;
class Vehicle
{
	
    public :
    	virtual void displayDetails()
    	{
    		cout << "Vehicle details !!" << endl << endl;
		}
};
class Car : public Vehicle
{
	string brand = "Fortuner";
	int model =2020;
	public:
		virtual void displayDetails()
    	{
    	    cout <<endl << "\t[Car details]" << endl << endl;
    		cout << "Brand : " << brand << endl;
    		cout << "Model : " << model << endl;
    		
		}

};
class Bike : public Vehicle
{
	string brand = "Royal enfield";
	int model =2018;
	public:
		virtual void displayDetails()
    	{
    		cout <<endl << "\t[Bike details]" << endl << endl;
    		cout << "Brand : " << brand << endl;
    		cout << "Model : " << model << endl;
		}
};
int main()
{
	Vehicle *v1[2];
	Vehicle v;
	v.displayDetails();
	Car c1;
	Bike b1;
	
	v1[0]=&c1;
	v1[1]=&b1;
	
	for(int i=0 ; i<2 ;i++)
	{
		v1[i]->displayDetails();
	}
	
	return 0;
}
