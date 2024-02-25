//3. Define a base class `Animal` with private attributes `name` and `sound`.
// Implement public methods for setting and getting these attributes. Derive two classes, 
// `Dog` and `Cat`, from the `Animal` class. Implement methods to make each animal produce its 
//// aspecific sound. Demonstrate abstraction by calling the sound methods for both `Dog` and `Cat`.
//

#include<stdio.h>
using namespace std;

class Animal
{
	string name,sound;
	public:
	void setting()
	{
		
	}
	void getting()
	{
		
	}
};
class Dog : public Animal
{
	public:
	void sound()
	{
		
	}
};
class Cat : public Animal
{
	public:
	void sound()
	{
		
	}
};

int main()
{
	return 0;
}
