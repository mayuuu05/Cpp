#include<iostream>
using namespace std;

class BankAccount
{
	private:
		long long accountNumber = 231126123456;
		int balance = 10000;
		string ownerName = "Mayuri purohit";
		int addbalance;
		int debbalance;
		public :
			void credit()
			{
				int addMoney;
				cout << "Enter amount for credit : ";
				cin >> addMoney;
				addbalance =  balance + addMoney ;
				
			}
			void debit()
			{
				int debMoney;
				cout << "Enter amount for debit : ";
				cin >> debMoney;
				debbalance = balance - debMoney;
			}
			void display()
			{
				cout  <<  endl << "--------Bank Details--------" << endl << endl ;
				cout  << "Account Number : " <<  accountNumber << endl;
				cout  << "Bank Balance   : " <<  balance << endl;
				cout  << "Owner Name     : " <<  ownerName << endl;
				cout  << "Credit Money   : " <<  addbalance << endl;
				cout  << "Debit Money    : " <<  debbalance << endl;
				
			}
		
};
int main()
{
	BankAccount B1;
	B1.credit();
	B1.debit();
	B1.display();
	return 0;
}