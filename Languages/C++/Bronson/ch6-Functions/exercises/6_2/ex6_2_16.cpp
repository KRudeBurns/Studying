/*
16. (Program) a. The following is a useful programming algorithm for rounding a real number to n decimal places:
Step 1: Multiply the number by 10n.
Step 2: Add 0.5.
Step 3: Delete the fractional part of the result.
Step 4: Divide by 10n.
For example, using this algorithm to round the number 78.374625 to three decimal places yields:

Step 1: 78.374625 × 103 = 78374.625
Step 2: 78374.625 + 0.5 = 78375.125
Step 3: Retaining the integer part = 78375
Step 4: 78375 divided by 103 = 78.375

Using this algorithm, write a C++ function that accepts a user-entered value and returns the result rounded to two decimal places.

b. Include the function written in Exercise 16a in a working program. Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. Test the function by passing various data to it and verifying the returned value.
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

double roundToTwo(double);

int main()
{
   cout << std::fixed << std::setprecision(2) << roundToTwo(78.374625) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(54.633345) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(28.323886) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(18.374625) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(235.110840) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(846.639779) << endl;
   cout << std::fixed << std::setprecision(2) << roundToTwo(1108.410701) << endl;
}

double roundToTwo(double x)
{
   double result = 0;
   /* //step 1
   result = x * pow (10, 3);
   //step 2
   result = result + 0.5;
   //step 3
   result = (int) result / pow(10, 3);
    */

   //all steps combined in 1
   result = ((int)(x*pow(10,3) + 0.5)) / pow(10,3);

   return result; 
}