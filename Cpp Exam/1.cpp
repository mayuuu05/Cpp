#include<iostream>
using namespace std;

class Laptop
{
	private :
		string name ;
		int price;
		string processor;
		
		public:
			Laptop(string name,int price,string processor)
			{
				this->name = name;
				this->price = price;
				this->processor = processor; 
				
			}
			void get()
			{
				cout << endl << "Name is      : " << name << endl;
				cout << "Price is     : " << price << endl;
				cout << "Processor is : " << processor << endl;
			}
};
int main()
{
  	string name ;
	int price;
	string processor;
		
		
		cout << endl<< "Laptop details => "<< endl <<endl;
	
		cout  << "Enter name : ";
  		getline(cin,name);
  		
  		cout << "Enter price : ";
  		cin >> price;
  		
  		cout << "Enter processor : ";
  		cin.ignore();
  		getline(cin,processor);
  		
  		Laptop l(name,price,processor);
  		
  		l.get();
  		
	return 0;
}