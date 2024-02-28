//3. Define a base class `Device` with private attributes `brand` and `powerConsumption`.
// Implement public methods for setting and getting these attributes. Derive two classes, `Laptop` and `Smartphone`,
//  from the `Device` class. Implement methods to display information specific to each device.
// Demonstrate abstraction by calling the display methods for both `Laptop` and `Smartphone`.

#include<iostream>
using namespace std;

class Device
{
	string brand;
	int powerConsumption;
	
	public:
		virtual void display()=0;
	void setting()
	{
		cout << "Enter brand name : ";
		cin >> brand;
		cout << "Enter power Consumption : ";
		cin >> powerConsumption;
		
	}
	void getting()
	{
		cout << "Brand : " << brand  << endl;
		cout << "Power Consumption : " << powerConsumption  << endl;
	}
};
class Laptop: public Device
{
	public :
		virtual void display()
		{
		  	cout << endl <<"\tDetail of Laptop = "<< endl << endl;
		  setting();
		  cout << endl;
		  getting();
			
		}
};
class Smartphone: public Device
{
	public :
		virtual void display()
		{
			cout << endl<< "\tDetail of Smartphone = "<< endl << endl;
		setting();
		cout << endl;
		  getting();
		}
};
int main()
{
	Laptop l1;
	l1.display();
	cout << endl << "-------------------------------------" << endl << endl;
	Smartphone s1;
	s1.display();
	return 0;
}
