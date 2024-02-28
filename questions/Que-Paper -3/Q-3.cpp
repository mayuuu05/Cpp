//3. Define a base class `Animal` with private attributes `name` and `sound`.
// Implement public methods for setting and getting these attributes. Derive two classes, 
// `Dog` and `Cat`, from the `Animal` class. Implement methods to make each animal produce its 
//// aspecific sound. Demonstrate abstraction by calling the sound methods for both `Dog` and `Cat`.
//

#include<iostream>
using namespace std;

class Animal
{
	
	string name;
	public:
	virtual void sound() =0;
	
	void setting()
	{
		cout << "Enter name : ";
		cin >> name;
	}
	void getting()
	{
		cout << "Name  :" << name << endl;
	}
};
class Dog : public Animal
{
	public:
	void sound()
	{
		cout << endl <<"\t[Dog]" << endl << endl;
		setting();
		getting();
		cout <<"Dog sound barks !" << endl;
		
	}
};
class Cat : public Animal
{
	public:
	void sound()
	{
		cout << endl << "\t[Cat]" << endl << endl;
		setting();
		getting();
		cout << "Cat sound meows!"<<endl;
	}
};

int main()
{
	
	Dog d1;
	d1.sound();
	
	Cat c1;
	c1.sound();
	return 0;
}
