#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	//declare variables
	int fibA = 1;
	int fibB = 1;
	int pass = 0;
	
	//version 1, with while
	while (pass < 10)
	{
		cout << fibA << endl;
		cout << fibB << endl;
		fibA = fibA + fibB;
		fibB += fibA;
		pass += 2;
	}//end while
	cout << endl;
	
	//reset variables
	fibA = 1;
	fibB = 1;
	
	//version 2, with for
	for (int count = 0; count < 10; count += 2)
	{
		cout << fibA << endl;
		cout << fibB << endl;
		fibA = fibA + fibB;
		fibB += fibA;
	} //end for
}