/*
Example showing passing a value by reference to a function
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

void newVal(double&, double&);

int main()
{
    double firstNum = 0, secNum = 0;
    cout << "Enter two numbers: ";
    cin >> firstNum >> secNum;
    cout << "The value in firstNum is: " << firstNum << endl;
    cout << "The value in secNum is: " << secNum << endl;

    newVal(firstNum, secNum); 
    cout << "The value in firstNum is now: " << firstNum << endl;
    cout << "The value in secNum is now: " << secNum << endl;
}

void newVal(double& xNum, double& yNum)
{
    cout << "The value in xNum is: " << xNum << endl;
    cout << "The value in yNum is: " << yNum << endl;
    xNum = 89.5;
    yNum = 99.5;
}