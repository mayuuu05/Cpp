//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. 
//Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)


#include<iostream>
using namespace std;

class Customer 
{
	private:
	int id;
	int age;
	int mobile_number;
	int simcard_validity;
	
	string name;city,telecom_brand_name;
	
	public:
		

	void set()
	{
		cout << endl;
       
		cout << "Enter ID           : ";
		cin >> id;
		
		cin.ignore();
		cout << "Enter name         : ";
		getline(cin,name);
		
		cout << "Enter age          : ";
		cin >> age;
		
		cin.ignore();
		cout << "Enter city         : ";
		getline(cin,city);
		
		cout << "Enter mobile no.   : ";
		cin >> mobile_number;
		
		cout << "Enter simcard validity (In years)  : ";
		cin >> simcard_validity;	
		
		cin.ignore();
		cout << "Enter telecom brand_name (like Jio, Airtel, Vi, etc.) : ";
		getline(cin,telecom_brand_name);		
	}
	void get()
	{
		
		cout << endl;
		cout << "ID               :" << id << endl;
	    cout << "Name             :" << name << endl;                     
		cout << "Age              :" << age << endl;
		cout << "City             :" << city << endl;
		cout << "Mobile no.       :" << mobile_number << endl;
		cout << "Simcard validity :" << simcard_validity << " Years" << endl;
		cout << "Brand name       :" << telecom_brand_name << endl;
	}
};
int main()
{
	cout << "----------Customer Record System----------" << endl << endl;
	Customer c[5];
	for(int i=0 ; i<5 ; i++)
	{
		cout << endl << "Customer : " << i+1 ;
		c[i].set();
	}
	for(int i=0 ; i<5 ; i++)
	{
		cout << endl << endl << "Customer [" << i+1 << "] " << "details";
		c[i].get();
	}
	return 0;
}