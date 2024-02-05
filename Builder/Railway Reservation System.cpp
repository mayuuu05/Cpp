//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- `
//(C) Minimum 3 Input Train Records

#include<iostream>
using namespace std;

class Railway_Reservation
{
	int Train_number;
	int Train_time;
	string Train_name;
	static string source;
	string Destination;
	
	public :
		
	void user_input()
	{
		cout << endl <<"Enter Train number : ";
		cin >> Train_number;
		
		cout <<"Enter Train time : ";
		cin >> Train_time;
		
		cin.ignore();
		cout << "Enter Train name : ";
	        getline(cin,Train_name);
	    
		cout << "Enter Destination : ";
	        getline(cin,Destination);
	}
	void Display_Records()
	{
		cout << endl << "Railway Reservation details are given below => "<< endl << endl;  
		cout << "Train number : " << Train_number << endl ;
		cout << "Train time   : " << Train_time << ":00" <<endl ;
		cout << "Train name   : " << Train_name << endl ;
		cout << "Source       : " << source << endl ;
		cout << "Destination  : " << Destination << endl<< endl ;
	}
	void Search()
	{
		cout << endl <<"Enter Train number : ";
		cin >> Train_number;
		cout << "Train number : " << Train_number << endl ;
		cout << "Train time   : " << Train_time << ":00" <<endl ;
		cout << "Train name   : " << Train_name << endl ;
		cout << "Source       : " << source << endl ;
		cout << "Destination  : " << Destination << endl<< endl ;
	}
	void All_record()
	{
		char choice;
		cout << endl << "Welcome to the Indian railway service !!!!" << endl ;
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

string Railway_Reservation :: source = "Surat";

int main()
{
	 
	cout << endl << "----------------- Railway Reservation System----------------- "<< endl << endl;  

	int n;
	cout << "Enter number : ";
	cin >> n;
	
	Railway_Reservation t1[n];
	
	for(int i=0; i<n ; i++)
	{
		t1[i].user_input();
		t1[i].All_record();
	}
	return 0;
}
