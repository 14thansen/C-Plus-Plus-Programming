#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	//declare arrays
	int nums[2] = {4, 5};
	int total = 0;
	int quantities[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sub = 0;
	
	//add first 2 elements in nums array
	total = nums[0] + nums[1];
	cout << total << endl << endl;
	
	//subtract 1 from each of the elements in quantitites array
	while (sub < 10)
	{
		quantities[sub] -= 1;
		cout << quantities[sub] << endl;
		sub += 1;
	}//end while
}//end main function