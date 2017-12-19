//TryThis16.cpp - displays a pattern of asterisks
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int outer  = 9;
	int nested = 1;
	do //begin loop
	{
		do //begin loop
		{
			cout << '*';
			nested += 1;  //update counter
		}	while (nested <= outer);  //end do while
		outer -= 1;	//update counter
		nested = 1;	//reset counter
		cout << endl;
	} while (outer > 0);  //end do while
	
}	//end of main function
