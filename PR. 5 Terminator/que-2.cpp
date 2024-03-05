//Q.2 Write a Program to throw 0 if the age of the user is less than 18, otherwise print that you are eligible to vote. 
//Also, handle that thrown exception and print you are not eligible to vote.
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << endl << "Enter the age :";
	cin >> age;
	
	cout << endl;
	try
	{
		if(age<18 || age>120)
		{
			throw age;
		
		}
		else
		{
			cout << "You are eligible for vote!!" << endl;
		}
	}
	catch(...)
	{
		cout << "You are not eligible for vote!!" << endl ;	
	}
	
	return 0;
}