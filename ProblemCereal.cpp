#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  //A metric ton is 35,273.92 ounces
  float ounces = 0.0; // variable to hold weight of cereal package in ounces
  const float METRIC_TON = 35273.92; // standard constant variable that holds metric ton to ounces conversion
  cout << "Enter the weight of one package of breakfast cereal in ounces: " << endl;
  cin >> ounces; // taking in user input and storing into ounces variable
  float tons = ounces / METRIC_TON; // calculating the weight of the package in metric tons
  cout << "Weight in metric tons: " << tons << endl;
  float boxesNeeded = METRIC_TON / ounces; // calculating the total boxes needed to yield one metric ton of cereal
  // printing number of boxes needed, and rounding up so that number of boxes is not a decimal.
  cout << "Boxes needed to yield one metric ton of cereal: " << ceil(boxesNeeded) << " boxes." << endl;
}
