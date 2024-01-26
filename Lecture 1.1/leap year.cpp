//
//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040

#include<iostream>
using namespace std;

main()
{
	int x;
	cout << "Enter first year :";
	cin >> x;
	int y;
	cout << "Enter second year :";
	cin >> y;

	
	for(int i=x ; i<=y ; i++)
	{
		if(i%4==0)
		{
			cout << i << "\t";
		}
	}
	
	
	
	
}