//6. Overload the `-` operator for the `Employee` class to subtract the age of two employees, 
//one is elder and one is younger. Create two `Employee` objects and demonstrate the use of the overloaded `-`
// operator to calculate and display the difference between their age.

#include<iostream>
using namespace std;

class Employee
{
	int age;

	public:
		
		void set()
		{
			cout << "Enter Employee age : ";
			cin >> age;
		}
		void get()
		{
			cout << endl <<  "=> Difference between their age is : " << age << endl << endl;
		}
		
		Employee operator -(Employee &e2)
		{
			Employee temp;
			temp.age = age - e2.age;
			return temp;
		}
		
};
int main()
{
	Employee e1,e2,e3;
	
	
	cout << endl << "\t[Elder employee] " << endl << endl ;
	e1.set();
	cout << endl << "\t [Younger employee] " << endl << endl ;
	e2.set();
	
	e3 = e1 - e2;
	
	e3.get();
	return 0;
	
}
