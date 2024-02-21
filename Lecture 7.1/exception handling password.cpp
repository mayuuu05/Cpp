//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char password[20];
	int i,length,Uppercheck=0;
	
	cout << "Enter Password : ";
	cin >> password;
	
	length=strlen(password);
	
	for(i=0; i<=length; i++)
	{
		if(password[i] >= 'A' && password[i] <= 'Z')
		{
			Uppercheck = 1;
		}
	}
	try
	{
		if(Uppercheck == 0)
		{
			throw password;
		}
		else
		{
			cout << "Your PassWord is Valid!!!";
		}
	}
	catch(...)
	{
		cout << "Invalid password  !!!" << endl;
	}
	
	return 0;
}
