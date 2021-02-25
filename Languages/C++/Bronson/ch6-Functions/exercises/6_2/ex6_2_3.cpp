/*
3. (Program) a. Write a function named rightTriangle() that accepts the lengths of two sides of a right triangle as the arguments a and b. 

The subroutine should determine and return the hypotenuse, c, of the triangle. (Hint: Use Pythagoras’ theorem, c^2 = a^2 + b^2.)

b. Include the function written for Exercise 3a in a working program. The main() function should call rightTriangle() correctly and display the value the function returns. Test the function by passing various data to it and verifying the returned value.
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

double rightTriangle(double, double);

int main()
{
   double base = 0.0, height = 0.0;
   cout << "Enter the base and height of the triangle to find the hypotenuse: ";
   while (cin >> base >> height)
   {
       cout << "The hypotenuse of your triangle is " << rightTriangle(base, height)  
            << endl;
       
       cout << "Enter the base and height of the triangle to find the hypotenuse "
            << "[ ~ to quit]: ";
   }
}

double rightTriangle(double base, double height)
{
    double hypotenuse = 0.0;
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
    return hypotenuse;
}