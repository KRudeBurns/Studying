/*
Write a program that reads in a temperature in degrees Celsius and displays the
corresponding temperature in degrees Fahrenheit. The conversion formula is
F = C + 32
*/

#include <iostream>
#include <string>
using std::string;
//using std::string_literals;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int celsius = 0, fahrenheit = 0;

    //user input
    cout << "Enter your Celsius to convert to Fahrenheit: ";
    while (cin >> celsius)
    {
        cout << celsius << " Celsius = " << celsius + 32 << " Fahrenheits\n\n";
        
        cout << "Enter your Celsius to convert to Fahrenheit [ctrl + D to quit]: ";
    }

}