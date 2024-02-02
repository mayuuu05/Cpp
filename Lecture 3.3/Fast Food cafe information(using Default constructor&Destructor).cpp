//Q.2 Write a Program to get and display N numbers of Fast Food cafe information using encapsulation
// and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity
#include<iostream>
using namespace std;
class Fastfood_cafe
{
	int cafe_id;
	int cafe_rating;
	int cafe_establish_year;
	int cafe_staff_quantity;
	
	string cafe_name;
	string cafe_type;
	string cafe_location;
	
	public :
	Fastfood_cafe()
	{
		
		cout << endl << "----------Fast Food cafe information----------" << endl ;
			cout << endl <<"Enter cafe id : ";
		cin >> cafe_id;
		
		cin.ignore();
		cout << "Enter cafe name : ";
	    getline(cin,cafe_name);
	    
		cout << "Enter cafe type  (like a rooftop or normal) : " ;
		getline(cin,cafe_type);
		
		cout << "Enter cafe rating (like 1 Star, 2 Start, ..., 5 Star) : ";
		cin >> cafe_rating;
		
		cin.ignore();
		cout << "Enter cafe location (city name) : ";
	    getline(cin,cafe_location);
	    
		cout << "Enter cafe establish year : ";
		cin >> cafe_establish_year;
		
		cout << "Enter cafe staff quantity : ";
		cin >> cafe_staff_quantity;
	}	
	
	~Fastfood_cafe()
	{
		cout << endl << "Cafe details are given below => "<< endl << endl;  
		cout << "Cafe id              : " << cafe_id << endl ;
		cout << "Cafe name            : " << cafe_name << endl ;
		cout << "Cafe type            : " << cafe_type << endl; 
		cout << "Cafe rating          : " << cafe_rating << " star" << endl ;
		cout << "Cafe location        : " << cafe_location << endl; 
		cout << "Cafe establish year  : " << cafe_establish_year << " year" << endl ;
		cout << "Cafe staff quantity  : " << cafe_staff_quantity << endl ;
	}
	
};
int main()
{
	int n;
	cout << "Enter numbers : " ;
	cin >> n;
	
	Fastfood_cafe c1[n];
	
	return 0;
}
