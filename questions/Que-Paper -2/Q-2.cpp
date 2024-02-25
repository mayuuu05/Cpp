//2. Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`.
// Encapsulate these attributes using appropriate access 
//specifiers. Implement public member functions to credit, debit, and display the balance. Demonstrate encapsulation by 
//interacting with the class through its member functions.

#include<iostream>
using namespace std;

class BankAccount
{
	long long accountNumber1=123456789,accountNumber2;
	int balance = 10000;
	int n;
	string ownerName = "Mayuri purohit";
	
	public :
		void verification()
		{
//			cout << "Account_Number = " << accountNumber1 << endl;
//				
			cout << endl << "Enter the BankAccount Number : ";
			cin >> accountNumber2;
			
			if(accountNumber1 == accountNumber2)
			{
				cout << "Owner Name : " << ownerName << endl;
				cout << "Balance = " << balance << endl;
				while(n!=4)
				{
					cout << endl << "For Credit Money Press  -> 1";
					cout << endl << "For Debit Money Press   -> 2";
					cout << endl << "For display the balance -> 3";
					cout << endl << "For Exit                -> 4";
					cout << endl << "Enter your Choise : ";
					cin >> n;
					
					switch(n)
					{
						case 1:
							credit();
							break;
							
						case 2:
							debit();
							break;
							
						case 3:
							display();
							break;
							
						case 4:
							cout << endl << "Trasiction is End... Thank You";
							break;
							
						default :
							cout << "Enter Valid Input Between (1 to 4) !!" << endl;
					}
				
				}
				
			}
			else
			{
				cout << "Account Number is Wrong !!" << endl ;
			}
			
		}
	private :
		void credit()
		{
			int addbalance;
			
			cout << endl <<"Enter the balance for credit : ";
			cin >> addbalance;
			
			if(addbalance > 0)
			{
				balance = balance + addbalance;
				display();
			}
			else
			{
				cout << "Balance Should be Positive!!" << endl;
			}
			
		}
		void debit()
		{
			int debbalance;
			
			cout << endl << "Enter the balance for debit : ";
			cin >> debbalance;
			
			if(debbalance > 0)
			{
				balance = balance - debbalance;
				display();
			}
			else
			{
				cout << "Balance Should be Positive!!" << endl;
			}
		}
		void display()
		{
			cout << endl << "Your Total Balance is : " << balance;
			cout << endl << "--------------------------------" << endl;
		}
};

int main()
{
	BankAccount b1;
	b1.verification();

	
	return 0;
}