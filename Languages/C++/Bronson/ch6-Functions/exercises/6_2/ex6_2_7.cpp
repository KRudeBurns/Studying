/*
 (Program) a. Write a function named totamt() that uses four parameters named quarters,
dimes, nickels, and pennies, which represent the number of each of these coins in a piggybank. The function should determine the dollar value of the number of quarters, dimes,
nickels, and pennies passed to it and return the calculated value.
b. Include the function written in Exercise 7a in a working program. Make sure your function
is called from main() and returns a value to main() correctly. Have main() use a cout
statement to display the returned value. Test the function by passing various data to it and
verifying the returned value.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

double totAmt(int, int, int, int);

int main()
{
   int qtrs = 0, dimes = 0, nickels = 0, pennies = 0;
   cout << "Enter your quarters, dimes, nickels, and pennies "
        << "to find the dollar amount: ";
   while (cin >> qtrs >> dimes >> nickels >> pennies)
   {
       cout << "The dollar amount is $" << totAmt(qtrs, dimes, nickels, pennies)
            << endl;
       
       cout << "Enter your quarters, dimes, nickels, and pennies "
            << "to find the dollar amount [ ~ to quit]: ";
   }
}

double totAmt(int q, int d, int n, int p)
{
    double dollarValue = (q * .25) + (d * .1) + (n * .05) + (p * .01);
    return dollarValue;
}