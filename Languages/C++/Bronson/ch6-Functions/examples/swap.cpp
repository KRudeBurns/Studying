/*
swapping two numbers by passing argument by reference
no third variable used
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

double swap(double&, double&);

int main()
{
   double x = 0, y = 0;
   cout << "Enter two numbers: ";
   cin >> x >> y;
   cout << "You entered x = " << x << " and y = " << y << endl;
   swap(x, y);
   cout << "\nAfter swap: x -> " << x << " and y -> " << y << endl ;
}

double swap (double& xNum, double& yNum)
{
    cout << "\nEntering swap function";
    cout << "\nbefore swap: xNum = " << xNum << " & yNum = " << yNum;

    //swap
    xNum = xNum + yNum;  //xNum holds a temp value 
    yNum = xNum - yNum;  //yNum now becomes xNum
    xNum = xNum - yNum;  // xNum now becomes yNum
    
    cout << "\nExiting swap function\n";
}