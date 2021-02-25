/*

(Program) a. The volume, V, of a cylinder is given by the formula 
        V = π(r^2)L
 where r is the cylinder’s radius and L is its length. Using this formula, 
 write a C++ function named cylvol() that accepts a cylinder’s radius and length
 and returns its volume.

b. Include the function written in Exercise 5a in a working program. 
Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. 

Test the function by passing various data to it and verifying the returned value.

*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

double cylVol(double, double);

int main()
{
   double radius = 0.0, length = 0.0;
   cout << "Enter the radius and length of the cylinder to find the volume: ";
   while (cin >> radius >> length)
   {
       cout << "The volume of your cylinder is " << cylVol(radius, length)  
            << endl;
       
       cout << "Enter the radius and length of the cylinder to find the volume "
            << "[ ~ to quit]: ";
   }
}

double cylVol(double r, double l)
{
    double v = M_PI*pow(r, 2) * l;
    return v;
}