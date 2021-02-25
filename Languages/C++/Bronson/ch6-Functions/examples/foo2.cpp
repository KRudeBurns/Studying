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

void foo(int& y)
{
    std::cout << "y = " << y << "\n";
    y = y + 12;
    std::cout << "y is now " << y << "\n";
}

int main()
{
        
    int x = 6;
    cout << "x = " << x << endl;
    foo(x);
    cout << "x = " << x << endl;
    
}