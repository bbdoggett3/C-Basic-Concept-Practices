  /***********************************************
  * TEST 1: MONTHLY BUDGET
  * Author: Benjamin Doggett
  *
  * This is the test for section 1.1
  * I will need to compile together the things I 
  * have learned from the examples and practices
  * I have completed. This assignment will display
  * a budget that has been created with hard coded
  * numbers for this example/ test.
  ************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   //This will configure the output of the money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

  //This is the start of my table for budgeting with basic
  //categorys of what expenses I might have in a given month.
  //Again each of these categories, and money are hard codeded.
  cout << "\tItem" << setw(21) << "Projected" << endl;
  cout << "\t=============" << "\t==========" << endl; 
  cout << "\tIncome" << setw(11) << "$" << setw(9) << 1000.00 << endl;
  cout << "\tTaxes"   << setw(12) << "$" << setw(9) << 100.00 << endl;
  cout << "\tTithing" << setw(10) << "$" << setw(9) << 100.00 << endl;
  cout << "\tLiving"  << setw(11) << "$" << setw(9) << 650.00 << endl;
  cout << "\tOther"   << setw(12) << "$" << setw(9) << 90.00  << endl;

  cout << "\t=============" << "\t==========" << endl;
  cout << "\tDelta"   << setw(12) << "$" << setw(9) << 60.00  << endl;
  
   return 0;
}
