//Introductory21.cpp - displays the contents of the array
//Created/revised by Thayne Hansen on 8/21/2017

#include <iostream>
using namespace std;

int main()
{
	int orders[10] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};
	int sub = 0;

	while (sub < 10)
	{
		cout << orders[sub] << endl;
		sub += 1;
	}//end while
}	//end of main function
