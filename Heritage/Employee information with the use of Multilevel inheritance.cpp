//Q.3 Write a Program to read and print Employee information with the use of Multilevel inheritance. (as same the attached image)

#include<iostream>
using namespace std;

class Employee1
{
	protected :
		int id,salary,experience;
		long long contact;
		string comp_name, emp_name,role,address,email;
		
		public :
			void setter()
			{
				cout << "----------------Employee information---------------- "<< endl << endl;
				cout << "Enter Employee ID : ";
				cin >> id;
				
				cin.ignore();
				cout << "Enter Employee name : ";
				getline(cin,emp_name);

				cout << "Enter Employee role : ";
				getline(cin,role);
				
			}
};
class Employee2 : public Employee1
{
	    public : 
			void setter_1()
			{
				cout << "Enter Employee salary : ";
				cin >> salary;
				
				cout << "Enter Employee experience : ";
				cin >> experience;
			}
};
class Employee3 : public Employee2
{
	    public :
			void setter_2()
			{  
			    	cin.ignore();
			        cout << "Enter company_name :";
			        getline(cin,comp_name);
		
				cout << "Enter company address :";
		        	getline(cin,address);
			}
			
			void getter1()
			{
				cout << "Name         : " << emp_name << endl;
				cout << "Role         : " << role << endl;
				cout << "Salary       : " << salary << endl;
			}
			
			
};
class Employee4 : public Employee3
{
	    public :
			void setter_3()
			{
			    cout << "Enter E-mail  : ";
			   	cin >> email;
			   	
				cout << "Enter contact no.: ";
				cin >> contact;
			}
			
			void getter()
			{
				setter();
				setter_1();
				setter_2();
				setter_3();
				
				cout << endl << "Employee details are given below  :-" <<endl;
				cout <<"ID           : " << id << endl;
				getter1();
				cout << "Experience   : " << experience << " Year" << endl ;
				cout <<"Company Name : " << comp_name << endl ;
				cout <<"Address      : " << address << endl ;
				cout <<"Email        : " << email << endl;
				cout <<"Contact No.  : "<< contact;
				
			}
};

int main()
{
	Employee4  e1;
	e1.getter();
	
	return 0;
}
