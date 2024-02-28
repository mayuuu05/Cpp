//Create a class representing a `Book` with attributes like `title`, `author`, and `publishedYear`.
// Demonstrate the instantiation of objects using array and accessing their attributes.

#include<iostream>
#include<string.h>
using namespace std;

class Book
{
	string title,author;
	int publishedYear;
	
	public :
		void set(int i)
		{
			cout <<endl << "\tBook [" << i  << "]" << endl << endl ;
		
			
			cout << "Enter title of book : ";
			cin.ignore();
			getline(cin,title);
			cout << "Enter author name   : ";
			getline(cin,author);
			cout << "Enter published Year : ";
			cin >> publishedYear;
			
		}
		void get(int i)
		{
		
			cout <<endl << "\tBook [" << i  << "] Detail"  <<endl;
			cout <<endl << "Title            : " << title << endl;
			cout << "Author           : " << author << endl;
			cout << "Published Year   : " << publishedYear << endl;
			cout << "----------------------------------------" <<endl;
		}
	
};
int main()
{
	int n;
	cout << "Enter number :";
	cin >> n;
	cout << "----------------------------------------" <<endl;
	
	Book b1[n];
	int i;
	for(i=0 ;i<n; i++)
	{
		b1[i].set(i+1);
		b1[i].get(i+1);
	} 
	return 0;
}
