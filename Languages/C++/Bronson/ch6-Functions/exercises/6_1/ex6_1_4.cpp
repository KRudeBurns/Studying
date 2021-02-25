/*
4. (Practice) a. Write a function called mult() that accepts two double-precision numbers as parameters, multiplies these two numbers, and displays the result.

b. Include the function written in Exercise 4a in a working program. Make sure your function is called from main().

Test the function by passing various data to it.
*/

double mult(double, double);

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double num1 = 0.0, num2 = 0.0;
   cout << "Enter two numbers and hit enter to get their product: ";
   
   while (cin >> num1 >> num2)
   {       
       cout << endl << num1 << " * " << num2 << " = "  << mult(num1, num2) << endl;
       cout << "Enter two numbers and hit enter to get their product [~ to stop]: ";
   }
}

double mult(double x, double y)
{
    return x*y;
}