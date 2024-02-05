//
//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number

#include<iostream>
using namespace std;

class Supermarket
{
	int Item_Number; 
	int Quantity;
	int Price;
	float Discount;
	string Item_Name;
	static string name;
	
	
	public :
		
	void user_input()
	{
		cout << endl <<"Enter Item number : ";
		cin >> Item_Number;
		
		cin.ignore();
		cout << "Enter Item name : ";
	    getline(cin,Item_Name);
	    
	    cout <<"Enter Quantity : ";
		cin >> Quantity;
		
		cout <<"Enter Price : ";
		cin >> Price;
	    
	    cout <<"Enter Discount : ";
		cin >> Discount;
	
	}
	
	void Display_Records()
	{
		cout << endl << "Supermarket Billing details are given below => "<< endl << endl;
		cout << "Supermarket Name  : " << name <<endl ;
		cout << "Item number       : " << Item_Number << endl ;
		cout << "Item Name    	  : " << Item_Name <<endl ;
		cout << "Quantity          : " << Quantity << endl ;
		cout << "Price             : " << Price << endl ;
		cout << "Discount          : " << Discount << "%" << endl ;	
	}
	
	
	void Search()
	{
        cout << endl <<"Enter Item number : ";
		cin >> Item_Number;
		cout << "Supermarket Name  : " << name <<endl ;
		cout << "Item number       : " << Item_Number << endl ;
		cout << "Item Name    	  : " << Item_Name <<endl ;
		cout << "Quantity          : " << Quantity << endl ;
		cout << "Price             : " << Price << endl ;
		cout << "Discount          : " << Discount << "%" << endl ;
    }

    
	void All_record()
	{
		char choice;
		cout << endl << "Welcome to the MYPURO Supermarket!!!!" << endl ;
		cout << "How can i help you ?" << endl;
		cout <<"[A] Continue Adding Train record" << endl;
		cout << "[B] All Records are Display " << endl;
		cout << "[C] All record display By Searching Train Number" << endl;
		cout << "[D] For Exit" << endl;
		cout << "Enter your choice (Like A,B,C,D) : " ; 
		cin >> choice;
		
		if (choice == 'A')
		{
			user_input();
		}
	    else if (choice == 'B')
		{
			Display_Records();
		}
		else if (choice == 'C')
		{
			Search();
		}
		else if (choice == 'D')
		{
			cout << "Thank you !";
		}
		else
		{
			cout << "Enter valid input (like A,B,C,D) !!" << endl;
		}
	
	}
}; 
string Supermarket :: name = "[[[MYPURO Supermarket]]]";
int main()
{
	 
	cout << endl << "----------------- Supermarket Billing System---------------- "<< endl << endl;  
	   
   // Verify user id and password

    string User_ID, Password;
    string userId = "Mayuuu_05";
    string password = "#11:11";
    start :

    cout << "Enter User ID: ";
    cin >> User_ID;
    
	cout << "Enter password : ";
	cin >> Password;

    if (User_ID != userId || Password != password) 
	{
        cout << "Invalid User ID or Password!" << endl; 
        goto start;
    }

	int n;
	cout << endl << "Enter number : ";
	cin >> n;
	Supermarket s1[n];
	
	for(int i=0; i<n ; i++)
	{
		s1[i].user_input();
		s1[i].All_record();
	}
	return 0;
}