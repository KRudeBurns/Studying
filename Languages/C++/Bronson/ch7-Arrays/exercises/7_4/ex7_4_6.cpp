/*
6. (Program) Write, compile, and run a C++ program that selects the values in a 4-by-5 
array of positive integers in increasing order and stores the selected values in a 
one-dimensional array named sort. 

Use the data given in Exercise 5a to initialize the two-dimensional array.
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
    int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};

    int sorted[20];
    int x = 0, i = 0, j = 0;

    //transform a 2-d array into a 1-d array. See note below. This was tricky :)
    for (i = 0; i < 4; i++)
    {
        for (j; j < 5; ++j)
        {

            sorted[x] = arr[i][j];
            ++x;
        }
        //Exited outer loop and reset j to be zero
        j = 0;
    }

    for (x = 0; x < 20; ++x)
    {
        cout << sorted[x] << " ";
    }

    //sort using the std::sort algorithm
    //see notes about the sort syntax

    std::sort(sorted, sorted+x);
    cout << endl;
    

    for (x = 0; x < 20; ++x)
    {
        cout << sorted[x] << " ";
    }    
}

/*
When dealing with transforming a multidimensional array to a 1-D array,
you are travesing each column in each row, and puting the values in 
each column into your newly 1-row (1 dimensional) array. 

As you exit each column, you will have to reset the value of your columns to zero.
This is because, as the rows increment, the columns must reset, since the columns
are fixed width on every row.

You have to increment the columns of your single array in your column for loop.
This is because as you proceed into the column of each each row of your 2-d array,
the column of the single array is basically a product of the column of each row.
x = i*j; i.e. sorted[x = i * j];
*/

/* The sort syntax
The sort syntax is as follows
     std::sort(startingIndex, FinishingIndex)
     You can pick your starting location. Its your call.

    Examples 
    - std::sort(sorted, sorted+x); 
    where x is the max size of array. In this case the sort starts at the
    initial index and scans to the final index 
    
    - sort(sorted + 4, sorted + 9);
    In this case the sort starts at the 4th index and scans to the 9th index 
*/