/*
3. (Practice) a. Write a function named findAbs() that accepts a double-precision number passed to it, computes its absolute value, and displays the absolute value. A number’s absolute value is the number itself if the number is positive and the negative of the number if the number is negative.

b. Include the function written in Exercise 3a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double findAbs(double);

int main()
{
   double num = 0.0;
   cout << "Enter a number to get its absolute value: ";
   
   while (cin >> num)
   {       
       cout << "\nThe absolute value is " << findAbs(num) << endl;
       cout << "Enter a number to get its absolute value [~ to stop]: ";
   }
}

double findAbs(double x)
{
    if (x < 0)
       x = -x;
    return x;    
}