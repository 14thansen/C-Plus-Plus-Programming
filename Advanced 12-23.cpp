//Advanced23.cpp - Increases the prices stored in
//the first column in a two-dimensional array, and
//then stores the updated prices in the second column.
//Displays the contents of the array, row by row.
//Created/revised by Thayne Hansen on 08/22

#include <iostream>
using namespace std;

int main()
{
	int prices[5][2] = {{10, 0},
						{13, 0}, 
						{36, 0}, 
						{74, 0}, 
						{22, 0}};
	int value = 0;
	cout << "Dollar increase amount: $";
	cin >> value;
	
	for (int row = 0; row < 5; row += 1)
		prices[row][1] = prices[row][0] + value;
	//end for
	cout << endl << "Original Price:     New Price:" << endl;
	cout << "---------------     ----------" << endl;
	for (int row = 0; row < 5; row += 1)
	{
		cout << "$" << prices[row][0] << "                 $" << prices[row][1] << endl;
	}//end for
}	//end of main function
