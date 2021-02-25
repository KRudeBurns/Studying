/*
Example showing scope and duration of 
a static variable
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

void staticIncrement();

void regIncrement();

int main()
{
    cout << "Static Increment    \n";
    cout << "--------------------\n";
    for (int x = 1; x < 4; ++x)
    {        
        cout << "call " << x << "\n";        
        staticIncrement();
        cout << "end call " << x << "\n";
        cout << "--------------------\n";
    }    
    cout << "End of Static Increment  \n\n";


    cout << "Automatic/Regular Increment    \n";
    cout << "--------------------\n";
    for (int x = 1; x < 4; ++x)
    {        
        cout << "call " << x << "\n";        
        regIncrement();
        cout << "end call " << x << "\n";
        cout << "--------------------\n";
    }
}

void staticIncrement()
{
    static int x = 4;
    cout << "The static variable's value is " << x << '\n';
    x++;
}

void regIncrement()
{
    int x = 4;
    cout << "The automatic/regular variable's value is " << x << '\n';
    x++;
}
