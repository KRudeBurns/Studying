/*
 a. Modify the function written for Exercise 7 to accept the starting value of the
table, the number of values to be displayed, and the increment between values.

If the increment isn’t set explicitly, the function should use a default value of 1. Name your function selTab(). 

A call to selTab(6,5,2); should produce a table of five lines, the first line starting with the number 6 and each succeeding number increasing by 2.

b. Include the function written in Exercise 8a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

void selTab(int, int, int);

//overloaded to when increment is not set
void selTab(int startVal, int maxVal);

//overloaded to when no value 
void selTab();


int main()
{
   selTab(6, 5, 2);
   selTab(6, 5);
   selTab();
}

void selTab(int startVal, int maxVal, int increment)
{    
    int count = 0;
    cout << "Number   Square   Cube\n"
         << "------   ------   ----\n";

    for (count = 1; count <= maxVal; startVal += increment, count++)  
    {
        cout << setw(3) << startVal << "      "
             << setw(3) << startVal*startVal << "      "
             << setw(4) << startVal*startVal*startVal << endl;
    }
}

//overloaded to when increment is not set
void selTab(int startVal, int maxVal)
{
   int increment = 1;
   selTab(startVal, maxVal, increment);   
}

void selTab()
{
   
   int startVal = 1, maxVal = 10, increment = 1;

   selTab(startVal, maxVal, increment);   
}