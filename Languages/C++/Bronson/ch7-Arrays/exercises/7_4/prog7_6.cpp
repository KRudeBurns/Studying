/*
This program displays all elements of a 3-by-4
two-dimensional array.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::mt19937_64;
using std::mt19937;
namespace sc = std::chrono; 

int main()
{
   const int NUMROWS = 3;
   const int NUMCOLS = 4;

   
   int val[NUMROWS][NUMCOLS] = {8,16,9,52,3,15,27,6,14,25,2,10};

   //anyone who does this should be beaten up 
   cout << "\nDisplay val array by explicit element"
        << endl << setw(4) << val[0][0] << setw(4) << val[0][1]
        << setw(4) << val[0][2] << setw(4) << val[0][3]
        << endl << setw(4) << val[1][0] << setw(4) << val[1][1]
        << setw(4) << val[1][2] << setw(4) << val[1][3]
        << endl << setw(4) << val[2][0] << setw(4) << val[2][1]
        << setw(4) << val[2][2] << setw(4) << val[2][3];


    cout << "\n\nDisplay val array using a nested loop: ";

    for (int i = 0; i < NUMROWS; i++)
    {
        cout << endl;    // print a new line for each row
        for ( int j=0; j < NUMCOLS; ++j)
        {
            cout << setw(4) << val[i][j];
        }
    }

    cout << endl;
}