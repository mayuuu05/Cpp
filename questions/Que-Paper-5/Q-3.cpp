//3. Define a base class `Shape` with private attributes `color` and `area`.
// Implement public methods for setting and getting these attributes.
//  Derive two classes, `Circle` and `Rectangle`, from the `Shape` class.
//   Implement methods to calculate the area specific to each shape.
//    Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.

#include<iostream>
using namespace std;

class Shape
{
	private :
		string color;
		int area;
		
		public :
			void setting()
			{
				cin.ignore();
				cout << "Enter color : ";
				getline(cin,color);
			}
			
			void getting()
			{
				
			}
		
};
class Circle : public Shape
{
	
};
class Rectangle : public Shape
{
	
};
int main()
{
	return 0;
}