//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year

#include<iostream>
using namespace std;

class Car
{
	public :
	int id,release_year,model;
	char company_name[50],color[50];
	
	void input()
	{
		cout << "Enter id           : ";
		cin >> id ;
		cout << "Enter company_name : ";
		cin >> company_name ;
		cout << "Enter color        : ";
		cin >> color ;
		cout << "Enter model        : ";
		cin >> model ;
		cout << "Enter release_year : ";
		cin >> release_year ;
		
	}
	
	void output()
	{
		cout << "ID           :" << id << endl;
		cout << "Company name :" <<company_name << endl;
		cout << "Color        :" << color << endl;
		cout << "Model        :" << model << endl;
		cout << "Release year :" << release_year << endl;
	}
};

int main()
{
	cout << endl << "-----------------Car Record System------------------" << endl << endl;
    Car c[4];
	int i;
	for(i=0 ; i<4 ; i++)
	{
		cout << endl;
		c[i].input();
	}
	cout << endl << endl;
	for(i=0 ; i<4 ; i++)
	{
		cout << endl;
		c[i].output();
	}
	return 0;
}