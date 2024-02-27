//5. Overload the `+` operator for the `BankAccount` class to display account details.
// Create two `BankAccount` objects and demonstrate the use of the overloaded `+`
// operator to display total amount of both accounts.

#include<iostream>
using namespace std;
class BankAccount
{
	int amount;
	public:
	void set()
	{
		cout << "Enter the amount  :";
		cin >> amount;	
	
	}
	void get()
	{
		cout << endl <<"Total amount of both accounts : " << amount;	
	}
	BankAccount operator+(BankAccount&b2)
	{
		BankAccount addMoney;
		addMoney.amount =  amount + b2.amount;
		return addMoney;
	}
};
int main()
{
	BankAccount b1,b2,b3;
	cout << endl << "\tAccount 1 => " << endl ;
	b1.set();
	cout << endl << "\tAccount 2 => " << endl ;
	b2.set();
	b3=b1 + b2;
	b3.get();
	return 0;
}
