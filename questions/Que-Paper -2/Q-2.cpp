//2. Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`.
// Encapsulate these attributes using appropriate access 
//specifiers. Implement public member functions to credit, debit, and display the balance. Demonstrate encapsulation by 
//interacting with the class through its member functions.

#include<iostream>
using namespace std;

class BankAccount
{
	long long accountNumber=231155226612;
	int balance=1000;
	string ownerName="Mayuri purohit";
	int addbalance ;
	int debbalance ;
	public:
	void credit()
	{
		
		int addMoney;
		cout << "Enter addMoney : ";
		cin >> addMoney;
		
		 addbalance = balance + addMoney;
	}
	void debit()
	{
		
		int Money;
		cout << "Enter debMoney : ";
		cin >> Money;
		
		debbalance = balance - Money;
	}
	void display()
	{
		cout << "Owner Name    : " << ownerName << endl;
		cout << "Accout number : " << accountNumber << endl;
		cout << "Balance       : " << balance << endl;
		cout << "Credit money  : " << addbalance << endl;
		cout << "debit money  : " << debbalance << endl;
		
	}
};

int main()
{

	BankAccount b1;
	b1.credit();
	b1.debit();
	b1.display();
	return 0;
}
