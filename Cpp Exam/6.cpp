#include<iostream>
#include<fstream>
using namespace std;

class FileManager
{
	string data;
	public:
		void readData()
		{
			ofstream fout;
			fout.open("demo.txt");
			cout << "Enter data : " ;
			getline(cin,data);
			fout << "fout using in data !" << endl;
			
			ifstream fin;
			fin.open("demo1.txt");
			
			try
			{
				if(fin)
				{
					while(getline(fin,data))
					{
						cout << data << endl;
					}
					
				}
				else
				{
					throw runtime_error("File not founded!");
				}
			}
			catch(runtime_error error)
			{
				cout << error.what() << endl;
			}
			catch(...)
			{
				cout << "Default exaption!!"<< endl;
			}
		}
};

int main()
{
	FileManager f;
	f.readData();
	return 0;
}