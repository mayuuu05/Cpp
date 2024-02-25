//2. Define a class `Person` with private attributes `name`, `age`, and `address`.
// Encapsulate these attributes using getter and setter methods. Implement a parameterized 
// constructor for the `Person` class. Create N number of objects using this constructor and display the details.

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
	private :
		string name,address;
		int age;
		
		public:
			void setter(int i)
			{
				cout << endl <<" Person [ "  << i << " ] detail's " << endl << endl;
					
				cin.ignore();
		        cout << "Enter name    : ";
		        getline(cin,name);
		        
		        cout << "Enter age     : ";
				cin >> age;
				
				cin.ignore();
		        cout << "Enter address : ";
		        getline(cin,address);
		        
			}
			
			void getter(int i)
			{
			    cout << endl << "Detail => " << endl << endl;
				cout << " Name     : " << name << endl;
				cout << " Age      : " << age << endl;
				cout << " Address  : " << address << endl;
			}
		
};
int main()
{
	int n;
	cout << "Enter number :";
	cin >>  n;
	Person p1[n];
	int i;
	for(i=1; i<=n; i++)
	{
		p1[i].setter(i);
	   	p1[i].getter(i);
	}

	return 0;
}
