#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char *argv[]) {
	
	//declare array
	double temp[7][2] = {0.0};
	double average = 0.0;
	double averageA = 0.0;
	double averageB = 0.0;
	
	for (int col = 0; col < 2; col += 1)
	{
		for (int row = 0; row < 7; row += 1)
		{
			if (col == 0)
				cout << "Enter the highest temperature for day ";
			else
				cout << "Enter the lowest temperature for day  ";
			//end if
			cout << row + 1 << ": ";
			cin >> temp[row][col];
			average += temp[row][col];
		}//end for
		cout << endl;
		if (col == 0)
			averageA = average / 7.0;
		else
			averageB = average / 7.0;
		//end if
		average = 0;
	}//end for
	cout << fixed << setprecision(1);
	cout << endl << "Average High: " << averageA << endl;
	cout << "Average low:  " << averageB << endl;
}