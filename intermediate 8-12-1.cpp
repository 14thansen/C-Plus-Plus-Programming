#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	int numb = 0;
	
	for (int line = 1; line < 5; line += 1)
	{
		for (int num = -1; num < 10; num += 1)
		{
			num = num;
			if (num >= 0)
			{
				cout << num * line;
				if 	((num * line) < 10)
					cout << "     ";
				else
					cout << "    ";
			}
			else
				cout << num * -1 * line << "     ";
		}
		cout << endl;
	}
}