#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	//declare variables
	double marySales = 0.0;
	double jimSales = 0.0;
	double highest = 0.0;
	double lowest = 0.0;
	string high = "";
	string low = "";
	
	//enter amounts
	cout << "Enter Mary's sales: $";
	cin >> marySales;
	cout << "Enter Jim's Sales: $";
	cin >> jimSales;
	
	//test which is larger
	if (jimSales > marySales)
	{
		highest = jimSales;
		lowest = marySales;
		high = "Jim:  $";
		low = "Mary: $";
	}
	else 
	{
		highest = marySales;
		lowest = jimSales;
		high = "Mary: $";
		low = " Jim: $";
	}//end if
	
	//display results
	cout << endl;
	cout << "Highest: " << high << highest << endl;
	cout << "Lowest:  " << low << lowest << endl;
}