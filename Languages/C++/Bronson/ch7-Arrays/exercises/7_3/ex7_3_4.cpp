/*
4. (Modify) a. Modify the findMax() function in Program 7.4 to locate 
the minimum value of the passed array.

b. Include the function written in Exercise 4a in a complete program and 
run the program.
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



int findMin(int [], int );  //fxn prototype


int main()
{
   const int MAXELS = 5;    
   int nums[MAXELS] = {2, 8, 1, 27, 16};
   cout << "The minimum value is " << findMin(nums, MAXELS) << endl;

   return 0;
   
}

//find the max value
int findMin(int vals[], int size)
{
    int i, min = vals[0];
    for (i = 0; i < size; ++i)
    {
        if (min > vals[i])
            min = vals[i];        
    }
    return min;
}