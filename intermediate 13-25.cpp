#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	string shipping[5][5] = {{"MS", "ms", "Ms", "mS", "Mail-Standard"},
							 {"MP", "mp", "Mp", "mP", "Mail-Priority"},
							 {"FS", "fs", "Fs", "fS", "FedEx-Standard"},
							 {"FO", "fo", "Fo", "fO", "FedEx_Overnight"},
						 	 {"UP", "up", "Up", "uP", "UPS"}};
	string code = "";
	int location = 0;
	char temp = ' ';
	
	cout << "Enter part number: ";
	cin >> code;
	location = -1;
	while (code != "0")	
	{
		if (code.length() == 4 || code.length() == 5)
		{
			for (int met = 0; met < 5; met += 1)
			{
				if (code.substr(1, 2) == shipping[met][0] || code.substr(1, 2) == shipping[met][1] || code.substr(1, 2) == shipping[met][2] || code.substr(1, 2) == shipping[met][3])
					location = met;
				//end if
			}//end for
			if (location >= 0)
				cout << shipping[location][4] << " Shipping Method" << endl;
			else 
				cout << "Invalid part number" << endl;
			//end if
		}
		else 
			cout << "Invalid part number" << endl;
		//end if
		cout << endl << "Enter part number: ";
		cin >> code;
		location = -1;
	}
}