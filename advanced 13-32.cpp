#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	string word = "";
	string temp = "";
	string end = "";
	const string VOWEL[12] = {"A", "a", "E", "e", "I", "i", "O", "o", "U", "u", "Y", "y"};
	int vowelLocation = 0;
	int kill = 0;
	
	cout << "Enter a word (0 to exit): ";
	cin >> word;
	
	while (word != "0")
	{
		for (int sub = 0; sub < word.length(); sub += 1)
		{
			for (int vowels = 0; vowels < 12; vowels += 1)
			{
				if (word.substr(sub, 1) == VOWEL[vowels] && kill == 0)
				{
					vowelLocation = sub;
					kill += 1;
				}//end if
			}//end for
		}//end for
		if (vowelLocation == 0)
			end = "-way";
		else
			end = "-ay";
		//end if
		temp = word.substr(0, vowelLocation);
		word.erase(0, vowelLocation);
		end.insert(1, temp);
		
		cout << word + end << endl << endl;
		
		cout << "Enter a word (0 to exit): ";
		cin >> word;
		kill = 0;
		vowelLocation = 0;
	}
}