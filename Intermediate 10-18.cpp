#include <iostream>
using namespace std;

void calcFedTaxes(double salary, double fwtRate, double ficaRate, double &fwtTax, double &ficaTax);
void calcNetPay(double salary, double fwt, double fica, double &netPay);
void displayInfo(double fwt, double fica, double net);

int main(int argc, char *argv[]) {
	//declare variables
	double salary = 0.0;
	const double FWT_RATE = .2;
	const double FICA_RATE = .08;
	double fwt = 0.0;
	double fica = 0.0;
	double net = 0.0;
	
	cout << "Enter salary: $";
	cin >> salary;
	while (salary > 0)
	{
		calcFedTaxes(salary, FWT_RATE, FICA_RATE, fwt, fica);
		calcNetPay(salary, fwt, fica, net);
		displayInfo(fwt, fica, net);
		cout << "Enter salary: $";
		cin >> salary;
	}//end while
}//end main function

//*****function definitions*****
void calcFedTaxes(double salary, double fwtRate, double ficaRate, double &fwtTax, double &ficaTax)
{
	fwtTax = salary * fwtRate;
	ficaTax = salary * ficaRate;
}//end calcFedTaxes

void calcNetPay(double salary, double fwt, double fica, double &netPay)
{
	netPay = salary - fwt - fica;
}

void displayInfo(double fwt, double fica, double net)
{
	cout << "-------------------" << endl;
	cout << "FWT tax due:  $" << fwt << endl;
	cout << "FICA tax due: $" << fica << endl;
	cout << "Net Pay:      $" << net;
	cout << endl << endl; 
}