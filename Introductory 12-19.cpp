//Introductory19.cpp - calculates and displays the
//average rate stored in a two-dimensional array
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rates[5][3] = {{3.4, 56.7, 8.99}, 
						  {11.23, 4.67, 85.4},
					 	  {34.6, 2.4, 9.0},
						  {6.3, 8.0, 4.1},
						  {4.0, 2.0, 3.5}};
	double average = 0;
	
	for (int col = 0; col < 3; col += 1)
	{
		for (int row = 0; row < 5; row += 1)
		{
			average += rates[row][col];
		}
	}
	average = average / 15;
	cout << fixed << setprecision(2);
	cout << "The average is: " << average;
}	//end of main function
