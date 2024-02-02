//Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds
//imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)

#include<iostream>
using namespace std;
class Diamond_company
{
	int comp_id;
	int comp_staff_quantity;
	int comp_revenue;
	int comp_import_raw_diamonds;
	int comp_export_diamonds;
	string comp_name;
	static string comp_ceo;
	
	public :
		
		Diamond_company(int comp_id,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds)
		{
			
			cout << endl << "---------------------MYPURO--------------------" << endl << endl;
			cout << "\t       [ Company Details ]" << endl << endl;
			cout << "\tCEO name            =>  " << comp_ceo << endl;
			cout << "\tCompany ID          =>  " << comp_id << endl;
			cout << "\tStaff quantity      =>  " << comp_staff_quantity << endl;
			cout << "\tCompany revenue     =>  " << comp_revenue << " per year"<< endl;
			cout << "\tImport raw diamonds =>  " << comp_import_raw_diamonds << "$ Diamond per year" << endl;
			cout << "\tExport diamonds     =>  " << comp_export_diamonds << "$ Diamond per year" << endl;
		}
};

//string Diamond_company :: comp_name = "MYPURO";
string Diamond_company :: comp_ceo = "Mayuri purohit";//static value

int main()
{
	Diamond_company d1(2311,111,100000,11,11);	//value pass with an argument

	return 0;
}
