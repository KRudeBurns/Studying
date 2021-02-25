/*
This is an alternative to prog7_4

Notice the global variables are out of play

The array in the fxn protoype is generic with only the type
being declared.

I put an extra variable for the size of the array
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



int findMax(int [], int );  //fxn prototype


int main()
{
   const int MAXELS = 5;    
   int nums[MAXELS] = {2, 8, 1, 27, 16};
   cout << "The maximum value is " << findMax(nums, MAXELS) << endl;

   return 0;
   
}

//find the max value
int findMax(int vals[], int size)
{
    int i, max = vals[0];
    for (i = 1; i < size; ++i)
    {
        if (max < vals[i])
            max = vals[i];

        return max;
    }
}