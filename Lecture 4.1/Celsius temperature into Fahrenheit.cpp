//Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
//- Class P has the following members: temperature attribute in float
//- Class Q has the following members: toFehrenheit() method
//- Class R has the following members: toKelvin() method.

#include<iostream>
using namespace std;

class T 
{
	protected:
		
		float celsius,Fahrenheit,kelvin;

};

class F : public T
{
	public:
		void Celsius()
		{
			cout << "Enter Celsius : ";
			cin >> celsius;
		}
		void convert_f()
		{
			Fahrenheit = (celsius * 9/5) + 32;
			
			cout << endl << "=> Celsius into Fahrenheit : ";
			cout << endl << "Fahrenheit = "<< Fahrenheit << endl;
		}
		
};
class K : public F
{
	public:
		void convert_k()
		{
			kelvin = (Fahrenheit - 32) * 5/9 + 273.15;
			
			cout << endl<< "=> Fahrenheit into Kelvin : ";
			cout << endl << "Kelvin = "<< kelvin;
			
		}
};

int main()
{
	K c;
	c.Celsius();
	c.convert_f();
	c.convert_k();
	
	return 0;
}