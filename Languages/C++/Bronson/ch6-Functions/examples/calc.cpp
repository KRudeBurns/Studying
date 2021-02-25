/*
calc.cpp shows how to get multiple values from a function.
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

void calc(double xNum, double yNum, double& product, double& sum)
{
    product = xNum * yNum;
    sum = xNum + yNum;
}

int main()
{
    double firstNum = 0, secNum = 0, sum = 0, product = 0;
    cout << "Enter two numbers: ";
    cin >> firstNum >> secNum;
    calc(firstNum, secNum, product, sum);
    
    cout << "\nThe sum of the numbers is " << sum << endl;
    cout << "The product of the numbers is " << product << endl;
}