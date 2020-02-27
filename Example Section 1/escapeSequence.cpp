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
   cout << "\t\tB\tE\tN\n";
   cout << "\tR\tU\tL\tE\tS\n";

   return 0;
}
