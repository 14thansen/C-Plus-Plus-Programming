#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	ifstream inPay;
	inPay.open("Intermediate22.txt");
	double salary = 0.0;
	double total = 0.0;
	
	cout << fixed << setprecision(2);
	
	if (inPay.is_open())
	{
		while (!inPay.eof())
		{
			inPay >> salary;
			total += salary;
			salary = 0;
		}//end while
		cout << "$" << total << endl;
	}
	else 
		cout << "File could not be opened.";
	//end if
}//end of main function