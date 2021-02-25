/*
Write a program that converts a distance in meters to the corresponding English
distance in feet and inches. The conversion factors you need are
1 inch = 0.0254 meters
1 foot = 12 inches
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //values
    double inches = 0, feet = 0, meters = 0;

    cout << "Enter meters for conversion [enter ~ to end]: ";
    
    while (cin >> meters)
    {
        //convert meters
        inches = meters * 0.0254;
        feet = meters * 0.08333;

        cout << meters << "m is equal to " << inches << "in "
             << "or " << feet << "ft\n\n";
             

        cout << "Enter meters for conversion [enter ~ to end]: ";
    }
}