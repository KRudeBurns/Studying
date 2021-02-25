/*
6. (Practice) a. Write a function named powfun() that raises an integer number passed to it to a positive integer power and displays the result. 

The positive integer should be the second value passed to the function. 

Declare the variable used to store the result as a long-integer data
type to ensure enough storage for the result.

b. Include the function written in Exercise 6a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#include <iostream>
#include <string>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;

unsigned long long powfun(int , int);

int main()
{
   int num = 0, power = 0;
   cout << "Enter a number and its power to get its result: ";
   
   while (cin >> num >> power)
   {       
       cout << "\n" << num << " ^ " << power << " = " << powfun(num, power) << endl;
       cout << "Enter a number and its power to get its result [~ to stop]: ";
   }
}

unsigned long long powfun(int x, int power)
{
    long result;

    //only using power as positive
    result = pow(x, abs(power));
    return result;
}