/*
10. (Program) a. The volume, V, of a sphere is given by this formula, where r is the sphere’s radius: 
Volume = (4πr^3)/3

Using this formula, write, compile, and run a C++ function named spherevol() that accepts a sphere’s radius and then calculates and displays its volume.

b. Include the function written in Exercise 10a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#define _USE_MATH_DEFINES  // to get pi > M_PI
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

double sphereVol(double radius)
{
    double volume = (4 * M_PI * pow(radius, 3)) / 3;
    return volume;
}

int main()
{
   double radius = 23.32;
   cout << "\nVolume of sphere with radius " << radius << " = " 
        << sphereVol(radius) << endl; 
}