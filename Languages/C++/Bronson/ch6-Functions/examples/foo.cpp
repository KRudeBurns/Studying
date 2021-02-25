/*
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

void foo(int y)
{
    cout << "y = " << y << "\n";
}

int main()
{
    foo(5);   //first call
    
    int x = 6;
    foo(x);   //second call
    foo(x+1);  //third call
    cout << "x = " << x << endl;
}