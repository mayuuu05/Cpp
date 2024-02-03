//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of 
//objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>
using namespace std;

class Hotel
{
	int hotel_id,hotel_staff_quantity,hotel_room_quantity;
	string hotel_type,hotel_rating,hotel_location;
	
	static int hotel_establish_year;
	static string hotel_name;
	public :
		
	void input()
	{
		cout << endl;
       
		cout << "Enter hotel ID    : ";
		cin >> hotel_id;
		
		cin.ignore();	
		cout << "Enter hotel type (like hotel or motel)   : ";
		getline(cin,hotel_type);

		cout << "Enter hotel rating (like 1 Star, 2 Start, ..., 7 Star)  : ";
		getline(cin,hotel_rating);

		cout << "Enter hotel location (city name) :  ";
		getline(cin,hotel_location);
		
		cout << "Enter hotel staff quantity       : ";
		cin >> hotel_staff_quantity;
		
		cout << "Enter hotel room quantity        : ";
		cin >> hotel_room_quantity;	
		
	}
	void output()
	{
		
		cout << endl;
		cout << "Hotel ID               : " << hotel_id << endl;
	    cout << "Hotel Name             : " << hotel_name << endl;                     
		cout << "Hotel type             : " << hotel_type << endl;
		cout << "Hotel rating           : " << hotel_rating << "star" << endl;
		cout << "Hotel location         : " << hotel_location << endl;
		cout << "Hotel establish year   : " << hotel_establish_year << " Years" << endl;
		cout << "Hotel staff quantity   : " << hotel_staff_quantity << endl;
		cout << "Hotel room quantity    : " << hotel_room_quantity << endl;
	}
	
};
string  Hotel :: hotel_name = "Luxury";
int Hotel :: hotel_establish_year =5;
int main()
{
	cout << "----------Hotel Record System----------" << endl << endl;
	int n;
	cout << "Enter numbers : " ;
	cin >> n;
	Hotel h[n];
	for(int i=0 ; i<n ; i++)
	{
		h[i].input();
	}
	cout << endl << endl << "Hotel details" << endl;
	for(int i=0 ; i<n ; i++)
	{

		h[i].output();	
	}
	return 0;
}
