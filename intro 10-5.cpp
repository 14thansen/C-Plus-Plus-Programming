#include <iostream>
using namespace std;

void calcQuotient(double num1, double num2, double &quotient);

int main(int argc, char *argv[]) {
	double n1 = 0.0;
	double n2 = 0.0;
	double q = 0.0;
	cout << "First number: ";
	cin >> n1;
	cout << "second number: ";
	cin >> n2;
	calcQuotient(n1, n2, q);
	cout << "Answer: " << q;
}

void calcQuotient(double num1, double num2, double &quotient){
	quotient = num1 / num2;
}