//7. Define an abstract class `Animal` with virtual functions `sound()` and `move()`. 
//Implement concrete/normal classes `Dog` and `Bird` that inherit from `Animal`.
// Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Dog` and `Bird`.
//  Call the `sound()` and `move()` functions for each object.

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    
    virtual void sound() = 0;
    virtual void move() = 0;
};


class Dog : public Animal 
{
public:
    void sound() 
	{
        cout << "Dog barks" << endl;
    }

    void move() 
	{
        cout << "Dog walks" << endl;
    }
};


class Bird : public Animal 
{
public:
    void sound() 
	{
        cout << "Bird chirps" << endl;
    }

    void move() 
	{
       cout << "Bird flies" << endl;
    }
};

int main()
{
   
    Animal* a[2];

    Dog d1;
    Bird b1;
    
    a[0] = &d1;
    a[1] = &b1;

    for (int i = 0; i < 2; ++i)
	{
        a[i]->sound();
        a[i]->move();
    }

    return 0;
}
