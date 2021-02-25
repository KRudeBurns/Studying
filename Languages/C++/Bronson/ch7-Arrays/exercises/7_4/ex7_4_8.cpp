/*
(Program) a. Create a two-dimensional list of integer part numbers and quantities of
each part in stock, and write a function that displays data in the array in decreasing 
quantity order.

No more than 100 different parts are being tracked. Test your program with the 
following data:

Part No. Quantity
1001     62
949      85
1050     33
867      125
346      59
1025     105
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::mt19937;
using std::mt19937_64;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    int a[2][6] = {
        {62, 85, 33, 125, 59, 105},       // Quantity
        {1001, 949, 1050, 867, 346, 1025} // Part No.
    };

    //sort
    int i, j, k, temp, temp2;
    for (int j = 1; j < 6; ++j)
    {
        for (i = 0; i < 5; ++i)
        {
            if (a[0][i] < a[0][i + 1])
            {
                temp = a[0][i];
                a[0][i] = a[0][i + 1];
                a[0][i + 1] = temp;

                temp2 = a[1][i];
                a[1][i] = a[1][i + 1];
                a[1][i + 1] = temp2;
            }
        }
    }

    //print array after sorting
    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j<6; ++j)
        {
            cout << a[i][j] << " ";
        }
    }
}