  /***********************************************
  * TEST 1: MONTHLY BUDGET
  * Author: Benjamin Doggett
  *
  * This is the test for section 1.1
  * I will need to compile together the things I 
  * have learned from the examples and practices
  * I have completed. This assignment will display
  * a budget that has been created with hard coded
  * numbers for this example/ test but will allow
  * for the user to input some categories.
  ************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  //created variable to store different categories
  string category1;
  string category2;
  string category3;
  string category4;
  string category5;
 

   //This will configure the output of the money
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

  //This is the start of my budgeting application where it will
  //prompt the user to enter in some information. This is the list
  //instructions for the user to follow.
  cout << "Please enter a budget category for your personal use:" << endl;
  cout << "EX: income, groceries, gas, ect." << endl;

  //These will be where the user can input their desired category
  cout << "category1" << endl;
  cin >> category1;

  cout << "category2" << endl;
  cin >> category2;
  
  cout << "category3" << endl;
  cin >> category3;

  cout << "category4" << endl;
  cin >> category4;

  cout << "category5" << endl;
  cin >> category5;
  
  //This will now display the table of our monthly budget with the
  //cost associated with it.
  cout << "\t" << "Category" << setw(21) << "Projected" << endl;
  cout << "\t=============" << "\t==========" << endl; 

  cout << "\t" << category1 << setw(8) << "$" << setw(9) << 1000.00 << endl;
  cout << "\t" << category2 << setw(8) << "$" << setw(9) << 100.00 << endl;
  cout << "\t" << category3 << setw(8) << "$" << setw(9) << 100.00 << endl;
  cout << "\t" << category4 << setw(8) << "$" << setw(9) << 650.00 << endl;
  cout << "\t" << category5 << setw(8) << "$" << setw(9) << 90.00  << endl;

  cout << "\t=============" << "\t==========" << endl;
  cout << "\tDelta"   << setw(12) << "$" << setw(9) << 60.00  << endl;
  
   return 0;
}
