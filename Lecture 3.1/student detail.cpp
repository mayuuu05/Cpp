//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college

#include<iostream>
using namespace std;

class Student 
{
	int id,age;
	string name,course,city,college,email;
	public:
		

	void set()
	{
		cout << endl;
       
		cout << "Enter ID      : ";
		cin >> id;
		
		cin.ignore();
		cout << "Enter name    : ";
		getline(cin,name);
		
		cout << "Enter age     : ";
		cin >> age;
		
		cin.ignore();
		cout << "Enter course  : ";
		getline(cin,course);
		
		cout << "Enter city    : ";
		getline(cin,city);
		
		cout << "Enter email   : ";
		getline(cin,email);
		
		cout << "Enter college : ";
		getline(cin,college);			
	}
	void get()
	{
		
		cout << endl;
		cout << "ID           :" << id << endl;
	    cout << "Name         :" << name << endl;                     
		cout << "Age          :" << age << endl;
		cout << "Course       :" << course << endl;
		cout << "City         :" << city << endl;
		cout << "Email        :" << email << "@gmail.com" << endl;
		cout << "College name :" << college << endl;
	}
};
int main()
{
	cout << "----------Student Record System----------" << endl << endl;
	Student stu[5];
	for(int i=0 ; i<5 ; i++)
	{
		cout << endl << "Student : " << i+1 ;
		stu[i].set();
	}
	for(int i=0 ; i<5 ; i++)
	{
		cout << endl << endl << "Student [" << i+1 << "] " << "details";
		stu[i].get();
	}
	return 0;
}