//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20

#include<iostream>
using namespace std;

class HHMMSS
{
	public :
	int second,hour,minitues;
	void input()
	{
		cout << "Enter second : ";
		cin >> second;
	}
	void convert()
	{
		hour = second /3600;
		minitues = (second%3600)/60;
		second = second % 60;
	}
	void output()
	{
		cout << hour << ":" << minitues << ":" << second ;
	}
};
int main()
{
	HHMMSS h1;
	h1.input();
	h1.convert();
	h1.output();
		return 0;
}