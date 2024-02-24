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
	int feet1,inch1,sum,sum1,feet,inch;
	
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
		cin >> feet1;
		cout << "Enter inch : ";
		cin >> inch1;
	}
	void add()
	{
		sum =  feet + feet1;
		sum1 = inch + inch1;
	}
	void output()
	{
		int a = sum1 / 12;
	    sum = sum + a;
	    sum1 = sum1 - (a * 12); 
	    
	    cout << sum << " feet " << sum1 <<" inches";
	    
	}
};
int main()
{
	Distance d1;
	d1.input1();
	d1.input2();
	d1.add();
	d1.output();
	return 0;
}
