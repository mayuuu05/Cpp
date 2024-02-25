//2. Define a class named `Employee` with private attributes `name`, `salary`, and `designation`.
// Encapsulate these attributes using appropriate access specifiers.
//  Implement public member functions to set and get the values of these attributes.
// Demonstrate the encapsulation concept by accessing these attributes through the member functions.

#include<iostream>
using namespace std;
class Employee
{
	int salary;
	string name ,designation;
	
	public:
		void set()
		{
//			cin.ignore();
			cout << "Enter name         : ";
			getline(cin,name);
			
			cout << "Enter designation  : ";
			getline(cin,designation);
			
			cout << "Enter salary       : ";
			cin >> salary ;
			
		}
		void get()
		{
			cout << endl << "Details  => " << endl;
			cout << "Name         : " << name << endl;
			cout << "designation  : " << designation << endl;;
			cout << "salary       : " << salary << endl;;
		}
		
};
int main()
{
	Employee e1;
	e1.set();
	e1.get();
	return 0;
}