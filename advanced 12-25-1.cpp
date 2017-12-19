#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	//declare arrays and variables
	int sales[10][3] = {{2400, 3500, 2000},
						{1500, 7000, 1000},
						{600,  450,  2100},
						{790,  240,  500 },
						{1000, 1000, 1000},
						{6300, 7000, 8000},
						{1300, 450,  700 },
						{2700, 5500, 6000},
						{4700, 4800, 4900},
						{1200, 1300, 400 }};
	double totals[10][2] = {0};
	double bonus = 0.0;
	double totalSales = 0.0;
	double totalBonus = 0.0;
	cout << "What is the bonus (in percent form): ";
	cin >> bonus;
	bonus = bonus / 100;
	
	
	//calculate bonuses and totals
	for (int row = 0; row < 10; row += 1)
	{//             "X----------------$XXXXxx----------$XXXxx
		for (int col = 0; col < 3; col += 1)
		{
			totals[row][0] += sales[row][col];
		}//end for
		totals[row][1] = totals[row][0] * bonus;
	}
	for (int month = 0; month < 3; month += 1)
	{
		for (int row = 0; row < 10; row += 1)
		{
			totalSales += sales[row][month];
		}
	}
	totalBonus = totalSales * bonus;
	
	//display information
	cout << endl << "Salesperson:     Total Sales:     Bonus:" << endl;
	for (int row = 0; row < 10; row += 1)
	{
		cout << fixed << setprecision(0);
		cout << row + 1 << "                $";
		cout << fixed << setprecision(2);
		cout << totals[row][0] << "         $" << totals[row][1] << endl;
	}//end for
	cout << "--------------------------------------------" << endl;
	cout <<         "Total:           $" << totalSales << "        $" << totalBonus;
}