#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	//declare input items
	double item1 = 0.0;
	double item2 = 0.0;
	double temp = 0.0;
	double total = 0.0;
	
	//enter items
	cout << "Enter the full price of Item 1: $";
	cin >> item1;
	cout << "Item 2: $";
	cin >> item2;
	
	//calculate and display total
	if (item2 > item1)
	{
		 temp = item1;
		 item1 = item2;
		 item2 = temp;
	}//end if
	total = item1 + (item2 / 2.0);
	cout << fixed << setprecision(2);
	cout << "Total: $" << total << endl;
}