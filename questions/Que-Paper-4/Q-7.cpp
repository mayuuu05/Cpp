//7. Define an abstract class `Animal` with pure virtual functions `makeSound()` and `move()`. 
//Implement concrete/normal classes `Lion` and `Fish` that inherit from `Animal`.
// Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Lion` and `Fish`.
// Call the `makeSound()` and `move()` functions for each object.


#include<iostream>
using namespace std;

class Animal
{
	public :
		virtual void makeSound()=0;
		virtual void move()=0;
		
};
class Lion : public Animal
{
	public :
	virtual void makeSound()
	{
		cout <<"Lion Roars !!!" << endl ;
	}
	virtual void move()
	{
		cout << "Lion can run !" << endl << endl;
	}
};
class Fish : public Animal
{ 
	public :
	virtual void makeSound()
	{
		cout <<"Fish Sound !!!" << endl ;
	}
	virtual void move()
	{
		cout << "Fish can swim !" << endl << endl;
	}
};
int main()
{
	Animal *a1[2];
	
	Lion l1;
	Fish f1;
	
	a1[0]=&l1;
	a1[1]=&f1;
	
	for(int i=0 ; i<2; i++)
	{
		a1[i]->makeSound();
		a1[i]->move();
	}
	return 0;
}
