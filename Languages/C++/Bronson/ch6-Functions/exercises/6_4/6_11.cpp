/*
example using global variables
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


int firstNum;   //global variable


void valFun();
int main()
{
    int secNum = 0;     //local variable
    firstNum = 10;      //stores a value into the global variable
    secNum = 20;        // stores value into local variable

    cout << "\nFrom main(): firstNum = " << firstNum;
    cout << "\nFrom main(): secNum = " << secNum << "\n";
    
    valFun();           //calls the function

    cout << "\nAgain from main(): firstNum = " << firstNum;
    cout << "\nAgain from main(): secNum = " << secNum << "\n";      
}

void valFun()
{
    int secNum = 30;
    
    cout << "\nFrom valFun(): firstNum = " << firstNum;
    cout << "\nFrom valFun(): secNum = " << secNum << "\n";
    cout << "From valFun(): sayOne = " << sayOne << "\n";

    firstNum = 40;    //changes firstNum's value
    
}