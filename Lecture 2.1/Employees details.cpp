//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name

#include<iostream>
using namespace std;

class Employee
{
	public :
	int id,age,salary,experience;
	string name,role,city,company_name;
	
	void input()
	{
		cout << "Enter id           : ";
		cin >> id ;
		
		cout << "Enter name         : ";
		cin >> name ;
		
		cout << "Enter age          : ";
		cin >> age ;
		
		cout << "Enter role         : ";
		cin >> role ;
		
		cout << "Enter salary       : ";
		cin >> salary ;
		
		cout << "Enter city         : ";
		cin >> city ;
		
		cout << "Enter experience   : ";
		cin >> experience ;
		
		cout << "Enter company_name : ";
		cin >> company_name ;
		
    }
	
	
    void output()
	{    
	    cout << "ID           :" << id << endl;
	    cout << "Name         :" << name << endl;                     
		cout << "Age          :" << age << endl;
		cout << "Role         :" << role << endl;
		cout << "Salary       :" << salary << endl;
		cout << "city         :" << city << endl;
		cout << "Expeience    :" << experience << endl;
		cout << "Company name :" << company_name << endl;
	}
};

int main()
{
	cout << endl << "-----------------Employee Record System------------------" << endl << endl;
	Employee emp[5];
	int i;
	for(i=0 ; i<5 ; i++)
	{
		cout << endl << "Employee : " << i+1 ;
		cout << endl;
		emp[i].input();
	}
	
	for(i=0 ; i<5 ; i++)
	{
		cout << endl;
		emp[i].output();
	}
	return 0;
}