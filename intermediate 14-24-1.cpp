#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	//declare strings and variables
	string empNum = "";
	string code = "";
	string salary = "";
	string sal = "";
	
	//create file object and open the file
	ifstream inPay;
	inPay.open("intermediate24.txt");
		
	//determine whether the file was open
	do
	{
		if (inPay.is_open())
		{
			//get the desired employee code #
			cout << "Employee number (-1 to stop): ";
			getline(cin, code);
			sal = "0";
			
			//read an employee #
			getline(inPay, empNum, '#');
			getline(inPay, salary);
				
			while (!inPay.eof())
			{
				//display salary
				//cout << empNum << ", " << salary << endl;
				if (empNum == code)
				{
					sal = salary;
					cout << "Employee " << empNum << " Salary: $" << sal << endl;
				}
				//read another salary
				getline(inPay, empNum, '#');
				getline(inPay, salary);
			}//end while
			if (sal == "0" && code != "-1")
				cout << "Employee code does not exist." << endl;
			//close the file
			inPay.close();
		}
		else 
			cout << "File could not be opened." << endl;
		//end if
		inPay.open("intermediate24.txt");	
	} while (code != "-1");

}//end of main function