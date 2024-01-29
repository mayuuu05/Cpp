//Q.3 Write a program to convert second into hh: mm: ss.

#include<iostream>
using namespace std;

class hhmmss
{
	public:
	int second,hour,minutes ;
	void input()
	{
		cout << endl << "Enter seconds :";
		cin >> second;
	}
	void convert()
	{
		hour = second / 3600;
		minutes = (second % 3600)/60;
		second = minutes * 60 ;
	}
	void output()
	{
		cout << hour << ":" << minutes << ":" << second ;
	}
	
};
int main()
{
	hhmmss h1;
    h1.input();
    cout << endl << "Second convert into hh:mm:ss :-" << endl;
	h1.convert();
	h1.output();
	return 0;
}

