#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // float variables for the cost of item, years from now, and the rate of inflation
  float costOfItem = 0.0;
  float yearsFromNow = 0.0;
  float rateOfInflation = 0.0;

  //getting user input
  cout << "Enter the estimated cost of the the item: " << endl;
  cin >> costOfItem;
  cout << "Enter the number of years from now that the item will be purchased: " << endl;
  cin >> yearsFromNow;
  cout << "Enter the rate of inflation: " << endl;
  cin >> rateOfInflation;

  // converting rate of inflation from a percentage to a decimal
  rateOfInflation = rateOfInflation / 100;
  // iterating through the number of years from now, skipping the first year because price of item stays the same in the current year
  // to increase the cost of the item based on the rate of inflation
  for(int i = 2; i <= yearsFromNow; ++i)
  {
    costOfItem = costOfItem + (costOfItem * rateOfInflation);
  }
  // used to display cost of item in a currency format : $##.##
  cout << setprecision(2) << fixed;
  cout << "The estimated price of this item after " << yearsFromNow << " years is: $" << costOfItem <<  endl;


}
