#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	string zip = "";
	int letter = 0;
	
	cout << "Enter ZIP code (0 to exit): ";
	cin >> zip;
	
	while (zip != "0")
	{
		for (int sub = 0; sub < zip.length(); sub+= 1)
		{
			if (zip.substr(sub,1) < "0" || zip.substr(sub,1) > "9")
				letter += 1;
		}
		if (letter == 0)
		{
			if (zip.length() == 5)
			{
				if (zip.find("605", 0) == 0)
					cout << "Shipping Cost: $25" << endl;
				else
				{
					if (zip.find("606", 0) == 0)
						cout << "Shipping Cost: $30" << endl;
					else 
						cout << "Cannot ship to this postal code." << endl;
					//end if
				}//end if
			}
			else 
				cout << "invalid postal code" << endl;
			//end if
		}
		else 
		cout << "invalid postal code" << endl;
		//end if
		
		cout << endl << "Enter ZIP code (0 to exit): ";
		cin >> zip;
		letter = 0;
	}//end while
}