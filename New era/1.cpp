//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch

#include<iostream>
using namespace std;

class Distance 
{
	public :
	int feet,inch;
	
	void input1()
	{
		cout << "Enter feet : ";
		cin >> feet;
		cout << "Enter inch : ";
		cin >> inch;
	}
	void input2()
	{
		cout << "Enter feet : ";
		cin >> feet;
		cout << "Enter inch : ";
		cin >> inch;
	}
	void output()
	{
		int a = inch / 12;
	    feet = feet + a;
	    inch = inch - (a * 12); 
	    
	    cout << feet << " feet" << inch <<" inches";
	}
};
int main()
{
	Distance d1;
	d1.input1();
	d1.input2();
	d1.output();
	return 0;
}