//Q.3 Write a program to read and print distance for feet and inches.
//For example,
//input : 
//Enter feet: 6
//Enter inches: 40
//
//output: Feet - 9, Inch - 4

#include <iostream>
using namespace std;

int main() 
{
	int feet;
    float inch;
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Enter inch: ";
    cin >> inch;
    
    int a = inch / 12;
    feet = feet + a;
    inch = inch - (a * 12); 
    

    cout << endl << "distances = " << feet << " feet  "  << inch << " inches";
    return 0;
}
