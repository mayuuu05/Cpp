//Q-1 Create a class `Laptop` with private attributes `name`, `price`, `processor`,
// and a parameterized constructor. Demonstrate the instantiation of objects using this constructor

#include<iostream>
using namespace std;


class Laptop
{
	private :
	string name,processor;
	int price;
	
	public:
		
	Laptop (string name,string processor,int price)
	{

		this -> name = name;
		this -> processor = processor;
		this -> price = price;
		
		
		cout << endl  << "-----------------Laptop details -----------------" << endl <<endl ;
		
		cout << "Company Name  : " << name << endl ;
		cout << "Processor     : " << processor << endl ;
		cout << "Price         : " << price << endl ;
	}
};
int main()
{
	Laptop l1("Laptop HP 650 G4","Intel(R) Core(TM) i5-8350U CPU @ 1.70GHz   1.90 GHz",30000);

	return 0;
	
}
