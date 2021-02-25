/*
 (Practice) a. Write a function that produces a table of the numbers from 1 to 10, their squares, and their cubes. 
 
 The function should produce the same display as Program 5.10. 
 
 b. Include the function written in Exercise 7a in a working program. Make sure your function is called from main(). Test the function by passing various data to it.
*/

#include <iostream>
#include <string>
#include <iomanip>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

void table();

int main()
{
   table();
}

void table()
{
    const int MAXNUMS = 10;
    int num = 0;

    cout << "Number   Square   Cube\n"
         << "------   ------   ----\n";

    for (num = 1; num <= MAXNUMS; num++)  
    {
        cout << setw(3) << num << "      "
             << setw(3) << num*num << "      "
             << setw(4) << num*num*num << endl;
    }
}