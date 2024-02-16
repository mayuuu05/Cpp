//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.

#include<iostream>
using namespace std;
class Employee
{
	protected :
		string company_name = "Mypuro";
		int total_annual_revenue;
		public : 
		
		void set()
		{
			cout << "Enter total annual revenue : ";
			cin >> total_annual_revenue ;
		
		}
		void myAccess()
		{	
		   
			cout << endl << "------------[Employee Access]------------" << endl << endl ;
			set();
			cout <<endl << "==> DETAILS " << endl ;
			cout << endl << "Company Name         : " << company_name << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		}
};
class Manager : public Employee
{
	protected :
		int employee_salary ;
		int total_staff;
		int can_terminate;
		
		public :
	    void set()
		{
			cout << "Enter employee salary  : ";
			cin >> employee_salary ;
			
			cout << "Enter total staff      : ";
			cin >> total_staff ;
			
			cout << "Enter can terminate    : ";
			cin >> can_terminate ;
		}
		void myAccess()
		{
		
    		cout << endl << "------------[Manager Access]------------" << endl << endl ;
    		set();
    		cout <<endl << "==> DETAILS " << endl ;
			cout <<endl<< "Company Name         : " << company_name << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		}
};
class Admin : public Manager
{
		protected :
		int manager_salary;
		
		public :
		void set()
		{
			cout << "Enter manager salary  : ";
			cin >> manager_salary  ;
		}
		void myAccess()
		{
			
			cout << endl << "------------[Admin Access]------------" << endl << endl ;
			set();
			cout <<endl << "==> DETAILS " << endl ;
			cout <<endl<< "Company Name         : " << company_name << endl;
			cout << "Manager Salary       : " << manager_salary << endl;
			cout << "Employee Salary      : " << employee_salary << endl;
			cout << "Total Staff          : " << total_staff << endl;
			cout << "Can Terminate        : " << can_terminate << endl;
			cout << "Total Annual Revenue : " << total_annual_revenue;
		}
};


int main()
{
	
	Employee e1;
	e1.myAccess();
	
	Manager m1;
	m1.myAccess();
	
	Admin a1;
	a1.myAccess();
	

	
	
	
	return 0;
	
}