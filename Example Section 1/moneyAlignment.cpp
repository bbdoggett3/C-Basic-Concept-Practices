#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 
  cout << "Hello, my name name is Benjamin Doggett." << endl;

  cout << endl;

  cout << "I have decided to practice and revist small projects from my undergraduate studies in order to sharpen my skills as a developer and work on new projects that can showcase my abilities." << endl;

  cout << endl;

  cout << "I hope to be able to try new things and better understand basic programming concepts. I will first be visiting the basics of C++ and then move to more advanced topics." << endl;

  cout << endl;

/*************************************************
* MONEY ALIGNMENT EXERCISE
*
* This is an exercise from the reading in cs124
* I decided to revist some basic principles in 
* C++ to sharpen my skills, but also try them in 
* other programing languages. This exercise is found
* on pg. 30
* I have added some unique styling elements and also
* created a column name "checking" & "savings"
****************************************************/

   //configure the output to display money.
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   //This will be the column names
   cout << "Checking " << setw(10) << "Savings" 
   << endl;
   cout << "---------  " << setw(10) << "---------"
   << endl;

  //This is my first row 
   cout << "$" << setw(7) << 124.45;
   cout << "\t";
   cout << "$" << setw(7) << 321.33 
   << endl;

   //This is my second row
   cout << "$" << setw(7) << 1.74;
   cout << "\t";
   cout << "$" << setw(7) << 4.21 
   << endl;

   //This is my third row
   cout << "$" << setw(7) << 7439.12;
   cout << "\t";
   cout << "$" << setw(7) << 54.92 
   << endl;

  return 0;
}
