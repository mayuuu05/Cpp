//4. Extend the `Device` hierarchy from Question 3 to include a virtual function `calculateDiscount()`.
// Implement the `calculateDiscount()` function in each derived class to calculate a discount based on certain criteria.
//  Create an array of `Device` pointers, pointing to objects of different devices.
// Demonstrate polymorphism by calling the `calculateDiscount()` function for each object.

#include<iostream>
using namespace std;

class Device
{
	protected:
	int price =10000;
	public :
		virtual void calculateDiscount()
		{
			cout << "\tDevices price details : " << endl;
		}
};
class Laptop: public Device
{
	public :
		virtual void calculateDiscount()
		{
			price = 50000;
			
			cout << endl << "Laptop price : " << price << endl;
		}
};
class Smartphone: public Device
{
	public :
		virtual void calculateDiscount()
		{
			price = 20000;
			
			cout << endl << "Smartphone price : " << price << endl;
		}
};
int main()
{
	Device *d1[2];
	Device d;
	d.calculateDiscount();
	
	Laptop l1;
	Smartphone s1;
	
	d1[0]=&l1;
	d1[1]=&s1;
	
	for(int i=0; i<2; i++)
	{
		d1[i]->calculateDiscount();
	}
//	Laptop l1;
//	l1.calculateDiscount();
//	
//	Smartphone s1;
//	s1.calculateDiscount();
	
	
	
	return 0;
}
