#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

//   An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
// are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
// for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
// $10 per week is withheld for medical insurance. Write a program that will read in the number of hours
// worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
// the net take-home pay for the week.

const float RATE_PER_HOUR = 16.0; // constant variable for rate per hour
const float OVERTIME_PER_HOUR = RATE_PER_HOUR * 2.0; // constant variable for overtime rate per hour

float numHours = 0.0;
float totalGrossPay = 0.0;
//getting user input for hours worked in a week
cout << "Enter the number of hours worked in a week: " << endl;
cin >> numHours;

if(numHours <= 40) // if worker worked 40 hours or less
{
  //calculating total gross pay for the week
  totalGrossPay = numHours * RATE_PER_HOUR; // does not get paid overtime
}
else // if worker worked more than 40 hours, needs to get paid overtime for exceeding hours
{
  //calculating total gross pay for the week, including overtime for any hours exceeding 40 hours
  int overtimeHours = numHours - 40;
  totalGrossPay = (numHours * RATE_PER_HOUR) + (overtimeHours * OVERTIME_PER_HOUR);
}

// Calculating different withholding amounts
float socialSecTax = totalGrossPay * 0.06; // 6% for social security tax
float fedIncomeTax = totalGrossPay * 0.14; // 14% for federal income tax
float stateIncomeTax = totalGrossPay * 0.05; // 5% for state income tax
int medInsurance = 10; // $10 every week for medical insurance
float totalWithholding = socialSecTax + fedIncomeTax + stateIncomeTax + medInsurance;

// Deducting each withholding amount from total gross pay to calculate net take-home pay for the week
float netPay = totalGrossPay - totalWithholding;

cout << setprecision(2) << fixed; // using to display all amounts in a $##.## format as currency.
// Displaying total gross pay, each withholding amount, total withholding amount, and net take home pay for the week 
cout << "Gross pay: $" << totalGrossPay << endl;
cout << "Withholding for Social Security Tax: $" << socialSecTax << endl;
cout << "Withholding for Federal Income Tax: $" << fedIncomeTax << endl;
cout << "Withholding for State Income Tax: $" << stateIncomeTax << endl;
cout << "Withholding for Medical Insurance: $" << medInsurance << endl;
cout << "Total Withholding Amount: $" << totalWithholding << endl;
cout << "Net Take-Home Pay: $" << netPay << endl;
}
