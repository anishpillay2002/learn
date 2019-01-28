
// To run these programs the first time, go to project, Right click select 'Properties' and select 'Run/debug settings'. Select 'New' or 'Edit' existing configuration and select the .exe file for the program in the Debug or release folder. The .exe file appears only after building the code once.

#include <iostream>
#include <fstream>
using namespace std;


int main()
{

	ifstream infile;
	string infilename = "text.txt";

	infile.open(infilename, ios::in);

	if(infile.is_open()){

		string lineToRead;
		while(infile){  //Operator Overloading
			getline(infile,lineToRead);
			cout<<"String in File: "<<lineToRead<<endl;
		}
		infile.close();
	}
	else{
		cout<<"Cannot open file"<<infilename<<endl;

	}
	return 0;

}
