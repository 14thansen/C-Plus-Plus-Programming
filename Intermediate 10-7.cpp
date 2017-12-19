#include <iostream>
using namespace std;

void calcAverage(double num1, double num2, double num3, double num4, double &avg);

int main(int argc, char *argv[]) {
	double numAvg = 0.0;
	calcAverage(45.67, 8.35, 125.78, 99.56, numAvg);
	
	cout << "average: " << numAvg;
}

void calcAverage(double num1, double num2, double num3, double num4, double &avg){
	avg = (num1 + num2 + num3 + num4) / 4;
}