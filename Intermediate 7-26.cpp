#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	//declare input and output items
	int regionSales = 0;
	int numRegions = 1;
	int totalSales = 0;
	
	//calculate the total sales
	for (; numRegions < 4; numRegions += 1) 
	{
		cout << "Enter region " << numRegions << "'s quarterly sales: ";
		cin >> regionSales;
		totalSales += regionSales;
	}//end for
	
	//display total sales
	cout << "Total quarterly sales: $" << totalSales << endl;
}