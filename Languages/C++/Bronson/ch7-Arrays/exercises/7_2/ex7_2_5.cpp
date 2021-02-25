/*
 Define an array with a maximum of 20 integer values and fill the array with
 numbers of your own choosing as intializers. Then write, compile, and run a C++ 
 program that reads the numbers in the array and places all zero and positive 
 numbers in an array named positive and all negative numbers in an array named 
 negative. Finally, have your program display the values in both the positive 
 and negative arrays.
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
    int SIZE_ptr;
    cout << "Enter size of array: ";
    cin >> SIZE_ptr;
    const int SIZE = SIZE_ptr;
    double nums[SIZE];
    int pos_sz = 0, neg_sz = 0;

    //Random number generator
    auto seed = sc::high_resolution_clock::now().time_since_epoch().count();

    auto real_rand = std::bind(std::uniform_real_distribution<double>(-100, 100),
                               mt19937_64(seed));

    //Generate my digits
    for (int i = 0; i < SIZE; ++i)
    {
        nums[i] = real_rand() + 1;
        if (i == SIZE-1)
        {            
            cout << nums[i]<< ".\n";
        }
        else
        {
            cout << nums[i]<< ", ";
        }
    }

    //get the sizes I need for the positive and negative array
    for (int i = 0; i < SIZE; ++i)
    {
        if (nums[i] >= 0)
        {
            ++pos_sz;
        }
        else
        {
            ++neg_sz;
        }
        
    }
    //print the sizes of our new arrays.
    cout << "\nNumber of Positive units = " << pos_sz << endl;
    cout << "Number of Negatives units = " << neg_sz << endl;

    //declare the new arrays to take the positives and negatives units
    double positive[pos_sz], negative[neg_sz];
    double temp = 0; 

    for (int i = 0, j = 0, k = 0; i < SIZE; ++i)
    {
            if (nums[i] >= 0 && j < pos_sz)
            {                
                positive[j] = nums[i];
                ++j;             
            }
            if (nums[i] < 0 && k < neg_sz)
            {
                negative[k] = nums[i];
                ++k;
            }            
    }

    //Print units
    cout << "Positive units include: ";
    for (int i = 0; i < pos_sz; ++i)
    {
        cout << positive[i] << " ";
    }

    cout << "\n\nNegative units include: ";
    for (int i = 0; i < neg_sz; ++i)
    {
        cout << negative[i] << " ";
    } 
}