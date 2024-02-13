//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
#include<iostream>
using namespace std;

class RBI
{
	protected :
		int rate;
		public :
		void set()
		{
			cout << "Enter rate of interest : ";
			cin >> rate;
		}
		
};
class SBI : public RBI
{
	public :
		void getROI()
		{
			set();
			cout << "Interest of SBI bank : " << rate << endl << endl;
			
		}
};
class BOB : public RBI
{
	public :
		void getROI()
		{
			set();
			cout << "Interest of BOB bank : "<< rate << endl << endl;
			
		}
};
class ICICI : public RBI
{
	public :
		void getROI()
		{
			set();
			cout << "Interest of ICICI bank : "<< rate << endl << endl;
			
		}
};

int main()
{
	SBI s1;
	s1.getROI();
	BOB b1;
	b1.getROI();
	ICICI i1;
	i1.getROI();
	return 0;
}