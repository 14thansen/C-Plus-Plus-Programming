#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//function prototypes
double getTestScore();
double calcAverage(double average, int tests);

int main(int argc, char *argv[]) {
	//declare variables
	double test1 = 0.0;
	double test2 = 0.0;
	double test3 = 0.0;
	double total = 0.0;
	double average = 0.0;
	srand(static_cast<int>(time(0)));
	
	test1 = getTestScore();
	test2 = getTestScore();
	test3 = getTestScore();
	total = test1 + test2 + test3;
	average = calcAverage(total, 3);
	
	cout << endl;
	cout << fixed << setprecision(1);
	cout << "Your average score is " << average << "%";
}//end main function

//*****function definitions*****
double getTestScore()
{
	double score = 0.0;
	cout << "Test score: ";
	cin >> score;
	return score;
}//end getTestScore function

double calcAverage(double average, int tests)
{
	average /= tests;
	return average;
}//end calcAverage function