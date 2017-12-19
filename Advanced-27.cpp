//Advanced27.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare array
	int scores[20] = {90, 54, 23, 75, 67, 89, 99, 100, 34, 99, 97, 76, 73, 72, 56, 73, 72, 20, 86, 99};
	int num = 0;
	int grade = 0;
	
	cout << "Enter the desired test score (1-100): ";
	cin >> grade;
	
	while (grade > 0)
	{
		for (int sub = 0; sub < 20; sub += 1)
		{
			if (scores[sub] == grade)
				num += 1;
				//end if
		}//end for
		if (num == 1)
			cout << "There is 1 student that recived this test score" << endl << endl;
		else	
			cout << "There are " << num << " students that recieved this score." << endl << endl;
		cout << "Enter the desired test score (1-100): ";
		cin >> grade;
		num = 0;
	}//end while
	
}	//end of main function
