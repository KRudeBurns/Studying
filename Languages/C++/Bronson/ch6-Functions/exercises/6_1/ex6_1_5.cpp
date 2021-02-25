 /*
 (Practice) a. Write a function named sqrIt() that computes the square of the value passed to it and displays the result.  The function should be capable of squaring numbers with decimal points.

 b. Include the function written in Exercise 5a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double sqrIt(double );

int main()
{
   double num = 0.0;
   cout << "Enter a number to get its square: ";
   
   while (cin >> num)
   {       
       cout << endl << num << "^2 = " << sqrIt(num) << endl;
       cout << "Enter a number to get its square [~ to stop]: ";
   }
}

double sqrIt(double x)
{
    return x*x;
}