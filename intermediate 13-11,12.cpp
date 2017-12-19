#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	//#11
	//declare variables
	string address = "";
	int subNum = 0;
	
	cout << "Enter street address: ";
	getline(cin, address);
	
	subNum = address.find("Grove Street", 4);
	if (subNum < 0)
		subNum = address.find("grove street", 4);
	//end if
	
	if (subNum > 0)
		cout << "Yay! you live on Grove Street!" << endl << endl;
	else 
		cout << "Sorry, you don't live on Grove Street." << endl << endl;
	//end if
	
	cout << "(press enter to continue)" << endl;
	cin.ignore(100, '\n');
	
	//#12
	//declare variables
	string amount = "";
	int location = 0;
	
	cout << "Enter something, literally anything you want!: ";
	getline(cin, amount);
	
	location = amount.find(".", 0);
	
	if (location >= 0)
		cout << "Good job! There is a period in your sentance!" << endl;
	else 
		cout << "Too bad, you should have put a period in your sentance. You're missing out." << endl;
	//end if
}