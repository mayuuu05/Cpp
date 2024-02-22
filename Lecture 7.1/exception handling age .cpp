//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//-a person cannot be able to vote if his/her age is less than 18
#include<iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter age : ";
	cin >> age;
	try
	{
		if(age>=18 && age<=100)
		{
			cout << "Eligible For Votting!!"<< endl;
		}
		else
		{
			throw age;
		}
	}
	catch(...)
	{
		cout << "Not Eligible!!" << endl;
	}
	
	return 0;
}
