/*
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


const int MAXELS = 5;
int findMax(int [MAXELS]);  //fxn prototype


int main()
{
   
   int nums[MAXELS] = {2, 8, 1, 27, 16};
   cout << "The maximum value is " << findMax(nums) << endl;

   return 0;
   
}

//find the max value
int findMax(int vals[MAXELS])
{
    int i, max = vals[0];
    for (i = 1; i < MAXELS; ++i)
    {
        if (max < vals[i])
            max = vals[i];

        return max;
    }
}