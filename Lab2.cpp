//--------------------------------------------------------------------
// CS215-402 LAB 1 000 
//--------------------------------------------------------------------
// Author: Gavin Crain
// Date: 1/30/2020
// Description: Incomes based in hours, pay rate, and taxes.
//---------------
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "+---------------------------------+\n";
	cout << "|        PAYROLL CALCULATOR       |\n";
	cout << "|  By: Gavin Crain  Section: 401  |\n";
	cout << "+---------------------------------+";

	string firstName, lastName;
	double hours, payrate;
	cout << "\nEnter first name:   ";
	cin >> firstName;
	cout << "Enter last name:    ";
	cin >> lastName;
	cout << "Enter hours worked: ";
	cin >> hours;
	cout << "Enter pay rate:     ";
	cin >> payrate;
	cout << "\n";

	const double stateRate = 0.06;
	const double ssRate = 0.03;
	const double fedRate = 0.07;

	double grossPay, stateTax, fedTax, ssTax, netPay;

	grossPay = (hours * payrate);
	stateTax = (grossPay * stateRate);
	fedTax = (grossPay * fedRate);
	ssTax = (grossPay * ssRate);
	netPay = grossPay - (stateTax + fedTax + ssTax);

	cout << "Name: " << lastName << ","  << firstName;

	cout << fixed << setprecision(2);
	cout << "\nGross Pay $ " << setw(8) << grossPay;
	cout << "\nState Tax $ " << setw(8) << stateTax;
	cout << "\nFed Tax   $ " << setw(8) << fedTax;
	cout << "\nSS Tax    $ " << setw(8) << ssTax;
	cout << "\nNet Pay   $ " << setw(8) << netPay;
	cout << endl;

	system("pause");
	return 0;
}