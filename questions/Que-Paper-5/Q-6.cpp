//6. Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70
//

#include<iostream>
using namespace std;

class Distance
{
	int Km,Meter;
	
	public :
		void set(int num)
		{
			cout << endl << "Input " << num << endl;
			cout << "Kilometer : ";
			cin >> Km;
			
			cout << "Meter : ";
			cin >> Meter;	
		}
		
		void get()
		{
			cout <<	endl << "Kilometer : " << Km << " " << "Meter : " << Meter;
			cout << endl;
		} 
		Distance operator + (Distance m2)
		{
			Distance temp;
			
			temp.Km = this->Km + m2.Km;
			temp.Meter = this->Meter + m2.Meter;
			
			temp.Km = temp.Km + (temp.Meter/1000);
			temp.Meter = (temp.Meter%1000);
			
			return temp;
		}
		
};

int main()
{
	Distance d1,d2,d3;
	
	d1.set(1);
	d2.set(2);
	d3 = d1 + d2;
	
	d3.get();
	
	
	
	return 0;
}
