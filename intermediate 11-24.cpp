#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	//declare arrays
	int months[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sub = 0;
	int monthNum = 0;
	
	//enter month and display days
	cout << "enter the number of the month: ";
	cin >> monthNum;
	while (monthNum > 0)
	{
		while (sub < 12 && months[sub] != monthNum)
			sub += 1;
		//end while
		if (sub < 12)
			cout << "There are " << days[sub] << " days in month " << months[sub] << endl << endl;
		else 
			cout << "invalid number of month, there are only 12 months in a year!" << endl << endl;
		//end if
		cout << "enter the number of the month: ";
		cin >> monthNum;
		sub = 0;
	}//end while
}