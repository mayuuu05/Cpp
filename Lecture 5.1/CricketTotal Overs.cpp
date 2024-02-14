//Q.2 Write a Program to implement method overriding by following the below-mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class ODIMatch
//- Override the getTotalOvers() method in both classes.

#include<iostream>
using namespace std;

class Cricket
{
	protected :
		int over;
};

class T20Match : public Cricket
{
	public :	
	void getTotal_Overs(int over)
	{
		this -> over = over;
		cout << "\tT20Match : " << over <<" Overs" <<endl;
	}
};

class ODIMatch : public Cricket
{
	public :
	
	void getTotal_Overs(int over)
	{
		this -> over = over;
		cout<< "\tODIMatch : " << over <<" Overs" << endl;
	}
};

int main()
{
	cout << endl <<"------------Cricket match overs detail------------"<< endl << endl; 
	T20Match t;
	t.getTotal_Overs(20);
	
	ODIMatch m;
	m.getTotal_Overs(50);

	return 0;
}
