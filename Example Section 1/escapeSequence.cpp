  /***********************************************
  * ESCAPE SEQUENCE
  * Author: Benjamin Doggett
  *
  * I will be creating a program that will display 
  * to the user all the escape cases that they can
  * use while programming in C++
  ************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

   //Here is where I create my escape sequence cases.
   cout << "The escape sequences are: "      << endl;
   cout << "\t Newline" << setw(5) << "\\n"  << endl;
   cout << "\t Tab"     << setw(9) << "\\t"  << endl;
   cout << "\t Slash"   << setw(7) << "\\\\" << endl;
   cout << "\t SQuote"  << setw(6) << "\\\'" << endl;
   cout << "\t DQuote"  << setw(6) << "\\\"" << endl;
   
   cout << endl;

   //Exercise #3 on pg 32 Procedural Programing
   cout << "\t\tB\tE\tN\n";
   cout << "\tR\tU\tL\tE\tS\n";

   //Exercise #4 on pg.32 Procedural Programming
   cout << setw(15) << "/\\/\\/\\" << endl;
   cout << setw(15) << "\\/\\/\\/" << endl;

   //Exercise #7 on pg. 33 Procedural Programming
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "Bill:" << endl;
   cout << "\t$" << setw(6) << 10.00 << " - Price" << endl;
   cout << "\t$" << setw(6) << 1.50 << " - Tip" << endl;
   cout << "\t$" << setw(6) << 11.50 << " - Total" << endl;

   return 0;
}
